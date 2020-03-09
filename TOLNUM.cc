 #include "/TOLIL.h"
 #include "/Z.h"
 #define FDIM 10000
//De prelucrat TOLNUM după modelul PUTERNUM.
// ./tolnum 0 1 /N.TXT a 1 s 2 10
gmp_ui FFACT[FDIM][10], FD[FDIM];
gmp_ui FFACT1[7000][10], FD1[7000];
gmp_ui FACT2[FDIM][10], FD2[FDIM];
gmp_ui FACT3[7000][10], FD3[7000];
gmp_ui AA2[FDIM], AG[FDIM], m1[FDIM], m2[FDIM], m3[FDIM],  n1[FDIM], n2[FDIM], n3[FDIM], w1[FDIM], w2[FDIM], w3[FDIM];
int PRIMP[FDIM][10], PRIMP1[FDIM][10], PRIMP2[FDIM][10], PRIMP3[FDIM][10];
int FACTLEG[FDIM][10], FACTLEG1[FDIM][10], FACTLEG2[FDIM][10], FACTLEG3[FDIM][10];

mpz_t summ[FDIM];

void TOL(char **arg) {

if(arg[4][0] < 'c') {//84 88
	PREP1(arg);
	return;
	}

gmp_ui q0[64], divdoi1[64], b[DTOT], bb[DTOT], div1[1000][MAX2], sum1[1000][MAX2], A1[FDIM], A2[FDIM], A3[FDIM], A4[FDIM], AK[H1], ANK[FDIM], b1[D1], PP, PP1, PP2, e, b2[D1];
mpz_t C[E1], C1[E1], div[H1][MAX1], sum[H1][MAX1], unu, doi, trei, d, d1, p1, q[580];
char t, *tt, Q[1920], l1[50] = "/run/media/root/8TB/RODEZ.NUM2";
int mem[600], A5[2000], doi0[FDIM], doi1[400], doi2[400], doi3[400], doiul[200], D, E, H, K, L, H2, H3, pp = 0, pp1 = 0, c = 0, g, m, n, p, f, h, W, l, I, R, r, u, u1, jos, sus, k, knk, nk, sep;
FILE *f1, *F2;

//if(arg[3][0] == '/')
	//strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(l1);
}

for(int i = 0; i < FDIM; i++) mpz_inits(summ[i], NULL);

INIT(H1, div, sum);
for(int i = 0; i < E1; i++) {
	mpz_inits(C[i], C1[i], NULL);
}

for(r = 0; r < 64; r++) {
	divdoi1[r] = 1;
	divdoi1[r] <<= r;
	}

mpz_init_va(unu, doi, trei, d, d1, p1, NULL);
gmp_scanf("%Zd", &unu);
mpz_ui_pow_ui(doi, 10, 210);
mpz_ui_pow_ui(trei, 10, 52);
sus = mpz_cmp(unu, doi) > 0? 1910 : (mpz_cmp(unu, trei) > 0? 210 : 52);

//De luat numai factorii din COEFLEG.TXT, în loc să se urce necondiționat din 1 în 1. De asemenea, factorii primi componenți pot fi cei din vectorul c.
//Factorii vor putea fi citiți dintr-un vector gmp_ui, încărcat, de exemplu, cu câte 100000 de elemente pe rând.
//GENERARE(sus, b, C, D, H, E, K, I, L, K2);//GENERARE și GENERARE2 fără INV() după ele, îl au în ele.
GENERARE3(sus, b, C, D, H, E, K, I, L, sus > 210);
UNIFACTUS(sus, b, b1, C, C1, D, E, H, K, div, sum, div1, sum1, mem, q, q0, 1);
printf("%d %d %d %d %d %d %d\n%d %d %d %d EVALDE\n\n", jos, sus, D1, E1, N0, H1, K2, D, E, H, K);

f1 = fopen("/GIG.TXT", "r");
L = 0;

for(f = 0; f < DTOT; f++) {
	fscanf(f1, "%llu", &e);
	if(!PREZ3(e, b, D, 0)) bb[L++] = e;
	}

fclose(f1);
QS2(bb, 0, L);
jos += 2, sus += 2;
r = arg[6][0] == 's'? 1 : 0;
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
	DIVNUM(f, u1, H, H2, K, b, AK, ANK, m1, m2, m3, k, knk, nk, A2, A3, pp, m, n, p, D, div1, sum1, div, sum, d, d1, FFACT, FACTLEG, FD, FFACT1, FACTLEG1, FD1, FACT2, FACTLEG2, FD2, FACT3, FACTLEG3, FD3, PRIMP, PRIMP1, PRIMP2, PRIMP3);
	W = f;
	TOLMODSUM(Q, W, u1, b, b1, C, C1, unu, d, d1, doi, trei, A2, A3, AK, ANK, m1, m2, m3, k, knk, nk, u1-m, div, sum, div1, sum1, D, E, H, K, F2, mem, m, sus, r, FFACT, FACTLEG, FD, PRIMP, FFACT1, FACTLEG1, FD1, PRIMP1, FACT2, FACTLEG2, FD2, PRIMP2, FACT3, FACTLEG3, FD3, PRIMP3, summ, g, p1, q, q0, c);//Loc de MODIFSUM.

	ARANJFACT2(0, D, b, b1, u1, ff, A1, AA2, A3, A5, e, H, 0, r);
	printf("%d %d\n\n", ff, u1);
	TILOIVER(AG, AA2, A1, ff, divdoi1, A4, sep);//A4 cu sep se tratează separat de tot restul.
	DIVPARNUM(ff, u1, H, H2, K, b, A1, AK, ANK, m1, m2, m3, n1, n2, n3, w1, w2, w3, k, knk, nk, AA2, A3, pp, m, n, p, D, div1, sum1, div, sum, d, d1, FFACT, FACTLEG, FD, FFACT1, FACTLEG1, FD1, FACT2, FACTLEG2, FD2, FACT3, FACTLEG3, FD3, PRIMP, PRIMP1, PRIMP2, PRIMP3, divdoi1, doi0, doi1, doi2, doi3, A4, doiul, sep);
	W = ff;
	TOLMODSPAR(Q, W, u1, unu, d, d1, doi, trei, A3, A4, AG, AK, ANK, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, u1-m, div, sum, div1, sum1, F2, q, doi0, mem, m, sus, r, FFACT, FACTLEG, FD, PRIMP, FFACT1, FACTLEG1, FD1, PRIMP1, FACT2, FACTLEG2, FD2, PRIMP2, FACT3, FACTLEG3, FD3, PRIMP3, summ, g, p1, doiul, sep);//Loc de MODSPAR.
	
	if(ftell(f1) == L)
			break;
}

j1:
if(r) {
	mpz_mul_2exp(doi, unu, 64);
	while(1) {
		g = mpz_scan1(doi, 0);
		mpz_tdiv_q_2exp(p1, doi, g);
		SUMDIVV(p1, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q[g]);
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
			SUMDIVV(p1, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q[g]);
			if(VALID(doi, d1, d) == 1) {
				gmp_printf("%Zd\n", doi);
			}
		}
		mpz_add_ui(trei, trei, 1);
	}
}


fclose(f1);
fclose(F2);
printf("FINE\n");
mpz_clears(unu, doi, trei, d, d1, p1, NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

TOL(argv);
return 0;
}
