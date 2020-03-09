  #include "/TOLIL.h"
 #include "/MODPRIM.h"
// #include "/ZU.h"
 
//De prelucrat MODPRIM după modelul PUTERNUM.
// ./MODPRIM 150 160 /run/media/root/8TB/LPT154.TXT
void TOL(char **arg) {

if(arg[4][0] < 'c') {
	PREP1(arg);
}

mpz_t C[EV], C1[EV], div[KV][MAX1], sum[KV][MAX1], modpdiv[KV][MAX1], modpsum[KV][MAX1], unu, doi, trei, d, d1, p, q[580];
gmp_ui q0[64], b[D1], div1[HV][MAX2], sum1[HV][MAX2], modpdiv1[HV][MAX2], modpsum1[HV][MAX2], modpdiv2[HV][MAX2], modpsum2[HV][MAX2], A2[HV], AP[HV], A20[HV], AP0[HV], b1[D1], PP, PP1, PP2;
char t, *tt, TEXT[80], Q[1920], l1[50] = "/VIADALT.NUM2";
int mem[600], modpmem1[HV], modpmem2[50], D, E, H, K, S, L, A3[HV], f, f0, W, W0, I, m, n, r, jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10), josul, susul;

INIT(KV, div, sum);
INIT(KV, modpdiv, modpsum);

for(int i = 0; i < EV; i++) {
	mpz_inits(C[i], C1[i], NULL);
	}

FILE *f1, *F2;
if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);

mpz_init_va(unu, doi, trei, d, d1, p, NULL);//239-240.
//TXT(sus, TEXT);
//GENERARE(sus, b, C, D, H, E, K, I, L);//GENERARE și GENERARE2 fără INV() după ele, îl au în ele.
GENERARE3(sus, b, C, D, H, E, K, I, L, S, sus > 210);
UNIFACTUS(sus, b, b1, C, C1, D, E, H, K, div, sum, div1, sum1, mem, q, q0, 1);
//printf("%d %d %d %d %d %d %d\n%d %d %d %d EVALDE\n", jos, sus, D1, E1, N0, H1, K2, D, E, H, K);
W = H-1;
f = 0, f0 = 0, r = 0, m = 0, n = 0;
josul = strtol(arg[7], &tt, 10), susul = strtol(arg[8], &tt, 10);
//return;
for(I = 0; (f0 < H) && (I < H); I++) {
	if( (b[I] > josul) && (b[I] < susul) ) {//Pentru miezul lui MODPRIM, se iau primele din b în A2. Ar trebui cu ele să se ia puterile prime din div/sum. Pentru așa ceva, trebuiesc iar matrici auxiliare gmp_ui / mpz_t. În plus față de div1, sum1, div și sum. Ceva asemănător la ARANJFACT-ul de la MODIFSUM.		
		if(W < K) {
			r = f0-m;
			memcpy(modpdiv[r], div[K-W-1], sizeof(div[K-W-1]));//K-W-1.
			memcpy(modpsum[r], sum[K-W-1], sizeof(sum[K-W-1]));
			memcpy(modpdiv2[r], div1[H-W-1], sizeof(div1[H-W-1]));
			memcpy(modpsum2[r], sum1[H-W-1], sizeof(sum1[H-W-1]));
			A20[r] = b[I];
			AP0[r] = A20[r] * A20[r];
			modpmem2[r] = mem[H-W-1];
			//printf("%llu\n", A20[r++]);
			r++;
		} else {			
			//memcpy(modpdiv[f], div[I], sizeof(div[I]));
			//memcpy(modpsum[f], sum[I], sizeof(sum[I]));
			memcpy(modpdiv1[f], div1[I], sizeof(div1[I]));
			memcpy(modpsum1[f], sum1[I], sizeof(sum1[I]));
			modpmem1[f] = mem[I];
			A2[f] = b[I];
			AP[f] = A2[f] * A2[f];			
			//printf("%llu\n", A2[f++]);
			f++;
		}
	f0++;
	}
	
	if(W == K) m = f0;
	if(!W) n = f0 - m;
	W--;
}
/*
if(K) {
	printf("%d cu %d sunt f cu f0. De K:\n\n", f, f0);
	for(m = 0; m < n; m++)
		printf("%llu %llu  ", A20[m], AP0[m]);
	putchar('\n');
}*/

//De separat + de tratat ca atare factorii primi K (când e K) față de cei non-K. SUSMODPRIM3+4+5 cu JOSMODPRIM3+4+5.
//printf("\nf, r, m, n: %d %d %d %d\n\n",  f, r, m, n);//m la gmp_ui, n la mpz_t. La intervalele mai mici, sub 101, n va mai fi 0.
jos += 2;
sus += 2;
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
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], josul, susul, r);
//omp_set_num_threads(4);

//f0 ^ 1? 
	MODPRIM(Q, PP2, f1, W = f, f, W0 = f0, f0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, AP, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, F2, p, q, q0, sus, modpdiv, modpsum, modpdiv1, modpsum1, modpdiv2, modpsum2, modpmem1, modpmem2, r)
	//:
	//UMODPRIM(Q, PP2, f1, W = f, f, W0 = f0, f0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2[0], A20[0], AP[0], AP0[0], div, sum, div1, sum1, mem, D, E, H, K, S, F2, p, q, q0, sus, modpdiv[0], modpsum[0], modpdiv1[0], modpsum1[0], modpdiv2[0], modpsum2[0], modpmem1[0], modpmem2[0], r)
	;
REN1(l1);
printf("KAPUTT\n");
fclose(f1);
fclose(F2);

for(f = 0; f < EV; f++)
	mpz_clears(C[f], C1[f], NULL);
mpz_clears(unu, doi, trei, d, d1, p, NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

	TOL(argv);
return 0;
}
