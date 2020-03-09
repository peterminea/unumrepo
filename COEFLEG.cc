 #include "/GMP64.h"
 #include "/TOLIL0.h"
#include <RandomLib/Random.hpp>

using namespace RandomLib;
#define Q 2100000
gmp_ui A[22000000], div1[D1][MAX2], sum1[D1][MAX2];


int PR(int *k, int l, int m) {
while(1) {
	if( !(k[l] ^ m) )
		return 0;
	if(!l--)
		break;
	}

return 1;
}


int PT(gmp_ui b) {
	if(b < 10) return 18;
	if(b < 40) return 12;
	if(b < 100) return 9;
	if(b < 1000) return 6;
	if(b < 9000) return 5;
	if(b < 80000) return 4;
	return 1;
}


void PREL(gmp_ui *divdoi1, mpz_t *divdoi, gmp_ui div1[][MAX2], gmp_ui *b, int H, int D, gmp_ui jos, gmp_ui sus) {
Random r1;
r1.Reseed();
gmp_ui i, J, L = 0, B[5400];
int k[D], g = 0, l, doi, N2 = 0;

for(int i = 0; i < H; i++)
	B[N2++] = PT(b[i]);

printf("%d\n", N2);
for(int i = H; i < D; i++)
	B[N2++] = 2;

printf("%d\n", N2);
mpz_t Z, c, d, e, f;
mpz_inits(Z, c, d, e, f, NULL);

while(1) {
	i = N2;
	while(1) {
		k[--i] = -1;
		if(!i)
			break;
		}

	doi = r1.IntegerC(0, 10);//Puteri de 2, putere minimă/maximă.	
	doi < 64? mpz_set_ui(d, divdoi1[doi]) : mpz_set(d, divdoi[doi]);
	i = r1.IntegerC(1, 11);//Număr de factori primi impari, minim/maxim.
	l = 0;
	J = sus / 3;

	while(1) {
		g = r1.IntegerC(0, D1910);//Umplere cu factori primi impari din vectorul b.
		if(b[g] > sus) continue;
				
		if( PR(k, l, g) ) {
			k[l] = g;
			doi = B[g];
			doi = r1.IntegerC(1, doi);
			if(div1[g][doi] == NPS) doi--;			
			mpz_mul_ui(d, d, div1[g][doi]);
			if(++l == i)
				goto S;
			}
		}
		S:

		if( (mpz_cmp_ui(d, sus) < 0)
			&& (mpz_cmp_ui(d, jos) > 0)
			//&& !EPRIM(mpz_get_ui(d)) 
			) {
				A[L] = mpz_get_ui(d);
				if(L % 500000 == 0) printf("%llu GIACINTO BOBONE\n", L);

				if(++L == Q) {
					i = LUNGHEZ2("/COEFLEG.TXT");
					printf("DILIUS %llu\n", i);
					FILE *FD = fopen("/COEFLEG.TXT", "r");
					
					while(1) {
						fscanf(FD, "%llu", &J);
						if( (ftell(FD) == i)							
						) break;
						
						A[L++] = J;
					}
			
					fclose(FD);
					i = 0;
					HSI(A, 0, L);
					//i = LUNGHEZ2("/COEFL1.TXT");
					FD = fopen("/COEFLEG.TXT", (i? "a" : "w"));
					fprintf(FD, "%llu\n", A[0]);

					for(J = 1; J < L; J++)
					if(A[J] ^ A[J-1]) {
						fprintf(FD, "%llu\n", A[J]);
						}

					fclose(FD);				
					mpz_clears(Z, c, d, e, f, NULL);
					return;
				}
			}
	}
}


void TOL() {
mpz_t C[E1], C1[E1], div[H1][MAX1], sum[H1][MAX1], d, divdoi[580], sumdoi[580];
gmp_ui b[D1], b1[D1], e, j, j1, j2, k, b2[5400], divdoi1[64], sumdoi1[64];
int L, D, E, H, K, f, h, W, l, I, R, r, u, u1, sus = 1910, mem[600];
INIT(H1, div, sum);

for(int i = 0; i < E1; i++) {
	mpz_inits(C[i], C1[i], NULL);
}

for(r = 0; r < 580; r++) {
	mpz_inits(divdoi[r], NULL);
	mpz_ui_pow_ui(divdoi[r], 2, r);
	if(r < 64)
		divdoi1[r] = 1;
		divdoi1[r] <<= r;
	}

mpz_init_va(d, NULL);
//GENERARE(sus, b, C, D, H, E, K, I, L, 0);//GENERARE și GENERARE2 fără INV() după ele, îl au în ele.
GENERARE2(sus, b, C, D, H, E, K, I, L, sus > 160);
printf("%d %d %d %d %d %d\n%d %d %d %d EVALDE\n", sus, D1, E1, N0, H1, K2, D, E, H, K);
UNIFACTUS(sus, b, b1, C, C1, D, E, H, K, div, sum, div1, sum1, mem, sumdoi, sumdoi1, 1);

for(int i = H; i < D; i++) {
	div1[i][0] = 1;
	div1[i][1] = b[i];
	mpz_set_ui(d, b[i]);	
	R = 2;

	while(1) {
		mpz_mul_ui(d, d, b[i]);		
		if(mpz_cmp_ui(d, VERTOITO) > 0)
			break;
		div1[i][R++] = mpz_get_ui(d);
	}
	
	div1[i][R] = NPS;
}

PREL(divdoi1, divdoi, div1, b, H, D, 1000000, 10000000000U);
printf("FINE\n");
for(e = 0; e < E1; e++)
	mpz_clears(C[e], C1[e], NULL);	
mpz_clears(d, NULL);
}

 
int main(int argc, char **argv) {
TOL();
return 0;
}
