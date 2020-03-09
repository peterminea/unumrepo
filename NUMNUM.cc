#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <ctime>
#include <locale.h>
#include "/TEXTUL.h"
#include "/GMP64.h"
#define NGIG 6

char gig[NGIG][20] = {"GIG52.TXT", "GIG70.TXT", "GIG80.TXT", "GIG90.TXT", "GIG100.TXT", "GIG110.TXT"};
char A[NGIG][90];


char *NUMNUM(FILE *F1, char *t, char *Y, gmp_ui &num) {
	long d = LUNGHEZ2(t), nm = 0;
	F1 = fopen(t, "r");
	//if(1==2)
	while(1) {
		fgets(Y, 1920, F1);
		nm++;
		if(!(ftell(F1) ^ d)) {
			break;
			}
		}
		
	fclose(F1);
	printf("%s are %ld %snumere.\n", t, nm, PREP(nm));
	num += nm;

	char t1[60];
	int i, n = strlen(t) - 1;
	while(t[n] != '/') n--;

	for(i = n+1; i < strlen(t); i++) {
		t1[i-n-1] = t[i];
		}
		
	t1[i-n-1] = '\0';
	strcpy(Y, t1);
	sprintf(t1, " (%ld)", nm);
	strcat(Y, t1);
	return Y;
}


void GASGIG(char A[][90]) {
int SP = 0, u;
char t[90], *t1, t2[90];
DIR *dir;
struct dirent *ent;

for(int i1 = 0; i1 < NDISC; i1++) {//HDD + SSD.
		strcpy(t, disc[i1]);

		if ((dir = opendir (t)) != NULL) {
			while ((ent = readdir (dir)) != NULL) {
				t1 = strdup(ent->d_name);
				char ext[6] = ".TXT";
				int ln = strlen(t1), ln2 = strlen(ext);

				if( (ln > ln2) && !strcmp(&t1[ln-ln2], ext)) {
				for(int i2 = 0; i2 < NGIG; i2++) {
				    if(strstr(t1, gig[i2]) != NULL) {
					strcpy(A[SP], t);
					strcat(A[SP++], t1);
					break;
					}
				}
			    }
	                }

		closedir (dir);
		} else {
		  // could not open directory
		  perror ("VERGOGNATI");
		  continue;// EXIT_FAILURE;
		}
	}

SORT3(A, SP);
}


int main(int argc, char **argv) {
if(argc < 3) return 1;

gmp_ui num = 0, num2;
char Y[1920], *p;
FILE *F1;
int a = strtol(argv[1], &p, 10), b = strtol(argv[2], &p, 10);
GASGIG(A);

for(int i = 0; i < NGIG; i++) {
	num += (num2 = LUNGHEZ2(A[i]));
	printf("%s are %llu %socteți.\n", A[i], num2, PREP(num2));
}

printf("Totalul de octeți este %ld.\n", num);
num = 0;
if( (argc < 3) || !( (a >= 0) && (b <= NGIG) && (a < b) )) return 1;
char rasp[50] = "";
omp_set_num_threads((b-a) >= 3? 3 : (b-a));

#pragma omp parallel for schedule(dynamic, 1) shared(a, b)
for(int i = a; i < b; i++) {
	strcat(rasp, NUMNUM(F1, A[i], Y, num));
	if(i ^ (b-1)) strcat(rasp, " + ");
}

time_t tim;
struct tm *T;
time(&tim);
T = localtime(&tim);
setlocale(LC_ALL, "ro_RO.utf8");
strftime(Y, 80, "%c", T);
strncpy(Y, Y, strlen(Y) - 6);
Y[strlen(Y) - 6] = '\0';
printf("%s : %s = %ld %snumere.\n", Y, rasp, num, PREP(num));
F1 = fopen("/NUMNUM.TXT", "a");
fprintf(F1, "%s : %s = %ld %snumere.\n ", Y, rasp, num, PREP(num));
fclose(F1);

return 0;
}
