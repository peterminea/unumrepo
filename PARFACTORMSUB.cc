//CF52:  1401+0 94
//CF80:  1517+3 94
//CF100: 1375+3 103
//CF130: 1701+3 116
//CF160: 1925+3 139
//CF240: 1884+5 150
//CF420: 2157+21 171
//TOTUL: 4773+421 357

#include "/TOLNUM.h"
#include <RandomLib/Random.hpp>

#define U D52
using namespace RandomLib;
#include<time.h>
#define FDIM 800
#define DDIM 100*NT


void TOL(char **arg) {

if(arg[4][0] < 'c') {
	PREP1(arg);
	return;
}

Random r1;
r1.Reseed();
char t, *tt, TEXT[80], G[1920], Q1[1920], I1[70] = "/DEPOUL.NUM2";
int mem[576], putImpl[FDIM], P[U], f, h, Y, W, D, E, e, H, K, l, I, r, pDoi, doiSus, s, S, S1, u, v, V, K0, H2, D2, ssq, gm, A2[FDIM], P1[U], jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10);
gmp_ui b[U], b1[U], b2[U], j, y[300], sumInt[500], /*Verif[FDIM],*/ div1[H1+40][MAX2], sum1[H1+40][MAX2], SUMDOI1[64], PP, R;
FILE *f1, *F2;
mpz_t C[1540], unu, trei, d, p;
mpz_t divdiv[U-H1][3], divsum[U-H1][3];
mpz_t div[H1][MAX1], sum[H1][MAX1];
INIT(H1, div, sum);

for(R = 0; R < U; R++)
	b2[R] = 1;

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);	
if(arg[4][0] == 'd') {
	REN3(I1);
}

mpz_init_va(unu, trei, d, p, NULL);
for(e = 0; e < 1540; e++)
	mpz_inits(C[e], J[e], NULL);

TXT(sus, TEXT);
if(sus > 52)
	return;

W = N52;
H = H52;
GENMIN(52, b, D, H, 0);
H2 = H;
D2 = D;

for(f = 0; f < U; f++)
	b1[f] = b[f];
INV2(0, 0, b, H2, D2);
for(int i = 0; i < U-H1; i++)
for(int j = 0; j < 3; j++)
	mpz_inits(divdiv[i][j], divsum[i][j], NULL);

//UNIFACTSUBM(1910, b, b1, b2, C, J, D, E, H, K, div, sum, divdiv, divsum, div1, sum1, mem, P, P1, unu, d, trei, SUMDOI, 2580, 1, NPS);
//UNIFACTSUB(210, b, b1, b2, D, H, div1, sum1, divdiv, divsum, P, P1, unu, d, trei, SUMDOI, 280, 1);
UNIFACTMSUB(52, b, b1, b2, D, H, div1, sum1, divdiv, divsum, P, P1, unu, d, trei, SUMDOI1, 64, 1);

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
putchar('\n');

mpz_t prodnum[DDIM], catnum[DDIM], doi[DDIM], treii[DDIM], d1[DDIM];
for(int i = 0; i < DDIM; i++)
	mpz_inits(prodnum[i], catnum[i], doi[i], treii[i], d1[i], NULL);	

