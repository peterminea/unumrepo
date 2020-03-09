//CF52:  1339+0 81
//CF80:  1359+3 83
//CF100: 1373+3 88
//CF130: 1396+3 99
//CF160: 1522+3 116
//CF240: 1884+5 150
//CF420: 2157+21 171
//TOTUL: 4773+421 330

#include <gmp.h>
#include <stdio.h>
#include "/TOLIL.h"
#include "/Z.h"
//De prelucrat NUMSUM după modelul PUTERNUM.

void TOL(char **arg) {

if(arg[4][0] < 'c') {//84 88
	PREP1(arg);
	return;
}

mpz_t C[E1], unu, doi, trei, d, d1, p, q[200], J[E1], div[K2][MAX1], sum[K2][MAX1];
char t, *p1, TEXT[80], Q[1920], l1[50] = "/media/root/1TB/NUMERIC/3/J1S130.TXT";
int f, h, u, L, Y, W, D, E, H, l, I, K, R, r, s, jos = strtol(arg[1], &p1, 10), sus = strtol(arg[2], &p1, 10), josul, susul, f2[110];
gmp_ui b[4896], b1[4896], A1[70], A2[70], PP, PP1, PP2, e, j, k, y[250], y1[250], M[359], div1[H1-K2][MAX2], sum1[H1-K2][MAX2];
FILE *f1, *F2;

INIT(K2, div, sum);

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(l1);
}

mpz_init_va(unu, doi, trei, d, d1, p, q, NULL);
for(e = 0; e < E1; e++)
	mpz_inits(C[e], J[e], NULL);

for(e = 0; e < 200; e++) {
	mpz_init(q[e]);
	mpz_ui_pow_ui(q[e], 2, e+1);
	mpz_sub_ui(q[e], q[e], 1);
	}

if( (jos < 51) || (jos > 160) )
	return;

//GENERARE(sus, b, C, D, H, E, K, I, L, K2);//GENERARE și GENERARE2 fără INV() după ele, îl au în ele.
GENERARE2(sus, b, C, D, H, E, K, I, L, sus > 210);
//printf("%d %d %d %d %d %d %d\n%d %d %d %d EVALDE\n", jos, sus, D1, E1, N0, H1, K2), D, E, H, K;
UNIFACTUS1(sus, b, b1, C, J, D, E, H, K, div, sum, div1, sum1, 1);
//GENERARE2(sus, b, C, D, H, E, K, M, I, L, 1);//0 la LOTVEC*.
W = 0;
f1 = fopen("/COEFL.TXT", "r");
josul = 200, susul = 620;

while(W < 50) {
	fscanf(f1, "%d", &A2[W]);
	if( (A2[W] & 1) && (A2[W] > josul) && (A2[W] < susul)) {
	++W;
	}
}

fclose(f1);
f = 0;
for(I = 0; I < W; I++)
if(!(A2[I] % 2))//Se folosesc factori de legătură divizibili cu 2 în NUMSUM.
	A2[f++] = A2[I];
printf("%d\n", f);
W = f;
jos += 2, sus += 2;
//TXT(sus, TEXT);
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

do {
	fgets(Q, 1920, f1);	
} while(!CIF(Q, strlen(Q), jos-1, sus+1)
//|| Q[1] < '8'
);

if(LUNGHEZ2(l1)) {
	fclose(f1);
	return;
}

F2 = fopen(l1, "w");
r = 1;//1 sus, 0 jos.
r? printf("Pe sus. ") : printf("Pe jos. ");
printf("De scris: %s .\n", l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], josul, susul, r);

while(1) {
	mpz_set_str(unu, Q, 10);
	NUMSUM0(r, f, W, u, b, b1, unu, doi, d, d1, j, D, H, R, div1, sum1, Q, F2, A2, y, y1, Y, h, f2, p, q);
	fgets(Q, 1920, f1);
	if(!(ftell(f1) ^ PP2))
		break;
}

fclose(f1);
fclose(F2);
mpz_clears(unu, doi, trei, d, d1, p, q, NULL);
for(e = 0; e < E1; e++)
	mpz_clears(C[e], J[e], NULL);
}


int main(int argc, char **argv) {
if(argc < 5)
	return 1;

TOL(argv);
return 0;
}
