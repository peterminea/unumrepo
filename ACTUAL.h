#ifndef _ACTUAL_H
#define _ACTUAL_H

#include "/TOLIL0.h"
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include <dirent.h>

#define NN 11000000U
mpz_t W[NN];

//FPRIM.TXT din PARI + înlocuirea parantezelor drepte și a punctuației cu nimic + LITUAN + ADTEXT = noile numere prime de compunere a numerelor.
//429 + 161, adică 4864 + 429 cu 457 + 161. 5293 + 618. 5911. 590 de numere noi.
//PRIME2.TXT al lui FACTORSUBM: de aici înainte are 5293 + 618.


void ADUNTEXT(mpz_t *W, long &K, long &V, gmp_ui u, char *S, FILE *f1);

void MODUL3(int a1, int b1, gmp_ui *cur, char fil[][90], int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, mpz_t u, long r1, long R1, int *VEC, int *min, int *max, int mod, mpz_t *W);


void IATEXT(int a1, int b1, gmp_ui *cur, char fil[][90], long &K, long &V, char *S, char p1, char p2, int *min, int *max, int num, char scif1, char scif2, int mod, mpz_t *W) {//a1+1, b1+2.
	char t[80], *t1, t2[90], u, u1;
	int i1, ss, c, z, nm = 0, SP = 0;
	DIR *dir;
	struct dirent *ent;
	long PP;
	FILE *f1;

if(!num) {
	for(SP = 0, i1 = 0; i1 < 1000; i1++)
		cur[i1] = 0;

	for(i1 = 0; i1 < NDISC; i1++) {//HDD + SSD.
		strcpy(t, disc[i1]);

		if ((dir = opendir (t)) != NULL) {
			while ((ent = readdir (dir)) != NULL) {
				t1 = strdup(ent->d_name);
				char ext[6] = ".LIT", ext1[6] = ".NUQ", ext2[6] = ".LPKH";
				if(a1 < 311) {
					if(a1 > 140) strcpy(ext, ".LPN");
					strcpy(ext1, ".NUM");
					strcpy(ext2, ".LPKM");
					}
				int ln = strlen(t1);//, ln2 = (strlen(ext) + strlen(ext1)) / 2;
				int l1 = (strlen(ext) + strlen(ext1)) >> 1, l2 = strlen(ext2);

				if( (ln > 4) && (!strcmp(&t1[ln-l1], ext) || !strcmp(&t1[ln-l1], ext1) || !strcmp(&t1[ln-l2], ext2) ) ) {
					strcpy(fil[SP], t);
					strcat(fil[SP++], t1);
					}
				}

				closedir (dir);
			} else {
			  // could not open directory
			 // perror ("VERGOGNATI");
			  continue;// EXIT_FAILURE;
			}
		}
		
		SORT3(fil, SP);//МУЗЫКА ВОЙНЫ
		min[999] = SP;
	} else {
		SP = min[999];
	}
	
		if(!num) {
			c = (a1 + b1) >> 1;
			printf("%d %sfișiere, intervalul %d-%d.", SP, PREP(SP), a1-1, (a1 > 1550? 1919 : b1-2));
			printf((mod ^ 3)? " Numere de %d %scifre.\n" : " Numere care nu au fix %d %scifre, adică de la %d la %d.\n" , c-1, PREP(c-1), a1, b1-2);
			}		
		/*
		char ba[1920];
		mpz_get_str(ba, 10, W[0]);
		*/
		if(!(mod & 1)) {
			printf(mod ^ 4? "%c.\n" : "%c cu %c.\n", p1, scif1);
			//printf(mod ^ 4? "Cifra %c.\n" : "Cifra %c, subcifra %c.\n", ba[0], scif1);
		}		
		
		for(int ss = 0; ss < SP; ss++) {
			strcpy(t2, fil[ss]);
			PP = LUNGHEZ2(t2);
			if( (PP < 1000) || (V + 2 > N1) || (PP > 3000000000000U) ) {cur[ss] = 0; continue;}
			z = 0;
			f1 = fopen(t2, "r");			
			if(!num)
				CALCMINMAX(min[nm], max[nm], f1, PP, S);
			//if(!num && GIACINTO(t2) > 600000) max[nm] = 0;
			//if(!max[nm]) {fclose(f1); ++nm; continue;}
			fclose(f1);
			strcpy(t2, (max[nm] < a1? "Prea jos.\n" : (2+min[nm] > b1? "Prea sus.\n" : t2) ) );

			if(t2[0] != '/') {
				++nm;
				cur[ss] = 0;
				continue;
			}
			
			z = (a1 > 1550? 1919 : b1-2);			
			f1 = fopen(t2, "r");
			c = a1 + 1;
			u = 'd';
			nm++;
			gmp_ui urccur, urcurm;
			
			if(!num || !cur[ss])
				mod ^ 4? urccur = URC1(f1, c, S, u, (PP / 100), PP, p1) : urccur = URC2(f1, c, S, u, (PP / 100), PP, p1, scif1);
			else
				{fseek(f1, cur[ss], SEEK_SET); urccur = cur[ss];}

			if( (PP == urccur) || ((u == 'n') && (mod ^ 3))) {
				cur[ss] = 0;
				fclose(f1);
				continue;
			}//Rezultat 0.
			
			mod ^ 4? urcurm = URC1(f1, ((mod & 1) || (p2 == ':')? b1 : c), S, u1, (PP / 100), PP, p2) 
				: urcurm = URC2(f1, ((p2 == ':') && (scif2 == ':'))? b1 : (b1 - 1), S, u1, (PP / 100), PP,  (scif2 == ':')? p2 : p1, scif2);
			cur[ss] = urcurm;
			
			if((urccur >= urcurm)) {
				cur[ss] = 0;
				fclose(f1);				
				continue;
			}
			
			fseek(f1, urccur, SEEK_SET);
			//printf("%s, %d-%d %scifre, %llu - %llu.\n", t2, min[nm-1], max[nm-1], PREP(max[nm-1]), urccur, urcurm);
			ADUNTEXT(W, K, V, urcurm, S, f1);
			}		
}


