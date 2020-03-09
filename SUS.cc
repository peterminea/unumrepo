#include<stdio.h>
#include<cmath>   
#include "/NUM.h"

int main() {
long double a, B, c, d, I1;
gmp_ui i[11], i2[11], I[53], I2[53], b, e, D, E1, F, G, H, div[12][MAX3], sum[12][MAX3], div1[12][MAX3], sum1[12][MAX3], divdoi[62], sumdoi[62];
double E = pow((double)2, -36);
int f, g, j, k, C = 0, i1[11];
char t;

UNIFACTOR("/CFVEC.TXT", "/PUTERIVEC.TXT", I, I2, D = 53, H = 9, div, sum, sumdoi, divdoi, 60, 0);
scanf("%Lf %llu", &a, &b);
a *= b;
INTEROGARE(t);

if(t == 'a') {
	B = a;
	for(f = 0; f < H; f++)
		I2[f] = I[f] - 1;
	
	while(1) {
		TOL(B, E, I, I2, H, D, c, d, I1, e, F, g, div, sum, G, divdoi);
		B += a;
		}
	}		
else
	{
	for(j = 0; j < D; j++) {
		if(!fmodl(a, I[j])) {
			i1[C] = j;
			i2[C] = I[j] - 1;
			i[C++] = I[j];
			}
		if(j == H)
			f = C;
		}
		
	for(k = 0; k < f; k++) {
		memcpy(div1[k], div[i1[k]], sizeof(div[i1[k]]));
	}
		
	b = 0;
	while(1) {
		if(!fmodl(a, ++b))
			LOT(a/b, E, i, i2, f, C, c, d, I1, e, F, g, div1, divdoi);
		}
	}
return 0;
}
