#include "/TOLIL.h"
#include "/NUMERICUL.h"
//De prelucrat NUMERICUL după modelul PUTERNUM.

// /NUMERICUL 100 110 /GIG100.TXT a 1 s 2 1000

void TOL(char **arg) {

if(arg[4][0] < 'c') {//84 88
	PREP1(arg);
	return;
}

char t, *p1, TEXT[80], Q[1920], l1[50] = "/run/media/root/10T/TRABACIS.NUM1";
mpz_t C[EV], C1[EV], div[KV][MAX1], sum[KV][MAX1], z[40], z1[40], unu, doi, d, d1, p, q[2580];
int f2[300], D, E, H, K, S, dd, e2, h, k, s, L, f, I, R, r, jos = strtol(arg[1], &p1, 10), sus = strtol(arg[2], &p1, 10), mem[HV], josul, susul;
gmp_ui q0[64], b[DV], b1[DV], y[300], y1[300], PP, PP1, PP2, e, divInt[2000], divInt1[2000], div1[HV][MAX2], sum1[HV][MAX2];
FILE *f1, *F2;

mpz_init_va(unu, doi, d, d1, p, NULL);
INIT(KV, div, sum);

for(int i = 0; i < 40; i++)
	mpz_inits(z[i], z1[i], NULL);

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(l1);
}

for(int i = 0; i < EV; i++) {
	mpz_inits(C[i], C1[i], NULL);
}

r = arg[9][0] == 's'? 1 : 0;
GENGEN(b, C, D, E, H, K, S, sus, sus > 210);
UNIFACTUS(sus, b, b1, C, C1, D, E, H, K, div, sum, div1, sum1, mem, q, q0, 0);
f = 0;
josul = strtol(arg[7], &p1, 10), susul = strtol(arg[8], &p1, 10);

for(I = 0; (I < D); I++)
if( (b[I] > josul) && (b[I] < susul)) {
	divInt[f] = b[I];
	divInt1[f++] = 1+b[I];
	}

printf("%d\n", f);
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
r = arg[6][0] == 's'? 1 : 0;
r? printf("Pe sus ") : printf("Pe jos ");
printf("de la %llu. De scris: %s .\n", ftell(f1), l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], josul, susul, r);
NUMERICUL(Q, PP2, R, f1, f, unu, d, d1, doi, divInt, divInt1, b, b1, C, C1, y, y1, z, z1, div, sum, div1, sum1, mem, f2, D, E, H, K, S, dd, e2, h, k, s, F2, sus, p, q, q0, r);
REN1(l1);
printf("KAPUTT\n");
fclose(f1);
fclose(F2);

mpz_clears(unu, doi, d, d1, p, NULL);
for(e = 0; e < EV; e++)
	mpz_clears(C[e], C1[e], NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

TOL(argv);
return 0;
}
