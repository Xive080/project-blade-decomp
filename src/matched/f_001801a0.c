void f(float *a, float *b) { float t = b[3]; float x=b[0]*t; float y=b[1]*t; float z=b[2]*t; a[0] = a[0] + x; a[1] = a[1] + y; a[2] = a[2] + z; }
