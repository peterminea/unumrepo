//CF52:  1401+0 94
//CF80:  1517+3 94
//CF100: 1375+3 103
//CF130: 1701+3 116
//CF160: 1925+3 139
//CF240: 1884+5 150
//CF420: 2157+21 171
//TOTUL: 4773+421 348


#include "/TOLNUM.h"
#include <RandomLib/Random.hpp>
#include<time.h>
#define U D1910
using namespace RandomLib;


void TOL(char **arg) {

if(arg[4][0] < 'c') {
	PREP1(arg);
	return;
}

Random r1;
r1.Reseed();

mpz_t C[800], unu, doi, trei, d, d1, e1, p, J[800], z[125], verifMpz[125], sumMpz[125], sumIntMpz[125], sumdoi, prodnum, catnum, sm, ab, SUMDOI[550], divdiv[U-H1][3], divsum[U-H1][3], div[K2][MAX1], sum[K2][MAX1];
char t, *tt, TEXT[80]/* = "/N3.TXT"*/, G[1920], Q1[1920], I1[70] = "/PALPER.NUM2";
int mem[600], putImpl[550], P[U], P1[U], R, f, h, Y, W, D, E, e, H, K, l, I, r, pDoi, doiSus, jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10), s, S, S1, u, v, V, K0, H2, D2, ssq, gm, A2[160];
gmp_ui b[U], b1[U], b2[U], PP, j, y[550], sumInt[550], M[550], Verif[550], sum0, abund, div1[H1][MAX2], sum1[H1][MAX2];
FILE *f1, *F2;

INIT(K2, div, sum);
for(int i = 0; i < 550; i++) mpz_inits(SUMDOI[i], NULL);
for(int i = 0; i < (U-H1); i++)
for(int j = 0; j < 3; j++)
	mpz_inits(divdiv[i][j], divsum[i][j], NULL);

for(R = 0; R < U; R++)
	b2[R] = 1;
for(e = 0; e < 125; e++)
	mpz_inits(z[e], verifMpz[e], sumMpz[e], sumIntMpz[e], NULL);

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(I1);
}

mpz_init_va(unu, doi, trei, d, d1, p, e1, sumdoi, prodnum, catnum, sm, ab, NULL);
for(e = 0; e < 800; e++)
	mpz_inits(C[e], J[e], NULL);

GENGEN(b, C, D, E, H, K, S, 1910, 1);
K0 = K;
H2 = H;
D2 = D;

for(f = 0; f < U; f++)
	b1[f] = b[f];
UNIFACTSUBM(1910, b, b1, b2, C, J, D, E, H, K, div, sum, divdiv, divsum, div1, sum1, mem, P, P1, unu, d, trei, SUMDOI, 2580, 1, NPS);
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

gmp_ui nr, nm;
fgets(Q1, 1920, f1);
fscanf(f1, "%llu %llu", &nr, &nm);
fseek(f1, 1, SEEK_CUR);

F2 = fopen(I1, "w");
printf("De scris: %s .\n", I1);
RECIDENTE(I1, TEXT, jos-2, sus-2, arg[0], arg[5], 0, 1, 1);
e = PRAG;
int dec = H-K;

