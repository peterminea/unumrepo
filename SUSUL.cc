#include<stdio.h>
#include<cmath>   
#include "/NUM.h"

int main() {
long double a, B;
gmp_ui i[11], I[53], b, e, F, G, I1[53], i2[11], E, j1, j2, nm, nr, sumDoi, SUM, t, div[12][MAX3], sum[12][MAX3], div1[12][MAX3], sum1[12][MAX3], divdoi[62], sumdoi[62];
int c = 0, f, g, j, k, i3[11], D1 = 53, H = 9;
char t1;

UNIFACTOR("/CFVEC.TXT", "/PUTERIVEC.TXT", I, I1, D1, H, div, sum, sumdoi, divdoi, 60, 0);
scanf("%Lf %llu", &a, &b);
a *= b;
INTEROGARE(t1);

if(t1 == 'a') {
	B = a;
	while(1) {
		TOLULE(B, sumDoi, SUM, t, div, sum, I, I1, E, g, H, D1, j1, j2, nm, nr, divdoi, sumdoi);
		B += a;
		}
	}
else
	{
	for(j = 0; j < D1; j++) {
		if(!fmodl(a, I[j])) {
			i2[c] = I1[j];
			i3[c] = j;
			i[c++] = I[j];
			}
		if(j == H)
			f = c;
		}
		
	for(k = 0; k < f; k++) {
		memcpy(div1[k], div[i3[k]], sizeof(div[i3[k]]));
		memcpy(sum1[k], sum[i3[k]], sizeof(sum[i3[k]]));
	}

	b = 0;
	while(1) {
		if(!fmodl(a, ++b))
			LOTULE(a/b, sumDoi, SUM, t, div1, sum1, i, i2, E, g, f, c, j1, j2, nm, nr, divdoi, sumdoi);
		}
	}
return 0;
}
