#ifndef _SORTFIL_H
#define _SORTFIL_H

#include "/TOLIL.h"
#include <ctype.h>
#include "/TEXTUL.h"
#include "/URC.h"
#include <unistd.h>
#include <sys/types.h>
#include <cstdio>
#include <stdlib.h>
#include <dirent.h>

void IATEXT(int a1, int b1, long &K, long &V, char *S, int *min, int *max) {

char t[60], *t1, t2[90], t3[90], S1[1920], u;
int i, i1, mod, nm = 0;
char Y[10][100];

for(i1 = 0; i1 < NDISC; i1++) {
		strcpy(t, disc[i1]);
		DIR *dir;
		struct dirent *ent;

		if ((dir = opendir (t)) != NULL) {
			char fil[400][90];
			int SP = 0;
			
			while ((ent = readdir (dir)) != NULL) {
				t1 = strdup(ent->d_name);
				char ext[6] = ".LPKQ", ext1[6] = ".LPKP";
				int ln = strlen(t1);

				if( (ln > 5) && (!strcmp(&t1[ln-5], ext) || !strcmp(&t1[ln-5], ext1) ) ) {//La GIG120+130, ambele.
					strcpy(fil[SP++], t1);
					}
				}
				
				if(SP) 
					SORT(fil, SP);
				
				for(int ss = 0; ss < SP; ss++) {
					strcpy(t2, t);
					strcat(t2, fil[ss]);
					long PP = LUNGHEZ2(t2);
					if(PP < 40000000000L) continue;
					int c, z = 0;

					FILE *f1 = fopen(t2, "r");
					CALCMINMAX(min[nm], max[nm], f1, PP, S);
					//if(GIACINTO(t2) > 600000) max[nm] = 0;
					//if(!max[nm]) {fclose(f1); ++nm; continue;}					

					if(t2[0] != '/') {
						puts(t2);
						fclose(f1);
						++nm;
						continue;
					}

					fclose(f1);
					if( (min[nm] >= a1) && (max[nm] <= b1-2) ) {
						printf("%s cu %llu - cifre de la %d la %d.\n", t2, PP, min[nm], max[nm]);					
						strcpy(t3, t2);						
						i = 0;
						int D = LUNGHEZ2("/LITUAN2.h");						
						f1 = fopen("/LITUAN2.h", "r");
						
						while(1) {
							fgets(Y[i++], 100, f1);
							if(D == ftell(f1))
								break;
							}

						fclose(f1);
						sprintf(Y[1], "#define DIMM %d\n", max[nm] + 2);
						sprintf(Y[0], "#define N1 %lu\n", 125000000000U / (max[nm] + 2));
						f1 = fopen("/LITUAN2.h", "w");
						for(int i1 = 0; i1 < i; i1++) {
							fputs(Y[i1], f1);
							puts(Y[i1]);
							}

						fclose(f1);
						t3[strlen(t3) - 1] = 'B';
						puts(t3);
						mod = (max[nm] - min[nm]) / 3;
						if(!mod) ++mod;
//						z = (max[nm] - min[nm] + 1);
						//max[nm] += mod? (mod - z%mod) : 0;

						system("rm FILSORT2");
						system("g++ -w -mavx512f FILSORT2.cc -lgmp -fopenmp -o FILSORT2");
						sprintf(S1, "./FILSORT2 %s %s S%d.T S%d.T S%d.T", t2, t3, min[nm]-1, max[nm], mod);
						puts(S1);
						system(S1);
						REN2(t3);
						}
					++nm;
					}
				  closedir (dir);
				} else {
				  // could not open directory
				  perror ("VERGOGNATI");
   				 continue;// EXIT_FAILURE;
			}
		}
}

void ACTUAL(int a1, int b1) {

long K, V;
FILE *f1, *f2;
char Y[2000];
int min[400], max[400];
IATEXT(a1+1, b1+2, K, V, Y, min, max);
}


int main(int argc, char **argv) {
if(argc < 2)
	return 1;

char *p1;
ACTUAL(strtol(argv[1], &p1, 10), strtol(argv[2], &p1, 10));
return 0;
}

#endif
