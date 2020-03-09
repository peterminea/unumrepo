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


void TOL(char **arg) {

if(arg[4][0] < 'c') {
	PREP1(arg);
	return;
}

Random r1;
r1.Reseed();
char t, *tt, TEXT[80], G[1920], Q1[1920], I1[70] = "/GIELDO.NUM2";
int mem[576], putImpl[FDIM], P[U], f, h, Y, W, D, E, e, H, K, l, I, r, pDoi, doiSus, s, S, S1, u, v, V, K0, H2, D2, ssq, gm, A2[FDIM], P1[U], jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10);
gmp_ui b[U], b1[U], b2[U], j, y[300], sumInt[500], Verif[FDIM], div1[H1+40][MAX2], sum1[H1+40][MAX2], PP, R;
FILE *f1, *F2;
mpz_t C[E1], unu, doi, trei, d, d1, p, J[E1], z[160], verifMpz[160], sumMpz[160], sumIntMpz[160], prodnum, catnum, SUMDOI[2580];
mpz_t divdiv[U-H1][3], divsum[U-H1][3];
mpz_t div[K2][MAX1], sum[K2][MAX1];
INIT(K2, div, sum);

for(R = 0; R < U; R++)
	b2[R] = 1;
for(e = 0; e < 160; e++)
	mpz_inits(z[e], verifMpz[e], sumMpz[e], sumIntMpz[e], NULL);

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);	
if(arg[4][0] == 'd') {
	REN3(I1);
}

mpz_init_va(unu, doi, trei, d, d1, p, prodnum, catnum, NULL);
for(e = 0; e < E1; e++)
	mpz_inits(C[e], J[e], NULL);

GENGEN(b, C, D, E, H, K, S, 1910, 1);
K0 = K;
H2 = H;
D2 = D;

for(f = 0; f < U; f++)
	b1[f] = b[f];
for(int i = 0; i < 2580; i++) mpz_inits(SUMDOI[i], NULL);
for(int i = 0; i < U-H1; i++)
for(int j = 0; j < 3; j++)
	mpz_inits(divdiv[i][j], divsum[i][j], NULL);

UNIFACTSUBM(1910, b, b1, b2, C, J, D, E, H, K, div, sum, divdiv, divsum, div1, sum1, mem, P, P1, unu, d, trei, SUMDOI, 2580, 1, NPS);

jos += 2, sus += 2;
PP = LUNGHEZ2(TEXT);
f1 = fopen(TEXT, "r");

