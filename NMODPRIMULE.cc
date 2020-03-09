#include "/TOLIL.h"
#include "/NMODPRIMULE.h"
//#include "/ZU.h"

void TOL(char **arg) {

if(arg[4][0] < 'c') {
	PREP1(arg);
}

if(arg[6][0] ^ 's') {
	printf("Căutatul în jos este interzis aici.\n");
	exit(0);
}

mpz_t Z, unu, doi, trei, d, d1, p, q[2580], C[E1], C1[E1], div[KV][MAX1], sum[KV][MAX1];
gmp_ui q0[64], b[D1], div1[HV][MAX2], sum1[HV][MAX2], A2[H1], AP[H1], A20[H1], AP0[H1], b1[D1], PP, PP1, PP2, nr, nm;
char t, *tt, Q[1920], TEXT[80], l1[90] = "/REMORENTE.NUM2";
int D, E, H, K, S, L, M[HV-KV], M0[KV], M1[KV], f, f0, W, W0, I, m, n, r, jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10), josul, susul, mem[H1];
FILE *f1, *F2;

INIT(KV, div, sum);
for(int i = 0; i < E1; i++) {
	mpz_inits(C[i], C1[i], NULL);
	}

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);

mpz_init_va(unu, doi, trei, d, d1, p, Z, NULL);
GENGEN(b, C, D, E, H, K, S, sus, sus > 210);
UNIFACTUS(sus, b, b1, C, C1, D, E, H, K, div, sum, div1, sum1, mem, q, q0, 1);
//printf("%d %d %d %d %d %d %d EVALDE\n", jos, sus, D1, E1, N0, H1, K2);
f = 0, f0 = 0, r = 0;
//W = H-1;
m = 0, n = 0;
josul = strtol(arg[7], &tt, 10), susul = strtol(arg[8], &tt, 10);
gmp_ui sum2[D-H];

for(I = H; (f0 < D-H) && (I < D); I++) {
	if( (b[I] > josul) && (b[I] < susul) ) {//M, M0 și W0 se păstrează, ca de altfel și K, atât doar că pe când K vine deasupra lui H-K la SUMADIV, W la MODPRIMBIFE vine peste partea lui W0, din rațiuni de economie la --.
		if(b[I] > VERTOITO2) {//(W < K, ăştia erau de K.
			r = f0-m;
			M0[r] = K-W-1;//Nu K-W-1, ci H-W-1, dacă factorii K sunt puși la sfârșitul lui div și div1.
			M1[r] = M0[r] + (H-K);
			A20[r] = b[I];
			AP0[r] = A20[r] * A20[r];
			sum2[f] = AP0[r] + 1;
			//printf("%llu\n", A20[r++]);
			r++;
		} else {
			M[f] = I;//Nu I+K, ci I simplu, dacă K-urile sunt puse la sfârșit.
			A2[f] = b[I];
			//sum2[f][0] = A2[f] + 1;			
			AP[f] = A2[f] * A2[f];
			sum2[f] = AP[f] + A2[f] + 1;
			//printf("%llu\n", A2[f++]);
			f++;
		}
	f0++;
	}
	
	if(W == K) m = f0;
	if(!W) n = f0 - m;
	//W--;
}
	
if(!f0) {printf("Interzis zero.\n"); exit(0);}
//printf("\n%d %d %d\n", f, m, n);
jos += 2, sus += 2;
PP = LUNGHEZ2(TEXT);
f1 = fopen(TEXT, "r");

if((jos == sus) && (sus-2 == NUME(TEXT))) {
	jos--;
	arg[5][0] = '9';
}

if((sus-2 == NUME(TEXT)) && (sus-jos == UNIT(NUME(TEXT))) && (arg[5][0] == '1')) {
	PP2 = PP;
} else {
	PP1 = ((jos-2 == NUME(TEXT) - UNIT(NUME(TEXT))) && (arg[5][0] == '1'))? 0 : URC1(f1, jos, Q, t, 500000000L, PP, arg[5][0]);
	PP2 = (sus-2) ^ NUME(TEXT)? URC1(f1, sus, Q, t, 500000000L, PP, '1') : PP;
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

if(arg[4][0] == 'd') {
	REN3(l1);
}

if(!RENGEN(l1)) {
	fclose(f1);
	return;
}

F2 = fopen(l1, "w");
f0 = r;
r = 1;
r? printf("Pe sus ") : printf("Pe jos ");
printf("de la %llu. De scris: %s .\n", ftell(f1) - strlen(Q), l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], josul, susul, r);
//omp_set_num_threads(4);
//f + f0 ^ 1?
	MODPRIMULE(Q, nr, nm, PP2, f1, W = f, M, M0, M1, f, W0 = f0, f0, 0, unu, doi, A2, A20, AP, AP0, div1, sum1, mem, sum2, F2, p, q, q0, sus, r)
	//:
	//UMODPRIMULE(Q, PP2, f1, W = f, M[0], M0[0], M1[0], W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2[0], A20[0], AP[0], AP0[0], div, sum, div1, sum1, mem, sum2[0], D, E, H, K, S, F2, p, q, q0, sus, r)
;
REN1(l1);
printf("KAPUTT\n");
fclose(f1);
fclose(F2);
for(n = 0; n < E1; n++)
	mpz_clears(C[n], C1[n], NULL);
mpz_clears(Z, unu, doi, trei, d, d1, p, NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

	TOL(argv);
return 0;
}
