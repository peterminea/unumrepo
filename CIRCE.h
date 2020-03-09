#ifndef _CIRCE_H
#define _CIRCE_H

#include "/TOLIL.h"
#include <ctype.h>
#include "/TEXTUL.h"
#include <unistd.h>
#include <sys/stat.h>
#include <sys/statvfs.h>
#include <sys/types.h>
#include <cstdio>
#include <stdlib.h>

gmp_ui SPATIU(const char* path, gmp_ui &T2, gmp_ui &T3, gmp_ui &T4) {
  struct statvfs stat;
  
  if (statvfs(path, &stat) != 0) {
    // error happens, just quits here
    return -1;
  }

  // the available size is f_bsize * f_bavail
  T2 += stat.f_bsize * stat.f_bfree;
  T3 += stat.f_bsize * stat.f_blocks;
  T4 = stat.f_bsize * stat.f_blocks;  
  return stat.f_bsize * stat.f_bavail;
}


gmp_ui DETMAX(DIR *dir, gmp_ui &max, gmp_ui v) {
	char t[50];
	 gmp_ui n1, n2 = 0, T2 = 0, T3 = 0, T4;
	
	for(int i1 = 0; i1 < NDISC; i1++) {
		strcpy(t, disc[i1]);

	if ((dir = opendir (t)) != NULL && (strstr(t, "MARG") == NULL)) {
		n1 = SPATIU(disc[i1], T2, T3, T4);
		
		if(n1 > max) {
			max = n1;
			n2 = i1;
		}
		  closedir (dir);
		} else {		 
		  continue;
		}
	}

if(n2 ^ v) {	
	printf("Maximul nou este de %llu pe %s.\n\n", max, disc[n2]);
	}
return n2;
}


