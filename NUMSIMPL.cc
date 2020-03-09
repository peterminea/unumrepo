#include "/TOLIL.h"
#include "/NUMSIMPL.h"
#include "/UNUMSIMPL.h"
//De prelucrat NUMSIMPL după modelul PUTERNUM.
// ./numsimpl1 166 203 /run/media/root/8TB/LPT201.TXT a 1 s 100 200
void TOL(char **arg) {

if(arg[4][0] < 'c') {
	PREP1(arg);//Sgamore5
}

char t, *p1, Q[1920], TEXT[80], l1[90] = "/UNAGE.NUM2";
mpz_t C[EV], C1[EV], div[KV][MAX1], sum[KV][MAX1], unu, doi, trei, d, d1, p, q[2580];
int D, E, H, K, S, L, f, h, I, R, r, jos = strtol(arg[1], &p1, 10), sus = strtol(arg[2], &p1, 10), josul, susul, mem[HV];
gmp_ui M[2000], b[DV], b1[DV], PP, PP1, PP2, e, sumInt[2000], divInt[2000], div1[HV][MAX2], sum1[HV][MAX2], q0[64];
FILE *f1, *F2;

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);

mpz_init_va(unu, doi, trei, d, d1, p, NULL);

for(int i = 0; i < EV; i++) {
	mpz_inits(C[i], C1[i], NULL);
}

GENGEN(b, C, D, E, H, K, S, sus, sus > 210);
printf("La %d, D, E, H, K, S: %d %d %d %d %d.\n", sus, D, E, H, K, S);
//if(K) 
	INIT(KV, div, sum);
UNIFACTUS(sus, b, b1, C, C1, D, E, H, K, div, sum, div1, sum1, mem, q, q0, 1);
/*
for(int i1 = 0; i1 < H1; i1++)
for(int j1 = 1; j1 < MAX1; j1++) {
	mpz_set(unu, sum[i1][j1]);
	mpz_sub_ui(doi, unu, 1);
	mpz_tdiv_q_2exp(trei, unu, D = mpz_scan1(unu, 0));
	mpz_tdiv_q_2exp(d, doi, E = mpz_scan1(doi, 0));
	//if(!D || !E) continue;
	if(D > 13 || !mpz_cmp_ui(trei, 1)) {gmp_printf("%Zd sum doiarul %d.\n\n", unu, D);}
	if(E > 13 || !mpz_cmp_ui(d, 1)) {gmp_printf("%Zd sum-1 doiarul %d.\n\n", doi, E);}
}

exit(0);*/

//printf("%d %d %d %d %d %d %d EVALDE\n", jos, sus, D1, E1, N0, H1, K2);
//TXT(sus, TEXT);
f = 0;
josul = strtol(arg[7], &p1, 10), susul = strtol(arg[8], &p1, 10);

for(I = 0; (f < 2000) && (I < D); I++)
if( (b[I] > josul) && (b[I] < susul)) {//130.
	divInt[f] = b[I];
	M[f] = b[I] * b[I];
	sumInt[f++] = 1 + b[I];
	}

//printf("%d\n", f);
if(!f) {printf("Interzis zero.\n"); exit(0);}
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
fgets(Q, 1920, f1);//fscanf(SS, "%llu %llu", nr, nm);
	} while(!CIF(Q, strlen(Q), jos-1, sus+1)
//|| (Q[1] < '8')
);

if(arg[4][0] == 'd') {
	REN3(l1);
}

if(!RENGEN(l1)) {
	fclose(f1);
	return;
}

F2 = fopen(l1, "w");
r = arg[6][0] == 's'? 1 : 0;//1 sus, 0 jos.
r? printf("Pe sus ") : printf("Pe jos ");
printf("de la %llu. De scris: %s .\n", ftell(f1) - strlen(Q), l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], josul, susul, r);
//if(r) omp_set_num_threads(f < 8? f : 8);
//char ll[100]; strcpy(ll, TEXT); strcat(ll, "S"); FILE *SS = fopen(ll, "r");
f ^ 1?
NUMSIMPL(Q, PP2, f1, f, R = f, 0, unu, d, d1, doi, trei, divInt, sumInt, M, b, b1, C, C1, div, sum, div1, sum1, mem, D, E, H, K, S, F2, sus, p, q, q0, r)
: UNUMSIMPL(Q, PP2, f1, unu, d, d1, doi, trei, divInt[0], sumInt[0], M[0], b, b1, C, C1, div, sum, div1, sum1, mem, D, E, H, K, S, F2, sus, p, q, q0, r)
;
REN1(l1);
printf("KAPUTT\n");
fclose(f1);
fclose(F2);

mpz_clears(unu, doi, trei, d, d1, p, NULL);
for(e = 0; e < EV; e++)
	mpz_clears(C[e], C1[e], NULL);
}

 
int main(int argc, char **argv) {
	if(argc < 9)
		return 1;
	TOL(argv);
return 0;
}