void ADUNTEXT(mpz_t *W, long &K, long &V, gmp_ui u, char *S, FILE *f1) {
while(1) {
	if( !(ftell(f1) ^ u) )
		break;
	fgets(S, 1920, f1);
	mpz_set_str(W[V], S, 10);
	V += CB(W, W[V], 0, K);
	}
}


void LIT(mpz_t *W, int K, int V, char *Y, const char *CIT, int jos, int sus) {
	char flit[50];
	int num = (sus < 2253)? (sus) : ((sus+1)/2)*2;
	sprintf(flit, "%sLIT%d.LPKQ", LITDIR, num);
	FILE *FLIT = fopen(flit, "a");
	mpz_t unu, doi;
	mpz_inits(unu, doi, NULL);
	mpz_ui_pow_ui(unu, 10, jos);
	mpz_ui_pow_ui(doi, 10, sus);
	num = K;
	
	//omp_set_num_threads(4);
	//#pragma omp parallel for schedule(dynamic, 1)
	for(K = num; K < V; K++)
	if(mpz_cmp_ui(W[K], 0) && (mpz_cmp(W[K], unu) > 0) && (mpz_cmp(W[K], doi) < 0)) {
		//#pragma omp critical
		SCRIE(W[K], Y, FLIT);
	}

	mpz_clears(unu, doi, NULL);
	fclose(FLIT);
}


