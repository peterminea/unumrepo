#include <cstdlib>
#include <stdio.h>
#include <sys/stat.h>
#include <ctype.h>
#include <string.h>


int main(int argc, char **argv) {
// /run/media/root/8T/LPTUAN109.TXT, SCR[40] = "/run/media/root/8T/LPT115.TXT
char Y[10][100];
FILE *F = fopen("/LITUAN2.h", "a");//101, 109, 8. 108, 115, 7.
int i = 0, i1, j, k, D = ftell(F), a1 = 108, b1 = 111, mod = (b1 - a1) / 1;// /run/media/root/6T/LPTUAN109.TXT /run/media/root/8T/LPT109.TXT
fclose(F);

char CIT[50] = "/run/media/root/6T/LPTUAN109.TXT", SCR[50] = "/run/media/root/8T/LPT109.TXT";//152200000005. Nimic la LPTUAN100 cu 80, 100.
//108, 135, 9 9 9 POLIDEX.

F = fopen("/LITUAN2.h", "r");
while(1) {
	fgets(Y[i++], 100, F);
	if(D == ftell(F))
		break;
	}

fclose(F);

for(j = a1; j < b1; j += mod) {
//	if( (j >= 104) && (j<=107) ) continue;
	k = j + mod + 3;
	sprintf(Y[0], "#define N1 %lu\n", 130000000000U / k);
	sprintf(Y[1], "#define DIMM %d\n", k);

	F = fopen("/LITUAN2.h", "w");
	for(i1 = 0; i1 < i; i1++) {
		fputs(Y[i1], F);
		puts(Y[i1]);
		}

	fclose(F);
	system("rm FILSORT2");
	system("g++ -mavx512f FILSORT2.cc -lgmp -fopenmp -o FILSORT2");
	sprintf(Y[i], "./FILSORT2 %s %s S%d.T S%d.T S%d.T", CIT, SCR, j, j+mod, mod);
	char aux[60];

	if(argc == 2) {
		sprintf(aux, " %s", argv[1]);
		strcat(Y[i], aux);
		}

	puts(Y[i]);
	system(Y[i]);
	}
	
return 0;
}
