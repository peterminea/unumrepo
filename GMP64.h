#ifndef _GMP64_H
#define _GMP64_H

#include <stdio.h>
#include <unistd.h>
#include <cstring>
#include <math.h>
#include <stdlib.h>
#include <stdarg.h>
#include <gmp.h>
#include <omp.h>
#include <cmath>
#include <sys/stat.h>
#include <time.h>
#include <dirent.h>
#include <sys/sysinfo.h>

#define PRAG 2500001
#define VERTOITO 18446744073709551615U
#define VERTOITO2 4294967296U
#define SF 16

typedef unsigned long long gmp_ui;
void DIST2(char *tx, char q[][100], int *dat, int argc, int *urc, int ss, char *ner, char *ner2, char *ner3, char *sh);
void REN1(char *tx);
gmp_ui LUNGHEZ2(const char *n);


const char *PREP(long n) {
	return ( (abs(n) % 100 >= 20) || (n && !(n % 100)))? "de " : "";
}


int NC(gmp_ui a) {
int cif = 0;
while(a) {
    a /= 10;
    ++cif;
    }

return ++cif;
}


int FILEEXISTS(const char *file) {
    struct stat buf;
    return (stat(file, &buf) == 0);
}


void PIDOF(const char *p, char *buf, FILE *FP, int *pnum, int &pn) {
	char p1[40];
	sprintf(p1, "pidof %s", p);

	if ((FP = popen(p1, "r")) == NULL) {
	}

	while (fgets(buf, 300, FP) != NULL) {
	}

	if(pclose(FP))  {
	}
	
	int x, len;
	char *s = buf;
	
	while(1 == sscanf(s, "%d%n", &x, &len)) {
		pnum[pn++] = x;
		s += len;
	}
	
	strcpy(buf, "");
}


int NUME2(int sus) {
	if(sus < 53)
		return 52;

	if(sus < 71)
		return 70;
		
	if(sus < 81)
		return 80;

	if(sus < 91)
		return 90;

	if(sus < 101)
		return 100;

	if(sus < 111)
		return 110;

	if(sus < 121)
		return 120;
		
	if(sus < 131)
		return 130;
		
	if(sus < 141)
		return 140;
		
	if(sus < 151)
		return 150;				

	if(sus < 161)
		return 160;

	if(sus < 171)
		return 170;

	if(sus < 181)
		return 180;
		
	if(sus < 191)
		return 190;
		
	if(sus < 201)
		return 200;

	if(sus < 211)
		return 210;

	if(sus < 221)
		return 220;

	if(sus < 241)
		return 240;

	if(sus < 271)
		return 270;
		
	if(sus < 301)
		return 300;

	if(sus < 501)
		return 500;
		
	if(sus < 1001)
		return 1000;

	if(sus < 1911)
		return 1910;

return 0;
}


void BALDO(char *g, char *g1, char *g2, int n) {// ./numsimpl2 = ./ + numsimpl2, /NUMERIC/1/T/MODPRIME = /NUMERIC/1/T/ + MODPRIME .
	int j = 0, k = strlen(g), k1 = k-1, l;
	
	for(; k1 >= 0; k1--)
	if(g[k1]== '/') {k1++; break;}
	strncpy(g2, g, k1);
	g2[k1] = '\0';
	l = k1;
	
	if(n) {
		for(; k1 < k; k1++) {		
			g1[j++] = g[k1];
			}
	} else {
		for(; k1 < k; k1++) {
			(g[l] == 'N') && (g[l+4] == 'I') && (j < 8)? g1[j] = g[k1] + 32 : g1[j] = g[k1];
			j++;
			}
		}
	
	g1[j] = '\0';
	//if(n)
	//	printf("CN %s %s %s\n", g, g1, g2);
}


void SORT(char fil[][90], int S) {
char tmp[90] = "";
int i, j;

    for(i = 0; i < S-1; ++i)
        for(j = i+1; j < S ; ++j) {
            if(strcmp(fil[i], fil[j]) > 0) {
                strcpy(tmp, fil[i]);
                strcpy(fil[i], fil[j]);
                strcpy(fil[j], tmp);
            }
        }
}


