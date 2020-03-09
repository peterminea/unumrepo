#include "/TOLIL.h"
#include "/MODSPRIM.h"
//De prelucrat MODSPRIM după modelul PUTERNUM.

void TOL(char **arg) {

if(arg[4][0] < 'c') {
	PREP1(arg);
}

char t, *p1, TEXT[80], Q[1920], G[1920], l1[50] = "/run/media/root/8TB/TIMIDITAS.NUM1";
int A3[HV], f, W, f0, W0, I, L, m, n, r, jos = strtol(arg[1], &p1, 10), sus = strtol(arg[2], &p1, 10), josul, susul, D, E, H, K, S, mem[600], modpmem1[HV], modpmem2[50];
mpz_t unu, doi, trei, d, d1, p, q[2580], C[EV], C1[EV], div[KV][MAX1], sum[KV][MAX1], modpdiv[50][MAX1], modpsum[50][MAX1];
gmp_ui q0[64], A1[HV], A2[HV], AP[HV], A20[HV], AP0[HV], j, PP, PP1, PP2, b[D1], b1[D1], div1[HV][MAX2], sum1[HV][MAX2], modpdiv1[HV][MAX2], modpsum1[HV][MAX2], modpdiv2[50][MAX2], modpsum2[50][MAX2];
FILE *f1, *F2;

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(l1);
}

INIT(KV, div, sum);
INIT(50, modpdiv, modpsum);
for(int i = 0; i < EV; i++) {
	mpz_init(C1[i]);	
}
mpz_init_va(unu, doi, trei, d, d1, p, q, NULL);
//TXT(sus, TEXT);
//GENERARE(sus, b, C, D, H, E, K, I, L);//GENERARE și GENERARE2 fără INV() după ele, îl au în ele.
GENERARE3(sus, b, C, D, H, E, K, I, L, S, sus > 210);
//printf("%d %d %d %d %d %d %d\n%d %d %d %d EVALDE\n", jos, sus, D1, EV, N0, HV, K2, D, E, H, K);
UNIFACTUS(sus, b, b1, C, C1, D, E, H, K, div, sum, div1, sum1, mem, q, q0, 1);
f = 0;
W = HV-1;
f = 0, f0 = 0, r = 0, m = 0, n = 0;
josul = strtol(arg[7], &p1, 10), susul = strtol(arg[8], &p1, 10);

for(I = 0; (f < H) && (I < H); I++) {
	if( (b[I] > josul) && (b[I] < susul) ) {
		if(W < K) {
			r = f0-m;
			memcpy(modpdiv[r], div[K-W-1], sizeof(div[K-W-1]));
			memcpy(modpsum[r], sum[K-W-1], sizeof(sum[K-W-1]));
			memcpy(modpdiv2[r], div1[H-W-1], sizeof(div1[H-W-1]));
			memcpy(modpsum2[r], sum1[H-W-1], sizeof(sum1[H-W-1]));
			A20[r] = b[I];
			AP0[r] = A20[r] * A20[r];
			modpmem2[r] = mem[H-W-1];
			printf("%llu\n", A20[r++]);
		}  else {
			memcpy(modpdiv1[f], div1[I], sizeof(div1[I]));
			memcpy(modpsum1[f], sum1[I], sizeof(sum1[I]));
			modpmem1[f] = mem[I];
			A2[f] = b[I];
			AP[f] = A2[f] * A2[f];
			printf("%llu\n", A2[f++]);
		}
	f0++;
	}
	
	if(W == K) m = f0;
	if(!W) n = f0 - m;
	W--;
}

//printf("\n%d %d %d\n\n", f, m, n);//m la gmp_ui, n la mpz_t. La intervalele mai mici, sub 101, n va mai fi 0.
W = f;
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
	PP1 = ((jos-2 == NUME(TEXT) - UNIT(NUME(TEXT))) && (arg[5][0] == '1'))? 0 : URC1(f1, jos, Q, t, PP < 1000000000U? PP/100 : 500000000L, PP, arg[5][0]);
	PP2 = (sus-2) ^ NUME(TEXT)? URC1(f1, sus, Q, t, PP < 1000000000U? PP/100 : 500000000L, PP, '1') : PP;
	fseek(f1, PP1, SEEK_SET);
}

do {
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

F2 = fopen(l1, "w");
f0 = r;
r = arg[6][0] == 's'? 1 : 0;
r? printf("Pe sus ") : printf("Pe jos ");
printf("de la %llu. De scris: %s .\n", ftell(f1) - strlen(Q), l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[1], josul, susul, r);
MODSPRIM(Q, PP2, f1, W = f, f, W0 = f0, f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, F2, sus, r, p, q, q0, modpdiv, modpsum, modpdiv1, modpsum1, modpdiv2, modpsum2, modpmem1, modpmem2);
REN1(l1);
printf("KAPUTT\n");
fclose(f1);
fclose(F2);

for(n = 0; n < EV; n++)
	mpz_clears(C[n], C1[n], NULL);
mpz_clears(unu, doi, trei, d, d1, p, q, NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

TOL(argv);
return 0;
}
