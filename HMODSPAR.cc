 #include "/TOLIL.h"
 #include "/MODIFSUM.h"
 //#include "/ZU.h"
 
//De prelucrat MODSPAR după modelul PUTERNUM.
#define FDIM 600

void TOL(char **arg) {

if(arg[4][0] < 'c') {//84 88
	PREP1(arg);
}

mpz_t C[E1], C1[E1], div[H1][MAX1], sum[H1][MAX1], imp, mul, unu, doi, trei, sumDoi, d, d1, p1, q1[580];
gmp_ui b[D1], div1[650][MAX2], sum1[650][MAX2], divdoi1[64], q0[64], A1[FDIM], A2[FDIM], A3[FDIM], A4[FDIM], AG[FDIM], m1[FDIM], m2[FDIM], m3[FDIM], n1[FDIM], n2[FDIM], n3[FDIM], w1[FDIM], w2[FDIM], w3[FDIM], b1[D1], PP, PP1, PP2, e, b2[D1];
char t, *tt, TEXT[80], Q[1920], l1[50] = "/LATUR.NUM2";
int mem[FDIM], D, E, H, K, S, L, H2, H3, pp = 0, pp1 = 0, m, n, p, f, h, W, I, R, r, u, u1, jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10), k, knk, nk, sep;
FILE *f1, *F2;

int doi0[FDIM], doiul[400], doi1[400], doi2[400], doi3[400];
gmp_ui FACT[FDIM][MS], FACT1[FDIM][MS], FACT2[FDIM][MS], FACT3[FDIM][MS];
int FACTLEG[FDIM][MS1], PRIMP[FDIM][MS1], FACTLEG1[FDIM][MS1], PRIMP1[FDIM][MS1], FACTLEG2[FDIM][MS1], PRIMP2[FDIM][MS1], FACTLEG3[FDIM][MS1], PRIMP3[FDIM][MS1];
int FACTAUX[FDIM][MS1], FACTAUX2[FDIM][MS1];
gmp_ui SFACT[FDIM][MS], SFACT2[FDIM][MS];
int SFACTLEG[FDIM][MS1], SPRIMP[FDIM][MS1], SFACTLEG2[FDIM][MS1], SPRIMP2[FDIM][MS1];

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(l1);
}

for(int i = 0; i < E1; i++) {
	mpz_inits(C[i], C1[i], NULL);
}

for(int i = 0; i < FDIM; i++)
	m1[i] = m2 [i] = m3[i] = n1[i] = n2[i] = n3[i] = doi1[i] = doi2[i] = doi3[i] = doiul[i] = w1[i] = w2[i] = w3[i] = 0;

for(r = 0; r < 64; r++) {
	divdoi1[r] = 1;
	divdoi1[r] <<= r;
	}

mpz_init_va(unu, doi, trei, sumDoi, d, d1, p1, imp, mul, NULL);
mpz_set_ui(imp, 1);
mpz_set_ui(mul, 1);

f1 = fopen("/COEFLEG.TXT", "r");
R = 0;
H2 = strtol(arg[8], &tt, 10), H3 = strtol(arg[7], &tt, 10);

while(1) {
	fscanf(f1, "%llu", &e);
	if(e > H2)
		break;
	if(/*PURO(e, b, D) &&*/ !(e & 1) /*&& !EPRIM(e)*/ && (e > H3)) {
		A2[R++] = e;
	}
}

fclose(f1);/*
for(e = 0; e < R; e++) printf("%d ", A2[e]);
putchar('\n');
printf("La început R era %d.\n\n", R);*/

f = R, r = arg[6][0] == 's'? 1 : 0;
GENGEN(b, C, D, E, H, K, S, sus, sus > 210);
ARANJFACT(0, D, b, b1, u1, f, m1, A2, A3, doi0, e, H, 0, r, 1);
//printf("\n%d %d\n\n", f, u1);
//if(K) 
	INIT(H1, div, sum);
UNIFACTUS(sus, b, b1, C, C1, D, E, H, K, div, sum, div1, sum1, mem, q1, q0, 1);
TILOIVER(AG, A2, A1, f, divdoi1, A4, sep);//A4 cu sep se tratează separat de tot restul.
DIVPARNUM(f, u1, H, H2, K, S, b, A1, m1, m2, m3, n1, n2, n3, w1, w2, w3, k, knk, nk, A2, A3, pp, m, n, p, D, div1, sum1, div, sum, d, d1, FACT, FACTLEG, FACT1, FACTLEG1, FACT2, FACTLEG2, FACT3, FACTLEG3, PRIMP, PRIMP1, PRIMP2, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, divdoi1, doi0, doi1, doi2, doi3, A4, doiul, sep);
printf("SEP e %d.\n", sep);

W = f;
jos += 2, sus += 2;
f1 = fopen(TEXT, "r");
PP = LUNGHEZ2(TEXT);

if((jos == sus) && (sus-2 == NUME(TEXT))) {
	jos--;
	arg[5][0] = '9';
}

if((sus-2 == NUME(TEXT)) && (sus-jos == UNIT(NUME(TEXT))) && (arg[5][0] == '1')) {
	PP2 = PP;
} else {
	PP1 = (jos-2 == NUME(TEXT) - UNIT(NUME(TEXT))) && (arg[5][0] == '1')? 0 : URC1(f1, jos, Q, t, 500000000L, PP, arg[5][0]);
	PP2 = sus-2 ^ NUME(TEXT)? URC1(f1, sus, Q, t, 500000000L, PP, '1') : PP;
	fseek(f1, PP1-PP2, SEEK_CUR);
}

do {
	fgets(Q, 1920, f1);	
} while(!CIF(Q, strlen(Q), jos-1, sus+1)
//|| (Q[1] < '2')
);

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

//W ^ 1 || sep ^ 1?
MODSPARSUM(Q, PP2, f1, W, b, b1, C, C1, unu, d, d1, doi, trei, A4, AG, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, doi0, doiul, mem, sus, r, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, imp, mul, p1, q1, q0, sep)
//:
//UMODSPARSUM(Q, PP2, f1, W, b, b1, C, C1, unu, d, d1, doi, trei, A4[0], AG[0], m1[0], m2[0], m3[0], w1[0], w2[0], w3[0], doi1[0], doi2[0], doi3[0], k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, doi0[0], doiul[0], mem, sus, r, FACT[0], FACTLEG[0], PRIMP[0], FACT1[0], FACTLEG1[0], PRIMP1[0], FACT2[0], FACTLEG2[0], PRIMP2[0], FACT3[0], FACTLEG3[0], PRIMP3[0], FACTAUX[0], FACTAUX2[0], imp, mul, p1, q1, q0, sep)
;

fclose(f1);
fclose(F2);
REN1(l1);
printf("KAPUTT\n");
mpz_clears(unu, doi, trei, d, d1, p1, imp, mul, NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

TOL(argv);
return 0;
}
