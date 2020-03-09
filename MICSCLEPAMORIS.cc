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
#define U D52
using namespace RandomLib;
#include<time.h>

void TOL(char **arg) {

if(arg[4][0] < 'c') {
	PREP1(arg);
	return;
}

Random r1;
r1.Reseed();

mpz_t unu, doi, trei, d, d1, p, prodnum, catnum, divdiv[U-200][3], divsum[U-200][3];
gmp_ui b[U], b1[U], b2[U], j, y[480], sumInt[480], M[480], Verif[480], sumDoi, div1[H1-50][MAX2], sum1[H1-50][MAX2], SUMDOI1[64];
char t, *tt, TEXT[80], G[1920], Q1[1920], I1[70] = "/run/media/root/6T/S73.NUM1";
int jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10), A2[160], P1[U], putImpl[480], P[U], f, h, Y, W, D, e, H, l, I, r, pDoi, doiSus, s, S, u, v, V, K0, H2, D2, ssq, gm;
long PP, R;
FILE *f1, *F2, *Q2, *Q3;

for(R = 0; R < U; R++)
	b2[R] = 1;

for(int i = 0; i < U-200; i++)
for(int j = 0; j < 3; j++)
	mpz_inits(divdiv[i][j], divsum[i][j], NULL);

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(I1);
}

mpz_init_va(unu, doi, trei, d, d1, p, prodnum, catnum, NULL);
strcpy(TEXT, "/GIGM.TXT");
if(sus > 52)
	return;

W = NTOT;
H = H1;
GENMIN2(1910, "/GIG.TXT", b, D, H, 0);
H2 = H;
D2 = D;

for(f = 0; f < U; f++)
	b1[f] = b[f];
INV2(0, 0, b, H2, D2);

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

while(1) {
	mpz_set_str(unu, Q1, 10);
	S = mpz_scan1(unu, 0);
	ADUNDIVMP(unu, d, sumInt, y, R, SUMDOI1[S], putImpl, r, b1, H2, D2, Y = 0, S, ssq, b2, div1, sum1, p);
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
		mpz_set(trei, d);		
		pDoi = r1.IntegerC(0, 1);

		if(pDoi) {
			s2:
			pDoi = r1.IntegerC(1, 12);//Puteri de 2.
			doiSus = r1.IntegerC(0, 1);//Puterea de 2 a numărului de bază crește sau scade.
			if( (!doiSus) && (pDoi > S) || (doiSus && (63 < S + pDoi)) )
				goto s2;
			doiSus? PDOIMSUS(prodnum, trei, sumDoi, pDoi, SUMDOI1, S) : PDOIMJOS(catnum, trei, sumDoi, pDoi, SUMDOI1, S);
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

			if(mpz_divisible_ui_p(p, b[l])) {//trei e suma divizorilor.
				I = GAS(y, b[l], Y);
				if(putImpl[I] + W > P1[l]) {
					goto m1;
				}				
				
				l < H? MPZMULSUBST1(prodnum, trei, div1[gm], sum1[gm], W, putImpl[I], sumInt[I]) : MPZMULSUBST2(prodnum, trei, divdiv[gm], divsum[gm], W, putImpl[I], sumInt[I]);
				}
			else	{
				l < H? MULSUBST(prodnum, trei, div1[gm], sum1[gm], W) : MPZMULSUBST(prodnum, trei, divdiv[gm], divsum[gm], W);
				}
			}
		
		while(1) {//Împărțire; să nu se refolosească la împărțire un factor prim deja folosit la înmulțire.
			if(!R--)
				break;
			m2:
			l = r1.IntegerC(0, Y-1);
			if(PREZ(y[l], Verif, h))
				goto m2;
			gm = A2[l];
			
			Verif[h++] = y[l];
			I = r1.IntegerC(1, putImpl[l]);
			l < ssq? MPZDIVSUBST2(catnum, trei, div1[gm], sum1[gm], I, putImpl[l], sumInt[l]) : DIVSUBST(catnum, trei, y[l], sumInt[l]);
			}
				
		if(mpz_cmp_ui(prodnum, 1)) {
			mpz_mul(doi, unu, prodnum);
			v = 1;
			}

		if(mpz_cmp_ui(catnum, 1)) {
			v? mpz_divexact(doi, doi, catnum) : mpz_divexact(doi, unu, catnum);
			}

		if(VALID4(doi, d1, trei) == 1) {
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
mpz_clears(unu, doi, trei, d, d1, NULL);
}


int main(int argc, char **argv) {
if(argc < 6) {
	return 1;
	}

TOL(argv);
return 0;
}
