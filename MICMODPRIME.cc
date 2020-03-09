#include "/NUM.h"
 #include "/ZVERITON.h"

void TOL(char **arg) {

if(arg[4][0] < 'c') {
	PREP1(arg);
	return;
}

mpz_t unu, doi, trei, d1;
gmp_ui p, q[64], qq[64], b[D1], div1[H1][MAX2], sum1[H1][MAX2], A2[H1], AP[H1], b1[D1], PP, PP1, PP2;
char t, *t1, Q[1920], TEXT[80], l1[50] = "/POLONEZULDACOPAT.NUM2";
int D, H, L, M[H1], f, W, I, m, n, r, jos = strtol(arg[1], &t1, 10), sus = strtol(arg[2], &t1, 10), josul, susul, mem[H1];
long double a;
FILE *f1, *F2;

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);

if(arg[4][0] == 'd') {
	REN3(l1);
}

mpz_init_va(unu, doi, trei, d1, NULL);
strcpy(TEXT, "/GIGM.TXT");
MICGENERARE(sus, b, D, H);
VUNIFACTUS(sus, b, b1, D, H, div1, sum1, mem, q, qq, 1);
printf("%d %d %d %d %d %d %d\n EVALDE\n", jos, sus, D1, N0, H1, D, H);
f = 0, r = 0;
W = H-1;
m = 0, n = 0;
josul = strtol(arg[7], &t1, 10), susul = strtol(arg[8], &t1, 10);

for(I = 0; (f < H) && (I < H); I++) {
	if( (b[I] > josul) && (b[I] < susul) ) {
		M[f] = I;
		A2[f] = b[I];
		AP[f] = A2[f] * A2[f];
		printf("%llu\n", A2[f++]);
	}
	
	W--;
}

printf("\n%d %d %d\n\n", f, m, n);
jos += 2, sus += 2;
PP = LUNGHEZ2(TEXT);
f1 = fopen(TEXT, "r");
PP1 = URC1(f1, jos, Q, t, PP / 1000, PP, arg[5][0]);
if(t != 'c') {
	printf("Nu e numărul.\n");
	//return;
}

rewind(f1);
PP2 = URC1(f1, sus, Q, t, PP / 1000, PP, '1');
rewind(f1);
fseek(f1, PP1, SEEK_CUR);

do{
fgets(Q, 1920, f1);
} while(!CIF(Q, strlen(Q), jos-1, sus+1));

if(LUNGHEZ2(l1)) {
	fclose(f1);
	return;
}
//W deasupra lui W0 în vectorul de numere de legătură.
// !(W-- ^ W0) sus, apoi !W-- jos.
F2 = fopen(l1, "w");
r = arg[6][0] == 's'? 1 : 0;
r? printf("Pe sus. ") : printf("Pe jos. ");
printf("De scris: %s .\n", l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], josul, susul, r);
MODPRIME(Q, PP2, f1, W = f, M, f, b, b1, 0, unu, doi, trei, d1, A2, AP, div1, sum1, D, H, F2, p, q, qq, t1, a, sus, r);
REN1(l1);
printf("FINE\n");
fclose(f1);
fclose(F2);
mpz_clears(unu, doi, trei, d1, NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

	TOL(argv);
return 0;
}
