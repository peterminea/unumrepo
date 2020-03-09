//CF52:  1401+0 94
//CF80:  1359+3 83
//CF100: 1375+3 103
//CF130: 1396+3 99
//CF160: 1522+3 116
//CF240: 1884+5 150
//CF420: 2157+21 171
//TOTUL: 4773+421 330

#include "/TOLIL0.h"
#include "/COEFGEN.h"

#define N 110000000
#define U DTOT
mpz_t a[N+3];

// ./CARONTELE 80 90 /media/root/T2T/LPT90.LIT a (sau b) 10000000.

void TOL(char **argv, char *ELEM) {//COEFICIENŢI DE LEGĂTURĂ MPZ-ÎNTREGI; Citit cu parametru în linia de comandă.

char *tt, TEXT[100];

if(argv[4][0] == 'a') {
	system("g++ -w -m64 CARONTELE.cc -lgmp -fopenmp -o CARONTELE");
	sprintf(TEXT, "./CARONTELE %s %s %s %s %s", argv[1], argv[2], argv[3], "b", ELEM);
	system(TEXT);
	exit(0);
}

printf("%s %s %s %s %s %s\n", argv[0], argv[1], argv[2], argv[3], argv[4], argv[5]);

FILE *f1;
mpz_t C[ETOT];
int EXP[600], L, W, D, E, e, a1, b1;
strcpy(TEXT, argv[3]);

gmp_ui b[U], j, k = strtol(ELEM, &tt, 10);
printf("%llu\n", k);

for(e = 0; e < ETOT; e++)
	mpz_init(C[e]);

a1 = strtol(argv[1], &tt, 10);
b1 = strtol(argv[2], &tt, 10);
TXT(b1, TEXT);
f1 = fopen(TEXT, "a");
j = ftell(f1);
fclose(f1);

e = 0;
printf("%s\n", TEXT);
(1==2) && 
b1 ^ NUME(TEXT)?//Sau 100, 1910 plus altele.
	CITLIM(f1, a, a1, b1, e, TEXT, j/1000, j, k, N) ://192 98, 121 97
	CITLIM1(f1, a, a1, e, TEXT, j/1000, j, k, N);

printf("%d\n\n", e--);
PUTDOI(a, e, 0);//return;
W = a1 <= 0? DP : NTOT;
L = U;
omp_set_num_threads(4);
TOLIL(1, b1, TEXT, a, e, 0, W, b, C, EXP, D = 0, E = 0, L, (a1 > 2420? "/P2.TXT" : (a1 > 0? "/GIG.TXT" : "/PM.TXT")), a1);//a1 sub 0 pentru PM.TXT.

for(e = 1; e < ETOT; e++)
	mpz_clear(C[e]);
}


int main(int argc, char **argv) {
if(argc < 5) {
	return 1;
	}

//TOL((argc == 2? argv[1] : new char[80]));
TOL(argv, (argc == 3? argv[2] : (char *)"0"));
return 0;
}
