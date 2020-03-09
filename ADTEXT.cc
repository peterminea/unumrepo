#include "/TOLIL.h"

#define N 6000
// ./ADTEXT /CFV120.TXT /CFVV120.TXT a
mpz_t a[N];

int main(int argc, char **argv) {

if(argc < 4)
	return 1;
char Y[1920];

if(argv[3][0] == 'a') {
	system("g++ -w -m64 ADTEXT.cc -lgmp -o ADTEXT");
	sprintf(Y, "./ADTEXT %s %s b", argv[1], argv[2]);
	system(Y);
	return 1;
}

mpz_t z;
mpz_init(z);
int c = LUNGHEZ2(argv[1]), M = 0;

FILE *F = fopen(argv[1], "r");//P2, GIG
for(int i = 0; (i < N) && (ftell(F) < c); i++)  {
	mpz_init(a[i]);
	gmp_fscanf(F, "%Zd", a[i]);
	++M;
	}

printf("%d\n", M);

fclose(F);
mpz_t b;
mpz_init(b);
HS(a, b, M);
c = LUNGHEZ2(argv[2]);
F = fopen(argv[2], "r");
FILE *G = fopen("/PGPLUS.TXT", "w");
mpz_ui_pow_ui(z, 10, 0);

while(1) {
	if(ftell(F) >= c)
		break;

	gmp_fscanf(F, "%Zd", b);
	if(CB(a, b, 0, M)
		&& (!mpz_divisible_ui_p(b, 2))
		&& ( (mpz_cmp(b, z) > 0) || EPRIM(mpz_get_ui(b)) ) ) {
			SCRIE(b, Y, G);
		}
}

fclose(F);
fclose(G);
return 0;
}