void SORT3(char fil[][90], int S) {
int i, j;
char tmp[90] = "", g1[1500][90], g2[1500][90];

for(i = 0; i < S; i++) {
	BALDO(fil[i], g1[i], g2[i], 1);
}

    for(i = 0; i < S-1; ++i)
        for(j = i+1; j < S ; ++j) {
            if(strcmp(g1[i], g1[j]) > 0) {
                strcpy(tmp, fil[i]);
                strcpy(fil[i], fil[j]);
                strcpy(fil[j], tmp);
                
                strcpy(tmp, g1[i]);
                strcpy(g1[i], g1[j]);
                strcpy(g1[j], tmp);
            }
        }
}


void RECIDENTE(char *tx, char *TEXT, int jos, int sus, char *prog, char *cif, int josul, int susul, int r) {
	int size = 1000 * sizeof(char);
	char *buf = (char*)malloc(size);

	if(getcwd(buf, size) != NULL) {
	   //printf("Folderul actual: %s\n", buf);
	} else {
	   //perror("getcwd() error");
	   return;
	   }

	char prog1[50], prog2[50];
	BALDO(prog, prog1, prog2, 1);
	if(prog[0] == '.') {
		strcpy(prog2, buf);
	}
	
	//puts(prog1);
	char fis[40] = "";
	for(int i = 0; i < strlen(prog1); i++)
		fis[i] = ( (prog1[0] == 'n') && (i < 8) )? prog1[i] - 32 : prog1[i];
	strcat(fis, ".cc");
	
	char dir[1000], dir1[1000];
	FILE *F;
	strcpy(dir, prog2);//Era buf.
	strcpy(dir1, buf);
	
	if(strlen(buf) > 1) 
		strcat(dir, "/");
	strcat(dir, fis);// /NUMERIC/2/NUMSIMPL.cc
	//puts(dir);

	char tx2[100] = "";
	strcpy(tx2, tx);
	tx2[strlen(tx2) - 1] = 'C';// /run/media/root/3TB/GALAXILIS.NUMC
	F = fopen(tx2, "w");
	fputs(dir, F);
	fputc('\n', F);
	fputs(TEXT, F);
	fputc('\n', F);
	fputs(prog, F);
	fputc('\n', F);
	fputs(dir1, F);
	fputc('\n', F);
	fprintf(F, "%d %d %s %d %d %d", jos, sus, cif, josul, susul, r);
	fclose(F);
	free(buf);
}


void RECIDENTE2(char *tx, int argc, int *urc, int ss, char *ner, char *ner2, char *ner3, char *sh) {// /run/media/root/3TB/GALAXILIS.NUM2
	char t[100] = "";
	strcpy(t, tx);
	t[strlen(t) - 1] = 'C';
	char q[4][100] = {"", "", "", ""};
	int i, dat[6];

	if(!FILEEXISTS(t)){
		for(i = 0; i < 6; i++) {
			if(i < 4)
				strcpy(q[i], "/NIMIC.NIM");
			dat[i] = -1;
		}

		DIST2(tx, q, dat, argc, urc, ss, ner, ner2, ner3, sh);
		return;
	}

	FILE *F = fopen(t, "r");
	fgets(q[0], 100, F);
	q[0][strlen(q[0])-1] = '\0';
	fgets(q[1], 100, F);
	q[1][strlen(q[1])-1] = '\0';
	if(argc >= 2) {
		fgets(q[2], 100, F);
		q[2][strlen(q[2])-1] = '\0';
		fgets(q[3], 100, F);
		q[3][strlen(q[3])-1] = '\0';
	}
	
	for(i = 0; i < 6; i++) {
		fscanf(F, "%d", &dat[i]);
	}

	fclose(F);
	DIST2(tx, q, dat, argc, urc, ss, ner, ner2, ner3, sh);
}


