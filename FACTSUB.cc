//CF52:  1401+0 94
//CF80:  1517+3 94
//CF100: 1375+3 103
//CF130: 1701+3 116
//CF160: 1925+3 139
//CF240: 1884+5 150
//CF420: 2157+21 171
//TOTUL: 4773+421 348

#include "/TOLNUM.h"
#include<time.h>
#include <RandomLib/Random.hpp>
#define U D160
using namespace RandomLib;

void TOL(char **arg) {

if(arg[4][0] < 'c') {
	PREP1(arg);
	return;
}

Random r1;
r1.Reseed();

mpz_t C[625], unu, doi, trei, d, d1, e1, p, J[625], z[90], verifMpz[90], sumMpz[90], sumIntMpz[90], sumDoi, divDoi, prodnum, catnum, ab, sm, SUMDOI[180], divdiv[U-200][3], divsum[U-200][3], div[50][MAX1], sum[50][MAX1];
gmp_ui b[U], b1[U], b2[U], PP, j, y[480], sumInt[480], M[480], Verif[480], div1[H1-50][MAX2], sum1[H1-50][MAX2];
char t, *tt, TEXT[80], G[1920], Q1[1920], I1[70] = "/run/media/root/6T/S73.NUM1";
int P1[U], A2[160], putImpl[480], P[U], R, f, h, Y, W, D, E, e, H, K, l, I, r, pDoi, doiSus, s, jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10), S, u, v, V, K0, H2, D2, ssq, gm;
FILE *f1, *F2, *Q2, *Q3;

INIT(50, div, sum);
for(R = 0; R < U; R++)
	b2[R] = 1;
for(e = 0; e < 90; e++)
	mpz_inits(z[e], verifMpz[e], sumMpz[e], sumIntMpz[e], NULL);
	
for(int i = 0; i < 180; i++) mpz_inits(SUMDOI[i], NULL);
for(int i = 0; i < U-200; i++)
for(int j = 0; j < 3; j++)
	mpz_inits(divdiv[i][j], divsum[i][j], NULL);	

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(I1);
}

mpz_init_va(unu, doi, trei, d, d1, e1, p, ab, sm, sumDoi, divDoi, prodnum, catnum, NULL);
for(e = 0; e < 625; e++)
	mpz_inits(C[e], J[e], NULL);

TXT(sus, TEXT);
if(sus > 160)
	return;
K = 0;
W = N160;
H = K160;
GEN(U, W, b, C, D, E, "/CF160.TXT");//P2.TXT, PRIME2.TXT.
K0 = K;
H2 = H;
D2 = D;
for(f = 0; f < U; f++)
	b1[f] = b[f];

INV(b1, C, H2, D2, E);
UNIFACTSUB(160, b, b1, b2, D, H, div1, sum1, divdiv, divsum, P, P1, unu, d, trei, SUMDOI, 180, 1);
jos += 2, sus += 2;
PP = LUNGHEZ2(TEXT);
f1 = fopen(TEXT, "r");

if(!URC(f1, jos, Q1, t, 500000000L, PP, arg[5][0])) {
	printf("Nu e numărul.\n");
	//return;
}

if(LUNGHEZ2(I1)) {
	fclose(f1);
	return;
}

fgets(Q1, 1920, f1);
F2 = fopen(I1, "w");
printf("De scris: %s .\n", I1);
RECIDENTE(I1, TEXT, jos-2, sus-2, arg[0], arg[5], 0, 1, 1);
e = PRAG;

