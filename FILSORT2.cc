#include "/TOLIL.h"

char A[N1][DIMM];

void SORTFIL(FILE *F1, FILE *F2, const char *CIT, const char *SCR, gmp_ui PP, char *Y, int a1, int b1, int zec) {//1330, 1336: numere de 1331, maxim 1336 de cifre.

int K = 0, V = 0, pz = 0, i1, i2;
char t1[8] = {'1', '2', '3', '6', /*'6',*/ /*'8',*/ ':'};

if(b1 - a1 ^ 1)
	zec = 0;
//zec = 0;
a1 += (zec? 1 : 1);
b1 += 2;//1331, 1338.
//if(NUME(CIT) > 107) zec = 0;
//if(a1 == 165) pz = 2;
//if(a1 == 199) pz = 1;
printf("Zec este: %d.\n", zec);

for(; pz < (zec? 4 : 1); pz++) {
	F1 = fopen(CIT, "r");
	K = 0, V = 0;

	if(!zec)
	while(1) {
		fgets(A[V], 1920, F1);
		V += ((strlen(A[V]) > a1) && (strlen(A[V]) < b1));
		if(ftell(F1) == PP)
			break;
		}
	else
	while(1) {
		fgets(Y, 1920, F1);
		if( (strlen(Y) > a1) && (strlen(Y) < b1)  && (Y[0] >= t1[pz] && Y[0] < t1[pz+1]) )//>=1332, <=1337: 1331 de cifre + '\n', 1336 de cifre + '\n'.
			strcpy(A[V++], Y);
		if(/* (strlen(Y) >= 1441) ||*/ ftell(F1) == PP
		)
			break;
		}

	fclose(F1);
	if(!V) goto s1;
	printf("%d %selemente pentru intervalul %d -> %d.", V, PREP(V), a1-1, b1-2);
	zec? putchar('\n') : printf(" Cifra de plecare este %c.\n", t1[pz]);
	b1 -= 2;//1336
	for(i1 = 0; i1 < b1; i1++)
		Y[i1] = '9';//1336 de 9.
	Y[b1] = '\n';
	strcpy(A[V], Y);
	
	printf("Plăvanule, încep să sortez.\n");
	//HSS(A, Y, V);
	SQPAR(A, V);
	b1 += 2;
	F2 = fopen(SCR, "a");

	for(i2 = a1+1; i2 < b1; i2++) {
		for(i1 = 0; i1 < V; i1++) {
			if( (strlen(A[i1]) == i2)  && (strcmp(A[i1], A[i1+1]) < 0) ) {
				fputs(A[i1], F2);
				++K;
				}
			}
		}

	fclose(F2);
	s1:
	if(zec) {
		printf("Gata pentru cine a pornit de la cifra %c. ", t1[pz]);
	}
	
	printf("Din %d %snumere au avut voie %d.\n", V, PREP(V), K);
	}
}


void FILSORT(const char *CIT, const char *SCR, int a1, int b1, int q) {

int i1, k = 0, VEC[256];
gmp_ui PP;
FILE *F1, *F2;
PP = LUNGHEZ2(CIT);
char Y[1920];

for(i1 = a1; i1 <= b1; i1 += (i1 <= b1? q : 1) ) 
	VEC[k++] = i1;

for(i1 = 0; i1 < k; i1++)
	printf("%d ", VEC[i1]);
putchar('\n');

for(i1 = 0; i1 < k-1; i1++)
	SORTFIL(F1, F2, CIT, SCR, PP, Y, VEC[i1], VEC[i1+1], 1);

if(LUNGHEZ2(SCR))
	i1 = remove(CIT);
}


int main(int argc, char **argv) {

if(argc < 6)
	return 1;

FILSORT(argv[1], argv[2], NUME(argv[3]), NUME(argv[4]), NUME(argv[5]));
return 0;
}