void DIST1(char *arg1, const char *arg2) {
	long L = LUNGHEZ2(arg1);
	char Y[2000], *r;
	int i, j = 0, k, l = 0, m = 0, n;
	printf("Totalul: %llu .\n", L);
	FILE *F1 = fopen(arg1, "r");

	gmp_ui dist = strtol(arg2, &r, 10);
	printf("%llu\n", dist);
	fseek(F1, dist, SEEK_CUR);

	for(i = 0; (i < 50) && (L > ftell(F1)); i++) {
		fgets(Y, 2000, F1);
		/*if(i < 200)*/ printf("%d %s", k = strlen(Y), Y);
		j += (k-2) * 10 + (int)(Y[0] - 48);
		m++;
		}
	
	j /= m;		
	fseek(F1, L > 400? L - 400 : 0, SEEK_SET);
	fgets(Y, 2000, F1);
	fgets(Y, 2000, F1);
	m = strlen(Y) * (15 + 50);	
	fseek(F1, L > m? L - m : 0, SEEK_SET);
	system("sleep 3");
	printf("\n\nDin susul filei:\n\n");
	m = 0;

	for(i = 0; (i < 50) && (L > ftell(F1)); i++) {
		fgets(Y, 2000, F1);
		/*if(300 <= i)*/ printf("%d %s", k = strlen(Y), Y);
		if(k < 150) continue;
		
		if( (i > 0) || (ftell(F1) == strlen(Y))) {
			l += (k-2) * 10 + (int)(Y[0] - 48);
			m++;
			}
		}

	fclose(F1);
	l /= m;
	k = (l - j) / 10;
	printf("\nJos %d cu %d, sus %d cu %d.\n", j/10, m = j%10, l/10, n = l%10);

	if( ( (j/10 == l/10) && (m > n) ) || (j/10 > l/10) ) {
		n = -n;
		if(!n)
			l = -1;
	}
	
	if(m && (n < m) ) {
		n *= 10;
	}

	if(!m && !n) {
		m++; n++;
	}

	if(!m) m++;
	if(!n) n = l < 0? 1 : 9;
	printf("\nAdicătelea cică se face că documentul urcă %d cu %.0f.\n", k, trunc((double)n / m));
}


void DIST2(char *arg1, char q[][100], int *dat, int argc, int *urc, int ss, char *ner, char *ner2, char *ner3, char *sh) {	
	long L = LUNGHEZ2(arg1);
	char Y[2000], *r;
	int i, j = 0, k, l = 0, m = 0, n;
	FILE *F1 = fopen(arg1, "r");//, *NER, *NER2, *NER3, *SH;

	for(i = 0; (i < 500) && (L > ftell(F1)); i++) {
		fgets(Y, 2000, F1);
		k = strlen(Y);
		j += (k-2) * 10 + (int)(Y[0] - 48);
		m++;
		}
	
	j /= m;
	fseek(F1, L > 400? L - 400 : 0, SEEK_SET);
	fgets(Y, 2000, F1);
	fgets(Y, 2000, F1);
	m = strlen(Y) * (15 + 500);
	fseek(F1, L > m? L - m : 0, SEEK_SET);
	m = 0;	

	for(i = 0; (i < 500) && (L > ftell(F1)); i++) {
		fgets(Y, 2000, F1);
		k = strlen(Y);
		if(k < 150) continue;
		if( (i > 0) || (ftell(F1) == strlen(Y))) {
			l += (k-2) * 10 + (int)(Y[0] - 48);
			m++;
			}
		}

	fclose(F1);
	l /= m;
	k = (l - j) / 10;
	//NER = fopen("/DIST.TXT", "a");
	//fprintf(NER, "Jos %d cu %d, sus %d cu %d.\n", j/10, m = j%10, l/10, n = l%10);
	char *target = ner;
	target += sprintf(target, "Jos %d cu %d, sus %d cu %d.\n", j/10, m = j%10, l/10, n = l%10);

	if( ( (j/10 == l/10) && (m > n) ) || (j/10 > l/10) ) {
		n = -n;
		if(!n)
			l = -1;
	}
	
	if(m && (n < m) ) {
		n *= 10;
	}

	if(!m && !n) {
		m++; n++;
	}

	if(!m) m++;
	if(!n) n = l < 0? 1 : 9;
	double z = trunc((double)n / m);
	int z1 = dat[2] * (int)z;
	int z2 = dat[0] + k + (z1 > 9? 1 : 0);
	if(z1 > 9) z1 /= 10;
	urc[ss] = 10*k + (int)z;
	
//	fprintf(NER, "Documentul %s din %s asupra lui %s urcă %d cu %.0f și a plecat de la %d spre %d cu cifra %d.\nPe %s de la %d la %d.\nAcum trebuie plecat de la %d cu cifra %d.\n\n", arg1, q[0], q[1], k, z, dat[0], dat[1], dat[2], (dat[5]? "sus" : "jos"), dat[3], dat[4], z2, z1);
	target += sprintf(target, "Documentul %s din %s asupra lui %s urcă %d cu %.0f și a plecat de la %d spre %d cu cifra %d.\nPe %s de la %d la %d.\nAcum trebuie plecat de la %d cu cifra %d.\n\n", arg1, q[0], q[1], k, z, dat[0], dat[1], dat[2], (dat[5]? "sus" : "jos"), dat[3], dat[4], z2, z1);
	//q[2] = ./numsimpl, q[3] = /NUMERIC/3/ .
//	fclose(NER);
		
	//NER2 = fopen("/DIST2.TXT", "a");
	//fprintf(NER2, "cd %s\n%s %d %d %s b %d\n\n", q[3], q[2], z2, dat[1], q[1], z1);
	sprintf(ner2, "cd %s\n%s %d %d %s b %d %c %d %d\n\n", q[3], q[2], z2, dat[1], q[1], z1, dat[5]? 's' : 'j', dat[3], dat[4]);
	//fclose(NER2);
	
	char v[40] = "", v1[40] = "", v2[40] = "";//v trebuie cu q[0].
	strncpy(v2, q[0], strlen(q[0]) - 3);
	v2[strlen(q[0]) - 3] = '\0';
	BALDO(v2, v, v1, 0);
	strcat(v1, v);

	//NER3 = fopen("/DIST3.TXT", "a"), SH = fopen("/REC.sh", "a");
	//fprintf(NER3, "%s %d %d %s b %d\n", v1, z2, dat[1], q[1], z1);
	sprintf(ner3, "%s %d %d %s b %d %c %d %d\n", v1, z2, dat[1], q[1], z1, dat[5]? 's' : 'j', dat[3], dat[4]);
	//fclose(NER3);
	
	target = sh;
	//fprintf(SH, "%s %d %d %s d %d & ", v1, z2, dat[1], q[1], z1);
	target += sprintf(target, "%s %d %d %s d %d %c %d %d & ", v1, z2, dat[1], q[1], z1, dat[5]? 's' : 'j', dat[3], dat[4]);
	//fclose(SH);
	
	if(argc == 3)
		REN1(arg1);
}