void MODUL1(int a1, int b1, gmp_ui *cur, char fil[][90], int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, long r1, long R1, mpz_t d1, int *VEC, int *min, int *max, int mod, mpz_t *W) {
//printf("Modul %d nu are divizare.\n", mod);
int Z;

while(1) {/*
	if(a1 == 74)
		{
		TEXTSAR(w1, Y, a1+2, b1+2, PP, CIT, SCR);
		fclose(f1);
		a1 = b1;
		b1 = VEC[++q];
		p--;
		printf("%d %d %d\n", a1, b1, p);
		f1 = fopen(CIT, "r");
		fseek(f1, PP, SEEK_CUR);
		fgets(Y, 1920, f1);
		mpz_set_str(W[0], Y, 10);
		}*/

	//I = 2+b1;	
	V = 0;
	RAT(f1, 2+b1, Y, w1, P, PP, PP1, mod, 0, q-1);
	
	while(1) {
		fgets(Y, 1920, f1);
		mpz_set_str(W[V++], Y, 10);
		if(!(ftell(f1) ^ PP1)) {
			break;
		}
	}

	QPAR(W, V);
	//printf("Gata prima sortare la %llu.\n", ftell(f1));
	K = V;
	//printf("%d %d\n", K, b1);
	IATEXT(a1+1, b1+2, cur, fil, K, V, Y, 0, 0, min, max, q-1, ':', ':', mod, W);//exit(0);
	//printf("\nDe la textele numerice au venit %d %snumere.\n", V - K, PREP(V-K));
	
	if(V > K1)
		K1 = V;
	mpz_ui_pow_ui(W[V], 10, b1);
	
	if(V == K) {
		fseek(f1, PP, SEEK_SET);
		CITR(8250000, f2, f1, PP1 - PP);
		goto s4;
		}

	LIT(W, K, V, Y, CIT, a1, b1);//goto s4;
	//HS(W, d1, V);
	QPAR(W, V);
	//printf("Gata sortarea.\n");
	r1 = 0;
	
	//#pragma omp parallel for private(Y) schedule(dynamic, 1)
	for(R1 = 0; R1 < V; R1++) {
		if(mpz_cmp (W[R1], W[R1+1])) {
			mpz_get_str(Y, 10, W[R1]);			
			if(VER2(Y, b1)) {
				//#pragma omp critical
				SCRIE1(Y, f2);
				++r1;
				}
			}
		//++R1;		
		}
		
	NUM += (r1 - K);
	//printf("Vin la GIG%d.TXT %ld %snumere. ", NUME2(b1), r1 - K, PREP(r1-K));
	s4:
	//printf("Gata scrierea.\n");
	a1 = VEC[q];
	
	if(!(--p))
		break;
	b1 = VEC[++q];
	}
}


void MODUL2(int a1, int b1, gmp_ui *cur, char fil[][90], int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, long r1, long R1, mpz_t d1, int *VEC, int *min, int *max, int mod, mpz_t *W, char cifr) {
//printf("Modul %d are divizare.\n", mod);
char p2, ps2, cif[10] = {'1', '2', '3', '4', '5', '6', '7', '8', CHR, ':'};
int fr, num = 0;

while(1) {
	fr = 0;
	if(num == 0) {
		fr = (cifr == ':')? 0 : GASCIF(cif, cifr);
		}

	for(; fr < 9; fr++) {
		//printf("FR: %d, %d.\n", fr);		
		V = 0;
		p2 = cif[fr+1];
		RAT(f1, (p2 == ':'? 2+b1 : 2+a1), Y, w1, P, PP, PP1, mod, p2, num);
		I = b1 + 1;
		
		if(PP ^ PP1) {
			while(1) {
				fgets(Y, 1920, f1);
				if(VER(p2, Y, I)) {
					mpz_set_str(W[V++], Y, 10);
					  }

				if(!(ftell(f1) ^ PP1)) {
					break;
					}
				}

			QPAR(W, V);
			//printf("Gata prima sortare la %llu.\n", ftell(f1));
		}
		K = V;
		//printf("%d %d\n", K, b1);
		IATEXT(a1+1, b1+2, cur, fil, K, V, Y, cif[fr], p2, min, max, num, ':', ':', mod, W);
		//printf("\nDe la textele numerice au venit %d %snumere.\n", V - K, PREP(V-K));
		if(V > K1)
			K1 = V;
		mpz_ui_pow_ui(W[V], 10, b1);
	
		if(V == K) {
			fseek(f1, PP, SEEK_SET);
			CITR(8250000, f2, f1, PP1 - PP);
			goto s4;
		}

		LIT(W, K, V, Y, CIT, a1, b1);
		//goto s4;//De scos sau de nescos.
		QPAR(W, V);
		//printf("Gata sortarea.\n");
		r1 = 0, R1 = 0;

		//#pragma omp parallel for private(Y) schedule(dynamic, 1)
		for(R1 = 0; R1 < V; R1++) {
			if(mpz_cmp (W[R1], W[R1+1])) {
				mpz_get_str(Y, 10, W[R1]);
				if(VER2(Y, b1) && (Y[0] == cif[fr])) {
					//#pragma omp critical
					SCRIE1(Y, f2);
					++r1;
					}
				}
			//++R1;
			}
		
		NUM += (r1 - K);
		//printf("Vin la GIG%d.TXT %ld %snumere. ", NUME2(b1), r1 - K, PREP(r1 - K));
		s4:		
		//printf("Gata scrierea.\n");
		num++;
	}
		
	cifr = ':';
	a1 = VEC[q];
	if(!(--p))
		break;
	b1 = VEC[++q];	
	}
}