while(1) {
	mpz_set_str(unu, Q1, 10);
	S = mpz_scan1(unu, 0);
	//ADUNDIVPM(unu, d, sumInt, sumMpz, z, y, S, SUMDOI[S], putImpl, r, b1, b2, C, J, H2, D2, Y = 0, E, s = 0, sumIntMpz, K0, u = 0, A2, b, K, D, ssq, div1, sum1, div, sum, mem, p);
	//ADUNDIVP(unu, d, sumInt, y, R, SUMDOI[S], putImpl, r, b1, H2, D2, Y = 0, S, ssq, b2, div1, sum1, p);
	ADUNDIVMP(unu, d, sumInt, y, R, SUMDOI1[S], putImpl, r, b1, H2, D2, Y = 0, S, ssq, b2, div1, sum1, p);
	//De vectorizat: prodnum, catnum, doi, d1 cu dimensiunea lui f. Verif trebuie declarat intern.
	//f = DDIM;
	
	#pragma omp parallel num_threads(NT)
	#pragma omp single nowait
	{
	for(f = DDIM-1; f >= 0; f--) {
		int h, r, pDoi, doiSus, v, V, W, gm, I, S1, l;
		gmp_ui Verif[FDIM], R;
		
		do {
			r = r1.IntegerC(0, 10);// *
			R = r1.IntegerC(0, 8);// /			
				}
		while (!r && !R);

		if(R > Y)
			R = r1.IntegerC(0, Y);
		//if( (!r && !R) )
			//continue;

		mpz_set_ui(prodnum[f], 1);
		mpz_set_ui(catnum[f], 1);
		mpz_set_ui(doi[f], 1);
		v = 0;
		mpz_set(treii[f], d);
		pDoi = r1.IntegerC(0, 1);

		if(pDoi) {
			s2:
			pDoi = r1.IntegerC(1, 10);//Puteri de 2.
			doiSus = r1.IntegerC(0, 1);//Puterea de 2 a numărului de bază crește sau scade.
			if( (!doiSus) && (pDoi > S) )
				goto s2;

			doiSus? PDOIMSUS(prodnum[f], treii[f], sumDoi, pDoi, SUMDOI1, S) : PDOIMJOS(catnum[f], treii[f], sumDoi, pDoi, SUMDOI1, S);	
			}

		h = 0;
		while(1) {//Înmulțire.
			if(!r--)
				break;
			m1:
			l = r1.IntegerC(0, U-1);
			if(PREZ(b1[l], Verif, h))
				goto m1;
			Verif[h++] = b1[l];
			W = r1.IntegerC(1, P1[l]);
			gm = (l < H)? l : l - H;

			if(mpz_divisible_ui_p(p, b1[l])) {//goto m1;//trei e suma divizorilor.				
				I = GAS(y, b1[l], Y);
				S1 = putImpl[I] + W;
				if(S1 > P1[l]) {
					goto m1;
				}
				
				l < H? MPZMULSUBST1(prodnum[f], treii[f], div1[gm], sum1[gm], W, putImpl[I], sumInt[I]) : MPZMULSUBST2(prodnum[f], treii[f], divdiv[gm], divsum[gm], W, putImpl[I], sumInt[I]);
				}
			else	{
				l < H? MULSUBST(prodnum[f], treii[f], div1[l], sum1[l], W) : MPZMULSUBST(prodnum[f], treii[f], divdiv[gm], divsum[gm], W);
				}
			}

		while(1) {//Împărțire; să nu se refolosească la împărțire un factor prim deja folosit la înmulțire.
			if(!R--)
				break;
			m2:
			l = r1.IntegerC(0, Y-1);
			if(PREZ(y[l], Verif, h))
				continue;			
			Verif[h++] = y[l];
			I = r1.IntegerC(1, putImpl[l]);
			gm = A2[l];
			l < ssq? MPZDIVSUBST2(catnum[f], treii[f], div1[gm], sum1[gm], I, putImpl[l], sumInt[l]) : DIVSUBST(catnum[f], treii[f], y[l], sumInt[l]);
			}

		if(mpz_cmp_ui(prodnum[f], 1)) {
			mpz_mul(doi[f], unu, prodnum[f]);
			v = 1;
			}

		if(mpz_cmp_ui(catnum[f], 1)) {
			v? mpz_divexact(doi[f], doi[f], catnum[f]) : mpz_divexact(doi[f], unu, catnum[f]);
			v = 1;
			}

		if(v && VALID4(doi[f], d1[f], treii[f]) == 1) {			
			#pragma omp critical
			SCRIE(doi[f], G, F2);
			}
		}
	}
		
	fgets(Q1, 1920, f1);
	if(
	//!(strlen(Q1) ^ sus)
	!(ftell(f1) ^ PP)
	)
		break;
	}

fclose(f1);
fclose(F2);
mpz_clears(unu, doi, trei, d, d1, p, NULL);
for(e = 0; e < 1540; e++)
	mpz_clears(C[e], J[e], NULL);
	
for(e = 0; e < DDIM; e++)
	mpz_clears(prodnum[e], catnum[e], doi[e], treii[e], d1[e]);
}


int main(int argc, char **argv) {
if(argc < 6) {
	return 1;
	}

TOL(argv);
return 0;
}
