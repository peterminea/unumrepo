#ifndef _DILITUAN_H
#define _DILITUAN_H

#include <ctype.h>
#include <unistd.h>
#include <sys/types.h>
#include <cstdio>
#include <stdlib.h>
#include "/TOLIL.h"


void IATEXT(int a1, int b1, int &K, int &V, char *S, int *min, int *max) {
	char t[90], *t1, t2[90], u;
	DIR *dir;
	gmp_ui tot;
	struct dirent *ent;
	char S1[1920], fil[900][90];
	int nm = 0, SP = 0;
	struct sysinfo info;

	if (sysinfo(&info) != 0) {
        	printf("sysinfo: error reading system statistics");
        }

	printf("Uptime: %ld:%ld:%ld\n", info.uptime/3600, info.uptime%3600/60, info.uptime%60);
	printf("Total RAM: %ld B.\n", info.totalram/1);
	printf("Free RAM: %ld B.\n", (info.totalram-info.freeram)/1);
	printf("Process count: %d\n", info.procs);
	printf("Page size: %ld bytes.\n", sysconf(_SC_PAGESIZE));
	printf("Octeții de memorie liberi sunt %llu.\n", tot = MEM());	
	if(DALRIAD2())
		return;

	for(int i1 = 0; i1 < NDISC; i1++) {//HDD + SSD.
		strcpy(t, disc[i1]);

		if ((dir = opendir (t)) != NULL) {
			while ((ent = readdir (dir)) != NULL) {
				t1 = strdup(ent->d_name);
				char ext[6] = ".LPK2", ext1[6] = ".NUM1", ext2[6] = ".LPKN";
				int ln = strlen(t1), ln2 = (strlen(ext) + strlen(ext1) + strlen(ext2)) / 3;

				if( (ln > ln2) && (!strcmp(&t1[ln-ln2], ext) || !strcmp(&t1[ln-ln2], ext1) || !strcmp(&t1[ln-ln2], ext2)) ) {
					strcpy(fil[SP], t);
					strcat(fil[SP++], t1);
					}
				}

				  closedir (dir);
				} else {
				  // could not open directory
				  perror ("VERGOGNATI");
				  continue;// EXIT_FAILURE;
			}
		}
		
		SORT3(fil, SP);
		printf("%d\n", SP);//tot = 40000000000U;
		
		for(int ss = 0; ss < SP; ss++) {
			strcpy(t2, fil[ss]);
			long c, PP = LUNGHEZ2(t2);
			if((PP < 1000L) || (PP > tot)) continue;
			//if( (PP < 110000000000U) && (t2[strlen(t2) - 2] == 'T') ) continue;
			int c1, w = 0, z = 0;
			
			FILE *f1 = fopen(t2, "r");
			fseek(f1, (PP >= 1919? PP - 1919 : 0), SEEK_CUR);
			do {
				fgets(S, 1920, f1);
			} while(ftell(f1) < PP);
			
			if(S[strlen(S)-2] == '9' || strlen(S) == 1919) {
				w = 1;
				PP -= strlen(S);
				}

			rewind(f1);
			CALCMINMAX(min[nm], max[nm], f1, PP, S);
			c1 = max[nm];
			int c2 = min[nm];
			//c = GIACINTO(t2);
			//if( (c > 48000) )  max[nm] = 0;//600000.
			//if(!max[nm]) {fclose(f1); ++nm; continue;}						
			//strcpy(t2, (max[nm] < a1? "Prea jos.\n" : (2+min[nm] > b1? "Prea sus.\n" : ((PP ^ ftell(f1) ) ? "În mișcare.\n" : t2) ) ) );

			if(t2[0] != '/') {
				puts(t2);
				fclose(f1);
				++nm;
				continue;
			}

			fclose(f1);
			if(w) {
				sprintf(S, "truncate --size=%llu %s", PP, t2);
				system(S);
				w = 0;
			}			
			
			if( (c2 >= a1) && (c1 <= b1-2) ) {
				//printf("%s cu %llu - cifre de la %d la %d. w e %d.\n", t2, PP, c2, c1, w);
				if(PP && !w)
					PP = MANUCE(f1, t2, PP, S, c, min[nm]-1, (c1 < c2? 1918 : c1));
				//z = LUNGHEZ2("/LITUAN2.h");
				f1 = fopen("/LITUAN2.h", "w");
				fprintf(f1, "#define N1 %llu\n", (c = 128000000000U) / (c1+2));
				fprintf(f1, "#define DIMM %llu\n", 2+c1);
				fprintf(f1, "#define LN %llu\n", LUNGHEZ2(t2));
				fprintf(f1, "#define MIN %llu\n", 1+c2);
				fprintf(f1, "#define MAX %llu\n", 2+c1);
				fclose(f1);
				system("rm LITUANUL && rm LITUANULE && rm LITUAN3");
				system("g++ -w -m64 /LITUAN.cc -lgmp -fopenmp -o /LITUANUL && g++ -w -m64 /LITUAN2.cc -lgmp -fopenmp -o /LITUANULE && g++ -w -m64 /LITUAN3.cc -lgmp -fopenmp -o /LITUAN3");
				
				if( (c1 < c2) || ( (PP/((c2+c1+3)>>1)) * (c1+2) > c) )
					sprintf(S1, "/LITUANUL %s", t2);
				else
					c1 < 15? sprintf(S1, "/LITUAN3 %s", t2) : sprintf(S1, "/LITUANUL %s ", t2);//LITUANULE				
				system(S1);
				}
			++nm;//if((nm == 18) && (tot > 50000000000U)) system("/stingerea");
		}
}

void ACTUAL(int a1, int b1) {

int K, V, min[900], max[900];
FILE *f1, *f2;
char Y[2000];
IATEXT(a1+1, b1+2, K, V, Y, min, max);
}

#endif