void MODUL3(int a1, int b1, gmp_ui *cur, char fil[][90], int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, long r1, long R1, mpz_t d1, int *VEC, int *min, int *max, int mod, mpz_t *W) {
//printf("Modul %d nu are divizare.\n", mod);
int X;

while(1) {	
	V = 0;
	I = b1 + 2;
	RAT(f1, 2+b1, Y, w1, P, PP, PP1, mod, 0, q-1);

	while(1) {
		fgets(Y, 1920, f1);
		mpz_set_str(W[V++], Y, 10);
		
		if(ftell(f1) == PP1) {
			if(PP1 == P) {
				if(b1 > 1910) b1 = 1910;				
			} else if(w1 == 'n') {
				b1 = strlen(Y) - 2;
				VEC[q] = b1;
				if(VEC[q] >= VEC[q+1]) VEC[q+1] += (strlen(Y) - I);
				printf("Deosebirea este %d.\n\nAcum noul vector arată aşa:\n", (strlen(Y) - I));
				for(int i1 = 0; i1 < q+p; i1++) printf("%d ", VEC[i1]);
				putchar('\n');
				}	
			break;
			}		
		}

	QPAR(W, V);
	//printf("Gata prima sortare la %llu.\n", ftell(f1));
	K = V;
	//printf("%d %d\n", K, b1);
	IATEXT(a1+1, b1+2, cur, fil, K, V, Y, 0, 0, min, max, q-1, ':', ':', mod, W);
	//printf("\nDe la textele numerice au venit %d %snumere.\n", V - K, PREP(V-K));
	if(V > K1)
		K1 = V;
	mpz_ui_pow_ui(W[V], 10, b1);
	
	if(V == K) {
		fseek(f1, PP, SEEK_SET);
		CITR(8250000, f2, f1, PP1 - PP);
		goto s4;
	}

	LIT(W, K, V, Y, CIT, a1, b1);
	QPAR(W, V);
	//printf("Gata sortarea.\n");
	r1 = 0;
	R1 = 0;
	X = 1 + b1;
	
	//#pragma omp parallel for private(Y) schedule(dynamic, 1)
	for(R1 = 0; R1 < V; R1++) {
		if(mpz_cmp(W[R1], W[R1+1])) {
			mpz_get_str(Y, 10, W[R1]);
			if((strlen(Y) > a1) && CIF3(Y, strlen(Y)) && (strlen(Y) < X) ) {
				//#pragma omp critical
				SCRIE1(Y, f2);
				++r1;
				}
			}
		//++R1;
		}
		
	NUM += (r1 - K);
	//printf("Vin la GIG%d.TXT %ld %snumere. ", NUME2(b1), r1 - K, PREP(r1-K));
	s4:	
	//printf("Gata scrierea.\n");
	a1 = VEC[q];
		
	if(!(--p))
		break;
	b1 = VEC[++q];
	}
}


