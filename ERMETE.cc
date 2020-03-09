#include <cstdlib>
#include <sys/stat.h>
#include <ctype.h>
#include <string.h>
#include "/TOLIL.h"

// wlp0s20f0u3
int main(int argc, char **argv) {
if(argc < 2)
	return 1;

char Y[10][100], aux[1920], cif = '1', cif2 = '0';

if(argv[1][0] == 'a') {
	system("g++ -w -m64 ERMETE.cc -lgmp -fopenmp -o ERMETE");
	sprintf(aux, "./ERMETE %s", "b");
	system(aux);
	exit(0);
}

int i = 0, D = LUNGHEZ2("/LITUAN2.h"), a1 = 240, b1 = 300, mod = 4, min, max;
long n;
FILE *F = fopen("/LITUAN2.h", "r");

while(1) {
	fgets(Y[i++], 100, F);
	if(D == ftell(F))
		break;
	}

fclose(F);
for(int j = a1; j < b1; j++) {
	if(j == 1540) mod = 3;
	sprintf(Y[0], "#define N1 %lu\n", 32000000000L / (mod ^ 3? j+3 : 1912));
	sprintf(Y[1], "#define DIMM %d\n", mod ^ 3? j + 3 : 1912);
	F = fopen("/LITUAN2.h", "w");
	
	for(int i1 = 0; i1 < i; i1++) {
		fputs(Y[i1], F);
		//puts(Y[i1]);
		}

	fclose(F);
	system("rm vecungul");
	system("g++ -w -m64 VECUNGUL.cc -lgmp -fopenmp -o vecungul");
	sprintf(Y[i], "./vecungul S%d.T S%d.T S%d.T %c %c", j, (mod ^ 3? j+1 : b1), mod, cif, cif2);
	
	if(argc == 3) {
		sprintf(aux, " %s", argv[1]);
		strcat(Y[i], aux);
		}

	//puts(Y[i]);
	if(!(j % 56))system("/reconst a b c");
	if(system(Y[i])) return 1;
	if(mod == 3) j = b1;
	cif = mod & 1? ':' : '1', cif2 = mod ^ 4? ':' : '0';
	
	sprintf(Y[i+1], "%sLIT%d.LPKQ", LITDIR, j+1);
	n = LUNGHEZ2(Y[i+1]);
	if(!n	
	)
		continue;
	min = 2+a1, max = mod ^ 3? a1+3 : b1+2;			
	n < 1000000000000U?
		/* {
			//sprintf(Y[i], "/LITUANUL %s", Y[i+1]);
			//system(Y[i]);
			sprintf(Y[i], "/LITUANULE");
			PREGTEXT(f1, 130000000000U / max, max, n, min, max, aux, Y[i+1]);//Pentru LITUANULE, cu b.
			
		} else {
			sprintf(Y[i], "/SORTFIL %d %d", j, j+1);
			system(Y[i]);	
		}*/
		sprintf(Y[i], "/LITUANUL %s", Y[i+1])
		:
		sprintf(Y[i], "/SORTFIL %d %d", j, j+1);
	omp_set_num_threads(SF);
	system(Y[i]);
	sprintf(Y[i+1], Y[i][1] == 'L'? "%sLIT%d.LPKQ" : "%sLIT%d.LPKB", LITDIR, j+1);
	sprintf(Y[i], "/FILTRARE %s %d %d /FOND%d.TXT w &", Y[i+1], a1, j+1, j+1);
	system(Y[i]);
	if(mod == 3) break;
	}

return 0;
}
