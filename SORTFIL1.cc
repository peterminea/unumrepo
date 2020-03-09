#include <cstdlib>
#include "/TOLIL.h"
#include "/ACTUAL.h"
#include <sys/stat.h>
#include <ctype.h>
#include <string.h>
// http://www.eurobuy.ro/ro/urmarirea-comenzilor?id_order=UGREYTHBZ&email=peter.minea%40gmail.com

void SORTFIL(FILE *F1, FILE *F2, const char *CIT, const char *SCR, gmp_ui PP, char *Y, int a1, int b1, int zec) {//1330, 1336: numere de 1331, maxim 1336 de cifre.

int K = 0, V = 0, pz = 0, i1, i2;
mpz_t d1;
char t1[6] = {'1', '2', '3', '6', ':'};
mpz_init(d1);

if(b1 - a1 ^ 1)
	zec = 0;
//zec = 0;
a1 += 1;
b1 += 2;
//if(NUME(CIT) > 109) zec = 0;

printf("Zec este: %d.\n", zec);

for(pz = 0; pz < (zec? 4 : 1); pz++) {
	F1 = fopen(CIT, "r");
	//fseek(F1, 461000000000U, SEEK_SET);
	K = 0, V = 0;

	if(!zec) {
	while(1) {
		fgets(Y, 1920, F1);
		if( (strlen(Y) > a1) && (strlen(Y) < b1) )
			mpz_set_str(W[V++], Y, 10);

		if(ftell(F1) == PP)
			break;
		}
	} else {
	while(1) {
		fgets(Y, 1920, F1);
		if( (strlen(Y) > a1) && (strlen(Y) < b1)  && (Y[0] >= t1[pz]) && (Y[0] < t1[pz+1]) )//>=1332, <=1337: 1331 de cifre + '\n', 1336 de cifre + '\n'.
			mpz_set_str(W[V++], Y, 10);
		if(/* (strlen(Y) >= 1441) ||*/ ftell(F1) == PP
		)
			break;
		}
	}

	fclose(F1);
	printf("%d %selemente pentru intervalul %d -> %d.", V, PREP(V), a1-1, b1-2);
	zec? putchar('\n') : printf(" Cifra de plecare este %c.\n", t1[pz]);
	if(!V) goto s1;
	
	b1 -= 2;
	mpz_ui_pow_ui(W[V], 10, b1++);
	mpz_sub_ui(W[V], W[V], 1);
	printf("Plăvanule, încep să sortez.\n");
	//HS(W, d1, V);
	QPAR(W, V);
	F2 = fopen(SCR, "a");

	for(i2 = a1; i2 < b1; i2++) {
		for(i1 = 0; i1 < V; i1++) {
			mpz_get_str(Y, 10, W[i1]);
			if( (strlen(Y) == i2)  && (mpz_cmp(W[i1], W[i1+1]) < 0) ) {
				SCRIE1(Y, F2);
				++K;
				}
			}
		}

	fclose(F2);
	s1:
	if(zec) {
		printf("Gata pentru cine a pornit de la cifra %c. ", t1[pz]);
		b1++;
	}
	
	printf("Din %d %snumere au avut voie %d.\n", V, PREP(V), K);
	}
}


void FILSORT(const char *CIT, const char *SCR, int a1, int b1, int q) {

int i1, k = 0, VEC[256];
gmp_ui PP;
FILE *F1 = fopen(CIT, "a"), *F2;
PP = ftell(F1);
fclose(F1);
char Y[1920];

for(i1 = a1; i1 <= b1; i1 += (i1 <= b1? q : 1) )
	VEC[k++] = i1;

for(i1 = 0; i1 < k; i1++)
	printf("%d ", VEC[i1]);
putchar('\n');

for(i1 = 0; i1 < k-1; i1++)
	SORTFIL(F1, F2, CIT, SCR, PP, Y, VEC[i1], VEC[i1+1], 1);
}


int main(int argc, char **argv) {
// /run/media/root/8T/LPTUAN115.TXT, SCR[40] = "/run/media/root/8T/LPT115.TXT"
//101, 109, 8. 108, 115, 7.
int j, a1 = 420, b1 = 1920, mod = (b1 - a1) / 25;// /run/media/root/6T/LPTUAN109.TXT /run/media/root/8T/LPT109.TXT

char CIT[70] = "/run/media/root/4T/OBERI.LPT0", SCR[70] = "/run/media/root/4T/LPT1910.LPT0";//152200000005. Nimic la LPTUAN100 cu 80, 100.
//108, 135, 9 9 9 POLIDEX.

for(j = a1; j < b1; j += mod) {
	printf("SORTFIL1 %s %s %d %d %d\n", CIT, SCR, j, j+mod, mod);
	FILSORT(CIT, SCR, j, j+mod, mod);
	}
	
return 0;
}
