 #include "/TOLIL.h"
 #include "/MODIFSUM.h"
 //#include "/ZU.h"
 
#define FDIM 1800
//De prelucrat MODPRIMSUM după modelul PUTERNUM.


void TOL(char **arg) {

if(arg[4][0] < 'c') {//84 88
	PREP1(arg);
}

mpz_t C[EV+5], C1[EV+5], div[KV+5+SV][MAX1], sum[KV+5+SV][MAX1], unu, doi, trei, d, d1, nr2, nm2, p1, q[2580];
gmp_ui b[DV+5], b1[DV+5], div1[HV+5][MAX2], sum1[HV+5][MAX2], nr, nm, PP, PP1, PP2, A2[FDIM], A3[FDIM], e, b2[DV+5], m1[FDIM], m2[FDIM], m3[FDIM], sm[FDIM], s1[FDIM], s2[FDIM], s3[FDIM], q0[64];
FILE *f1, *F2;
char t, *tt, TEXT[80], Q[1920], l1[70] = "/MOIMER.NUM2";
int mem[HV+5], H2, H3, L, A4[FDIM], pp = 0, pp1 = 0, m, n, p, D, E, H, K, S, f, W, I, R, r, u, u1, jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10), k, knk, nk;

gmp_ui FACT[FDIM][MS], FACT1[FDIM][MS], FACT2[FDIM][MS], FACT3[FDIM][MS];
int FACTLEG[FDIM][MS1], PRIMP[FDIM][MS1], FACTLEG1[FDIM][MS1], PRIMP1[FDIM][MS1], FACTLEG2[FDIM][MS1], PRIMP2[FDIM][MS1], FACTLEG3[FDIM][MS1], PRIMP3[FDIM][MS1];
int FACTAUX[FDIM][MS1], FACTAUX1[FDIM][MS1], FACTAUX2[FDIM][MS1], FACTAUX3[FDIM][MS1];
gmp_ui SFACT[FDIM][MS], SFACT2[FDIM][MS];
int SFACTLEG[FDIM][MS1], SPRIMP[FDIM][MS1], SFACTLEG2[FDIM][MS1], SPRIMP2[FDIM][MS1];

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(l1);
}
	
for(int i = 0; i < EV+5; i++) {
	mpz_init(C1[i]);	
}

//for(int i = 0; i < FDIM; i++)
	//m1[i] = m2 [i] = m3[i] = 0;

mpz_init_va(unu, doi, trei, d, d1, nr2, nm2, p1, NULL);
GENGEN(b, C, D, E, H, K, S, NUME2(sus), NUME2(sus) > 210);
f1 = fopen("/COEFLEG.TXT", "r");
R = 0;
H2 = strtol(arg[8], &tt, 10), H3 = strtol(arg[7], &tt, 10);

while(1) {
	fscanf(f1, "%llu", &e);
	if(e > H2)
		break;
	if(PURO(e, b, D) && (e & 1) && !EPRIM(e) && (e > H3)) {//108.
		A2[R++] = e;
	}
}

fclose(f1);/*
for(e = 0; e < R; e++) printf("%d ", A2[e]);
putchar('\n');
printf("La început R era %d.\n\n", R);*/
f = R, r = arg[6][0] == 's'? 1 : 0;
ARANJFACT(0, D, b, b1, u1, f, m1, A2, A3, A4, e, H, 0, r, 1);
INIT(KV+5+SV, div, sum);
UNIFACTUS(sus, b, b1, C, C1, D, E, H, K+S, div, sum, div1, sum1, mem, q, q0, 1);
//printf("\n%d %d\n\n", f, u1);//A2 are cele 80. A3 ia din b. A3 trebuie să își ia puterile din div, div1, sum, sum1.
DIVNUM(f, u1, H, H2, K, S, b, s1, s2, s3, sm, m1, m2, m3, k, knk, nk, A2, A3, pp, m, n, p, D, div1, sum1, div, sum, d, d1, FACT, FACTLEG, FACT1, FACTLEG1, FACT2, FACTLEG2, FACT3, FACTLEG3, PRIMP, PRIMP1, PRIMP2, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2);
W = f;
jos += 2, sus += 2;
PP = LUNGHEZ2(TEXT);
f1 = fopen(TEXT, "r");

if((jos == sus) && (sus-2 == NUME(TEXT))) {
	jos--;
	arg[5][0] = '8';
}

if((sus-2 == NUME(TEXT)) && (sus-jos == UNIT(NUME(TEXT))) && (arg[5][0] == '1')) {
	PP2 = PP;
} else {
	PP1 = ((jos-2 == NUME(TEXT) - UNIT(NUME(TEXT))) && (arg[5][0] == '1'))? 0 : URC1(f1, jos, Q, t, PP < 1000000000U? PP/100 : 500000000L, PP, arg[5][0]);
	PP2 = (sus-2) ^ NUME(TEXT)? URC1(f1, sus, Q, t, PP < 1000000000U? PP/100 : 500000000L, PP, '1') : PP;
	fseek(f1, PP1, SEEK_SET);
}

do {
fgets(Q, 1920, f1);
	} while(!CIF(Q, strlen(Q), jos-1, sus+1)
//|| (Q[1] < '2')
);

if(arg[4][0] == 'd') {
	REN3(l1);
}

if(!RENGEN(l1)) {
	fclose(f1);
	return;
}

F2 = fopen(l1, "w");
r? printf("Pe sus ") : printf("Pe jos ");
printf("de la %llu. De scris: %s .\n", ftell(f1) - strlen(Q), l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], H3, H2, r);
//W ^ 1?
MODPRIMSUM(Q, PP2, f1, W, f, u, b, b1, C, C1, D, E, H, K, S, unu, doi, A2, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, F2, mem, nr, nm, sus, r, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p1, q, q0)
//:
//UMODPRIMSUM(Q, PP2, f1, W, f, u, b, b1, C, C1, unu, d, d1, doi, trei, A2[0], m1[0], m2[0], m3[0], k, knk, nk, div, sum, div1, sum1, D, E, H, K, F2, mem, nr, nm, sus, r, FACT[0], FACTLEG[0], PRIMP[0], FACT1[0], FACTLEG1[0], PRIMP1[0], FACT2[0], FACTLEG2[0], PRIMP2[0], FACT3[0], FACTLEG3[0], PRIMP3[0], FACTAUX[0], FACTAUX2[0], nr2, nm2, p1, q, q0)
;

fclose(f1);
fclose(F2);
REN1(l1);
printf("KAPUTT\n");
mpz_clears(unu, doi, trei, d, d1, nm2, nr2, p1, NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

TOL(argv);
return 0;
}
