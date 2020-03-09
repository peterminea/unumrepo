#include <stdio.h>
#include <math.h>
#include "/NUM.h"

int main() {
gmp_ui b[53], b2[53], b3[30], i[12], i1[12], divInt[12], div[53][MAX3], sum[53][MAX3], divdoi[62], sumdoi[62], div1[18][MAX3], sum1[18][MAX3], div2[53][MAX3], I, k, l, m;
long double a, c, g, h, j, n, sumInt[12];
int d, e, D, H, f, r, R, a3[12], ii = 0, jj;
char t;
double E = pow((double)2, -32);
scanf("%Lf %Lf", &a, &c);
c *= a;

UNIFACTOR("/CFVEC.TXT", "/PUTERIVEC.TXT", b, b2, D = 53, H = 9, div, sum, sumdoi, divdoi, 60, 0);
LOTVEC(b, i, i1, a3, c, H, D, d, e, f);
ADDIV(c, g, i, div, e, d, f, divInt, sumInt, h, I, divdoi, a3);

k = 0;//d=Y, e=n.
f = 0;
for(R = 0; R < H; R++)
if(!PREZ(b[R], i, e, 0)) b2[f++] = b[R];
QS(b2, 0, f);

r = f;
for(R = H; R < D; R++)
if(!PREZ(b[R], i, d, e)) b2[f++] = b[R];
QS(b2, r, f);
INV2(b2, r, f);
INTEROGARE(t);

for(int i7 = 0; i7 < e; i7++) {
	jj = GAS(b, i[i7], H, 0);
	memcpy(div1[ii], div[jj], sizeof(div[jj]));
}

ii = 0;

for(int i7 = 0; i7 < r; i7++) {
	jj = GAS(b, b2[i7], H, 0);
	memcpy(div2[ii], div[jj], sizeof(div[jj]));	
}//e cu i, r cu b2.

for(int i7 = 0; i7 < e; i7++) i1[i7] = i[i7] - 1;
for(int i7 = 0; i7 < r; i7++) b3[i7] = b2[i7] - 1;

if (t == 'a') {
	while(1) {
		if(MODIFSUMSUS(j = g, m = 1, ++k, l, i, i1, h, I, divInt, sumInt, R, e, d, b2, b3, f, r, div1, div2, divdoi) && VALID(j, n, a, E))
			printf("%.0Lf %.3Lf\n", c*k, --n);
		}
	} else {
	while(1)
		if (!fmodl (c, ++k) ) {
			MODIFSUM(j = g, k, l = 1, i, i1, h, I, divInt, sumInt, e, d, divdoi, div1);//div1+sum1 cu y(d), div2+sum2 cu b-y(f).
			if(VALID(j, n, a, E))
				printf("%.0Lf %.3Lf\n", c/k, --n);
			}
		}
return 0;
}
