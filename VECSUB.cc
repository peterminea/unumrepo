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

mpz_t C[800], unu, doi, trei, d, d1, e1, p, J[800], z[125], verifMpz[125], sumMpz[125], sumIntMpz[125], sumdoi, sumDoi, prodnum, catnum, sm, ab, SUMDOI[550], divdiv[U-H1][3], divsum[U-H1][3], div[H1][MAX1], sum[H1][MAX1];
char t, *tt, TEXT[80]/* = "/N3.TXT"*/, G[1920], Q1[1920], I1[70] = "/PALPER.NUM2";
int mem[600], putImpl[550], P[U], P1[U], R, f, h, Y, W, D, E, e, H, K, l, I, r, pDoi, doiSus, jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10), s, S, S1, u, v, V, K0, H2, D2, ssq, gm, A2[160];
gmp_ui b[U], b1[U], b2[U], PP, j, y[550], sumInt[550], M[550], Verif[550], sum0, abund, div1[H1][MAX2], sum1[H1][MAX2];
FILE *f1, *F2;

INIT(50, div, sum);
for(int i = 0; i < 550; i++) mpz_inits(SUMDOI[i], NULL);
for(int i = 0; i < (U-H1); i++)
for(int j = 0; j < 3; j++)
	mpz_inits(divdiv[i][j], divsum[i][j], NULL);

for(R = 0; R < U; R++)
	b2[R] = 1;
for(e = 0; e < 125; e++)
	mpz_inits(z[e], verifMpz[e], sumMpz[e], sumIntMpz[e], NULL);

if(arg[4][0] == 'd') {
	REN3(I1);
}

mpz_init_va(unu, doi, trei, d, d1, p, e1, sumdoi, sumDoi, prodnum, catnum, sm, ab, NULL);
for(e = 0; e < 800; e++)
	mpz_inits(C[e], J[e], NULL);

strcpy(TEXT, "/N3.TXT");
K = 50;
W = N1910;
H = H1;
GEN(U, W, b, C, D, E, "/P2.TXT");//P2.TXT, PRIME2.TXT.
K0 = K;
H2 = H;
D2 = D;

for(f = 0; f < U; f++)
	b1[f] = b[f];

INV(b1, C, H2, D2, E);
UNIFACTSUBM(1910, b, b1, b2, C, J, D, E, H, K, div, sum, divdiv, divsum, div1, sum1, mem, P, P1, unu, d, trei, SUMDOI, 550, 1, NPS);
jos += 2, sus += 2;
PP = LUNGHEZ2(TEXT);
f1 = fopen(TEXT, "r");

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

//while(1) {
fgets(Q1, 1920, f1);
//if(Q[0] >= '2') break;}
F2 = fopen(I1, "w");
printf("De scris: %s .\n", I1);
RECIDENTE(I1, TEXT, jos-2, sus-2, arg[0], arg[5], 0, 1, 1);
e = 11;

while(1) {
	mpz_set_str(unu, Q1, 10);
	S = mpz_scan1(unu, 0);
	ADUNDIVPM(unu, d, sumInt, sumMpz, z, y, S, sumDoi, putImpl, r, b1, b2, C, J, H2, D2, Y = 0, E, s = 0, sumIntMpz, K0, u = 0, A2, b, K, D, ssq, div1, sum1, div, sum, mem, p);
	f = 144444;
	VALIDN(unu, d1, d, trei);
	
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
		//sum = mpz_get_ui(trei);
		//abund = mpz_get_ui(d1);
		mpz_set_ui(sm, mpz_get_ui(trei));
		mpz_set_ui(ab, mpz_get_ui(d1));		
		pDoi = r1.IntegerC(0, 1);
//		gmp_printf("%Zd sumDoi %Zd %Zd\n", sumDoi, trei, d1);
//		continue;
		if(pDoi) {
			s2:
			pDoi = r1.IntegerC(1, 10);//Puteri de 2
			doiSus = r1.IntegerC(0, 1);//Puterea de 2 a numărului de bază crește sau scade
			if( (!doiSus) && (pDoi > S) )
				goto s2;

			doiSus? PTDOISUS(ab, sm, sumdoi, pDoi, e1, 1U, S, SUMDOI, prodnum) : PTDOIJOS(ab, sm, sumDoi, pDoi, e1, 1U, catnum);
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
					PTMPZMMULSUBST1(ab, sm, div[l], sum[l], W, sumIntMpz[I], e1, prodnum)
					//PTMPZMULMSUBST1(ab, sm, div[l], sum[l], W, sumIntMpz[I], e1, prodnum)
					:
					//PTMPZMULSUBSTM1(ab, sm, e1, W, sumInt[I], div1, sum1, doi);
					(l < H? PTMPZMULSUBST1(ab, sm, e1, div1[gm], sum1[gm], W, sumInt[I], doi) : PTMPZMULSUBST2(ab, sm, e1, divdiv[gm], divsum[gm], W, sumInt[I], doi));
				}
			else
				{
				gm ^ l?//Puterea, chiar să fie l de la K în sus, poate fi mai mare de 2^64.
					PTMPZMULSUBST(ab, sm, div[l], sum[l], W, e1, prodnum)
					:
					((l >= H-K) && (W > mem[l])? PTMPZMMULSUBST(ab, sm, div1[gm], sum1[gm], W, e1, prodnum) : PTMPZMULSUBST(ab, sm, divdiv[gm], divsum[gm], W, e1, prodnum));
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
				PTMPZMDIVSUBST(ab, sm, div[gm], sum[gm], I, sumIntMpz[l], e1, catnum)
				//PTMPZDIVSUBST(ab, sm, div1[l], sum1[l], I, sumIntMpz[l], e1, catnum)
				:
				(l < ssq? PTMPZDIVSUBST1(ab, sm, div1[gm], sum1[gm], I, sumInt[l], e1, catnum) : PTDIVSUBST(ab, sm, y[l], e1, catnum) );
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
				PTMPZMULSUBSTM(ab, sm, C[l], J[l], e1, prodnum);
				}
			
			while(1) {//Împărțire
				if(!V--)
					break;
				l = r1.IntegerC(0, u-1);				
				if(!mpz_divisible_p(p, z[l]))
					continue;
				PTMPZDIVSUBSTM(ab, sm, z[l], sumMpz[l], e1, catnum);
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

		//gmp_printf("UD %Zd %Zd\nPCAT %Zd %Zd %Zd %Zd\n\n", unu, doi, ab, sm, prodnum, catnum);
		if( (mpz_cmp_ui(ab, e) < 0) /*|| !(mpz_cmp_ui(ab, 1048576) + mpz_cmp_ui(ab, e))*/) {
			SCRIE(doi, G, F2);
			}
		}

	fgets(Q1, 1920, f1);
	if( !(strlen(Q1) ^ sus) )
		break;
	}

fclose(f1);
fclose(F2);
mpz_clears(unu, doi, trei, d, d1, e1, p, sumDoi, prodnum, catnum, sm, ab, NULL);
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
