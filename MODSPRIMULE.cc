#include "/TOLIL.h"
#include "/Z.h"
//De prelucrat MODSPRIM după modelul PUTERNUM.

void TOL(char **arg) {

if(arg[4][0] < 'c') {//84 88
	PREP1(arg);
}

if(arg[6][0] ^ 's') {
	printf("Căutatul în jos este interzis aici.\n");
	exit(0);
}

char t, *p1, TEXT[80], Q[1920], l1[50] = "/run/media/root/8TB/TIMIDITAS.NUM1";
int mem[600], A3[H1], M[H1], M0[H1], f, W, f0, W0, I, L, m, n, r, jos = strtol(arg[1], &p1, 10), sus = strtol(arg[2], &p1, 10), josul, susul, D, E, H, K;
mpz_t unu, doi, trei, d, d1, p, q[580], C[E1], C1[E1], div[H1][MAX1], sum[H1][MAX1];
gmp_ui q0[64], A1[H1], A2[H1], AP[H1], A20[H1], AP0[H1], j, PP, PP1, PP2, b[D1], b1[D1], div1[H1][MAX2], sum1[H1][MAX2];
FILE *f1, *F2;

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);

if(arg[4][0] == 'd') {
	REN3(l1);
}

INIT(H1, div, sum);
for(int i = 0; i < E1; i++) {
	mpz_init(C1[i]);	
}
mpz_init_va(unu, doi, trei, d, d1, p, NULL);
//TXT(sus, TEXT);
//GENERARE(sus, b, C, D, H, E, K, I, L);//GENERARE și GENERARE2 fără INV() după ele, îl au în ele.
GENERARE3(sus, b, C, D, H, E, K, I, L, sus > 200);
//printf("%d %d %d %d %d %d %d\n%d %d %d %d EVALDE\n", jos, sus, D1, E1, N0, H1, K2, D, E, H, K);
UNIFACTUS(sus, b, b1, C, C1, D, E, H, K, div, sum, div1, sum1, mem, q, q0, 1);
f = 0;
W = H1-1;
f = 0, f0 = 0, r = 0, m = 0, n = 0;
josul = strtol(arg[7], &p1, 10), susul = strtol(arg[8], &p1, 10);
gmp_ui sum2[D-H];

for(I = H; (f0 < D-H) && (I < D); I++) {
	if( (b[I] > josul) && (b[I] < susul) ) {//M, M0 și W0 se păstrează, ca de altfel și K, atât doar că pe când K vine deasupra lui H-K la SUMADIV, W la MODPRIMBIFE vine peste partea lui W0, din rațiuni de economie la --.
		if(b[I] > VERTOITO2) {//(W < K, ăştia erau de K.
			r = f0-m;
			M0[r] = H-W-1;//Nu K-W-1, ci H-W-1, dacă factorii K sunt puși la sfârșitul lui div și div1.
			A20[r] = b[I];
			AP0[r] = A20[r] * A20[r];
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
	PP1 = (jos-2 == NUME(TEXT) - UNIT(NUME(TEXT))) && (arg[5][0] == '1')? 0 : URC1(f1, jos, Q, t, 500000000L, PP, arg[5][0]);
	PP2 = sus-2 ^ NUME(TEXT)? URC1(f1, sus, Q, t, 500000000L, PP, '1') : PP;
	fseek(f1, PP1-PP2, SEEK_CUR);
}

do{
fgets(Q, 1920, f1);
} while(!CIF(Q, strlen(Q), jos-1, sus+1));

if(LUNGHEZ2(l1)) {
	fclose(f1);
	return;
}

F2 = fopen(l1, "w");
f0 = r;
r = arg[6][0] == 's'? 1 : 0;
r? printf("Pe sus ") : printf("Pe jos ");
printf("de la %llu. De scris: %s .\n", ftell(f1) - strlen(Q), l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[1], josul, susul, r);
MODSPRIMULE(Q, PP2, f1, W = f, f, M, M0, W0 = f0, f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, A20, AP0, div, sum, div1, sum1, mem, sum2, D, E, H, K, F2, sus, r, p, q, q0);
REN1(l1);
printf("KAPUTT\n");
fclose(f1);
fclose(F2);

for(n = 0; n < E1; n++)
	mpz_clears(C[n], C1[n], NULL);
mpz_clears(unu, doi, trei, d, d1, p, NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

TOL(argv);
return 0;
}
