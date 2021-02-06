#include<immintrin.h>
#include<nmmintrin.h>
/*
<mmintrin.h>  MMX
<xmmintrin.h> SSE
<emmintrin.h> SSE2
<pmmintrin.h> SSE3
<tmmintrin.h> SSSE3
<smmintrin.h> SSE4.1
<nmmintrin.h> SSE4.2
<ammintrin.h> SSE4A
<wmmintrin.h> AES
<immintrin.h> AVX, AVX2, FMA
*/

int main(){
union {__m128 a4;float a[4];};
a4 = _mm_set_ps(0,0,0,0);
__m128 b4 = _mm_set_ps(2.0,3.5,4,5);
__m128 sum = _mm_add_ps(a4,b4);
/*
__mm_sub_ps(a4,b4);
__mm_mul_ps(a4,b4);
__mm_div_ps(a4,b4);
__mm_sqrt_ps(a4);
__mm_rcp_ps(a4);
*/

return 0;
}
