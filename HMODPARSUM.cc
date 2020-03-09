 #include "/TOLIL.h"
 #include "/NMODIFSUM.h"
 #define FDIM 600
//De prelucrat MODPRIMSUM după modelul PUTERNUM.

void TOL(char **arg) {

if(arg[4][0] < 'c') {//84 88
	PREP1(arg);
	return;
}

mpz_t C[E1], C1[E1], div[H1][MAX1], sum[H1][MAX1], unu, doi, trei, d, d1, d2, d3, d4, nr2, nm2, p1, q1[2580];
gmp_ui b[D1], b1[D1], div1[FDIM][MAX2], sum1[FDIM][MAX2], q0[64], PP, PP1, PP2, A1[FDIM], A2[FDIM], A3[FDIM], A4[FDIM], AG[FDIM], e, nr, nm, b2[D1], divdoi1[64], sumdoi1[64], AK[H1-K2], ANK[FDIM], m1[FDIM], m2[FDIM], m3[FDIM], n1[FDIM], n2[FDIM], n3[FDIM], w1[FDIM], w2[FDIM], w3[FDIM];
FILE *f1, *F2;
char t, *tt, TEXT[80], Q[1920], l1[50] = "/run/media/root/T1/EFIALTI.NUM2";
int mem[600], H2, H3, L, pp = 0, pp1 = 0, m, n, p, D, E, H, K, S, f, W, I, R, r, u1, jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10), k, knk, nk, sep;

gmp_ui FACT[FDIM][MS];
gmp_ui FACT1[FDIM][MS];
gmp_ui FACT2[FDIM][MS];
gmp_ui FACT3[FDIM][MS];
int FACTLEG[FDIM][MS1], PRIMP[FDIM][MS1], FACTLEG1[FDIM][MS1], PRIMP1[FDIM][MS1], FACTLEG2[FDIM][MS1], PRIMP2[FDIM][MS1], FACTLEG3[FDIM][MS1], PRIMP3[FDIM][MS1];
int FACTAUX[FDIM][MS1], FACTAUX1[FDIM][MS1], FACTAUX2[FDIM][MS1], FACTAUX3[FDIM][MS1];
gmp_ui SFACT[FDIM][MS], SFACT2[FDIM][MS];
int SFACTLEG[FDIM][MS1], SPRIMP[FDIM][MS1], SFACTLEG2[FDIM][MS1], SPRIMP2[FDIM][MS1];

int doi0[FDIM], doiul[400], doi1[400], doi2[400], doi3[400];
mpz_t nmnm[FDIM], nrnr[FDIM];

for(int i = 0; i < FDIM; i++) mpz_inits(nmnm[i], nrnr[i], NULL);
INIT(K2, div, sum);

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(l1);
}

for(int i = 0; i < E1; i++) {
	mpz_init(C1[i]);
}

for(r = 0; r < 64; r++) {	
	mpz_ui_pow_ui(d1, 2, r);
	divdoi1[r] = mpz_get_ui(d1);
	sumdoi1[r] = (divdoi1[r]<<1) - 1;
	}

mpz_init_va(unu, doi, trei, d, d1, d2, d3, d4, nr2, nm2, p1, NULL);
f1 = fopen("/COEFLEG.TXT", "r");
R = 0;
H2 = strtol(arg[8], &tt, 10), H3 = strtol(arg[7], &tt, 10);

while(1) {	
	fscanf(f1, "%llu", &e);
	if(e > H2)
		break;
	if( !(e & 1) && !EPRIM(e) && (e > H3)) {
		A2[R++] = e;
	}
}

fclose(f1);
for(e = 0; e < R; e++) printf("%d ", A2[e]);
putchar('\n');
printf("La început R era %d.\n\n", R);
GENGEN(b, C, D, E, H, K, S, sus, sus > 210);
//printf("%d %d %d %d %d %d %d\n%d %d %d %d EVALDE\n", jos, sus, D1, E1, N0, H1, K2, D, E, H, K);
f = R, r = arg[6][0] == 's'? 1 : 0;
ARANJFACT(0, D, b, b1, u1, f, m1, A2, A3, doi0, e, H, 0, r, 1);//1 cu H.
printf("\n%d %d\n\n", f, u1);//A2 are cele 80. A3 ia din b. A3 trebuie să își ia puterile din div, div1, sum, sum1.
UNIFACTUS(sus, b, b1, C, C1, D, E, H, K+S, div, sum, div1, sum1, mem, q1, q0, 1);
TILOIVER(AG, A2, A1, f, divdoi1, A4, sep);
DIVPARNUM(f, u1, H, H2, K, S, b, A1, m1, m2, m3, n1, n2, n3, w1, w2, w3, k, knk, nk, A2, A3, pp, m, n, p, D, div1, sum1, div, sum, d, d1, FACT, FACTLEG, FACT1, FACTLEG1, FACT2, FACTLEG2, FACT3, FACTLEG3, PRIMP, PRIMP1, PRIMP2, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, divdoi1, doi0, doi1, doi2, doi3, A4, doiul, sep);

W = f;
jos += 2, sus += 2;
PP = LUNGHEZ2(TEXT);
f1 = fopen(TEXT, "r");
PP1 = URC1(f1, jos, Q, t, 500000000L, PP, arg[5][0]);
if(t != 'c') {
	printf("%llu Nu e numărul.\n", ftell(f1));
	//return;
}

rewind(f1);
PP2 = URC1(f1, sus, Q, t, 500000000L, PP, '1');
rewind(f1);
fseek(f1, PP1, SEEK_CUR);

do {	
	fgets(Q, 1920, f1);	
	fscanf(f1, "%llu%llu", &nr, &nm);	
	if(ftell(f1) > strlen(Q) + 17) fseek(f1, 1, SEEK_CUR);
	} while(!CIF(Q, strlen(Q), jos-1, sus+1)
//|| (Q[1] < '8')
);
if(ftell(f1) > strlen(Q) + 17) fseek(f1, -1, SEEK_CUR);

if(LUNGHEZ2(l1)) {
	fclose(f1);
	return;
}

F2 = fopen(l1, "w");
r? printf("Pe sus. ") : printf("Pe jos. ");
printf("De scris: %s .\n", l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], H3, H2, r);
if(sep && !W && !r)
	return;
MODPARSUM(Q, PP2, f1, W, unu, doi, A4, AG, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, F2, mem, sumdoi1, doi0, nr, nm, sus, r, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p1, q1, q0, doiul, sep);

fclose(f1);
fclose(F2);
REN1(l1);
printf("KAPUTT\n");
mpz_clears(unu, doi, trei, d, d1, d2, d3, d4, nm2, nr2, p1, NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

TOL(argv);
return 0;
}