void LIM(char **arg, int &argc, int k, int l) {
	char t[16][50];
	for(; arg[argc]; argc++);
	
	FILE *F = fopen("/CIF.h", "r");
	while(k < 10) {
		fgets(t[k++], 50, F);
	}
	//215205764
	fclose(F);
	sprintf(t[10], l ^ 1910? (l < 240? "#define MAX1 MAX1M\n" : "#define MAX1 MAX1%d\n") : "#define MAX1 MAX1TOT\n", l);
	sprintf(t[11], l ^ 1910? "#define HV H%d+2\n" : "#define HV HTOT\n", l);
	sprintf(t[12], l ^ 1910? "#define KV K%d+2\n" : "#define KV KTOT\n", l);
	sprintf(t[13], l ^ 1910? (l < 170? "#define SV 0\n" : "#define SV S%d+2\n") : "#define SV STOT\n", l);
	sprintf(t[14], l ^ 1910? "#define DV D%d+2\n" : "#define DV DTOT\n", l);
	sprintf(t[15], l ^ 1910? (l < 240? "#define EV 3" : "#define EV E%d") : "#define EV ETOT", l);
	F = fopen("/CIF.h", "w");
	
	for(k = 0; k < 16; k++) {
		fputs(t[k], F);
	}
	
	fclose(F);
}


