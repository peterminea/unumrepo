#ifndef _DELITUAN_H
#define _DELITUAN_H

#include "/GMP64.h"
#include <ctype.h>
#include "/TEXTUL.h"
#include "/URC.h"
#include <unistd.h>
#include <sys/types.h>
#include <cstdio>
#include <stdlib.h>
#include <dirent.h>
#define DIF 42

void IATEXT(int a1, int b1, int &K, int &V, char *S, int *min, int *max) {
	char t[90], *t1, t2[90], u;
	DIR *dir;
	struct dirent *ent;
	char fil[900][90], tt[150];
	int c1, z, nm = 0, SP = 0;
	long c, PP;
	FILE *f1;

	for(int i1 = 0; i1 < NDISC; i1++) {//HDD + SSD.
		strcpy(t, disc[i1]);

		if ((dir = opendir (t)) != NULL) {
			while ((ent = readdir (dir)) != NULL) {
				t1 = strdup(ent->d_name);
				char ext[5] = ".LPJ", ext1[5] = ".NUM";
				int ln = strlen(t1), ln2 = (strlen(ext) + strlen(ext1)) / 2;

				if( (ln > ln2) && (!strcmp(&t1[ln-ln2], ext) || !strcmp(&t1[ln-ln2], ext1) ) ) {
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
		
		SORT3(fil, SP);//МУЗЫКА ВОЙНЫ
				
		for(int ss = 0; ss < SP; ss++) {
			strcpy(t2, fil[ss]);
			PP = LUNGHEZ2(t2);
			if( (PP < 9000000L) ) continue;
			z = 0;
			f1 = fopen(t2, "r");			
			CALCMINMAX(min[nm], max[nm], f1, PP, S);
			//c = GIACINTO(t2);
			//if( (c < 4000000) )  max[nm] = 0;//600000.
			//if(!max[nm]) {fclose(f1); ++nm; continue;}
			//if( (b1 > min[nm]) && (min[nm] > 180)
			//&& (max[nm] > 240))
			if(max[nm] - min[nm] > DIF) {
				char t3[150] = "";
				strcpy(t3, t2);
				strcat(t3, "1");
				printf("%s cu %llu - cifre de la %d la %d.\n", t2, PP, min[nm], max[nm]);
				sprintf(tt, "/scr2 %s %s w %d %d", t2, t3, min[nm]-1, min[nm]+DIF);
				puts(tt);
				putchar('\n');
				system(tt);
//				if(!system(tt)) remove(t2);
				continue;
			}			
			fclose(f1);

			++nm;			
	}
}

void ACTUAL(int a1, int b1) {

int min[900], max[900], K, V;
FILE *f1, *f2;
char Y[2000];
IATEXT(a1+1, b1+2, K, V, Y, min, max);
}

#endif
