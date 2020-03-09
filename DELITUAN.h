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


void IATEXT(int a1, int b1, int &K, int &V, char *S, int *min, int *max) {
	char t[90], *t1, t2[90], u;
	DIR *dir;
	struct dirent *ent;
	char fil[1200][90], tt[100];
	int c1, z, nm = 0, SP = 0;
	long c, PP;
	FILE *f1;

	for(int i1 = 0; i1 < NDISC; i1++) {//HDD + SSD + NVME.
		strcpy(t, disc[i1]);		

		if ((dir = opendir (t)) != NULL) {
			while ((ent = readdir (dir)) != NULL) {
				t1 = strdup(ent->d_name);
				if(strstr(disc[i1], "MARG") != NULL && strstr(t1, "MARG") != NULL)
					continue;
				//if(t1[0] >= 'M') continue;
				char ext[6] = ".LPK", ext1[6] = ".NUM";
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
			z = 0;
			f1 = fopen(t2, "r");
			CALCMINMAX(min[nm], max[nm], f1, PP, S);
			c = GIACINTO(t2);
			if( (c < 5) ) max[nm] = 0;
			if(!max[nm]) {fclose(f1); ++nm; continue;}
			z = 0;

			while( (PP >= ftell(f1)) && (z++ < 3)) {
				fgets(S, 1920, f1);
			}
			
			fclose(f1);
//if(max[nm] > 290)
			if( (min[nm] >= a1) && (max[nm] <= b1-2) ) {
				char t3[90] = "";
				strcpy(t3, t2);
				strcat(t3, "C");
				printf("%s cu %llu - cifre de la %d la %d. Cu %s .\n", t2, PP, min[nm], max[nm], t3);
				sprintf(tt, "rm %s &", t2);
				//system(tt);
				if(LUNGHEZ2(t3)) {
					sprintf(tt, "rm %s &", t3);
					//system(tt);
				}

				continue;
				//if(!w && PP)
					//PP = MANUCE(f1, t2, PP, S, c, min[nm]-1);				
				//PP = PREGTEXT(f1, n, dim, PP, min[nm], max[nm], S, t2);
				}
			++nm;
	}
}

void ACTUAL(int a1, int b1) {

int min[1200], max[1200], K, V;
FILE *f1, *f2;
char Y[2000];
IATEXT(a1+1, b1+2, K, V, Y, min, max);
}

#endif

/*
Am aflat de curând cum te semnezi de mână și trimiți documentul fără pix, fără fax, fără printer, fără scanner și... fără Windows!

*
-Descarci PDF-ul unde trebuie semnat și îl deschizi cu LibreOffice Draw din Linux;

-Instalezi în Linux programul Pinta, o alternativă la MS Paint-ul din Windows, cu comanda „pacman -S pinta”;

-Te semnezi în fereastra din Pinta cu creionul albastru, scrii acolo pe ecran, cu mâna pe mouse;

-Reduci dimensiunea imaginii din Pinta, ca să cuprindă cu bună aproximație numai zona semnăturii, fără mult spațiu alb în jur, și salvezi acest mic desen-semnătură;

-Imporți imaginea din Pinta înăuntrul fișierului PDF, cel deschis cu LibreOffice Draw, și o pui la locurile de semnat, ajustând eventual dimensiunea semnăturii ca să încapă bine;

-Salvezi fișierul semnat, dar inițial LibreOffice Draw ți-l convertește din PDF în alt format specific, anume ODG;

-Convertești acest ODG la loc în PDF, pe Internet, la https://odg-to-pdf.file-converter-online.com/ care te ajută;

-Noul PDF proaspăt făcut pe internet are acum semnătura ta manuală unde trebuie, așa că poți să-l trimiți pe Mail cui ți-l cere.

*
Nu pix, nu fax, nu imprimantă, nu scanner, nu Windows.
Și totuși, este tot mâna ta!

P.S. Desigur, micul fișier cu semnătura din Pinta trebuie apărat bine, ca alții să nu ți-l fure ca să folosească ilegal semnătura.
*/