void PREP1(char **arg) {
	char *tt, derek[90], prel[75], prel1[75], nume[45], nume2[50];
	int argc = 0, i, j = 0, k = 0, l = NUME2(strtol(arg[2], &tt, 10));
	LIM(arg, argc, k, l);
	for(i = strlen(arg[0]) -1; ; i--)
	if(arg[0][i] == '/') {i++; break;}
	strncpy(nume2, arg[0], i);
	
	for(; i < strlen(arg[0]); i++)
		nume[j++] = arg[0][i];
	//puts(nume);
	
	if(arg[0][0] ^ '.') {
		sprintf(derek, "cd %s", nume2);
		system(derek);
	}
	/*
	for(int i = 2; i < strlen(arg[0]); i++) {
		prel[i-2] = ( (arg[0][2] == 'n') && (i < 10)? arg[0][i] - 32 : arg[0][i]);//NUMSIMPL, MODPRIME, MODIFSUM, FACTORSUBM, SCLEPAMORIS.
		prel1[i-2] = arg[0][i];//numsimpl, MODPRIME, MODIFSUM, FACTORSUBM, SCLEPAMORIS.
		}*/
	j = strstr(nume, "numsimpl") != NULL;// || strstr(nume, "nnum") != NULL;
	for(int i = 0; i < strlen(nume); i++) {
		prel[i] = (j) && !(nume[i] >= 48 && nume[i] <= 57)? nume[i] - 32 : nume[i];//NUMSIMPL, MODPRIME, MODIFSUM, FACTORSUBM, SCLEPAMORIS.
		prel1[i] = nume[i];//numsimpl, MODPRIME, MODIFSUM, FACTORSUBM, SCLEPAMORIS.
		}
	
	strcat(nume2, prel);
	//puts(nume2);
	//puts(prel);
	sprintf(derek, "rm %s", prel1);
	system(derek);
	
	(prel[0] == 'F' || prel[0] == 'S' || (strstr(prel, "SUB") != NULL))? 
		sprintf(derek, "g++ -w -m64 %s.cc -lgmp -fopenmp -lRandom -o %s", prel, prel1) 
		: sprintf(derek, "g++ -w -m64 %s.cc -lgmp -fopenmp -o %s", prel, prel1);
	system(derek);
	sprintf(derek, "%s %s %s %s %s %s %s %s %s %s &", arg[0], arg[1], arg[2], arg[3], (arg[4][0] == 'a'? "c" : "d"), arg[5], arg[6], arg[7], arg[8], argc == 10? arg[9] : "");//Era b.
	//puts(derek);
	system(derek);
	
	if(arg[0][0] ^ '.') {
		//system("cd /");
		}
	exit(0);
}


gmp_ui LUNGHEZ(const char *n) {
	if(FILEEXISTS(n)) {
		FILE *F = fopen(n, "a");
		gmp_ui g = ftell(F);
		fclose(F);
		return g > 0;
	}

return 0;
}


gmp_ui LUNGHEZ2(const char *n) {
	if(FILEEXISTS(n)) {
		FILE *F = fopen(n, "a");
		gmp_ui g = ftell(F);
		fclose(F);
		return g;
	}

return 0;
}


int RENGEN(char *tx) {
	char t[100], t1 = tx[strlen(tx) - 1];
	int i, j, k = 1, u = strlen(tx);
	strcpy(t, tx);// BARG2.NUM
	
	if(LUNGHEZ(t)) {
		for(i = 0; tx[i] != '.'; i++);//BARG2
		i--;
		k = 1;
		t1 = '0';
		
		do {
			t[i] = t1;//BARG02
			for(j = i; j < u; j++)
				t[j+1] = tx[j];//BARG02.NUM
			
			t[u+1] = '\0';
			k = LUNGHEZ(t);
			if(t1 < 'A')
				t1 != '9'? t1++ : t1 += 8;
			else
				t1 != 'Z'? t1++ : t1 += 7;
		} while(k);
	
	if(!k && (t1 < 124)) {
		strcpy(tx, t);
		return 1;
		}
	return 0;
	}
return 1;
}


void REN1(char *tx) {
	int i, j, k, u = strlen(tx) - 1;
	char t[100], t1 = tx[u];	
	
	if(t1 == '2') {
		strcpy(t, tx);
		t[u] = '1';
		
		if(LUNGHEZ(t)) {
			for(i = 0; t[i] != '.'; i++);			
			k = 1;
			t1 = '0';
			
			do {
				t[i] = t1;
				for(j = i; j < u; j++)
					t[j+1] = tx[j];
				t[u+1] = '1';
				/*
				char t2[10] = "";
				t2[0] = t1;
				for(j = 1; i+j < u+2; j++)
					t2[j] = t[i+j-1];

				u = i+j;
				j = i;
				for(; j < u; j++)
					t[j] = t2[j-i];*/
				k = LUNGHEZ(t);
				if(t1 < 'A')
					t1 != '9'? t1++ : t1 += 8;
				else
					t1 != 'Z'? t1++ : t1 += 7;
			} while(k);		
		
		t[u+2] = '\0';
		}
		
		rename(tx, t);
		strcpy(tx, t);
	}
}