while(1) {
	mpz_set_str(unu, Q1, 10);
	S = mpz_scan1(unu, 0);
	ADUNDIVP(unu, d, sumInt, y, R, SUMDOI[S], putImpl, r, b1, H2, D2, Y = 0, S, ssq, b2, div1, sum1, p);
	VALIDN(unu, d1, d, trei);
	
	f = 444;
	while(1) {
		if(!(f--))
			break;
		r = r1.IntegerC(0, 25);// *
		R = r1.IntegerC(0, 10);// /
		if(R > Y)
			R = r1.IntegerC(0, Y);			
		if( (!r && !R) )
			continue;

		mpz_set_ui(prodnum, 1);
		mpz_set_ui(catnum, 1);
		v = 0;		
		//sum = mpz_get_ui(trei);
		//abund = mpz_get_ui(d1);
		mpz_set_ui(sm, mpz_get_ui(trei));
		mpz_set_ui(ab, mpz_get_ui(d1));		
		pDoi = r1.IntegerC(0, 1);
		
		if(pDoi) {
			s2:
			pDoi = r1.IntegerC(1, 10);//Puteri de 2
			doiSus = r1.IntegerC(0, 1);//Puterea de 2 a numărului de bază crește sau scade
			if( (!doiSus) && (pDoi > S) )
				goto s2;

			doiSus? PTDOISUS(ab, sm, sumDoi, pDoi, e1, 1U, S, SUMDOI, prodnum) : PTDOIJOS(ab, sm, sumDoi, pDoi, e1, 1U, catnum);
			V = 1 + S + doiSus? pDoi : -pDoi;
			
			if( (V == 89) || (V == 107) || (V == 127) )				
				for(h = E; h; ) {
					pDoi = mpz_scan1(J[h], 0);

					if(V == pDoi) {
						mpz_mul(prodnum, prodnum, C[h]);
						mpz_mul(ab, ab, C[h]);
						mpz_mul_2exp(sm,  sm, pDoi);
						}	
					else if(mpz_divisible_p(p, C[h])) {
						mpz_mul(catnum, catnum, C[h]);
						mpz_mul_2exp(ab, ab, pDoi);
						mpz_mul(sm,  sm, C[h]);
						}
				
					mpz_gcd(e1, sm, ab);
					if(mpz_cmp_ui(e1, 1)) {
						mpz_divexact(sm, sm, e1);
						mpz_divexact(ab, ab, e1);
					}
				}
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
			W = r1.IntegerC(1, P[l]);			
			gm = (l < H)? l : l - H;
			
			if(mpz_divisible_ui_p(p, b[l])) {
				I = GAS(y, b[l], Y);
				/*if(putImpl[I] + W > P1[l]) {
					goto m1;
				}*/

				l < H? PTMPZMULSUBST1(ab, sm, e1, div1[gm], sum1[gm], W, sumInt[I], doi) : PTMPZMULSUBST2(ab, sm, e1, divdiv[gm], divsum[gm], W, sumInt[I], doi);
				}
			else
				{
				l < H? PTMPZMMULSUBST(ab, sm, div1[l], sum1[l], W, e1, prodnum) : PTMPZMULSUBST(ab, sm, divdiv[gm], divsum[gm], W, e1, prodnum);
				}
			}

		while(1) {//Împărțire
			if(!R--)
				break;
			l = r1.IntegerC(0, Y-1);
			if(PREZ(y[l], Verif, h))
				continue;
			Verif[h++] = y[l];
			I = r1.IntegerC(1, putImpl[l]);
			gm = A2[l];
			l < ssq? PTMPZDIVSUBST1(ab, sm, div1[gm], sum1[gm], I, sumInt[l], e1, catnum) : PTDIVSUBST(ab, sm, y[l], e1, catnum);
			}

		if(mpz_cmp_ui(prodnum, 1)) {
			mpz_mul(doi, unu, prodnum);
			v = 1;
			}
		
		if(mpz_cmp_ui(catnum, 1)) {
			v? mpz_divexact(doi, doi, catnum) : mpz_divexact(doi, unu, catnum);
			}
		
		if( (mpz_cmp_ui(ab, PRAG) < 0) /*|| !(mpz_cmp_ui(ab, 1048576) + mpz_cmp_ui(ab, e)) */) {
			SCRIE(doi, G, F2);
			}
		}

	fgets(Q1, 1920, f1);
	if( !(strlen(Q1) ^ sus) )
		break;
	}

fclose(f1);
fclose(F2);
printf("%d\n", e);
mpz_clears(unu, doi, trei, d, d1, e1, p, ab, sm, sumDoi, divDoi, prodnum, catnum, NULL);
for(e = 0; e < 421; e++)
	mpz_clears(C[e], J[e], NULL);
}


int main(int argc, char **argv) {
if(argc < 6) {
	return 1;
	}

TOL(argv);
return 0;
}
