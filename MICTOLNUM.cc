 #include "/NUM.h"
 #include "/ZVERITON.h"
 #define FDIM 10000
//De prelucrat TOLNUM după modelul PUTERNUM.

gmp_ui FFACT[FDIM][5], FD[FDIM];
gmp_ui AA2[FDIM], AG[FDIM];
int PRIMP[FDIM][5], FACTLEG[FDIM][5];
mpz_t summ[FDIM];

void TOL(char **arg) {

if(arg[4][0] < 'c') {//84 88
	PREP1(arg);
	return;
	}

gmp_ui p1, q[64], q0[64], b[DTOT], bb[DTOT], sum[FDIM], div1[1000][MAX2], sum1[1000][MAX2], divdoi1[64], A1[FDIM], A2[FDIM], A3[FDIM], A4[FDIM], b1[D1], PP, PP1, PP2, e, b2[D1];
mpz_t unu, doi, trei, d, d1;
char t, *tt, Q[1920], l1[50] = "/run/media/root/8TB/RODEZ.NUM2";
int mem[600], A5[2000], doi0[FDIM], doiul[200], D, H, L, H2, H3, pp = 0, pp1 = 0, c = 0, g, m, n, p, f, h, W, l, I, R, r, u, u1, jos, sus, sep;
long double a;
FILE *f1, *F2;

//if(arg[3][0] == '/')
	//strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(l1);
}

for(int i = 0; i < FDIM; i++) mpz_inits(summ[i], NULL);

for(r = 0; r < 64; r++) {
	divdoi1[r] = 1;
	divdoi1[r] <<= r;
	}

mpz_init_va(unu, doi, trei, d, d1, NULL);
gmp_scanf("%Zd", &unu);
mpz_ui_pow_ui(doi, 10, 200);
mpz_ui_pow_ui(trei, 10, 52);
sus = mpz_cmp(unu, doi) > 0? 1910 : (mpz_cmp(unu, trei) > 0? 200 : 52);

//De luat numai factorii din COEFLEG.TXT, în loc să se urce necondiționat din 1 în 1. De asemenea, factorii primi componenți pot fi cei din vectorul c.
//Factorii vor putea fi citiți dintr-un vector gmp_ui, încărcat, de exemplu, cu câte 100000 de elemente pe rând.
//GENERARE(sus, b, C, D, H, E, K, I, L, K2);//GENERARE și GENERARE2 fără INV() după ele, îl au în ele.
MICGENERARE(sus, b, D, H);
VUNIFACTUS(sus, b, b1, D, H, div1, sum1, mem, q, q0, 1);
printf("%d %d %d %d %d\n%d %d EVALDE\n\n", jos, sus, D1, N0, H1, D, H);

f1 = fopen("/GIG.TXT", "r");
L = 0;

for(f = 0; f < DTOT; f++) {
	fscanf(f1, "%llu", &e);
	if(!PREZ3(e, b, D, 0)) bb[L++] = e;
	}

fclose(f1);
QS2(bb, 0, L);
jos += 2, sus += 2;
r = 1;//1 sus, 0 jos.
g = mpz_scan1(unu, 0);
L = LUNGHEZ2("/COEFLEG.TXT");
f1 = fopen("/COEFLEG.TXT", "r");

while(1) {
	R = FDIM;
	f = R;
	
	while(1) {
		fscanf(f1, "%llu", &e);
		if( (!R--) || (ftell(f1) == L) )
			break;
		A2[R] = e;		
	}
	
	for(e = 0; e < f; e++) printf("%d ", A2[e]);
	putchar('\n');
	printf("La început R era %d. Apoi cu u1: ", f);

	R++;//0.
	for(I = 0; I < f; I++) {
		e = 1;
		for(int i = 0; bb[i] < A2[l]; i++)
		if(A2[l] % bb[i] == 0) {e = 0; break;}
		if(e) A2[R++] = A2[I];//A2 cu impari, AA2 cu pari.
	}
	//MAREA DISJUNGERE:
	
	int R1 = 0, R2 = 0, ff;
	for(int i = 0; i < R; i++) {
		A2[i] & 1? A2[R1++] = A2[i] : AA2[R2++] = A2[i];		
	}

	f = R1, ff = R2;
	ARANJFACT2(0, D, b, b1, u1, f, A1, A2, A3, A5, e, H, 0, r);
	printf("%d %d\n\n", f, u1);
	DIVNUM(f, u1, H, H2, b, A2, A3, pp, n, p, D, div1, sum1, d, d1, FFACT, FACTLEG, FD, PRIMP);
	W = f;
	TOLMODSUM(Q, W, u1, b, b1, unu, d, d1, doi, trei, A2, A3, div1, sum1, D, H, F2, sus, r, FFACT, FACTLEG, FD, PRIMP, summ, sum, g, p1, q, q0, tt, a, c, A5);//Loc de MODIFSUM.

	ARANJFACT2(0, D, b, b1, u1, ff, A1, AA2, A3, A5, e, H, 0, r);
	printf("%d %d\n\n", ff, u1);
	TILOIVER(AG, AA2, A1, ff, divdoi1, A4, sep);//A4 cu sep se tratează separat de tot restul.
	DIVPARNUM(ff, u1, H, H2, b, A1, A2, A3, pp, n, p, D, div1, sum1, d, d1, FFACT, FACTLEG, FD, PRIMP, divdoi1, doi0, A4, doiul, sep);
	W = ff;
	TOLMODSPAR(Q, W, u1, unu, d, d1, doi, trei, A2, A3, A4, AG, doi0, div1, sum1, F2, q, sus, r, FFACT, FACTLEG, FD, PRIMP, sum, summ, g, p1, A5, doiul, sep);//Loc de MODSPAR.
	
	if(ftell(f1) == L)
			break;
}

j1:
/*
if(r) {
	mpz_mul_2exp(doi, unu, 64);
	while(1) {
		g = mpz_scan1(doi, 0);
		mpz_tdiv_q_2exp(p1, doi, g);		
		VSME(p1, d, b, b1, D, H, g, div1, sum1, q[g]);
		//SUMDIVV(p1, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q[g]);
		if(VALID(doi, d1, d) == 1) {
			gmp_printf("%Zd\n", doi);
		}
		mpz_add(doi, doi, unu);
	
	}
} else {
	mpz_ui_pow_ui(trei, 2, 64);
	while(1) {
		if(mpz_divisible_p(unu, trei)) {
			mpz_divexact(doi, unu, trei);
			g = mpz_scan1(doi, 0);
			mpz_tdiv_q_2exp(p1, doi, g);
			VSMV();
			SUMDIVV(p1, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q[g]);
			if(VALID(doi, d1, d) == 1) {
				gmp_printf("%Zd\n", doi);
			}
		}
		mpz_add_ui(trei, trei, 1);
	}
*/


fclose(f1);
fclose(F2);
printf("FINE\n");
mpz_clears(unu, doi, trei, d, d1, NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

TOL(argv);
return 0;
}