if((jos == sus) && (sus == NUME(TEXT))) {
	jos--;
	arg[5][0] = '9';
}
/*
if((sus == NUME(TEXT)) && (sus-jos == UNIT(NUME(TEXT))) && (arg[5][0] == '1')) {
	PP2 = PP;
} else */{
	f = (jos == NUME(TEXT) - UNIT(NUME(TEXT))) && (arg[5][0] == '1')? 0 : URC1(f1, jos, Q1, t, 500000000L, PP, arg[5][0]);
	//PP2 = sus ^ NUME(TEXT)? URC1(f1, sus, Q1, t, 500000000L, PP, '1') : PP;
	//fseek(f1, PP1-PP2, SEEK_CUR);
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
//putchar('\n');

int dec = H-K, pl, ql;

while(1) {
	mpz_set_str(unu, Q1, 10);
	S = mpz_scan1(unu, 0);
	ADUNDIVPM(unu, d, sumInt, sumMpz, z, y, S, SUMDOI[S], putImpl, r, b1, b2, C, J, H2, D2, Y = 0, E, s = 0, sumIntMpz, K0, u = 0, A2, b, K, D, ssq, div1, sum1, div, sum, mem, p);
	f = 600;

	while(1) {
		if(!(f--))
			break;
		r = r1.IntegerC(0, 16);// *
		R = r1.IntegerC(0, 10);// /
		if(R > Y)
			R = r1.IntegerC(0, Y);			
		if( (!r && !R) )
			continue;

		mpz_set_ui(prodnum, 1);
		mpz_set_ui(catnum, 1);
		mpz_set_ui(doi, 1);
		v = 0;
		mpz_set(trei, d);
		pDoi = r1.IntegerC(0, 1);

		if(pDoi) {
			s2:
			pDoi = r1.IntegerC(1, 10);//Puteri de 2.
			doiSus = r1.IntegerC(0, 1);//Puterea de 2 a numărului de bază crește sau scade.
			if( (!doiSus) && (pDoi > S) )
				goto s2;
			doiSus? PDOISUS(prodnum, trei, SUMDOI, pDoi, S) : PDOIJOS(catnum, trei, SUMDOI, pDoi, S);
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
			pl = l-dec;

			if(mpz_divisible_ui_p(p, b1[l])) {//goto m1;//trei e suma divizorilor.				
				I = GAS(y, b1[l], Y);
				S1 = putImpl[I] + W;
				if(S1 > P1[l]) {
					goto m1;
				}
				
				
				(I < s) && (S1 > mem[l])
				?
					(putImpl[I] > mem[l] && W > mem[l]? MPZMMULSUBST1(prodnum, trei, div[pl][W-mem[l]], sum[pl][S1-mem[l]], sumIntMpz[I]) 
					   : putImpl[I] > mem[l]? MPZ3MMULSUBST1(prodnum, trei, div1[l][W], sum[pl][S1-mem[l]], sumIntMpz[I])
					  : W > mem[l]? MPZ2MMULSUBST1(prodnum, trei, div[pl][W-mem[l]], sum[pl][S1-mem[l]], sumInt[I]) 
					    : MPZ4MMULSUBST1(prodnum, trei, div1[l][W], sum[pl][S1-mem[l]], sumInt[I]))
					:
					(l < H? MPZMULSUBST1(prodnum, trei, div1[l][W], sum1[l][S1], sumInt[I]) 
					: MPZMULSUBST2(prodnum, trei, divdiv[gm][W], divsum[gm][S1], sumInt[I]));
				}
			else	{
			ql = W-mem[gm];
			l >= H? MPZMULSUBSTE(prodnum, trei, divdiv[gm][W], divsum[gm][W]) :
				( (l >= dec) && (W > mem[gm])
				?
					MPZMULSUBST(prodnum, trei, div[pl][ql], sum[pl][ql])//div1[l], sum1[l], mem[l]
					:
					MULSUBST(prodnum, trei, div1[l][W], sum1[l][W]));
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
				(I > mem[gm] && putImpl[l] - I > mem[gm]?
				    MPZMDIVSUBST(catnum, trei, div[gm-dec][I-mem[gm]], sum[gm-dec][putImpl[l]-I-mem[gm]], sumIntMpz[l]) 
				    : I > mem[gm]? MPZ3MDIVSUBST(catnum, trei, div[gm-dec][I-mem[gm]], sum1[gm][putImpl[l]-I], sumIntMpz[l]) 
				        : putImpl[l]-I  > mem[gm]? MPZ4MDIVSUBST(catnum, trei, div1[gm][I], sum[gm-dec][putImpl[l]-I-mem[gm]], sumIntMpz[l]) 
				         : MPZ2MDIVSUBST(catnum, trei, div1[gm][I], sum1[gm][putImpl[l]-I], sumIntMpz[l])
				)
				: (l < ssq? MPZDIVSUBST2(catnum, trei, div1[gm][I], sum1[gm][putImpl[l]-I], sumInt[l]) : DIVSUBST(catnum, trei, y[l], sumInt[l]));
			}
	//FACTORII PRIMI PESTE 2^64:
		//if(1==2)
		if(pDoi && u) {
			r = r1.IntegerC(0, 10);//MPZ_T
			R = r1.IntegerC(0, 2);

			if( (r+R) && (R < u)) {
				S1 = r;
				V = R;//Numai puteri-unitate.
				h = 0;
			
				while(1) {//Înmulțire.
					if(!S1--)
						break;
					l = r1.IntegerC(0, E-1);
					if(PREZM(C[l], verifMpz, h, 0) || mpz_divisible_p(p, C[l]))
						continue;
					mpz_set(verifMpz[h++], C[l]);
					MPZMULSUBSTM(prodnum, trei, C[l], J[l]);
					}

				while(1) {//Împărțire.
					if(!V--)
						break;
					l = r1.IntegerC(0, u-1);				
					if(!mpz_divisible_p(p, z[l]))
						continue;
					MPZDIVSUBSTM(catnum, trei, z[l], sumMpz[l]);
					}
				}
			}	

		if(mpz_cmp_ui(prodnum, 1)) {
			mpz_mul(doi, unu, prodnum);
			v = 1;
			}

		if(mpz_cmp_ui(catnum, 1)) {
			v? mpz_divexact(doi, doi, catnum) : mpz_divexact(doi, unu, catnum);
			v = 1;
			}

		if(v && VALID4(doi, d1, trei) == 1) {
			SCRIE(doi, G, F2);
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
for(e = 0; e < E1; e++)
	mpz_clears(C[e], J[e], NULL);
}


int main(int argc, char **argv) {
if(argc < 6) {
	return 1;
	}

TOL(argv);
return 0;
}
