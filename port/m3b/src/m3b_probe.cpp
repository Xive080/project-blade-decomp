// SPDX-License-Identifier: AGPL-3.0-or-later
// M3 ruta B, spike: arranca librw (GL3 + SDL2), crea camara, mundo vacio y dibuja unos fotogramas.
// Opcional: --chunk <fichero>[@desplazamiento] lee un chunk RW (TXD o clump) de un fichero DEL USUARIO
// y lo carga con librw para comprobar si el formato (PS2 nativo) se acepta. No se incluye ningun dato.
#include <rw.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <SDL.h>

using namespace rw;

static bool attachPlugins(void)
{
	rw::registerMeshPlugin();
	rw::registerNativeDataPlugin();
	rw::registerAtomicRightsPlugin();
	rw::registerMaterialRightsPlugin();
	rw::registerSkinPlugin();
	rw::registerUserDataPlugin();
	rw::registerHAnimPlugin();
	rw::registerMatFXPlugin();
	rw::registerUVAnimPlugin();
	rw::ps2::registerADCPlugin();
	return true;
}

static int probeChunk(const char *spec)
{
	char path[1024];
	unsigned long off = 0;
	std::snprintf(path, sizeof path, "%s", spec);
	if(char *at = std::strrchr(path, '@')){ *at = 0; off = std::strtoul(at + 1, nullptr, 0); }
	FILE *f = std::fopen(path, "rb");
	if(!f){ std::printf("chunk: no se puede abrir %s\n", path); return 1; }
	std::fseek(f, 0, SEEK_END); long n = std::ftell(f); std::fseek(f, (long)off, SEEK_SET);
	std::vector<uint8> buf((size_t)(n - (long)off));
	size_t got = std::fread(buf.data(), 1, buf.size(), f); std::fclose(f);
	StreamMemory s; s.open(buf.data(), (uint32)got);
	ChunkHeaderInfo h;
	if(!readChunkHeaderInfo(&s, &h)){ std::printf("chunk: cabecera ilegible\n"); return 1; }
	std::printf("chunk: tipo=0x%x longitud=%u version=0x%x build=0x%x\n", h.type, h.length, h.version, h.build);
	// la cabecera ya esta consumida: librw espera el cuerpo (STRUCT) a continuacion
	rw::version = h.version; // librw usa esta version para leer/escribir campos dependientes de ella
	if(h.type == ID_TEXDICTIONARY){
		TexDictionary *td = TexDictionary::streamRead(&s);
		if(!td){ std::printf("TXD: streamRead devolvio NULL\n"); return 2; }
		int count = 0, conv = 0;
		FORLIST(lnk, td->textures){
			Texture *t = Texture::fromDict(lnk);
			// intento de pasar el raster PS2 nativo al raster de la plataforma activa (GL3)
			if(t->raster){
				Raster *r2 = Raster::convertTexToCurrentPlatform(t->raster);
				if(r2){ t->raster = r2; conv++; } // convertTexToCurrentPlatform destruye el original
			}
			std::printf("  textura '%s' %dx%d depth=%d platform=%d\n", t->name,
				t->raster ? t->raster->width : -1, t->raster ? t->raster->height : -1,
				t->raster ? t->raster->depth : -1, t->raster ? t->raster->platform : -1);
			count++;
		}
		std::printf("TXD: %d texturas cargadas, %d convertidas a la plataforma activa\n", count, conv);
		return 0;
	}
	if(h.type == ID_CLUMP){
		Clump *c = Clump::streamRead(&s);
		if(!c){ std::printf("DFF: Clump::streamRead devolvio NULL\n"); return 2; }
		std::printf("DFF: clump cargado, atomicos=%d\n", c->countAtomics());
		return 0;
	}
	std::printf("chunk: tipo no soportado por la sonda\n");
	return 1;
}

int main(int argc, char **argv)
{
	int frames = 60;
	const char *chunk = nullptr;
	for(int i = 1; i < argc; i++){
		if(!std::strcmp(argv[i], "--frames") && i + 1 < argc) frames = std::atoi(argv[++i]);
		else if(!std::strcmp(argv[i], "--chunk") && i + 1 < argc) chunk = argv[++i];
	}
	SDL_SetMainReady();
	if(SDL_Init(SDL_INIT_VIDEO) != 0){ std::printf("SDL_Init: %s\n", SDL_GetError()); return 1; }

	if(!rw::Engine::init()){ std::printf("Engine::init fallo\n"); return 1; }
	attachPlugins();
	SDL_Window *window = nullptr;
	rw::EngineOpenParams p;
	p.window = &window; p.fullscreen = false; p.width = 640; p.height = 448; p.windowtitle = "m3b_probe";
	if(!rw::Engine::open(&p)){ std::printf("Engine::open fallo (SDL/GL3)\n"); return 1; }
	rw::Engine::setSubSystem(rw::Engine::getNumSubSystems() - 1);
	if(!rw::Engine::start()){ std::printf("Engine::start fallo\n"); return 1; }
	std::printf("rw::Engine arrancado: platform=%d (12 = GL3) gles=%d glversion=%d dxt=%d\n", rw::platform,
		rw::gl3::gl3Caps.gles, rw::gl3::gl3Caps.glversion, (int)rw::gl3::gl3Caps.dxtSupported);

	if(chunk){ int r = probeChunk(chunk); if(r) std::printf("sonda de chunk: codigo %d\n", r); }

	rw::Camera *cam = rw::Camera::create();
	cam->setFrame(rw::Frame::create());
	cam->frameBuffer = rw::Raster::create(p.width, p.height, 0, rw::Raster::CAMERA);
	cam->zBuffer = rw::Raster::create(p.width, p.height, 0, rw::Raster::ZBUFFER);
	cam->setNearPlane(0.1f); cam->setFarPlane(100.0f);
	rw::V2d vw = { 0.5f, 0.5f * 448.0f / 640.0f }; cam->setViewWindow(&vw);
	rw::World *world = rw::World::create();
	world->addCamera(cam);
	rw::Light *l = rw::Light::create(rw::Light::AMBIENT);
	l->setColor(0.5f, 0.5f, 0.5f);
	world->addLight(l);

	rw::RGBA bg = rw::makeRGBA(20, 30, 60, 255);
	for(int i = 0; i < frames; i++){
		SDL_Event e; while(SDL_PollEvent(&e)) if(e.type == SDL_QUIT) i = frames;
		cam->clear(&bg, rw::Camera::CLEARIMAGE | rw::Camera::CLEARZ);
		cam->beginUpdate();
		world->render();      // mundo vacio: solo comprueba el camino de render
		cam->endUpdate();
		cam->showRaster(0);
	}
	std::printf("OK: %d fotogramas renderizados\n", frames);

	world->removeLight(l); l->destroy();
	world->removeCamera(cam); world->destroy();
	cam->frameBuffer->destroy(); cam->zBuffer->destroy(); cam->getFrame()->destroy(); cam->destroy();
	rw::Engine::stop(); rw::Engine::close(); rw::Engine::term();
	SDL_Quit();
	return 0;
}
