#include "/TOLIL.h"
#include <ctype.h>
#include <sys/types.h>
#include <cstdio>
#include <dirent.h>

#define RP 1
char DEF[7][15] = {"HMODIFSUM", "MODPRIMSUM", "MODPRIME", "numsimpl", "NNUMSIMPL", "NMODPRIME", "HMODPRIMSUM"};


void INITBUF(char *t, int pnum, int ind, FILE *FP, char *buf, int &q) {
	sprintf(t, "readlink /proc/%d/fd/%d", pnum, ind);
	strcpy(buf, "");
	FP = popen(t, "r");	
	fgets(buf, 80, FP);
	pclose(FP);
	q = strlen(buf)-1;	
	if( (q > 0) && (buf[q] == '\n') ) {buf[q--] = '\0';}
}

void CULEGPROC(char ner[][300], char ner3[][300], int *urc1, int SP) {
	char t[90], t1[90], buf[300];
	int i, pnum[40], pn = 0, q;
	FILE *FP;
	
	for(i = 0; i < 7; i++)
		PIDOF(DEF[i], buf, FP, pnum, pn);

	for(i = 0; i < pn; i++) {
	   	INITBUF(t, pnum[i], 5, FP, buf, q);
	   	
	   	if(!(q > 0) || (strstr(buf, ".NUM2") == NULL)) {
		   	INITBUF(t, pnum[i], 4, FP, buf, q);
	   	}
	   	
	    	strcpy(t1, " ");
	    	strcat(t1, buf);
	    	
	    	if(q > 0)
	    	for(int j = 0; j < SP; j++) {
	    		if( (strstr(ner[j], t1) != NULL) && (urc1[j] > RP) ) {
	    			sprintf(t1, "kill %d", pnum[i]);
	    			puts(buf);
	    			system(t1);
	    			REN1(buf);
	    			system(ner3[j]);
	    			if( (pn > 1) && (i ^ pn-1)) 
	    				strstr(ner3[j], "/GIG") != NULL? system("sleep 100") : system("sleep 15");
	    			break;
	    		}
	    	}
	}
}


void IATEXT(int a1, int b1, int &K, int &V, char *S, int *min, int *max, int argc) {
	char t[60], *t1, t2[90], fil[100][90], u;
	int nm = 0, SP = 0;
	//a1+1, b1+2. 131 cu 162. Cifre de la 131 la 160.
	DIR *dir;
	struct dirent *ent;
	
	for(int i1 = 0; i1 < NDISC; i1++) {//HDD + SSD.
		strcpy(t, disc[i1]);

		if ((dir = opendir (t)) != NULL) {
			while ((ent = readdir (dir)) != NULL) {
				t1 = strdup(ent->d_name);
				char ext[6] = ".LPTL", ext1[6] = ".NUM2";
				int ln = strlen(t1), ln2 = (strlen(ext) + strlen(ext1)) / 2;

				if( (ln > ln2) && (!strcmp(&t1[ln-ln2], ext) || !strcmp(&t1[ln-ln2], ext1) ) ) {
					strcpy(fil[SP], t);
					strcat(fil[SP++], t1);
					}
				}

				  closedir (dir);
				} else {
				  perror ("VERGOGNATI");
				  continue;
			}
		}

		SORT3(fil, SP);
		int c1, w, z, ss, urc[100], urc1[100];
		char ner[100][300], ner2[100][300], ner3[100][300], sh[100][300];

		for(ss = 0; ss < SP; ss++) {
			strcpy(t2, fil[ss]);			
			long c, PP = LUNGHEZ2(t2);			
			if(!PP) continue;
			z = 0;
			FILE *f1 = fopen(t2, "r");			
			CALCMINMAX(min[nm], max[nm], f1, PP, S);
			/*c = GIACINTO(t2);

			if( (c > 30000) )  {
				fclose(f1);
				++nm;
				continue;
			}*/			
			fclose(f1);
			
			if( (min[nm] >= a1) && (max[nm] <= b1-2) /*&& (max[nm] > 52) && (min[nm] <= 52)*/ ) {
				printf("%s cu %llu - cifre de la %d la %d.\n", t2, PP, min[nm], max[nm]);
				RECIDENTE2(t2, argc, urc, ss, ner[ss], ner2[ss], ner3[ss], sh[ss]);
				}
			++nm;
		}
		
		for(nm = 0; nm < SP; nm++) {
			printf("%d ", urc[nm]);
			urc1[nm] = urc[nm];
			}
			
		putchar('\n');/*
		puts(ner[0]);
		puts(ner2[0]);
		puts(ner3[0]);
		puts(sh[0]);*/
		
		QSI(urc, 0, SP);
		ss = SP >> 1;
		
		for(nm = 0; nm < ss; nm++) {
			z = urc[nm];
			urc[nm] = urc[SP - nm - 1];
			urc[SP - nm - 1] = z;
			}

		ss = 1;
		for(nm = 0; nm < SP; nm++) printf("%d ", urc[nm]);		
		for(nm = 1; nm < SP; nm++) {//79, 79, 72, 70, 69 -> 79, 72, 72, 70, 69 -> 79, 72, 70, 70, 69 -> 79, 72, 70, 69, 69...	
			if(urc[nm] < urc[nm-1])
				urc[ss++] = urc[nm];
		}
		
		putchar('\n');
		FILE *NER = fopen("/DIST.TXT", "w"), *NER2 = fopen("/DIST2.TXT", "w"), *NER3 = fopen("/DIST3.TXT", "w"), *SH = fopen("/REC.sh", "w");
		fprintf(SH, "bash /LANSATOR2.sh\n");
		
		for(nm = 0; nm < ss; nm++) {
			for(c1 = 0; c1 < SP; c1++)
			if(urc[nm] == urc1[c1]) {
				fputs(ner[c1], NER);
				fputs(ner2[c1], NER2);
				fputs(ner3[c1], NER3);
				fputs(sh[c1], SH);
				//puts(sh[c1]);
				}
			}
			
		fclose(NER);
		fclose(NER2);
		fclose(NER3);
		fclose(SH);
		if(argc == 4)
			CULEGPROC(ner, ner3, urc1, SP);
		//if(1==2)
		if(argc == 3) {
			NER3 = fopen("/DIST3.TXT", "r");
			nm = LUNGHEZ2("/DIST3.TXT");
			if(!nm) return;
			//if(1==2)
			while(1) {
				fgets(S, 2000, NER3);
				system(S);
				if(ftell(NER3) >= nm) {
					fclose(NER3);
					break;
					}

				strstr(S, "/GIG") != NULL? system("sleep 100") : system("sleep 10");
			}
		}
		
		if(argc > 2) {
			system("/CIRCENTE && /PARONTE");
			//system("sleep 147474");
		}
}


void ACTUAL(int a1, int b1, int argc) {
	int min[800], max[800], K, V;
	FILE *f1, *f2;
	char Y[2000];
	remove("/DIST.TXT");
	remove("/DIST2.TXT");
	remove("/DIST3.TXT");
	remove("/REC.sh");
	IATEXT(a1+1, b1+2, K, V, Y, min, max, argc);
	putchar('\n');
	system("gedit /DIST.TXT && gedit /DIST2.TXT && gedit /DIST3.TXT && gedit /REC.sh &");

}


int main(int argc, char **argv) {
	if(argc > 1)
		ACTUAL(0, 1920, argc);
	return 0;
}
/*
/reconst a b c
/ERMETE /media/root/6TB/GIG180.TXT a
*/
