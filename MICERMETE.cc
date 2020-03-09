#include <cstdlib>
#include <stdio.h>
#include <sys/stat.h>
#include <ctype.h>
#include <string.h>
#include "/GMP64.h"

// wlp0s20f0u3
int main(int argc, char **argv) {
char Y[10][100], aux[60], cif = '1';
int i = 0, D = LUNGHEZ2("/LITUAN2.h"), a1 = 23, b1 = 25, mod = 2;//147 cu 2.
FILE *F = fopen("/LITUAN2.h", "r");

while(1) {
	fgets(Y[i++], 100, F);
	if(D == ftell(F))
		break;
	}

fclose(F);

for(int j = a1; j < b1; j++) {
	//if(j > 12) mod = 2;
	sprintf(Y[0], "#define N1 %lu\n", 14000000000L / (mod ^ 3? j+3 : b1+2));
	sprintf(Y[1], "#define DIMM %d\n", mod ^ 3? j + 3 : b1+2);

	F = fopen("/LITUAN2.h", "w");
	for(int i1 = 0; i1 < i; i1++) {
		fputs(Y[i1], F);
		puts(Y[i1]);
		}

	fclose(F);
	system("rm micvecungul");
	system("g++ -m64 MICVECUNGUL.cc -lgmp -o micvecungul");
	sprintf(Y[i], "./micvecungul S%d.T S%d.T S%d.T %c", j, (mod ^ 3? j+1 : b1), mod, cif);
	
	if(argc == 2) {
		sprintf(aux, " %s", argv[1]);
		strcat(Y[i], aux);
		}

	puts(Y[i]);
	if(system(Y[i]) && (1==2)) return 1;
	if(mod == 3) j = b1;
	cif = ':';
	sprintf(Y[i+1], "/LIT%d.LPTP", j+1);
	LUNGHEZ2(Y[i+1]) < 8000000000U?
		sprintf(Y[i], "/LITUAN2 %s", Y[i+1])
		:
		sprintf(Y[i], "/SORTFIL %d %d", j, j+1);
	//system(Y[i]);
	//sprintf(Y[i], "/VARONTE %d %d", a1, j+1);
	//system(Y[i]);
	sprintf(Y[i], "/FILTRARE %s %d %d /FOND%d.TXT w &", Y[i+1], a1, j+1, j+1);
	//system(Y[i]);
	}

return 0;
}