void REN2(char *tx) {//BARG2.NUM1
	char t1 = tx[strlen(tx) - 1];

	if( (t1 == '0') || (t1 == '1')) {//0 sau 1.
		char t[100];
		int i, j, k = 1, u = strlen(tx) - 1;
		strncpy(t, tx, u);// BARG2.NUM
		t[u] = '\0';
		
		if(LUNGHEZ(t)) {
			for(i = 0; tx[i] != '.'; i++);//BARG2
			i--;
			k = 1;
			t1 = '0';
			
			do {
				t[i] = t1;//BARG02
				for(j = i; j < u; j++)
					t[j+1] = tx[j];//BARG02.NUM
				
				t[u+1] = '\0';
				k = LUNGHEZ(t);
				if(t1 < 'A')
					t1 != '9'? t1++ : t1 += 8;
				else
					t1 != 'Z'? t1++ : t1 += 7;
			} while(k);		
		}

		rename(tx, t);
		strcpy(tx, t);		
	}

printf("%s, %llu.\n", tx, LUNGHEZ2(tx));
}


void REN3(char *n) {
	gmp_ui i, j = 0, k = 1;// /BOHAIDER.NUM2 -> BOHAIDER0.NUM2
	char n2[10] = "0.NUM2", n4 = '0';
	for(; n[j] != '.'; j++);

	do {
		for(i = 0; i < 6; i++)
			n[i+j] = n2[i];
		
		k = LUNGHEZ(n);
		if(n4 < 'A')
			n4 != '9'? n4++ : n4 += 8;
		else
			n4 != 'Z'? n4++ : n4 += 7;
		n2[0] = n4;
	} while(k);

	n[i+j] = '\0';
}


int CIF(char *Y, int n, int jos, int sus) {
	if((n < jos) || (n > sus) ) return 0;
	if(Y[--n] ^ '\n') return 0;
	--n;

	while(1) {
		if( (Y[n] < '0') || (Y[n] > '9') ) {
			return 0;
		}
		
	if(!n--) break;
	}

	return 1;
}


int CIF2(char *Y, /*int X, */int n) {
	//if(n ^ X) return 0;
	if(Y[--n] ^ '\n') return 0;
	--n;

	while(1) {
		if( (Y[n] < '0') || (Y[n] > '9') ) {
			return 0;
		}
		
	if(!n--) break;
	}

	return 1;
}


int CIF3(char *Y, int n) {
	--n;
	while(1) {
		if( (Y[n] < '0') || (Y[n] > '9') ) {
			return 0;
		}
		
	if(!n--) break;
	}

	return 1;
}


void PUTMAX2(const char *v) {
	int PP = LUNGHEZ2(v), BAZ[600], EXP[600], i = 0, j = 3, k = 0;
	mpz_t u;
	mpz_init(u);
	FILE *F = fopen(v, "r");
	char t;

	while(1) {
		fscanf(F, "%c", &t);
		if(t == ':')
			++k;
		if(ftell(F) == PP)
			break;
	}

	rewind(F);
	while(1) {
		fscanf(F, "%c", &t);
		if(t == ' ')
			{j--;}
		if(t == '\n')
			{j = 3;}

		if(!j)	{
			fscanf(F, "%d", &EXP[i]);
			i++;
			}
		
		if(i == k)
			break;
		}
		
	rewind(F);
	i = 0;

	while(1) {
		fscanf(F, "%d", &BAZ[i]);
		do {
			fscanf(F, "%c", &t);
		} while(t ^ '\n');

		if(++i == k) break;
	}	

	fclose(F);
	F = fopen("/PUTERILE.TXT", "w");
	for(i = 0; i < k; i++) {
		mpz_ui_pow_ui(u, BAZ[i], EXP[i]);
		gmp_fprintf(F, "%d la puterea %d este: %Zd.\n", BAZ[i], EXP[i], u);
		}

	fclose(F);
}


