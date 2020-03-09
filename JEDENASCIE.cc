//CF52:  1401+0 94
//CF80:  1517+3 94
//CF100: 1375+3 103
//CF130: 1701+3 116
//CF160: 1925+3 139
//CF240: 1884+5 150
//CF420: 2157+21 171
//TOTUL: 4773+421 348

#include <gmp.h>
//#include <omp.h>
#include <stdio.h>
#include<time.h>
#include "/TOLIL.h"
#include <RandomLib/Random.hpp>
#include "/TOLNUM.h"

#define U 2872
using namespace RandomLib;


void TOL() {
Random r1;
r1.Reseed();

mpz_t C[625], unu, doi, trei, d, d1, J[625], z[90], verifMpz[90], sumMpz[90], sumIntMpz[90], sumDoi, divDoi, prodnum, catnum, SUMDOI[180], divdiv[U-200][3], divsum[U-200][3], div[50][MAX1], sum[50][MAX1];
gmp_ui b[U], b1[U], b2[U], PP, j, y[480], sumInt[480], M[480], Verif[480], div1[H1-50][MAX2], sum1[H1-50][MAX2];
int R, A2[160], P1[U], putImpl[480], P[U], f, h, Y, W, D, E, e, H, K, l, I, r, pDoi, s, S, u, v, V, K0, H2, D2, gm;
char t, G[1920], Q1[1920], I1[70] = "/run/media/root/480G/JED.NUM1";
FILE *F2, *Q2, *Q3;

INIT(50, div, sum);
for(R = 0; R < U; R++)
	b2[R] = 1;
for(e = 0; e < 90; e++)
	mpz_inits(z[e], verifMpz[e], sumMpz[e], sumIntMpz[e], NULL);
	
for(int i = 0; i < 180; i++) mpz_inits(SUMDOI[i], NULL);
for(int i = 0; i < U-200; i++)
for(int j = 0; j < 3; j++)
	mpz_inits(divdiv[i][j], divsum[i][j], NULL);	

mpz_init_va(unu, doi, trei, d, d1, sumDoi, divDoi, prodnum, catnum, NULL);
for(e = 0; e < 625; e++)
	mpz_inits(C[e], J[e], NULL);

K = 0;
W = 2875;
H = 248;
GEN(U, W, b, C, D, E, "/CF160.TXT");
K0 = K;
H2 = H;
D2 = D;

for(f = 0; f < U; f++)
	b1[f] = b[f];
INV(b1, C, H2, D2, E);
UNIFACTSUB(160, b, b1, b2, D, H, div1, sum1, divdiv, divsum, P, P1, unu, d, trei, SUMDOI, 180, 1);

F2 = fopen(I1, "a");
if(ftell(F2)) {
	fclose(F2);
	return;
}

fclose(F2);
F2 = fopen(I1, "w");
printf("De scris: %s .\n", I1);

f = 1;
while(1) {
	if(!(f))
		break;
	r = r1.IntegerC(0, 20);// *
	if(!r)
		continue;

	mpz_set_ui(prodnum, 1);
	mpz_set_ui(trei, 1);
	pDoi = r1.IntegerC(0, 1);
	if(!pDoi) continue;

	if(pDoi) {
		pDoi = r1.IntegerC(1, 20);
		mpz_clrbit(prodnum, 0);
		mpz_setbit(prodnum, pDoi++);
		mpz_setbit(trei, pDoi);
		mpz_sub_ui(trei, trei, 2);
		/*	
		if( (pDoi == 89) || (pDoi == 107) || (pDoi == 127) )				
			for(h = E; h; ) {
			if(pDoi == mpz_scan1(J[h], 0)) {
				mpz_mul(prodnum, prodnum, C[h]);
				mpz_mul_2exp(trei, trei, pDoi);
				}
			}*/		
		}
	h = 0;
	while(1) {//Înmulțire
		if(!r--)
			break;
		m1:
		l = r1.IntegerC(0, U-1);
		if(PREZ(b[l], Verif, h))
			goto m1;
		Verif[h++] = b[l];
		W = r1.IntegerC(1, P1[l]);
		gm = (l < H)? l : l - H;

		/*l < K? 
			MPZMULSUBSTE(prodnum, trei, div[l], sum[l], W)
			:*/					
			(l < H? MULSUBSTE(prodnum, trei, div1[l], sum1[l], W) : MPZMULSUBSTE(prodnum, trei, divdiv[gm], divsum[gm], W))
			;						
		}

	if(VALID(prodnum, d1, trei) == 1) {
		gmp_printf("%Zd %Zd\n", prodnum, trei);
		SCRIE(prodnum, G, F2);
		}
	}
	
fclose(F2);
mpz_clears(unu, doi, trei, d, d1, sumDoi, divDoi, prodnum, catnum, NULL);
for(e = 0; e < 487; e++)
	mpz_clears(C[e], J[e], NULL);
}


int main(int argc, char **argv) {
	TOL();
	return 0;
}