while(1) {
	mpz_set_str(unu, Q1, 10);	
	S = mpz_scan1(unu, 0);
	ADUNDIVPM(unu, d, sumInt, sumMpz, z, y, S, SUMDOI[S], putImpl, r, b1, b2, C, J, H2, D2, Y = 0, E, s = 0, sumIntMpz, K0, u = 0, A2, b, K, D, ssq, div1, sum1, div, sum, mem, p);
	f = 1444;
	
	while(1) {
		if(!(f--))
			break;
		r = r1.IntegerC(0, 20);// *
		R = r1.IntegerC(0, 10);// /
		if(R > Y)
			R = r1.IntegerC(0, Y);			
		if( (!r && !R) )
			continue;

		mpz_set_ui(prodnum, 1);
		mpz_set_ui(catnum, 1);
		v = 0;
		mpz_set_ui(sm, nr);
		mpz_set_ui(ab, nm);
		pDoi = r1.IntegerC(0, 1);

		if(pDoi) {
			s2:
			pDoi = r1.IntegerC(1, 10);//Puteri de 2
			doiSus = r1.IntegerC(0, 1);//Puterea de 2 a numărului de bază crește sau scade
			if( (!doiSus) && (pDoi > S) )
				goto s2;
			
			doiSus? PTDOISUS(ab, sm, sumdoi, pDoi, 1U, S, SUMDOI, e1, prodnum) : PTDOIJOS(ab, sm, sumdoi, pDoi, 1U, e1, catnum);
			}
		h = 0;
		//goto n1;
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
			
			if(mpz_divisible_ui_p(p, b[l])) {
				I = GAS(y, b[l], Y);
				S1 = putImpl[I] + W;
				if(S1 > P1[l]) {
					goto m1;
				}
				
				(I < s) && (S1 > mem[l])?
					(PTMPZMMULSUBST1(ab, sm, div[l-dec], sum[l-dec], W, sumIntMpz[I], e1, prodnum) )//: PTMPZ2MMULSUBST1(ab, sm, div[l-dec], sum[l-dec], W, sumInt[I], prodnum))
					//PTMPZMULMSUBST1(ab, sm, div[l], sum[l], W, sumIntMpz[I], e1, prodnum)
					:
					//PTMPZMULSUBSTM1(ab, sm, W, sumInt[I], div1, sum1, doi);
					(l < H? PTMPZMULSUBST1(ab, sm, div1[gm], sum1[gm], W, sumInt[I], e1, doi) : PTMPZMULSUBST2(ab, sm, divdiv[gm], divsum[gm], W, sumInt[I], e1, doi));
				}
			else
				{
				gm ^ l?//Puterea, chiar să fie l de la K în sus, poate fi mai mare de 2^64.
					PTMPZMULSUBST(ab, sm, div[l], sum[l], W, prodnum)
					:
					((l >= dec) && (W > mem[l])? PTMPZMMULSUBST(ab, sm, div1[gm], sum1[gm], W, prodnum) : PTMPZMULSUBST(ab, sm, divdiv[gm], divsum[gm], W, prodnum));
				}
			}
//		goto np;
n1:
		while(1) {//Împărțire
			if(!R--)
				break;
			l = r1.IntegerC(0, Y-1);
			if(PREZ(y[l], Verif, h))
				continue;
			Verif[h++] = y[l];
			I = r1.IntegerC(1, putImpl[l]);
			gm = A2[l];
			(l < s) && (mem[gm] < putImpl[l])?
				PTMPZMDIVSUBST(ab, sm, div[gm-dec], sum[gm-dec], I, sumIntMpz[l], e1, catnum)
				//PTMPZDIVSUBST(ab, sm, div1[l], sum1[l], I, sumIntMpz[l], catnum)
				:
				(l < ssq? PTMPZDIVSUBST1(ab, sm, div1[gm], sum1[gm], I, sumInt[l], catnum) : PTDIVSUBST(ab, sm, y[l], catnum) );
				//mpz_set(catnum, catnum);
			}//goto np;
		if(pDoi && u) {
		r = r1.IntegerC(0, 6);//MPZ_T
		R = r1.IntegerC(0, 4);
	
		if( (r+R) && (R < u)) {
			S1 = r;
			V = R;//Numai puteri-unitate.
			h = 0;
		
			while(1) {//Înmulțire
				if(!S1--)
					break;
				l = r1.IntegerC(0, E-1);
				if(PREZM(C[l], verifMpz, h, 0) || mpz_divisible_p(p, C[l]))
					continue;
				mpz_set(verifMpz[h++], C[l]);					
				PTMPZMULSUBSTM(ab, sm, C[l], J[l], prodnum);
				}
			
			while(1) {//Împărțire
				if(!V--)
					break;
				l = r1.IntegerC(0, u-1);				
				if(!mpz_divisible_p(p, z[l]))
					continue;
				PTMPZDIVSUBSTM(ab, sm, z[l], sumMpz[l], catnum);
				}
			}
		}
np:
		if(mpz_cmp_ui(prodnum, 1)) {
			mpz_mul(doi, unu, prodnum);
			v = 1;
			}
		
		if(mpz_cmp_ui(catnum, 1)) {
			v? mpz_divexact(doi, doi, catnum) : mpz_divexact(doi, unu, catnum);
			}
		
		mpz_gcd(trei, ab, sm);
		mpz_mul_ui(sm, trei, PRAG);
		if( (mpz_cmp(ab, sm) < 0) ) {
			SCRIE(doi, G, F2);
			}
		}

	fgets(Q1, 1920, f1);
	if( !(strlen(Q1) ^ sus) )
		break;

	fscanf(f1, "%llu %llu", &nr, &nm);
	fseek(f1, 1, SEEK_CUR);
	}

fclose(f1);
fclose(F2);
mpz_clears(unu, doi, trei, d, d1, e1, p, sumdoi, prodnum, catnum, sm, ab, NULL);
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
