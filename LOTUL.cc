#include <gmp.h>
#include <stdio.h>
#include <cmath>
#include "/GMP64.h"

#define N 400


void prim(gmp_ui H, gmp_ui &e, gmp_ui i, gmp_ui &k, gmp_ui &l, int &j) {

if(!(H % i)) {
	j = 1;
	k = i;

	while(1) {
		k *= i;
		if(H % k)
			break;		
		j++;
		}
		
	if( !(j^1) ) {
		l *= i;
		e *= (++i);
		return;
		}
		
		l *= (k / i);
		e *= (k / (--i) );	
	}
}


int main() {
mpz_t a, b, c, d, f, K, div[N][25], sum[N][25];
mpz_inits(a, b, c, d, f, K, NULL);
double J2, J3;
mpq_t A, B;
mpq_inits(A, B, NULL);
gmp_ui e, i, k, l, s = 1, H, div1[N][42], sum1[N][42];
int g[N], h, j, J1;

for(int i = 0; i < N; i++)
	for(int j = 0; j < 25; j++)
		mpz_inits(div[i][j], sum[i][j], NULL);

gmp_scanf("%Zd", a);
scanf("%lf", &J2);
FILE *F = fopen("/POLSKU.TXT", "r");
for(h = 0; h < N; ++h) {
	fscanf(F, "%d", &g[h]);
	}

fclose(F);
//mpz_set(f, a);

for(h = 0; h < (N>>1); h++) {
	j = g[h];
	g[h] = g[N-h-1];
	g[N-h-1] = j;
	}

POLOZKI2(g, div1, sum1, div, sum, N, 1U-4U);
J1 = 6 + 6 * ( g[0] / 6);

while(1) {
	mpz_mul_ui(f, a, s++);
	h = mpz_scan1(f, 0);
	mpz_set_ui(b, 0);
	mpz_setbit(b, h);	
	mpz_set_ui(c, 0);
	mpz_setbit(c, ++h);
	mpz_sub_ui(c, c, 1);
	h = N;
	
	while(1) {
		if(!h--)
			break;

		if(!mpz_divisible_ui_p(f, g[h]))
			continue;
		j = 2;
					
		if(mpz_divisible_p(f, div[h][1])) {
			while(mpz_divisible_p(f, div[h][j])) j += 2;
			if(!mpz_divisible_p(f, div[h][--j])) j--;
			mpz_mul(b, b, div[h][j]);
			mpz_mul(c, c, sum[h][j]);
			} else {
			while(mpz_divisible_ui_p(f, div1[h][j])) j += 2;
			if(!mpz_divisible_ui_p(f, div1[h][--j])) j--;
			mpz_mul_ui(b, b, div1[h][j]);
			mpz_mul_ui(c, c, sum1[h][j]);
			}				

		if(!mpz_cmp(b, f))
			goto s1;
		}

	if(mpz_cmp(b, f)) {
		mpz_divexact(K, f, b);
		H = mpz_get_ui(K);
		i = J1;
		e = 1;
		l = 1;
		h = sqrt(H);
		
		while(1) {
			prim(H, e, i - 1, k, l, j);
			
			if(l == H) {
				mpz_mul_ui(c, c, e);
				goto s1;
				}
				
			if( i > h)
				break;
				
			prim(H, e, i + 1, k, l, j);
			i += 6;
			}
			
			mpz_mul_ui(c, c, H/l);			
		}
s1:
	mpq_set_z(A, c);
	mpq_set_z(B, f);
	mpq_div(A, A, B);

	J3 = mpq_get_d(A);
	if(J3 > J2)
		gmp_printf("%Zd %.5lf\n", f, J3);
	//mpz_add(f, f, a);
	}

mpz_clears(a, b, c, d, f, K, NULL);
mpq_clears(A, B, NULL);

return 0;
}