void MODUL4(int a1, int b1, gmp_ui *cur, char fil[][90], int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, long r1, long R1, mpz_t d1, int *VEC, int *min, int *max, int mod, mpz_t *W, char cifr, char cifr2) {
//printf("Modul %d are divizare.\n", mod);
char cif[10] = {'1', '2', '3', '4', '5', '6', '7', '8', CHR, ':'}, p2, ps2, cif2[11] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', CHR, ':'};
int pp1, fr, fr1, num = 0;

while(1) {
	fr = 0, fr1 = 0;
	if(!num) {
		fr = (cifr == ':')? 0 : GASCIF(cif, cifr);
		fr1 = (cifr2 == ':')? 0 : GASCIF(cif2, cifr2);
	}

	for(; fr < 9; fr++) {
		for(; fr1 < 10; fr1++) {
			//printf("FR CU FR1: %d, %d.\n", fr, fr1);
			pp1 = (cif2[fr1] == CHR);
			V = 0;
			p2 = cif[fr+1];
			I = b1 + 1;
			ps2 = cif2[fr1+1];
			RAT2(f1, ((p2 == ':') && (ps2 == ':'))? 2+b1 : 2+a1, Y, w1, P, PP, PP1, mod, cif[fr], p2, ps2, num);
			
			if(PP ^ PP1) {
				while(1) {
					fgets(Y, 1920, f1);
					if(FR(cif[fr], cif2[fr1], Y, I)) mpz_set_str(W[V++], Y, 10);
					if(!(ftell(f1) ^ PP1)) {
						break;
						}
				}

				QPAR(W, V);
				//printf("Gata prima sortare la %llu.\n", ftell(f1));
			}
			K = V;
			//printf("%d %d\n", K, b1);
			IATEXT(a1+1, b1+2, cur, fil, K, V, Y, cif[fr], p2, min, max, num, cif2[fr1], ps2, mod, W);
			//printf("\nDe la textele numerice au venit %d %snumere.\n", V - K, PREP(V-K));
			if(V > K1)
				K1 = V;
					
			if(V == K) {
				fseek(f1, PP, SEEK_SET);
				CITR(8250000, f2, f1, PP1 - PP);
				goto s4;
			}
			
			mpz_ui_pow_ui(W[V], 10, b1);
			LIT(W, K, V, Y, CIT, a1, b1);
			//goto s4;
			QPAR(W, V);
			//printf("Gata sortarea.\n");
			r1 = 0, R1 = 0;

			//#pragma omp parallel for private(Y) schedule(dynamic, 1)
			for(R1 = 0; R1 < V; R1++) {
				if(mpz_cmp(W[R1], W[R1+1])) {
					mpz_get_str(Y, 10, W[R1]);
					if(VER2(Y, b1) && (Y[0] == cif[fr]) && (Y[1] == cif2[fr1])) {
						//#pragma omp critical
						SCRIE1(Y, f2);
						++r1;
						}
					}
				//++R1;
				}
		
		NUM += (r1 - K);
		//printf("Vin la GIG%d.TXT %ld %snumere. ", NUME2(b1), r1 - K, PREP(r1-K));
		s4:		
		//printf("Gata scrierea.\n");
		num++;
		}
	fr1 = 0;
	}
		
	cifr = ':';
	a1 = VEC[q];
	if(!(--p))
		break;
	b1 = VEC[++q];
	}
}


void UMPLERE(int a1, int b1, gmp_ui *cur, char fil[][90], int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, mpz_t *W, mpz_t d1, long r1, long R1, int *VEC, int *min, int *max, int mod, char cifr, char cifr2) {
f2 = fopen(SCR, "a");
q = 1;
b1 = VEC[q];

mod == 1?
	MODUL1(a1, b1, cur, fil, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, r1, R1, d1, VEC, min, max, mod, W) :
	mod == 2? MODUL2(a1, b1, cur, fil, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, r1, R1, d1, VEC, min, max, mod, W, cifr) :
	mod == 3? MODUL3(a1, b1, cur, fil, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, r1, R1, d1, VEC, min, max, mod, W) :
	MODUL4(a1, b1, cur, fil, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, r1, R1, d1, VEC, min, max, mod, W, cifr, cifr2);

fclose(f2);
if(!NUM) {
	//i = remove(SCR);//Nimic nou, jos cu R.TXT.
	printf("Nu sunt numere noi. Fară fară du-te afară.\n");
	//exit(0);
	}
K1++;
for(q = 0; q ^ K1; q++) {
	//mpz_set_str(W[i], "0", 10);
	//mpz_clear(W[i]);
	}

fclose(f1);
printf("%s are dimensiunea %lu, noul GIG%d.TXT ia %llu %snumere noi de %d %scifre.\n\n", SCR, LUNGHEZ2(SCR), NUME2(b1), NUM, PREP(NUM), b1, PREP(b1));
}


