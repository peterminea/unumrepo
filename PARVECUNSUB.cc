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

#define U D1910+20
using namespace RandomLib;
#include<time.h>
#define FDIM 800
#define DDIM 10000*NT

mpz_t prodnum[DDIM], catnum[DDIM], doi[DDIM], treii[DDIM], d1[DDIM];


void TOL(char **arg) {

if(arg[4][0] < 'c') {
	PREP1(arg);
	return;
}

Random r1;
r1.Reseed();
char t, *tt, TEXT[80], G[1920], Q1[1920], I1[70] = "/DEPIZDACU.NUM2";
int mem[576], putImpl[FDIM], P[U], f, h, Y, W, D, E, e, H, K, l, I, r, pDoi, doiSus, s, S, S1, u, v, V, K0, H2, D2, ssq, gm, A2[FDIM], P1[U], jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10);
gmp_ui b[U], b1[U], b2[U], j, y[300], sumInt[500], /*Verif[FDIM],*/ div1[H1+40][MAX2], sum1[H1+40][MAX2], PP, R;
FILE *f1, *F2;
mpz_t C[1540], unu, trei, d, p, J[1540], z[160], sumMpz[160], sumIntMpz[160], SUMDOI[2580];
mpz_t divdiv[U-H1][3], divsum[U-H1][3];
mpz_t div[H1][MAX1], sum[H1][MAX1];
INIT(H1, div, sum);

for(R = 0; R < U; R++)
	b2[R] = 1;
for(e = 0; e < 160; e++)
	mpz_inits(z[e], sumMpz[e], sumIntMpz[e], NULL);

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);
if(arg[4][0] == 'd') {
	REN3(I1);
}

mpz_init_va(unu, trei, d, p, NULL);
for(e = 0; e < 1540; e++)
	mpz_inits(C[e], J[e], NULL);

//TXT(sus, TEXT);
strcpy(TEXT, "/N3.TXT");

K = 20;
W = N1910;
H = H1;
GEN(U, W, b, C, D, E, "/CFV1910.TXT");//CFV1910.TXT, P2.TXT, PRIME2.TXT.
K0 = K;
H2 = H;
D2 = D;

for(f = 0; f < U; f++)
	b1[f] = b[f];
INV(b1, C, H, D, E);
for(int i = 0; i < 2580; i++) mpz_inits(SUMDOI[i], NULL);
for(int i = 0; i < U-H1; i++)
for(int j = 0; j < 3; j++)
	mpz_inits(divdiv[i][j], divsum[i][j], NULL);

UNIFACTSUBM(1910, b, b1, b2, C, J, D, E, H, K, div, sum, divdiv, divsum, div1, sum1, mem, P, P1, unu, d, trei, SUMDOI, 2580, 1, NPS);

jos += 2, sus += 2;
PP = LUNGHEZ2(TEXT);
f1 = fopen(TEXT, "r");

if(!URC(f1, jos, Q1, t, 500L, PP, arg[5][0])) {
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
//for(int i = 0; i < H; i++) printf("%llu ", b[i]);
putchar('\n');

for(int i = 0; i < DDIM; i++)
	mpz_inits(prodnum[i], catnum[i], doi[i], treii[i], d1[i], NULL);	

while(1) {
	mpz_set_str(unu, Q1, 10);
	S = mpz_scan1(unu, 0);
	ADUNDIVPM(unu, d, sumInt, sumMpz, z, y, S, SUMDOI[S], putImpl, r, b1, b2, C, J, H2, D2, Y = 0, E, s = 0, sumIntMpz, K0, u = 0, A2, b, K, D, ssq, div1, sum1, div, sum, mem, p);
	//De vectorizat: prodnum, catnum, doi, d1 cu dimensiunea lui f. Verif trebuie declarat intern.
	//f = DDIM;
	
	#pragma omp parallel num_threads(NT)
	#pragma omp single nowait
	{
	for(f = DDIM-1; f >= 0; f--) {
/*
	while(1) {
		if(!(f--))
			break;*/
		int h, r, pDoi, doiSus, v, W, gm, I, S1, l;
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
			doiSus? PDOISUS(prodnum[f], treii[f], SUMDOI, pDoi, S) : PDOIJOS(catnum[f], treii[f], SUMDOI, pDoi, S);			
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
				
				(I < s) && (S1 > mem[l])
				?
					MPZMMULSUBST1(prodnum[f], treii[f], W, div[l], sum[l], S1, sumIntMpz[I])
					:
					(l < H? MPZMULSUBST1(prodnum[f], treii[f], div1[l], sum1[l], W, S1, sumInt[I]) 
					: MPZMULSUBST2(prodnum[f], treii[f], divdiv[gm], divsum[gm], W, S1, sumInt[I]));
				}
			else	{
			l >= H? MPZMULSUBSTE(prodnum[f], treii[f], divdiv[gm], divsum[gm], W) :
				( (l >= H-K) && (W > mem[gm])
				?
					MPZMULSUBST(prodnum[f], treii[f], div[l], sum[l], W)//div1[l], sum1[l], mem[l]
					:
					MULSUBST(prodnum[f], treii[f], div1[l], sum1[l], W));
					;				
				}
			}
		//if(1==2)
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
			(l < s) && (mem[gm] < putImpl[l])
			?
				MPZMDIVSUBST(catnum[f], treii[f], div[gm], sum[gm], I, putImpl[l], sumIntMpz[l])
				: (l < ssq? MPZDIVSUBST2(catnum[f], treii[f], div1[gm], sum1[gm], I, putImpl[l], sumInt[l]) : DIVSUBST(catnum[f], treii[f], y[l], sumInt[l]));
			}
	//FACTORII PRIMI PESTE 2^64:
		//if(1==2)
		if(pDoi && u) {
			r = r1.IntegerC(0, 10);//MPZ_T
			R = r1.IntegerC(0, 2);

			if( (r+R) && (R < u)) {
				S1 = r;
				V = R;//Numai puteri-unitate.
				mpz_t verifMpz[40];
				for(h = 0; h < 40; h++) mpz_init(verifMpz[h]);
				h = 0;
			
				while(1) {//Înmulțire.
					if(!S1--)
						break;
					l = r1.IntegerC(0, E-1);
					if(PREZM(C[l], verifMpz, h, 0) || mpz_divisible_p(p, C[l]))
						continue;
					mpz_set(verifMpz[h++], C[l]);
					MPZMULSUBSTM(prodnum[f], treii[f], C[l], J[l]);
					}

				while(1) {//Împărțire.
					if(!V--)
						break;
					l = r1.IntegerC(0, u-1);				
					if(!mpz_divisible_p(p, z[l]))
						continue;
					MPZDIVSUBSTM(catnum[f], treii[f], z[l], sumMpz[l]);
					}
				}
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
			//gmp_printf("unu %Zd\n\nSUMSUM1 %Zd %Zd %Zd %Zd\n\n", unu, doi, trei, prodnum, catnum);
			/*SUMIMENS(doi, prodnum, C, J, b1, b2, D, E, H, K, mpz_scan1(doi, 0), div1, sum1, div, sum, mem, p, catnum);
			if(!(VALID4(doi, d1, prodnum) == 1)) {
				gmp_printf("unu %Zd %Zd\nSUMSUM2 %Zd %Zd\n\n\n", unu, doi, trei, prodnum);
				exit(0);
			}*/
			#pragma omp critical
			SCRIE(doi[f], G, F2);
			//exit(0);
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
