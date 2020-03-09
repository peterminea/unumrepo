 #include "/TOLIL.h"

#define FDIM 2560
//De prelucrat MODPRIMSUM după modelul PUTERNUM.


void TOL(char **arg) {

if(arg[4][0] < 'c') {//84 88
	PREP1(arg);
}

mpz_t unu, doi, p, C[EV+5];
gmp_ui b[DV+5], b1[DV+5], nr, nm, PP, PP1, PP2, A2[FDIM], A3[FDIM], e, m1[FDIM];
FILE *f1, *F2;
char t, *tt, TEXT[80], Q[1920], l1[70] = "/GRAG.NUM2";
int H2, H3, A4[FDIM], pp = 0, pp1 = 0,  D, E, H, K, S, f, W, R, r, u, u1, jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10);

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(l1);
}

for(e = 0; e < EV; e++)
    mpz_init(C[e]);

mpz_init_va(unu, doi, p, NULL);
GENGEN(b, C, D, E, H, K, S, sus, sus > 210);
f1 = fopen("/COEFLEG.TXT", "r");
R = 0;
H2 = strtol(arg[8], &tt, 10), H3 = strtol(arg[7], &tt, 10);

while(1) {
	fscanf(f1, "%llu", &e);
	if(e > H2)
		break;
	if(PURO(e, b, D) && (e & 1) /*&& EPRIM(e) */&& (e > H3)) {//108.
		A2[R++] = e;
	}
}

fclose(f1);
for(e = 0; e < R; e++) printf("%d ", A2[e]);
putchar('\n');
printf("La început R era %d.\n\n", R);
f = R, r = arg[6][0] == 's'? 1 : 0;
ARANJFACT(0, D, b, b1, u1, f, m1, A2, A3, A4, e, H, 0, r, 1);
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
	PP1 = (jos-2 == NUME(TEXT) - UNIT(NUME(TEXT))) && (arg[5][0] == '1')? 0 : UURC1(f1, jos, Q, t, PP < 1000000000U? PP/100 : 500000000L, PP, arg[5][0]);
	PP2 = sus-2 ^ NUME(TEXT)? UURC1(f1, sus, Q, t, PP < 1000000000U? PP/100 : 500000000L, PP, '1') : PP;
	fseek(f1, PP1, SEEK_SET);
}

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
r? printf("Pe sus ") : printf("Pe jos ");
printf("de la %llu. De scris: %s .\n", ftell(f1) - strlen(Q) - (NC(nr) + NC(nm)), l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], H3, H2, r);
//W ^ 1?

if(r)
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, mpz_scan1(unu, 0));
	f = W;
	
	while(1) {
		if(!f--)
			break;
		if(!mpz_divisible_ui_p(p, A2[f])) {
			mpz_mul_ui(doi, unu, A2[f]);
			SCRIE(doi, Q, F2);
			}
		}
	if(
	!(strlen(Q) ^ sus)
	//!(ftell(f1) ^ PP)
		)
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu%llu", &nr, &nm);
	}	
else
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, mpz_scan1(unu, 0));
	f = W;	
	
	while(1) {
		if(!f--)
			break;
		if(mpz_divisible_ui_p(p, A2[f])) {
			mpz_divexact_ui(doi, unu, A2[f]);
			//if(mpz_divisible_ui_p(doi, A2[f]))
			SCRIE(doi, Q, F2);
			}
		}
	if(	
	!(ftell(f1) ^ PP)
		)
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu%llu", &nr, &nm);	
	}

fclose(f1);
fclose(F2);
REN1(l1);
printf("KAPUTT\n");
mpz_clears(unu, doi, p, NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

TOL(argv);
return 0;
}
