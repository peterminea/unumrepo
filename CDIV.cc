#include <stdio.h>
#include <cmath>
#include "/NUM.h"

int main() {

long double a, C, D, I1;
gmp_ui i[11], i1[11], I[53], I2[53], b, d, e, F, div[12][MAX3], sum[12][MAX3], div1[12][MAX3], sum1[12][MAX3], divdoi[62], sumdoi[62];
int D1 = 53, H = 9, i2[11], c = 0, f, g, j, k;
double E = pow((double)2, -34);

UNIFACTOR("/CFVEC.TXT", "/PUTERIVEC.TXT", I, I2, D1, H, div, sum, sumdoi, divdoi, 60, 0);
scanf("%Lf %llu",&a, &b);
a *= b;

for(j = 0; j < D1; j++)	{
	if(!fmodl(a, I[j])) {
		i2[c] = j;
		i1[c] = I[j] - 1;
		i[c++] = I[j];
		}

	if(j == H)
		f = c;
	}

for(k = 0; k < f; k++) {
	memcpy(div1[k], div[i2[k]], sizeof(div[i2[k]]));
	}

d = sqrt(a);
b = 1;

while(1) {
	if(!fmodl(a, b)) {
		LOT((long double)b, E, i, i1, f, c, C, D, I1, e, F, g, div1, divdoi);
		LOT(a/b, E, i, i1, f, c, C, D, I1, e, F, g, div1, divdoi);
		}

	if(! (++b ^ d) )
		break;
	}

return 0;
}