void IATEXT() {
char t[90], *t1, t2[100], fil[800][90], u, v;
char ext[6] = ".NUM1", ext1[6] = ".LPT9";
int i, i1, mod, j, np, SP = 0, ln, ln2 = (strlen(ext) + strlen(ext1)) / 2;
long PP, PP0, PP1, PP2, PP3 = 80000000000L, PP4;
FILE *f1, *f2;
DIR *dir;
struct dirent *ent;
gmp_ui max = 0U, n1, n2 = 0, METOTA = 0;
gmp_ui T2 = 0, T3 = 0, T4;
long double q1, q2, q3;
struct sysinfo info;

if (sysinfo(&info) != 0) {
	printf("sysinfo: error reading system statistics");
}

printf("Uptime: %ld:%ld:%ld\n", info.uptime/3600, info.uptime%3600/60, info.uptime%60);
printf("Total RAM: %ld B.\n", info.totalram/1);
printf("Free RAM: %ld B.\n", (info.totalram-info.freeram)/1);
printf("Process count: %d\n", info.procs);
printf("Page size: %ld bytes.\n", sysconf(_SC_PAGESIZE));
printf("Octeții de memorie liberi sunt %llu.\n", MEM());

if(DALRIAD2())
	return;

	for(int i1 = 0; i1 < NDISC; i1++) {//HDD + SSD.
		strcpy(t, disc[i1]);

		if ((dir = opendir (t)) != NULL) {
			n1 = SPATIU(disc[i1], T2, T3, T4);
			METOTA += n1;
			printf("%s cu %llu.\n", disc[i1], T4);
			if(n1 > max && (strstr(t, "MARG") == NULL)) {
				max = n1;
				n2 = i1;
			}
		
			while ((ent = readdir (dir)) != NULL) {
				t1 = strdup(ent->d_name);				
				ln = strlen(t1);
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
		
		q1 = (long double)(METOTA) / 1000000000000.0;
		q2 = (long double)T2 / 1000000000000.0;
		q3 = (long double)T3 / 1000000000000.0;		
		printf("Maximul este de %llu pe %s.\nTotalul liber este %.3Lf TB zecimali.\n", max, disc[n2], q1);
		printf("Totalul liber alternativ este %.3Lf TB zecimali, iar spațiul mare este %.3Lf TB zecimali. Ocupat: %.2Lf la sută, liber: %.2Lf la sută.\n", q2, q3,  100 - (100*q2)/q3, (100*q2)/q3);
		SORT3(fil, SP);
		
		for(int ss = 0; ss < SP; ss++) {
			strcpy(t2, fil[ss]);
			PP = LUNGHEZ2(t2);
			if( (PP < 80100000000L) || (PP > 5544000000000L) )
				continue;
			
			n1 = DETMAX(dir, max = 0U, n2);
			if(n1 ^ n2)
				n2 = n1;
				
			if(PP - PP3 >= max) {
				printf("Nu se poate acum, maximul %llu e mic în fața lui %llu de la %s.\n", max, PP, t2);
				continue;
			}
			
			//PP4 = GIACINTO(t2);
			//if( (PP4 > 500000) || (PP4 < 600) ) continue;
			f1 = fopen(t2, "r");
			PP1 = 0, PP4 = 0;
			j = 0;
			printf("\n%s cu %llu.\n", fil[ss], PP);
			gmp_ui dim[70];
			
			while(1) {
				fseek(f1, PP1, SEEK_CUR);
				PP2 = ftell(f1);
				fseek(f1, (PP < PP3)? PP : PP3, SEEK_CUR);						

				if(PP >= PP3)
					do {
						u = fgetc(f1);
						} while( u != '\n');						
				
				PP0 = ftell(f1) - PP2;
				dim[j] = PP1 + PP0;
				PP1 += PP0;
				PP -= PP0;

				if(!j) {
					PP4 = PP0;
					printf("Rația de origine este: %lu.\nSegmentele: ", PP4);
				}
				
				j++;
				rewind(f1);						
				if(!PP) break;
			}
		
			for(i = 0; i < j; i++)
				printf("%llu ", dim[i]);
			putchar('\n');			
			fclose(f1);
			v = '0';

			for(i1 = j-1; i1 > 0; i1--) {
				f1 = fopen(t2, "r");
				fseek(f1, dim[i1-1], SEEK_CUR);
				PP0 = dim[i1] - ftell(f1);
				char t3[100] = "", t4[100] = "", t5[90], t6[90];
				ln = strlen(fil[ss]);
				mod = strlen(ext);
			
				for(i = 0; i < ln-mod; i++) {
					t3[i] = fil[ss][i];
					}

				t3[ln-mod] = v;
				for(i = 0; i < mod; i++) {
					t3[1+i+(ln-mod)] = ext[i];
					}

				//t3[ln+mod+1] = '\0';
				strcpy(t4, disc[n2]);
				BALDO(t3, t5, t6, 1);
				
				strcat(t4, t5);
				if(LUNGHEZ(t4)) {
					int k = 1, l;
					char tt[60], tu = '0';
					do {
						strcpy(tt, "");
						for(l = 0; t4[l] ^ '.'; l++)
							tt[l] = t4[l];
						tt[l++] = tu;
						for(; l <= strlen(t4); l++)
							tt[l] = t4[l-1];
						tt[l] = '\0';
						k = LUNGHEZ(tt);
						if(tu < 'A')
							tu != '9'? tu++ : tu += 8;
						else
							tu != 'Z'? tu++ : tu += 7;						
					} while(k);
					
					strcpy(t4, tt);
				}
				
				puts(t4);
				np = 1;
				f2 = fopen(t4, "a");
				CITR(8220000, f2, f1, PP0);
				if(!ftell(f2) || (PP0 > ftell(f2)))
					np = 0;
				fclose(f2);
				if(np && dim[i1-1]) {
					char s[70];
					sprintf(s, "truncate --size=%lu %s", dim[i1-1], t2);
					system(s);
				}
				
				if(v < 'A')
					v != '9'? v++ : v += 8;
				else
					v != 'Z'? v++ : v += 7;
				fclose(f1);
			}
		}
}

#endif
