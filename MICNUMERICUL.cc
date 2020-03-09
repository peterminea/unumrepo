#include "/NUM.h"
#include "/ZVERITON.h"
//De prelucrat NUMERICUL după modelul PUTERNUM.

void TOL(char **arg) {

if(arg[4][0] < 'c') {//84 88
	PREP1(arg);
	return;
}

char t, *p1, TEXT[80], Q[1920], l1[50] = "/run/media/root/10T/TRABACIS.NUM1";
mpz_t unu, doi, d, d1;
int D, H, L, f, I, R, r, jos = strtol(arg[1], &p1, 10), sus = strtol(arg[2], &p1, 10), mem[600], josul, susul;
gmp_ui p, q[64], q0[64], b[D1], b1[D1], PP, PP1, PP2, e, divInt[4000], div1[H1][MAX2], sum1[H1][MAX2];
FILE *f1, *F2;
long double a;

mpz_init_va(unu, doi, d, d1, NULL);
if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(l1);
}

MICGENERARE(sus, b, D, H);
VUNIFACTUS(sus, b, b1, D, H, div1, sum1, mem, q, q0, 1);//q cu sumele, q0 cu puterile.
printf("%d %d %d %d %d %d %d\n EVALDE\n", jos, sus, D1, N0, H1, D, H);
strcpy(TEXT, "/GIGM.TXT");
f = 0;
josul = strtol(arg[7], &p1, 10), susul = strtol(arg[8], &p1, 10);

for(I = 0; (f < 2421) && (I < D); I++)
if( (b[I] > josul) && (b[I] < susul)) {
	divInt[f++] = b[I];
	}

printf("%d\n", f);
jos += 2, sus += 2;
PP = LUNGHEZ2(TEXT);
printf("%llu\n", PP1);
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

do {
fgets(Q, 1920, f1);
	} while(!CIF(Q, strlen(Q), jos-1, sus+1));//CIF2(Q, strlen(Q)).

if(LUNGHEZ2(l1)) {
	fclose(f1);
	return;
}

F2 = fopen(l1, "w");
printf("%llu De scris: %s .\n", ftell(f1), l1);
r = arg[6][0] == 's'? 1 : 0;
r? printf("Pe sus. ") : printf("Pe jos. ");
printf("De scris: %s .\n", l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], josul, susul, r);
NUMERICUL(Q, PP2, R = f, f1, f, 0, unu, d, d1, doi, divInt, b, b1, div1, sum1, D, H, F2, sus, p, q, q0, p1, a, r);
REN1(l1);
printf("FINE\n");
fclose(f1);
fclose(F2);
mpz_clears(unu, doi, d, d1, NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

TOL(argv);
return 0;
}