void POLOZKI2(int *g, gmp_ui div1[][42], gmp_ui sum1[][42], mpz_t div[][25], mpz_t sum[][25], const int N4, gmp_ui prag) {
gmp_ui l;
mpz_t d, e, f;
mpz_inits(d, e, f, NULL);

for(int i = 0; i < N4; i++) {
	int j, k = 0;
	mpz_ui_pow_ui(d, 2, 64);
	
	k = (g[i] < 10)? 21 : (g[i] < 100? 8 : (g[i] < 1000? 5 : (g[i] < 10000? 3 : 2) ) );
	l = 1;
	
	for(j = 0; j < k; j++) {
		div1[i][j] = l;
		sum1[i][j] = j? g[i] * sum1[i][j-1] + 1 : 1;
		l *= g[i];
	}

	mpz_set_ui(e, l);
	mpz_set_ui(f, g[i] * sum1[i][k-1] + 1);
	
	for(j = k; (j < 42); j++) {
		if(mpz_cmp(f, d) > 0) {
			break;
		}
			
		div1[i][j] = mpz_get_ui(e);
		sum1[i][j] = mpz_get_ui(f);
		mpz_mul_ui(e, e, g[i]);
		mpz_mul_ui(f, f, g[i]);
		mpz_add_ui(f, f, 1);
	}
	
	k = j-1;

	for(; j < 42; j++) {
		div1[i][j] = prag;
		sum1[i][j] = prag;
		}

	mpz_set_ui(div[i][0], div1[i][k]);
	mpz_set_ui(sum[i][0], sum1[i][k]);

	for(j = 1; j < 23; j++) {
		mpz_mul_ui(div[i][j], div[i][j-1], g[i]);
		mpz_mul_ui(sum[i][j], sum[i][j-1], g[i]);
		mpz_add_ui(sum[i][j], sum[i][j], 1);
		}
		
	for(j = 23; j < 25; j++) {
		mpz_set_ui(div[i][j], prag);
		mpz_set_ui(sum[i][j], prag);
		}
	}

mpz_clears(d, e, f, NULL);	
}


int GASCIF(char *cif, char cifr) {
	for(int i = 0; cif[i] ^ ':'; i++)
	if(cif[i] == cifr)
		return i;
return 0;
}


long GIACINTO(char *t2) {
	struct stat TRAMBUSTO;
	stat(t2, &TRAMBUSTO);
	struct tm * timeinfo = localtime(&TRAMBUSTO.st_ctime);
	long PALAVEROBALD = TRAMBUSTO.st_mtim.tv_sec;
	time_t rawtime; // Setup variable
	time(&rawtime); // Get time
	return rawtime - PALAVEROBALD;
	//printf("File time and date: %s. Seci: %ld. ", asctime(timeinfo), PALAVEROBALD);
 
 /* if(stat(t2, &TRAMBUSTO)==0)
   {
       auto mod_time = TRAMBUSTO.st_mtim;
   }*/
}

#define CHR '9'

int VER(char pcif, char *Y, int I) {
if( !(I ^ strlen(Y)) && CIF2(Y, I) && (Y[0] == pcif))
	return 1;
return 0;
}


int VER1(char *Y, int I) {
if( !(I ^ strlen(Y)) && CIF2(Y, I))
	return 1;
return 0;
}


int VER2(char *Y, int b1) {
if(!(strlen(Y) ^ b1) && CIF3(Y, b1))
	return 1;
return 0;
}


int FR(char pcif, char scif, char *Y, int I) {
if( !(I ^ strlen(Y)) && CIF2(Y, I)
	&& (Y[0] == pcif)
	&& (Y[1] == scif))
	return 1;
return 0;
}


int DALRIAD(char *t) {
	sprintf(t, !system("pidof CIRCENTE") && !system("pidof PARONTE")? "CIRCENTE cu PARONTE" 
	: !system("pidof CIRCENTE")? "CIRCENTE" 
		: !system("pidof PARONTE")? "PARONTE" : "");
	puts(t);
	printf("%d %d\n", system("pidof CIRCENTE"), system("pidof PARONTE"));

	if(strlen(t)) {
		printf("Interzicem circentizarea când avem deja CIRCENTE ori PARONTE. Vinovatul: %s.\n", t);
		return 1;
		}
		
return 0;
}


