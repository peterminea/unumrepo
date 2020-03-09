#include "/TOLIL.h"
#include "/NMODIFSUM.h"
#include "/MODGEN.h"
#define FDIM 640
//De prelucrat MODIFSUM după modelul PUTERNUM.
// ./MODIFSUM 200 240 /run/media/root/5TB/LPT240.TXT a 1 s 2 1300


/*
SEED:
december reform plastic box radar quote bundle lock flag fade trial rhythm

PW:

Agom&ab8_Bald

CW: Camerl8eng+O gm
Camerl8eng+O la restul.
1BYcKCM6oSPF9ZQPA2cHQpqEQsD17RDmuk
+
3DKxVdbnA3iuMRSNDisHKFXXY8wPCniuD7
*/


void TOL(char **arg) {

if(arg[4][0] < 'c') {
	PREP1(arg);
}

mpz_t C[EV], C1[EV], div[KV][MAX1], sum[KV][MAX1], imp, mul, unu, doi, trei, d, d1, p1, q[2580];
char t, *tt, Q[1920], Q1[1920], TEXT[80], l1[90] = "/run/media/root/8T/NĂPÂRȚU.NUM2";
int A4[FDIM], mem[HV], f, L, W, I, R, r, u1, H2, H3, pp = 0, pp1 = 0, m, n, p, jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10), D, E, H, K, S, k, knk, nk;
gmp_ui q0[64], A2[FDIM], A3[FDIM], b[DV], b1[DV], div1[HV][MAX2], sum1[HV][MAX2], e = 0, PP, PP1, PP2, m1[FDIM], m2[FDIM], m3[FDIM], sm[FDIM], s1[FDIM], s2[FDIM], s3[FDIM];
FILE *f1, *F2;
gmp_ui FACT[FDIM][MS], FACT1[FDIM][MS], FACT2[FDIM][MS], FACT3[FDIM][MS];
int FACTLEG[FDIM][MS1], PRIMP[FDIM][MS1], FACTLEG1[FDIM][MS1], PRIMP1[FDIM][MS1], FACTLEG2[FDIM][MS1], PRIMP2[FDIM][MS1], FACTLEG3[FDIM][MS1], PRIMP3[FDIM][MS1];
int FACTAUX[FDIM][MS1], FACTAUX1[FDIM][MS1], FACTAUX2[FDIM][MS1], FACTAUX3[FDIM][MS1];
gmp_ui SFACT[FDIM][MS], SFACT2[FDIM][MS];
int SFACTLEG[FDIM][MS1], SPRIMP[FDIM][MS1], SFACTLEG2[FDIM][MS1], SPRIMP2[FDIM][MS1];

for(int i = 0; i < EV; i++) {
	mpz_inits(C[i], C1[i], NULL);
}

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);

for(int i = 0; i < FDIM; i++)
	m1[i] = m2 [i] = m3[i] = 0;
mpz_init_va(unu, doi, trei, d, d1, p1, imp, mul, NULL);
mpz_set_ui(imp, 1);
mpz_set_ui(mul, 1);
GENGEN(b, C, D, E, H, K, S, sus, sus > 210);
printf("La %d, D, E, H, K, S: %d %d %d %d %d.\n", sus, D, E, H, K, S);
f1 = fopen("/COEFLEG.TXT", "r");
R = 0;
H2 = strtol(arg[8], &tt, 10), H3 = strtol(arg[7], &tt, 10);

while(1) {
	fscanf(f1, "%d", &e);
	if((e > H2) || (R == FDIM))
		break;
	if(PURO(e, b, D) && (e & 1) && !EPRIM(e) && (e > H3)) {//108.
		A2[R++] = e;
	}
}

fclose(f1);
f = R, r = arg[6][0] == 's'? 1 : 0;/*
for(e = 0; e < R; e++) printf("%d ", A2[e]);
putchar('\n');
printf("La început R era %d.\n\n", R);*/
ARANJFACT(0, D, b, b1, u1, f, m1, A2, A3, A4, e, H, 0, r, 0);
//if(K) 
	INIT(KV, div, sum);
UNIFACTUS(sus, b, b1, C, C1, D, E, H, K, div, sum, div1, sum1, mem, q, q0, 1);//exit(0);
//printf("%d %d %d %d %d %d %d %d %d EVALDE\n", jos, sus, D1, E1, N0, HV, KV, f, u1);
DIVNUM(f, u1, H, H2, K, S, b, s1, s2, s3, sm, m1, m2, m3, k, knk, nk, A2, A3, pp, m, n, p, D, div1, sum1, div, sum, d, d1, FACT, FACTLEG, FACT1, FACTLEG1, FACT2, FACTLEG2, FACT3, FACTLEG3, PRIMP, PRIMP1, PRIMP2, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2);
if(!f) {printf("Interzis zero.\n"); exit(0);}
W = f;
jos += 2, sus += 2;
PP = LUNGHEZ2(TEXT);
f1 = fopen(TEXT, "r");
char ll[100];
strcpy(ll, TEXT);
strcat(ll, "S");
FILE *SS = fopen(ll, "r");

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
	mpz_set_str(d, Q, 10);
	fgets(Q, 1920, f1);
} while(!CIF(Q, strlen(Q), jos-1, sus+1)
//|| Q[1] < '8'
);

if(arg[4][0] == 'd') {
	REN3(l1);
}

if(!RENGEN(l1)) {
	fclose(f1);
	return;
}
//system("sleep 45");
//exit(0);
F2 = fopen(l1, "w");
r? printf("Pe sus ") : printf("Pe jos ");
printf("de la %llu. De scris: %s .\n", ftell(f1) - strlen(Q), l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], H3, H2, r);//u1, u1-m era nk, m.
//omp_set_num_threads(4);
	W ^ 1?
	MODIFSUM(Q, PP2, W, f1, unu, d, d1, doi, trei, sm, s1, s2, s3, A2, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, F2, mem, sus, r, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3,  PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, imp, mul, p1, q, q0)
	:
	//UMODIFSUM(Q, PP2, W, f1, b, b1, C, C1, unu, d, d1, doi, trei, sm[0], s1[0], s2[0], s3[0], A2[0], m1[0], m2[0], m3[0], k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, sus, r, FACT[0], FACTLEG[0], PRIMP[0], FACT1[0], FACTLEG1[0], PRIMP1[0], FACT2[0], FACTLEG2[0], PRIMP2[0], FACT3[0], FACTLEG3[0],  PRIMP3[0], FACTAUX[0], FACTAUX2[0], SFACT[0], SFACTLEG[0], SPRIMP[0], SFACT2[0], SFACTLEG2[0], SPRIMP2[0], imp, mul, p1, q, q0)
	UMODGEN(Q, PP2, f1, b, b1, C, C1, unu, d, doi, A2[0], div, sum, div1, sum1, D, E, H, K, S, F2, mem, sus, r, p1, q, q0)
	;

fclose(f1);
fclose(F2);
REN1(l1);
printf("KAPUTT\n");
mpz_clears(unu, doi, trei, d, d1, p1, imp, mul, NULL);
for(e = 0; e < EV; e++)
	mpz_clears(C[e], C1[e], NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

	TOL(argv);
return 0;
}
