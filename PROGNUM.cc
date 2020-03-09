#include "/TOLIL.h"
#include <ctype.h>
#include <sys/types.h>
#include <cstdio>


void IATEXT(int a1, int b1, int &K, int &V, char *S, int *min, int *max, int argc) {
	char t[60], *t1, t2[90], u;
	int nm = 0;
	strcpy(t, "/proc");
	DIR *dir;
	struct dirent *ent;
	int g, num[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int pnum[100], pn = 0;
	//FILE *PID = fopen("/PIDOF.TXT", "w");

	if ((dir = opendir (t)) != NULL) {
		char fil[300][80];
		
		while ((ent = readdir (dir)) != NULL) {
			t1 = strdup(ent->d_name);
			if(strlen(t1) && (t1[0] >= '0'&& t1[0] <= '9') && NUME(t1) < 65536) {
				strcpy(t2, "/proc/");
				strcat(t2, t1);
				strcat(t2, "/cmdline");

				FILE *FP = fopen(t2, "r");
				char t3[80] = "";
				fgets(t3, 80, FP);
				fclose(FP);
				
				if(strlen(t3) > 2) {
					int SP = strlen(t3);
					nm = SP+1;
					g = 0;
					for(; SP >= 0; SP--)
					if(t3[SP] == '/') {SP++; g = 1; break;}
					
					if(g) {
						char t4[40] = "";
						g = 0;

						for(; SP < nm; SP++)
							t4[g++] = t3[SP];
							
						num[0] += NFIS(t4, "numsimpl", NULL);
						num[1] += NFIS(t4, "MODPRIME", "MODPRIM");
						num[2] += NFIS(t4, "MODIFSUM", NULL);
						num[3] += NFIS(t4, "FACTORSUBM", NULL);
						num[4] += NFIS(t4, "MODSPARE", NULL);
						num[5] += NFIS(t4, "vecun", NULL);
						num[6] += NFIS(t4, "FILT", NULL);
						num[7] += NFIS(t4, "CARONTE", "FLEGE");
						num[8] += NFIS(t4, "LITUAN", NULL);
						num[9] += NFIS(t4, "MODPAR", "SUMM") + NFIS(t4, "MODPRIMS", "NUMERI") + NFIS(t4, "MODSPRIM", "DRUSO") 
							+ NFIS(t4, "sumred", "RAPID") + NFIS(t4, "SCLEPAMORIS", "CIRCE") + NFIS(t4, "CREP", "scr") + (NFIS(t4, "SUB", NULL) - NFIS(t4, "FACTORSUBM", NULL));
						}
					}
				}
			}

			for(g = 0, nm = 0; nm < 10; nm++) g += num[nm];
			printf("Am găsit %d %snumsimpli, %d %smodprimi și %d %smodifsumi.\nPlus %d de FACTORSUBM, %d de MODSPAR și %d %svecuni.\nBonus-Răus: %d %sfiltrări, %d %scaronți, %d %slituani și %d %sdiverse traverse.\nTotal %d %snumerice.\n", num[0], PREP(num[0]), num[1], PREP(num[1]), num[2], PREP(num[2]), num[3], num[4], num[5], PREP(num[5]), num[6], PREP(num[6]), num[7], PREP(num[7]), num[8], PREP(num[8]), num[9], PREP(num[9]), g, PREP(g));
			closedir (dir);
			} else {
			  // could not open directory
			  perror ("VERGOGNATI");
			 // continue;// EXIT_FAILURE;
		}

	//fclose(PID);
	//system("gedit /PIDOF.TXT &");
}


void ACTUAL(int a1, int b1, int argc) {
	int min[800], max[800], K, V;
	FILE *f1, *f2;
	char Y[2000];
	IATEXT(a1+1, b1+2, K, V, Y, min, max, argc);
	putchar('\n');
}


int main(int argc, char **argv) {
	ACTUAL(102, 168, argc);
	return 0;
}
