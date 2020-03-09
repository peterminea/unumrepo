#include <stdio.h>
#include <cmath>   
#include "/NUM.h"

int main() {
long double a;
gmp_ui i[11], I[53], I2[53], i3[11], b, d, E, j1, j2, nm, nr, sumDoi, SUM, t, div[12][MAX3], sum[12][MAX3], div1[12][MAX3], sum1[12][MAX3], divdoi[62], sumdoi[62];
int c = 0, f, g, j, k, D1 = 53, H = 9, i2[11];

UNIFACTOR("/CFVEC.TXT", "/PUTERIVEC.TXT", I, I2, D1, H, div, sum, sumdoi, divdoi, 60, 0);
scanf("%Lf %llu",&a, &b);
a *= b;

for(j = 0; j < 53; j++) {
	if(!fmodl(a, I[j])) {
		i3[c] = I2[j];
		i2[c] = j;
		i[c++]=I[j];
		}

	if(j == 9)
		f = c;
	}

for(k = 0; k < f; k++) {
	memcpy(div1[k], div[i2[k]], sizeof(div[i2[k]]));
	memcpy(sum1[k], sum[i2[k]], sizeof(sum[i2[k]]));
	}

d = sqrt(a);
b = 0;

while(1) {
	if(!fmodl(a, ++b)) {	
		SMOD((long double)b, i, i3, E, c, f, g, div1, sum1, j1, j2, sumDoi, t, nm, nr, 1, divdoi, sumdoi);
		SMOD(a/b, i, i3, E, c, f, g, div1, sum1, j1, j2, sumDoi, t, nm, nr, 1, divdoi, sumdoi);
		}
		
	if(! (b ^ d) )
		break;
	}

return 0;
}