void MARE(int a1, int b1, gmp_ui *cur, char fil[][90], int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, unsigned long P1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, mpz_t *W, mpz_t d1, long r1, long R1, int *VEC, int *min, int *max, int mod, char cifr, char cifr2) {
f2 = fopen(SCR, "a");
UMPLERE(a1, b1, cur, fil, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, W, d1, r1, R1, VEC, min, max, mod, cifr, cifr2);
}


void ACTUAL(unsigned long F, int a1, int b1, char *CIT, int mod, mpz_t *W, char cifr, char cifr2) {

unsigned long P, P1, PP, PP1;
gmp_ui NUM = 0;
int I, p, q, X, VEC[1000], min[1000], max[1000];
long r1, R1, K, V, K1 = 0;
FILE *f1, *f2;
char w1, Y[2000], CIT1[100], SCR[100];
char fil[1000][90];
gmp_ui cur[1000];
mpz_t d1;
mpz_init_va(d1, NULL);

TXT(b1, CIT);
printf("%d %d %d\n", a1, b1, mod);
//printf("%s se opreşte la numărul %d.\n\n", CIT, NUME2(b1));
q = a1;
p = 0;

if(a1 < 1540) {//1187.
	mod = ((mod == 1) && (a1 >= 80) && (a1 < 100)? 2 : mod);
	while(q <= b1) {
		VEC[p++] = q;
		q++;
		}
	}
else {
	mod = 3;
		for(int i = a1; i <= 1910; i += (1910-a1)) {
			VEC[p++] = i;
		}
	P = 0;
	for(int i = 0; i < p; i++)
	if(VEC[i] < b1) {
		VEC[P++] = VEC[i];
		}//Prima abrupere după 1186.
		
	VEC[P++] = b1;
	p = P;
}
/*
for(int i1 = 0; i1 < p; i1++)
	printf("%d ", VEC[i1]);
printf("\n%d\n", p--);*/
p--;
sprintf(CIT1, "GIG%d.TXT", NUME2(b1));
GASGIG(Y, CIT1);
strcpy(CIT1, Y);
if(strlen(CIT1) < 4) exit(0);
puts(CIT1);
P = LUNGHEZ2(CIT1);
if(!P) exit(0);
f1 = fopen(CIT1, "r");
P1 = ( (b1 - a1 == UNIT(NUME(CIT1))) && ((cifr == '1') || (cifr == ':')) && ((cifr2 == '0') || (cifr2 == ':')))? 0 : mod ^ 4? URC1(f1, a1+2, Y, w1, P/1000, P, cifr) 
		: URC2(f1, a1+2, Y, w1, P/1000, P, cifr, cifr2);//Cifră sau ':'; Mare atenție, mare.

strcpy(SCR, RAD);

sprintf(Y,
	  a1 < 170? "14TB"
	: a1 < 180? "10T"
	: a1 < 190? "T12"
	: a1 < 200? "8T"
	: a1 < 210? "T12"
	: a1 < 220? "14TB"
	: a1 < 240? "12T"
	: a1 < 270? "TB8"
	: "TB8");

strcat(SCR, Y);
sprintf(Y, "/R%d.TXT", NUME2(b1));
strcat(SCR, Y);
puts(SCR);
//omp_set_num_threads(4);
TRUNCTEXT(P1, PP1, SCR, f1, mod, a1, w1, cifr, cifr2);
sprintf(Y, "%sLIT%d.LPKQ", LITDIR, a1+1);
TRUNCTEXT(P1, PP1, Y, f1, mod, a1, w1, cifr, cifr2);
MARE(a1, b1, cur, fil, p, q, NUM, P, PP, PP1, Y, K1, P1, K, V, f1, f2, CIT1, SCR, w1, I, W, d1, r1, R1, VEC, min, max, mod, cifr, cifr2);
NUM += F;
//printf("Totalul numeric este acum: %llu.\n", NUM);
f1 = fopen("/TOTAL.TXT", "a");
fprintf(f1, "Total: %llu.\n", NUM);
fclose(f1);
mpz_clears(d1, NULL);
}

#endif
