#include "/TOLIL.h"
#include "/Z.h"
#include "/ZU.h"

//De prelucrat SUMM după modelul PUTERNUM.

void TOL(char **arg) {

if(arg[4][0] < 'c') {//84 88
	PREP1(arg);
	return;
}

mpz_t unu, doi, trei, d, d1, d2, p;
gmp_ui b[D1], b1[D1], div1[H1-K2][MAX2], sum1[H1-K2][MAX2], PP, PP1, PP2, A2[4000], e, j, j1, s, k, nm, nr, y[250], y1[250], q[64], qq[64];
char t1, *p1, TEXT[80], Q[1920], l1[50] = "/run/media/root/8TB/FELBERBALD.NUM1";
int f, h, Y, W, I, R, r, t, u, D, E, H, K, L, f2[150], jos = strtol(arg[1], &p1, 10), sus = strtol(arg[2], &p1, 10), josul, susul;
FILE *f1, *F2;

if(sus > 52)
	return;


if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(l1);
}

for(f = 0; f < 64; f++) {
	q[f] = 1U << f;
	qq[f] = ((q[f]) << 1) - 1;
}

mpz_init_va(unu, doi, trei, d, d1, d2, p, NULL);
//TXT(sus, TEXT);
D = GENM(b, "/CF52.TXT");
INV2(0, 0, b, H = 205, D);
//printf("%d %d %d %d %d %d %d\n%d %d %d %d EVALDE\n", jos, sus, D1, E1, N0, H1, K2, D, E, H, K);
UNIFACTUM(sus, b, b1, D, H, div1, sum1, 1);
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
printf("De scris: %s .\n", l1);
r = arg[6][0] == 's'? 1 : 0;
r? printf("Pe sus. ") : printf("Pe jos. ");
printf("De scris: %s .\n", l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], josul, susul, r);
W ^ 1?
	SUMM(Q, PP2, f1, f, W, mpz_scan1(unu, 0), u, d, d1, unu, doi, A2, b, b1, D, H, j, j1, k, R, Y, y, y1, h, s, F2, div1, sum1, nm, nr, f2, p, q, qq, r)
	:
	USUMM(Q, PP2, f1, mpz_scan1(unu, 0), u, d, d1, unu, doi, A2[0], b, b1, D, H, j, j1, k, R, Y, y, y1, h, s, F2, div1, sum1, nm, nr, f2, p, q, qq, r)
	;
REN1(l1);
printf("KAPUTT\n");
fclose(f1);
fclose(F2);

mpz_clears(unu, doi, trei, d, d1, p, NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

TOL(argv);
return 0;
}
