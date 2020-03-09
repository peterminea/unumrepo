#include <cstdlib>
#include <sys/stat.h>
#include <ctype.h>
#include <string.h>
#include "/TOLIL.h"
/*
? 1000.0/(((93.5*7.65)/4.75) * (100.0/80) * (1000/997.0) * (1000/997.0))
%2 = 5.2808139526755443710461011499073782811

? 93.5188 * 7.6494
%5 = 715.36270872000000000000000000000000000
? %5 / 4.75
%6 = 150.60267552000000000000000000000000000
? 125.96 / %6
%7 = 0.83637292342308049853694923254707394192
? %7 * (4.0/5)
%8 = 0.66909833873846439882955938603765915353
? %8 * (997/1000.0) * (997/1000.0)
%9 = 0.66508977059108225861617149575590753755
? 125.96 / %9
%10 = 189.38796771457803701978553514102991019
? 1000.0 / %10
%11 = 5.2801664861152926215955183848516000123

? 480*31 + 13500
%12 = 28380
? 28.38 * %11
%13 = 149.85112487595200460088081176208840835

? 8000/834.14
%14 = 9.5907161867312441556573237106480926463
? %13 / %14
%15 = 15.624602163003325639722340040403553118

? 47.09 * (65.0/100) * %11
%16 = 161.61797589025993420810642448273019898
? 47.09 * (65.0/100) * %11 * 0.1
%17 = 16.161797589025993420810642448273019898

*/

// wlp0s20f0u3
int main(int argc, char **argv) {
if(argc < 2)
	return 1;

char Y[10][100], aux[1920], cif = '1', cif2 = '0';

if(argv[1][0] == 'a') {
	system("g++ -w -m64 ERMETE1.cc -lgmp -fopenmp -o ERMETE1");
	sprintf(aux, "./ERMETE1 %s", "b");
	system(aux);
	exit(0);
}

int i = 0, D = LUNGHEZ2("/LITUAN2.h"), a1 = 180, b1 = 210, mod = 4, min, max;
long n;
FILE *F = fopen("/LITUAN2.h", "r");
//mod = 5;
while(1) {
	fgets(Y[i++], 100, F);
	if(D == ftell(F))
		break;
	}

fclose(F);
for(int j = a1; j < b1; j++) {
	if(j == 1540) mod = 3;
	sprintf(Y[0], "#define N1 %lu\n", 37500000000L / (mod ^ 3? j+3 : 1912));
	sprintf(Y[1], "#define DIMM %d\n", mod ^ 3? j + 3 : 1912);
	F = fopen("/LITUAN2.h", "w");
	
	for(int i1 = 0; i1 < i; i1++) {
		fputs(Y[i1], F);
		//puts(Y[i1]);
		}

	fclose(F);
	system("rm vecungul1");
	system("g++ -w -m64 VECUNGUL.cc -lgmp -fopenmp -o vecungul1");
	sprintf(Y[i], "./vecungul1 S%d.T S%d.T S%d.T %c %c", j, (mod ^ 3? j+1 : b1), mod, cif, cif2);
	
	if(argc == 3) {
		sprintf(aux, " %s", argv[1]);
		strcat(Y[i], aux);
		}

	//puts(Y[i]);
	if(system(Y[i])) return 1;
	if(mod == 3) j = b1;
	cif = mod & 1? ':' : '1', cif2 = mod ^ 4? ':' : '0';
	
	sprintf(Y[i+1], "%sLIT%d.LPKQ", LITDIR, j+1);
	n = LUNGHEZ2(Y[i+1]);
	if(!n)
		continue;//a1 > 179
	min = 2+a1, max = mod ^ 3? a1+3 : b1+2;			
	n < 400000000000U?
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
