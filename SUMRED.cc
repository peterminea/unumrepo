 #include "/TOLIL.h"
 #include "/Z.h"
// #include "/ZU.h"
//De prelucrat SUMRED după modelul PUTERNUM.

void TOL(char **arg) {

if(arg[4][0] < 'c') {//84 88
	PREP1(arg);
	return;
}

mpz_t C[E1], C1[E1], div[K2][MAX1], sum[K2][MAX1], unu, doi, trei, d, d1, p, q[200];
gmp_ui b[D1], b1[D1], div1[H1-K2][MAX2], sum1[H1-K2][MAX2], PP, PP1, PP2, A1[4000], A2[4000], e, j, j1, k, y[250], y1[250];
char t1, *p1, TEXT[80], Q[1920], l1[50] = "/run/media/root/8TB/FELBERBALD.NUM1";
int f, h, Y, W, l, I, R, r, s, t, u, D, E, H, K, L, f2[150], jos = strtol(arg[1], &p1, 10), sus = strtol(arg[2], &p1, 10), josul, susul;
FILE *f1, *F2;

INIT(K2, div, sum);
if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(l1);
}

for(int i = 0; i < E1; i++) {
	mpz_inits(C[i], C1[i], NULL);
}

if(sus > 160)
	return;
	
for(e = 0; e < 200; e++) {
	mpz_init(q[e]);
	mpz_ui_pow_ui(q[e], 2, e+1);
	mpz_sub_ui(q[e], q[e], 1);
	}

mpz_init_va(unu, doi, trei, d, d1, p, q, NULL);
//TXT(sus, TEXT);
//GENERARE(sus, b, C, D, H, E, K, I, L, K2);//GENERARE și GENERARE2 fără INV() după ele, îl au în ele.
GENERARE2(sus, b, C, D, H, E, K, I, L, sus > 210);
//printf("%d %d %d %d %d %d %d\n%d %d %d %d EVALDE\n", jos, sus, D1, E1, N0, H1, K2, D, E, H, K);
UNIFACTUS1(sus, b, b1, C, C1, D, E, H, K, div, sum, div1, sum1, 1);

f = 0;
josul = strtol(arg[7], &p1, 10), susul = strtol(arg[8], &p1, 10);
for(I = 0; (f < 4000) && (I < D); I++)
if( (b[I] > josul) && (b[I] < susul)
//if(PREZ2(A2[I], b, H, 0)
)	{
	A2[f++] = b[I];
	}

printf("%d\n", f);
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
	PP1 = ((jos-2 == NUME(TEXT) - UNIT(NUME(TEXT))) && (arg[5][0] == '1'))? 0 : URC1(f1, jos, Q, t1, 500000000L, PP, arg[5][0]);
	PP2 = (sus-2) ^ NUME(TEXT)? URC1(f1, sus, Q, t1, 500000000L, PP, '1') : PP;
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
r = arg[6][0] == 's'? 1 : 0;
r? printf("Pe sus. ") : printf("Pe jos. ");
printf("De scris: %s .\n", l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], josul, susul, r);
// void SUMRED(char *Q, long PP2, FILE *f1, int f, int W, int t, int u, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, gmp_ui *A1, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, int s, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, mpz_t p, mpz_t *q, int dir) {
W ^ 1? 
	SUMRED(Q, PP2, f1, f, W, mpz_scan1(unu, 0), u, d, d1, unu, doi, A2, b, b1, D, H, j, R, Y, y, y1, h, s, F2, div1, sum1, f2, p, q, r)
	:
	USUMRED(Q, PP2, f1, mpz_scan1(unu, 0), u, d, d1, unu, doi, A2[0], b, b1, D, H, j, R, Y, y, y1, h, s, F2, div1, sum1, f2, p, q, r)
	;
REN1(l1);
printf("KAPUTT\n");
fclose(f1);
fclose(F2);

mpz_clears(unu, doi, trei, d, d1, p, NULL);
for(e = 0; e < 200; e++)
	mpz_clear(q[e]);

for(e = 0; e < E1; e++)
	mpz_clears(C[e], C1[e], NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

TOL(argv);
return 0;
}
