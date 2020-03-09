#include <stdio.h>
#include <math.h>
#include "/NUM.h"

int main() {
long double c, g, h, A;
gmp_ui b[53], sumInt[18], i1[16], i2[16], i4[16], E, SUM, j, j1, j2, k, sumDoi, i, l, m, nm, nr, nm1, nr1, b2[53], b3[53], b4[53], div[12][MAX3], sum[12][MAX3], divdoi[62], sumdoi[62], div1[18][MAX3], sum1[18][MAX3], div2[53][MAX3], sum2[53][MAX3], sumInt3, sumInt5, trei[MAX3], cinci[MAX3];
int a, i6, i7, H = 9, n, D = 53, Y, d, e, f, i3[11], ii = 0, jj;
char t;
scanf("%Lf", &A);

UNIFACTOR("/CFVEC.TXT", "/PUTERIVEC.TXT", b, b3, D, H, div, sum, sumdoi, divdoi, 60, 0);
ADUNDIV(A, sumDoi, SUM, sumInt, i1, k, div, sum, b, b3, E, i6, H, n, D, j1, j2, Y = 0, nm, nr, divdoi, sumdoi);

f = 0;
for(i = 0; i < H; i++)
if(!PREZ(b[i], i1, n, 0)) {
	b2[f++] = b[i];
	}
	
QS(b2, 0, f);
e = f;
for(i = H; i < D; i++)
if(!PREZ(b[i], i1, Y, n)) {
	b2[f++] = b[i];
	}

for(i = 0; i < Y; i++) {
	i2[i] = i1[i] + 1;
	i4[i] = i1[i] - 1;
	}
	
QS(b2, e, f);
INV2(b2, e, f);
for(i = 0; i < f; i++)
	b3[i] = b2[i] + 1;

//i1, n, b2, e sunt parametri la MODIFSUS, primii doi merg şi la MODIFJOS.
//De nepus 7 cu tratament separat.

for(i7 = 0; i7 < n; i7++) {
	jj = GAS(b, i1[i7], H, 0);
	memcpy(div1[ii], div[jj], sizeof(div[jj]));
	memcpy(sum1[ii++], sum[jj], sizeof(sum[jj]));	
}

ii = 0;
for(i7 = 0; i7 < f; i7++) {
	jj = GAS(b, b2[i7], H, 0);
	memcpy(div2[ii], div[jj], sizeof(div[jj]));
	memcpy(sum2[ii++], sum[jj], sizeof(sum[jj]));
}

k = 1;
nr1 = nr, nm1 = nm;
j2 = sumDoi;
INTEROGARE(t);

if (t == 'a') {
	while(1) {
		if(DOIMODIFSUS(sumInt, i1, ++k, Y, n, j, j1, j2, sumDoi, div1, sum1, div2, sum2, divdoi, a, k, b2, b3, f, e, nr = nr1, nm = nm1) && (nm < 11))//ii
			printf("%.0Lf %llu %llu %.3Lf\n", A*k, nr, nm, (long double)nr / nm);
		}
	} else {
	i6 = 0;

	for(i7 = 0; i7 < n; i7++) {
		j = div1[i7][1];

		if(j == 3) {
			memcpy(trei, div1[i7], sizeof(div1[i7]));
			j = GAS(i1, 3, n, 0);
			sumInt3 = sumInt[j];		
		} else if(j == 5) {
			memcpy(cinci, div1[i7], sizeof(div1[i7]));
			j = GAS(i1, 5, n, 0);
			sumInt5 = sumInt[j];
		} else {
			memcpy(div1[i6++], div1[i7], sizeof(div1[i7]));
		}
	}

	SCOTFACT(i1, i2, i4, sumInt, Y, n, 0, 0);
	k--;

	while(1)
		if (!fmodl (A, ++k) ) {
			DOIMODIFJOS(sumInt, i1, i2, i4, k, Y, n, j, j1, j2, a, sumDoi, div1, divdoi, m, nr = nr1, nm = nm1, trei, cinci, sumInt3, sumInt5);//ii
			if(nm < 11)
				printf("%.0Lf %.3Lf\n", A/k, (long double)nr / nm);
			}
		}
return 0;
}
