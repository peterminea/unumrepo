//CF52:  1339+0 81
//CF80:  1359+3 83
//CF100: 1373+3 88
//CF130: 1396+3 99
//CF160: 1522+3 116
//CF240: 1884+5 150
//CF420: 2157+21 171
//TOTUL: 4773+421 330

#include "/TOLIL.h"
#include "/DRUSOJURA.h"
//#include "/ZU.h"


void TOL(char **arg) {

if(arg[4][0] < 'c') {//84 88
	PREP1(arg);
	return;
}

mpz_t C[421], Z, unu, doi, trei, d, d1, nm1, nr1, p, q[580], qq[580], J[421], div[H1][MAX1], sum[H1][MAX1];
char t, *tt, TEXT[80], Q[1920], l1[50] = "/JR.TXT";
int mem[300], f, h, L, W, D, E, H, I, K, S, R, r, s, jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10), josul, susul;
gmp_ui b[4900], b1[4900], div1[300][MAX2], sum1[300][MAX2], q0[64], q1[64], M[672], PP, PP1, PP2, e, nm, nr, sumInt[672], divInt[672];
FILE *f1, *F2;

INIT(K2, div, sum);

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);

mpz_init_va(unu, doi, trei, d, d1, Z, nm1, nr1, NULL);
for(e = 0; e < 421; e++)
	mpz_inits(C[e], J[e], NULL);

GENERARE3(sus, b, C, D, H, E, K, I, L, S, sus > 200);
UNIFACTUS(sus, b, b1, C, J, D, E, H, K, div, sum, div1, sum1, mem, q, q0, 1);
//printf("%d %d %d %d %d %d %d\n%d %d %d %d EVALDE\n", jos, sus, D1, E1, N0, H1, K2, D, E, H, K);

for(f = 0; f < 64; f++)
	q1[f] = f < 1? 1 : 1 + q0[f-1];//1, 2, 4, 8 versus 1, 3, 7, 15.
	
for(f = 0; f < 580; f++) {
	mpz_init(qq[f]);
	if(!f)
		mpz_set_ui(qq[f], 1);
	else
		mpz_add_ui(qq[f], q[f-1], 1);
}

f = 0;
josul = strtol(arg[7], &tt, 10), susul = strtol(arg[8], &tt, 10);

for(I = 0; f < 64; I++)
if( (b[I] > josul) && (b[I] < susul)
//if(PREZ2(A2[I], b, H, 0)
)	{
	divInt[f] = b[I];
	sumInt[f] = 1 + b[I];
	M[f++] = b[I] * b[I];	
	}

for(I = 0; I < f; I++)
	printf("%llu\n", divInt[I]);
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
	PP1 = ((jos-2 == NUME(TEXT) - UNIT(NUME(TEXT))) && (arg[5][0] == '1'))? 0 : URC1(f1, jos, Q, t, 500000000L, PP, arg[5][0]);
	PP2 = (sus-2) ^ NUME(TEXT)? URC1(f1, sus, Q, t, 500000000L, PP, '1') : PP;
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
r = arg[6][0] == 's'? 1 : 0;//1 sus, 0 jos.
r? printf("Pe sus. ") : printf("Pe jos. ");
printf("De scris: %s .\n", l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], josul, susul, r);
//W ^ 1?
	DRUSOJURA(Q, PP2, f1, r, s, f, W, unu, doi, trei, d, d1, Z, divInt, sumInt, M, b, b1, C, J, div, sum, div1, sum1, D, E, H, K, S, sus, nm, nr, nm1, nr1, F2, mem, p, q, qq, q0, q1)
	//:
	//UDRUSOJURA(Q, PP2, f1, r, s, unu, doi, trei, d, d1, Z, divInt[0], sumInt[0], M[0], b, b1, C, J, div, sum, div1, sum1, D, E, H, K, sus, nm, nr, nm1, nr1, F2, mem, p, q, qq, q0, q1)
	;
fclose(f1);
fclose(F2);
REN1(l1);
printf("KAPUTT\n");

mpz_clears(unu, doi, trei, d, d1, p, NULL);
for(e = 0; e < 421; e++)
	mpz_clears(C[e], J[e], NULL);
}


int main(int argc, char **argv) {
if(argc < 9)
	return 1;

TOL(argv);
return 0;
}
