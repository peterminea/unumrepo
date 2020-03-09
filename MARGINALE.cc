#include "/GMP64.h"
#include <ctype.h>
#include "/TEXTUL.h"
#include "/URC.h"
#include "/TOLIL.h"
#include <unistd.h>
#include <sys/types.h>
#include <cstdio>
#include <stdlib.h>
#include <dirent.h>

int vec[23] = {52, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 240, 270, 300, 500, 1000, 1910};

int GS(int num, int sig) {
	for(int i = 0; i < 22; i++) {
		if(vec[i] == num)
			return vec[i + sig];
	}

	return 0;
}


void IATEXT(int a1, int b1, int &K, int &V, char *S, int *min, int *max, int jos, int sus, int det) {//jos = 49, sus = 52, lim = 0 sau jos = 77, sus = 80, lim = 0 sau jos = 53, sus = 56, lim = 1. lim = 1 înseamnă numere de sus, cu trunchierea .NUM - ului mare la urmă.

char t[90], *t1, t2[90], S1[1920], u;
int nm = 0, lim = (jos == det);
char fil[1200][90];
int SP = 0;

for(int i1 = 0; i1 < NDISC; i1++) {//HDD + SSD.
		strcpy(t, disc[i1]);
		if(strstr(disc[i1], "MARG") != NULL)
			continue;
			
		DIR *dir;
		struct dirent *ent;	

		if ((dir = opendir (t)) != NULL) {
			while ((ent = readdir (dir)) != NULL) {
				t1 = strdup(ent->d_name);
				char ext[6] = ".NUM";
				int ln = strlen(t1);
				if(strstr(t1, "MARG") != NULL)
						continue;			

				if( (ln > 4) && !strcmp(&t1[ln-4], ext)) {
					//if(t1[0] ^ 'L') continue;
					//if(t1[2] ^ 'V') continue;
					strcpy(fil[SP], t);
					strcat(fil[SP++], t1);			
					}
				}
			} else  {
				  // could not open directory
				  perror ("VERGOGNATI");
				  continue;// EXIT_FAILURE;
			}

		closedir(dir);
		}
		
		SORT3(fil, SP);
		char np[90];
		int num = (lim? GS(jos, 1) : GS(sus, 0));
		sprintf(np, "/run/media/root/MARG/MARGINAT%d.NUM", num);
		
		for(int ss = 0; ss < SP; ss++) {
			strcpy(t2, fil[ss]);
			//c = GIACINTO(t2);
			//if( (c > 2115000) )  max[nm] = 0;//600000.
			//if(!max[nm]) {++nm; continue;}
			
			if(t2[0] != '/') {
				puts(t2);			
				++nm;
				continue;
			}

			FILE *f1, *f2;
			long c, PP = LUNGHEZ2(t2);
			int c1, z = 0;
			f1 = fopen(t2, "r");
			CALCMINMAX(min[nm], max[nm], f1, PP, S);
			fclose(f1);
			
			if( (min[nm] >= a1) && (max[nm] <= b1-2) && ( (lim && (max[nm] > det) ) || (!lim && (min[nm] <= det) ) )) {
				//printf("%s cu %llu - cifre de la %d la %d.\n", t2, PP, min[nm], max[nm]);
				f1 = fopen(t2, "r");
				gmp_ui PP1 = URC1(f1, jos+2, S1, u, PP/100, PP, ':');				
				gmp_ui PP2 = URC1(f1, sus+2, S1, u, PP/100, PP, ':');
				char np1[90], np2[90];
				gmp_ui PPP = LUNGHEZ2(np);
				strcpy(np2, np);
				if(PPP) RENGEN(np);

				if(PP2 > PP1) {
					printf("%s pune %llu la %s.\n", t2, PP2-PP1, np);					
					fseek(f1, PP1, SEEK_SET);
					PPP = LUNGHEZ2(np);
					f2 = fopen(np, "a");
					CITR(8220000, f2, f1, PP2-PP1);
					fclose(f2);
					fclose(f1);
					if(lim && (PPP ^ LUNGHEZ2(np))) {
						PP1? sprintf(np1, "truncate --size=%lu %s", PP1, t2) : remove(t2);
						system(np1);
						}
						
					strcpy(np, np2);
					} else {						
					fclose(f1);
					}					
				}
			++nm;
		  }
}

void ACTUAL(int a1, int b1) {
	int K, V, min[1200], max[1200];
	FILE *f1, *f2;
	char Y[2000];
	IATEXT(a1+1, b1+2, K, V, Y, min, max, 150, 160, 160);
}


int main(int argc, char **argv) {
if(argc < 2)
	return 1;
	
if(argv[1][0] == 'a') {
	system("g++ -w -m64 MARGINALE.cc -lgmp -fopenmp -o MARGINALE && /MARGINALE b");
	return 0;
	}

ACTUAL(0, 800);
return 0;
}
