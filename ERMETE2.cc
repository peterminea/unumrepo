#include <cstdlib>
#include <sys/stat.h>
#include <ctype.h>
#include <string.h>
#include "/TOLIL.h"
//De făcut reermetizare după LIT0-uri. Mare atenție, mare.
int main(int argc, char **argv) {
if(argc < 2)
	return 1;

char Y[10][100], aux[1920], cif = '1', cif2 = '0';
FILE *f1;

if(argv[1][0] == 'a') {
	system("g++ -w -m64 ERMETE2.cc -lgmp -fopenmp -o ERMETE2");
	sprintf(aux, "./ERMETE2 %s", "b");
	system(aux);
	exit(0);
}

int i = 0, a1 = 210, b1 = 220, mod = 1, min, max;//131
long n;

for(int j = a1; j < b1; j++) {
	if(j == 1571) mod = 3;
	system("rm vecung");
	system("g++ -w -m64 VECUNG.cc -lgmp -fopenmp -o vecung");
	sprintf(Y[i], "./vecung S%d.T S%d.T S%d.T %c %c", j, (mod ^ 3? j+1 : b1), mod, cif, cif2);
	/*
	if(argc == 3) {
		sprintf(aux, " %s", argv[1]);
		strcat(Y[i], aux);
		}*/

	//puts(Y[i]);
	if(mod == 3) j = b1;	
	if(system(Y[i]) /*&& (1 == 2)*/) return 1;
	cif = mod & 1? ':' : '1', cif2 = mod ^ 4? ':' : '0';
	
	sprintf(Y[i+1], "%sLIT%d.LPKQ", LITDIR, j+1);
	n = LUNGHEZ2(Y[i+1]);
	//continue;//LPTPIR
	if(!n)
		continue;
	min = 2+a1, max = mod ^ 3? a1+3 : b1+2;	
//	
	/*
	f1 = fopen("/LITUAN2.h", "w");
	fprintf(f1, "#define N1 %llu\n", (130000000000U) / (mod ^ 3? a1+3 : b1+2));
	fprintf(f1, "#define DIMM %llu\n", mod ^ 3? a1+3 : b1+2);
	fprintf(f1, "#define LN %llu\n", n);
	fprintf(f1, "#define MIN %llu\n", min);
	fprintf(f1, "#define MAX %llu\n", max);
	fclose(f1);*/
	
	n < 110000000000U?
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
		
	//if(Y[i][1] == 'S')
	//omp_set_num_threads(SF);
	system(Y[i]);
	//sprintf(Y[i], "/VARONTE %d %d", a1, j+1);
	//system(Y[i]);
	sprintf(Y[i+1], Y[i][1] == 'L'? "%sLIT%d.LPKQ" : "%sLIT%d.LPKB", LITDIR, j+1);
	sprintf(Y[i], "/FILTRARE %s %d %d /FOND%d.TXT w &", Y[i+1], a1, j+1, j+1);
	system(Y[i]);
	}

return 0;
}
