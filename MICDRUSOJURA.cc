//CF52:  1339+0 81
//CF80:  1359+3 83
//CF100: 1373+3 88
//CF130: 1396+3 99
//CF160: 1522+3 116
//CF240: 1884+5 150
//CF420: 2157+21 171
//TOTUL: 4773+421 330

#include "/NUM.h"
#include "/ZVERITON.h"


void TOL(char **arg) {

if(arg[4][0] < 'c') {//84 88
	PREP1(arg);
	return;
}

mpz_t A, Z, unu, doi, trei, d, d1, nm1, nr1, p;
char t, *tt, TEXT[80], Q[1920], l1[50] = "/JR.TXT";
int mem[300], f, h, L, W, D, E, H, I, K, R, r, s, jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10), josul, susul;
gmp_ui b[4900], b1[4900], div1[300][MAX2], sum1[300][MAX2], q0[64], q1[64], M[672], PP, PP1, PP2, e, nm, nr, sumInt[672], divInt[672];
FILE *f1, *F2;
long double a;

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(l1);
}

strcpy(TEXT, "/GIGM.TXT");
mpz_init_va(A, unu, doi, trei, d, d1, Z, nm1, nr1, NULL);
MICGENERARE(sus, b, D, H);
VUNIFACTUS(sus, b, b1, D, H, div1, sum1, mem, q1, q0, 1);//q1 cu sumele, q0 cu puterile.
printf("%d %d %d %d %d %d %d\n EVALDE\n", jos, sus, D1, N0, H1, D, H);
f = 0;
josul = strtol(arg[7], &p1, 10), susul = strtol(arg[8], &p1, 10);

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
printf("%lu\n", PP);
f1 = fopen(TEXT, "r");
PP1 = URC1(f1, jos, Q, t, 500000000L, PP, arg[5][0]);
if(t != 'c') {
	printf("%llu Nu e numărul.\n", ftell(f1));
	//return;
}

rewind(f1);
PP2 = URC1(f1, sus, Q, t, 500000000L, PP, '1');
rewind(f1);
fseek(f1, PP1, SEEK_CUR);

fgets(Q, 1920, f1);
if(LUNGHEZ2(I1)) {
		fclose(f1);
		return;
}

F2 = fopen(l1, "w");
r = arg[6][0] == 's'? 1 : 0;//1 sus, 0 jos.
r? printf("Pe sus. ") : printf("Pe jos. ");
printf("De scris: %s .\n", l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], josul, susul, r);
DRUSOJURA(Q, PP2, f1, r, s, f, W, 0, unu, doi, trei, d, d1, Z, divInt, sumInt, M, b, b1, div1, sum1, D, H, sus, nm, nr, /*nm1, nr1, */F2, p, q1, q0, tt, a);
fclose(f1);
fclose(F2);
REN1(l1);
printf("FINE\n");
mpz_clears(Z, unu, doi, trei, d, d1, p, NULL);
}


int main(int argc, char **argv) {
if(argc < 9)
	return 1;

TOL(argv);
return 0;
}
