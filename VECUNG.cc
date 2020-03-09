#include <gmp.h>
#include <stdio.h>
#include "/TOLIL.h"
#include "/ACTUAL.h"

#define F 16828946344U
#define L 22858

/*

void RE(int &i) {
FILE *V = fopen("NR.TXT", "a");
FILE *V1 = fopen("NR1.TXT", "r");
mpz_t d;
mpz_init(d);

while(1)
	{
	gmp_fscanf(V1, "%Zd", d);
	if(feof(V1))
		break;
	gmp_fprintf(V, "%Zd ", d);
	}

mpz_clear(d);
fclose(V);
fclose(V1);
i = remove("NR1.TXT");
}

//long II = 0L;


/*

void TOTNUM(const char *t)
{
FILE *F1 = fopen(t, "a");
unsigned long I = 0, PP = ftell(F1);
fclose(F1);

//F1 = fopen("/DIM.TXT", "r");
//fscanf(F1, "%lu", &PP);
printf("%lu\n", PP);
//fclose(F1);
//return;

F1 = fopen(t, "r");
char T[1920];

while(1){
	fgets(T, 1920, F1);
	++I;
	if(PP == ftell(F1))
		break;
	}

fclose(F1);
printf("%lu\n", I);
F1 = fopen("/TOTNUM.TXT", "w");
fprintf(F1, "%lu\n", I);
fclose(F1);
}


void SORTTEST()
{
mpz_t c, d;
mpz_inits(c, d, NULL);
int i;

for(i = 0; i < 4500000; i++)
	mpz_init_set_ui(W[i], 4500000 - i);
for(i = 4500000; i <= 10000000; i++)
	mpz_init_set_ui(W[10000001 - i + 4499999], i<<1);
printf("PARIDE\n\n");
//INTERC(a, B, 0, 10000001);
HS(a, c, 10000001);
//QS(a, 0, 10000001, d);
printf("HORAȚIU-RAȚIU PUR ȘI SIMPLU\n\n");
FILE *XA = fopen("/SORT.TXT", "w");
for(i = 0; i < 10000001; i++)
	gmp_fprintf(XA, "%Zd\n", W[i]);
	
fclose(XA);

for(i = 0; i < 10000001; i++)
	mpz_clear(W[i]);
}


#include <time.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>


void P2INV(int a1, int b1)
{
char Q[1920], t;
mpz_t n;
mpz_init(n);
a1 += 2;
b1 += 2;
FILE *F1 = fopen(GIGTEXT2, "r");
URC(F1, a1, Q, t, 200000000L);

int u = 0, v;
while(1)
	{
	fgets(Q, 1920, F1);
	if(strlen(Q) == b1)
		break;

	mpz_set_str(n, Q, 10);
	v = mpz_scan1(n, 0);
	if(v > u)
		u = v;
	}

fclose(F1);
printf("Puterea maximă de 2 între 10^%d şi 10^%d este %d.\n", a1-2, b1-2, u);
}

void S(FILE *Z) {
fprintf(Z, "%d", 1);
}
*/

int main(int argc, char **argv) {
if(argc > 6) {
	return 1;
}

ACTUAL(F, NUME(argv[1]), NUME(argv[2]), (argc == 6? argv[5] : new char[80]), NUME(argv[3]), W, argv[4][0], argv[5][0]);
return 0;
}