int NFIS(char *t4, const char *fis1, const char *fis2) {
	char *c1 = NULL, *c2 = NULL;
	int ret = 0;

	c1 = strstr(t4, fis1);
	if(fis2 != NULL) {
		c2 = strstr(t4, fis2);
	}

	ret +=  (c1 != NULL) + (c1 == NULL && c2 != NULL);
	return ret;
}


int DALRIAD2() {
	char t[60], *t1, t2[90], u;
	int nm = 0;
	strcpy(t, "/proc");
	DIR *dir;
	struct dirent *ent;
	int g, num[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	if ((dir = opendir (t)) != NULL) {
		char fil[300][90];
		
		while ((ent = readdir (dir)) != NULL) {
			t1 = strdup(ent->d_name);
			if(strlen(t1))
			if( (t1[0] >= '0'&& t1[0] <= '9') /*&& (NUME(t1) < 465530) */) {
				strcpy(t2, "/proc/");
				strcat(t2, t1);
				strcat(t2, "/cmdline");

				FILE *FP = fopen(t2, "r");
				char t3[60] = "";
				fgets(t3, 60, FP);
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
							
						num[0] += NFIS(t4, "CIRCE", NULL);
						num[1] += NFIS(t4, "PARO", NULL);
						}
					}
				}
			}
	
			closedir (dir);
	
			if(num[0] > 1 || num[1] > 1) {
				printf("Interzicem circentizarea când avem deja CIRCENTE ori PARONTE. Vinovatul: %s.\n", num[0] + num[1] >= 3? "CIRCENTE cu PARONTE" 
					: num[0] > 1? "CIRCENTE" : "PARONTE");
				return 1;
				}

			
			} else {
			  // could not open directory
			  perror ("VERGOGNATI");
			 // continue;// EXIT_FAILURE;
		}
		
return 0;
}


//MAI JOS CÂRDUL DE FILTRARE:
#define JG 1
#define NT 4

void JAVRIL(int k, int &k1, char *Y, FILE *S1, int a1, int b1, mpz_t *ns) {
for(k = 0, k1 = 0; k < JG; k++) {
		fgets(Y, 1920, S1);
		if ((strlen(Y) >= a1) && (strlen(Y) < b1) ) {
			mpz_set_str(ns[k1++], Y, 10);
		}
	}
}


void CUR(FILE *S2, char *t) {
long lung = 0, lung2 = LUNGHEZ2(t);
char t1, t2[2000], ns[JG][2000];
int nn = 0;

S2 = fopen(t, "r");
fseek(S2, lung2, SEEK_CUR);

do {
	fseek(S2, nn? -2 : -1, SEEK_CUR);
	fscanf(S2, "%c", &t1);	
	if(t1 == '\n') nn++;
} while(nn ^ JG);

t1 = 'a';

for(int i = 0; (i < JG) && (ftell(S2) < lung2); i++) {
	fgets(ns[i], 2000, S2);
	//puts(ns[i]);
	
	if(i && !strcmp(ns[i], ns[i-1])) {
		fclose(S2);			
		sprintf(t2, "truncate --size=%ld %s", lung, t);
		system(t2);
		printf("Lungimea corectată a fiȘierului nou %s este %ld.\n", t, lung);	
		t1 = 'b';
		break;
		}
		
	lung = ftell(S2);
	}
	
if(t1 == 'a')
	fclose(S2);
}


#endif


/*
/media/root/T6/LPT240.LITT


/numsimpl 200 240 /media/root/T6/LPT240.LITT a 1 s 2 30000
/numsimpl 200 240 /media/root/T6/LPT240.LITT b 1 j 2 30000
/MODPRIME 200 240 /media/root/T6/LPT240.LITT a 1 s 2 30000000
/MODPRIME 200 240 /media/root/T6/LPT240.LITT b 1 j 2 30000000
/HMODIFSUM 200 215 /media/root/T6/LPT240.LITT a 1 s 2 2000
/HMODIFSUM 215 240 /media/root/T6/LPT240.LITT b 1 s 2 2000
sleep 64
/HMODIFSUM 200 215 /media/root/T6/LPT240.LITT b 1 j 2 2000
sleep 64
/HMODIFSUM 215 240 /media/root/T6/LPT240.LITT b 1 j 2 2000

*/
