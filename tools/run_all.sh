#!/usr/bin/env bash
# Pasadas encadenadas del driver LLM. Reparto de servidores de Titán:
#   CUDA (8862, ranura Xive)  -> trabajo en bloque: funciones nuevas.
#   ROCm (8861, ranura kyr)   -> trabajos importantes: reintento de las que fallaron.
# Espera a que termine cualquier matching en curso. Uso: tools/run_all.sh
cd "$(dirname "$0")/.." || exit 1
CUDA=http://127.0.0.1:8861; ROCM=http://127.0.0.1:8861
A=(--elf SCES_502.46 --wibo toolchain/wibo --comp toolchain/comp --out build/llm2 --sort --min-len 5 --max-len 200)
while pgrep -f tools/llm_match.py >/dev/null; do sleep 30; done
done_n=$(ls build/llm2/*.json 2>/dev/null | wc -l)
echo "== pasada 1 (CUDA): funciones nuevas desde la ${done_n} =="
python3 tools/llm_match.py "${A[@]}" --url "$CUDA" --n 2000 --tries 6 --skip "$done_n"
for i in 2 3; do
  echo "== pasada $i (ROCm/kyr): reintento de las que fallaron =="
  python3 tools/llm_match.py "${A[@]}" --url "$ROCM" --n 2000 --tries 8 --retry-failed
done
python3 tools/export_stats.py
echo "== fin =="
