#ifndef _ACTUAL3_H
#define _ACTUAL3_H

/*#include "/GMP64.h"
#include <ctype.h>
#include "/TEXTUL.h"
#include "/URC.h"
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <dirent.h>
#include <cstdio>*/
#include "/TOLIL.h"
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include <dirent.h>

char A[N1][DIMM];


void MODUL4(int a1, int b1, gmp_ui *cur, char fil[][90], int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, char A[][DIMM], long r1, long R1, int *VEC, int *min, int *max, int mod, char cifr);

void ADUNTEXT(long K, long &V, gmp_ui u, int sq, FILE *f1);

void MODUL3(int a1, int b1, gmp_ui *cur, char fil[][90], int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, char A[][DIMM], mpz_t u, long r1, long R1, int *VEC, int *min, int *max, int mod);


void IATEXT(int a1, int b1, gmp_ui *cur, char fil[][90], char a[][DIMM], long &K, long &V, char *S, char p1, char p2, int *min, int *max, int num, char scif1, char scif2, int mod) {//a1+1, b1+2.
	char t[90], *t1, t2[90], u, u1;
	DIR *dir;
	struct dirent *ent;
	int i1, c, ss, SP, nm = 0, nm2 = 0, z, sq = strlen(A[V-1]);
	long PP;
	FILE *f1;
	//char fis2[200][90];
	//gmp_ui cur2[200], urm[200];
	//omp_set_num_threads(8);
	
if(!num) {
	for(SP = 0, i1 = 0; i1 < 1100; i1++)
		cur[i1] = 0;

	for(i1 = 0; i1 < NDISC; i1++) {//HDD + SSD.
		strcpy(t, disc[i1]);

		if ((dir = opendir (t)) != NULL) {
			while ((ent = readdir (dir)) != NULL) {
				t1 = strdup(ent->d_name);
				char ext[6] = ".LPT", ext1[6] = ".NUQ", ext2[6] = ".LPKH";
				if(a1 < 311) {
					if(a1 > 14) strcpy(ext, ".TXQ");
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
		min[1199] = SP;
	} else {
	SP = min[1199];
	}
		/*
		if(!num) cur[nm] = (scif1 == 't'? URC1(f1, c, S, u, (PP / 100), PP, ':') : URC2(f1, c, S, u, (PP / 100), PP, p1, scif1));
		else fseek(f1, cur[nm], SEEK_CUR);//Asta după ce, de la capătul primului pas încolo, curul a luat valoarea lui "urm" pentru următorul pas.
		//La modul 1, nu trebuie să fie nevoie de paşii ăştia, acolo un număr de cifre se parcurge dintr-o dată la bucată.
		//Dar la doiar chiar ar prinde bine nişte rapidizări de fseek prin fişiere ca să omitem atâtea urcări.
		//Doar la pasul 0, o urcare curentă, iar la restul fseek-uri directe la poziţia curentă, care coincide cu "următoarea" precedentului.
		//Asta este, de urcsus-uri cu URC nu scăpăm, dar măcar mai câştigăm viteză de lucru omiţând nişte urcjos-uri, substituite cu fseek de-a dreptul.
		//Şi când trecem de la cur la urm, oricum nu e cu rewind şi urcare de la zero, ci ne bazăm pe zona curentă ca plecare în "sus" prin fişier, dar barem câştigăm timp la urcarea de bază.
		//Însă asta înseamnă şi ca la modul 2, pe tot timpul parcurgerii numărului de cifre, să păstrăm intactă lista de fişiere NUM, fără ştergeri din zbor cu VARONTE, că şi vectorul de cururi trebuie să fie integru.
		*/		
		
		if(!num) {
			c = (a1 + b1) >> 1;
			printf("%d %sfișiere, %d mărimea stringurilor, intervalul %d-%d.", SP, PREP(SP), DIMM, a1-1, (a1 > 1550? 1919 : b1-2));
			printf((mod ^ 3)? " Numere de %d %scifre.\n" : " Numere care nu au fix %d %scifre, adică de la %d la %d.\n" , c-1, PREP(c-1), a1, b1-2);
			}

		if(!(mod & 1)) {
			printf(mod ^ 4? "%c.\n" : "%c cu %c.\n", p1, scif1);
		}

		for(ss = 0; ss < SP; ss++) {
			if(V + 2 > N1) break;
			strcpy(t2, fil[ss]);
			PP = LUNGHEZ2(t2);
			if( (PP < 1000U) || (PP > 150000000000L) ) {cur[ss] = 0; continue;}
			z = 0;
			f1 = fopen(t2, "r");
			!num? CALCMINMAX(min[nm], max[nm], f1, PP, S) : fseek(f1, PP, SEEK_CUR);
			//CALCMINMAX(min[nm], max[nm], f1, PP, S);
			//if(!num && GIACINTO(t2) > 600000) max[nm] = 0;
			//if(!max[nm]) {fclose(f1); ++nm; continue;}
			fclose(f1);
			strcpy(t2, (max[nm] < a1? "Prea jos.\n" : (2+min[nm] > b1? "Prea sus.\n" : t2) ) );
			
			if(t2[0] != '/') {
				++nm;
				cur[ss] = 0;
				continue;
			}			
			
			//puts(t2);
			f1 = fopen(t2, "r");
			c = a1 + 1;
			u = 'd';
			nm++;
			gmp_ui urcjos, urcsus;			
			
			if(!num || !cur[ss])
				mod ^ 4? urcjos = URC1(f1, c, S, u, (PP / 100), PP, p1) : urcjos = URC2(f1, c, S, u, (PP / 100), PP, p1, scif1);
			else
				{fseek(f1, cur[ss], SEEK_SET); urcjos = cur[ss];}
			//putchar('\n');
			if( (PP == urcjos) || ((u == 'n') && (mod ^ 3)) ) {				
				cur[ss] = 0;
				fclose(f1);
				continue;
			}
			
			mod ^ 4? urcsus = URC1(f1, ((mod & 1) || (p2 == ':')? b1 : c), S, u1, (PP / 100), PP, p2) 
				: urcsus = URC2(f1, ((p2 == ':') && (scif2 == ':'))? b1 : (b1 - 1), S, u1, (PP / 100), PP,  (scif2 == ':')? p2 : p1, scif2);
			cur[ss] = urcsus;
			//putchar('\n');
			if( (urcjos >= urcsus)) {
				cur[ss] = 0;
				fclose(f1);
				continue;
			}

			fseek(f1, urcjos - urcsus, SEEK_CUR);
			//printf("%s , %d-%d %scifre, %llu - %llu .\n", t2, min[nm-1], max[nm-1], PREP(max[nm-1]), urcjos, urcsus);
			ADUNTEXT(K, V, urcsus, sq, f1);
			fclose(f1);
			//if(ss && !(ss % 5)) {
				//SQPAR(A, K = V);
			//}
			
			//cur2[nm2] = urcjos, urm[nm2] = urcsus;
			//strcpy(fis2[nm2++], t2);
			}
			/*
			printf("\nLa acest pas sunt %d %sfișiere valide. Vine adunarea de numere din ele.\n", nm2, PREP(nm2));
			#pragma omp parallel for schedule(dynamic, 1)
			for(ss = 0; ss < nm2; ss++) {
				FILE *ff1 = fopen(fis2[ss], "r");
				fseek(ff1, cur2[ss], SEEK_SET);
				//#pragma omp single //nowait
				{
				//#pragma omp task
				{ADUNTEXT(K, V, urm[ss], ff1);}
				}
				fclose(ff1);
			}*/
}


void ADUNTEXT(long K, long &V, gmp_ui u, int sq, FILE *f1) {
while(1) {
	if( !(ftell(f1) < u) || (V + 2 > N1)
	)
		break;
	fgets(A[V], DIMM, f1);
	V += (strlen(A[V]) <= DIMM) && (strlen(A[V]) >= sq) /*&& !(A[V][DIMM-3] & 1)*/ && CBSTATIC(A, 0L, K, A[V]);
	}
}


void LIT(int K, int V, int jos, int sus, int mod, const char *CIT) {
	char flit[90] = "", Y[200];
	int num = (sus < 2363)? (sus) : ((sus+2)/3)*3;
	sprintf(flit, "%sLIT%d.LPKQ", LITDIR, num);
	FILE *FLIT = fopen(flit, "a");
	//printf("%d %d\n", K, V);
	sus++;
	num = K;
	//omp_set_num_threads(4);

	if(mod ^ 3) {
		//#pragma omp parallel for schedule(dynamic, 1)
		for(K = num; K < V; K++) {
			//#pragma omp critical
			if(CIF2(A[K], strlen(A[K])))
				fputs(A[K], FLIT);
		}
	} else {
		//#pragma omp parallel for schedule(dynamic, 1)
		for(K = num; K < V; K++) {
			//#pragma omp critical
			if(CIF(A[K], strlen(A[K]), jos, sus))
				fputs(A[K], FLIT);
		}
	}

	fclose(FLIT);
	/*
	if(LUNGHEZ2(flit) > 80000000000U) {
		strcpy(Y, "/LITUANUL ");
		strcat(Y, flit);
		//puts(Y);
	//	system(Y);
	}*/
}


void MODUL1(int a1, int b1, gmp_ui *cur, char fil[][90], int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, char A[][DIMM], long r1, long R1, int *VEC, int *min, int *max, int mod) {
//printf("Modul %d nu are divizare.\n", mod);

int X;
while(1) {	
	V = 0;
	RAT(f1, 2+b1, Y, w1, P, PP, PP1, mod, 0, q-1);
	X = 1 + b1;

	while(1) {
		fgets(A[V], 1920, f1);
		V += VER1(A[V], X);
		if(!(ftell(f1) ^ PP1)) {
			break;
		}
	}
	
	SQPAR(A, V);
	//printf("Gata prima sortare la %llu.\n", ftell(f1));
	K = V, K1 = K;
	//printf("%d %d\n", K, b1);
	IATEXT(a1+1, b1+2, cur, fil, A, K, V, Y, 0, 0, min, max, q-1, ':', ':', mod);
	K = K1;
	//printf("\nDe la textele numerice au venit %d %snumere.\n", V - K, PREP(V - K));
	
	if(V == K) {
		fseek(f1, PP - PP1, SEEK_CUR);
		CITR(8250000, f2, f1, PP1 - PP);
		goto s4;
		}

	LIT(K, V, a1, b1, mod, CIT);
	//goto s4;
	for(int i1 = 0; i1 < b1; i1++)
		Y[i1] = '9';
	if(b1 < 8) Y[b1-1] = ':';
	Y[b1] = '\n';
	strcpy(A[V], Y);
	//HSS(A, Y, V);
	SQPAR(A, V);
	//printf("Gata sortarea.\n");
	r1 = 0;
	R1 = 0;
	X = 1 + b1;
	//printf("%d\n", V);
	
	//#pragma omp parallel for schedule(dynamic, 1)
	for(R1 = 0; R1 < V; R1++) {
	//while(R1 ^ V) {
		if(strcmp(A[R1], A[R1+1]) && VER1(A[R1], X)) {
		 	//#pragma omp critical
			fputs(A[R1], f2);
			++r1;
			}
		//++R1;
	}

	NUM += (r1 - K);
	//printf("Vin la GIG%d.TXT %ld %snumere. ", NUME2(b1), r1 - K, PREP(r1 - K));
	s4:
	//printf("Gata scrierea.\n");
	a1 = VEC[q];
	
	if(!(--p))
		break;
	b1 = VEC[++q];
	}
}


void MODUL2(int a1, int b1, gmp_ui *cur, char fil[][90], int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, char A[][DIMM], long r1, long R1, int *VEC, int *min, int *max, int mod, char cifr) {
//printf("Modul %d are divizare.\n", mod);
char cif[10] = {'1', '2', '3', '4', '5', '6', '7', '8', CHR, ':'}, p2;
int fr, num = 0;

while(1) {
	fr = 0;
	if(!num) {
		fr = (cifr == ':')? 0 : GASCIF(cif, cifr);
	}
	
	for(; fr < 9; fr++)  {
			//printf("P = %llu, FR: %d.\n", P, fr);			
			V = 0;
			p2 = cif[fr+1];
			RAT(f1, (p2 == ':')? 2+b1 : 2+a1, Y, w1, P, PP, PP1, mod, p2, num);
			I = b1 + 1;
			if(PP ^ PP1) {
				while(1) {
					fgets(A[V], 1920, f1);
					V += VER(cif[fr], A[V], I);
					if(!(ftell(f1) ^ PP1))
						break;
					}

				SQPAR(A, V);
				//printf("Gata prima sortare la %llu.\n", ftell(f1));
			}
			
			K = V, K1 = K;
			//printf("%d %d\n", K, b1);			
			IATEXT(a1+1, b1+2, cur, fil, A, K, V, Y, cif[fr], p2, min, max, num, ':', ':', mod);
			K = K1;
			//printf("\nDe la textele numerice au venit %d %snumere.\n", V - K, PREP(V - K));

			if(V == K) {//exit(0);
				fseek(f1, PP - PP1, SEEK_CUR);
				CITR(8250000, f2, f1, PP1 - PP);
				goto s4;
			}

			LIT(K, V, a1, b1, mod, CIT);//De dat afară când nu sunt fișierele .TXT.
			//goto s4;
			for(int i1 = 0; i1 < b1; i1++)
				Y[i1] = '9';
			Y[b1] = '\n';
			strcpy(A[V], Y);
			SQPAR(A, V);
			//printf("Gata sortarea.\n");
			r1 = 0, R1 = 0;
			
			//#pragma omp parallel for schedule(dynamic, 1)
			for(R1 = 0; R1 < V; R1++) {
			//while(R1 ^ V) {
				if(strcmp(A[R1], A[R1+1]) && VER(cif[fr], A[R1], I)) {
				 	//#pragma omp critical
					fputs(A[R1], f2);
					++r1;
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


void MODUL3(int a1, int b1, gmp_ui *cur, char fil[][90], int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, char A[][DIMM], long r1, long R1, int *VEC, int *min, int *max, int mod) {
//printf("Modul %d nu are divizare.\n", mod);

int X, Z = a1 + 2;
while(1) {
	V = 0;
	I = b1 + 2;
	RAT(f1, 2+b1, Y, w1, P, PP, PP1, mod, 0, q-1);
	
	while(1) {
		fgets(A[V++], DIMM, f1);
		
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
		
	SQPAR(A, V);
	//printf("Gata prima sortare la %llu.\n", ftell(f1));
	K = V;
	//printf("%d %d\n", K, b1);
	IATEXT(a1+1, b1+2, cur, fil, A, K, V, Y, 0, 0, min, max, q-1, ':', ':', mod);
	//printf("\nDe la textele numerice au venit %d %snumere.\n", V - K, PREP(V - K));
	
	if(V > K1)
		K1 = V;
	if(V == K) {
		fseek(f1, PP - PP1, SEEK_CUR);
		CITR(8250000, f2, f1, PP1 - PP);
		goto s4;
	}
		
	LIT(K, V, a1, b1, mod, CIT);
	//goto s4;	
	for(int i1 = 0; i1 < b1; i1++)
		Y[i1] = '9';
	Y[b1] = '\n';
	strcpy(A[V], Y);
	SQPAR(A, V);
	//printf("Gata sortarea.\n");
	r1 = 0;
	X = 2 + b1;
	
	for(int i1 = Z; i1 < X; i1++) {
		//#pragma omp parallel for schedule(dynamic, 1)
		for(R1 = 0; R1 < V; R1++) {
//		while(R1 ^ V) {
			if(strcmp(A[R1], A[R1+1]) && VER1(A[R1], i1)) {
				//#pragma omp critical
				fputs(A[R1], f2);
				++r1;
				}
			//++R1;
			}
	}

	NUM += (r1 - K);
	//printf("Vin la GIG%d.TXT %ld %snumere. ", NUME2(b1), r1 - K, PREP(r1 - K));
	s4:	
	//printf("Gata scrierea.\n");
	a1 = VEC[q];
	
	if(!(--p))
		break;
	b1 = VEC[++q];
	}
}


void MODUL4(int a1, int b1, gmp_ui *cur, char fil[][90], int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, char A[][DIMM], long r1, long R1, int *VEC, int *min, int *max, int mod, char cifr, char cifr2) {
//printf("Modul %d are multidivizare.\n", mod);
char cif[10] = {'1', '2', '3', '4', '5', '6', '7', '8', CHR, ':'}, p2, ps2, cif2[11] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', CHR, ':'};
int pp1, fr, fr1, num = 0;
int px = p, py = q;
char CITT[100];
strcpy(CITT, CIT);

while(1) {
	fr = 0, fr1 = 0;
	if(!num) {
		fr = (cifr == ':')? 0 : GASCIF(cif, cifr);
		fr1 = (cifr2 == ':')? 0 : GASCIF(cif2, cifr2);
	}

	for(; fr < 9; fr++) {
	/*if(a1 == 211 && fr == 4) {
		MODUL2(a1, b1, cur, fil, px, py, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, A, r1, R1, VEC, min, max, 2, '5');
		return;
		}*/
		
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
					fgets(A[V], 1920, f1);
					V += FR(cif[fr], cif2[fr1], A[V], I);
					if(!(ftell(f1) ^ PP1)) {
						break;
					}
				}

				SQPAR(A, V);
				//printf("Gata prima sortare la %llu.\n", ftell(f1));
			}
			K = V;
			//printf("%d %d\n", K, b1);
			IATEXT(a1+1, b1+2, cur, fil, A, K, V, Y, cif[fr], p2, min, max, num, cif2[fr1], ps2, mod);
			//printf("De la textele numerice au venit %d %snumere.\n", V - K, PREP(V - K));
		
			if(V > K1)
				K1 = V;

			if(V == K) {
				fseek(f1, PP - PP1, SEEK_CUR);
				CITR(8250000, f2, f1, PP1 - PP);
				goto s4;
			}
			
			LIT(K, V, a1, b1, mod, CITT);//De dat afară când nu sunt fișierele .TXT.
			//goto s4;
			for(int i1 = 0; i1 < b1; i1++)
				Y[i1] = '9';
			Y[b1] = '\n';
			strcpy(A[V], Y);
			SQPAR(A, V);
			//printf("Gata sortarea.\n");
			r1 = 0, R1 = 0;
			
			//#pragma omp parallel for schedule(dynamic, 1)
			for(R1 = 0; R1 < V; R1++) {
			//while(R1 ^ V) {
				if(strcmp(A[R1], A[R1+1]) && FR(cif[fr], cif2[fr1], A[R1], I)) {
				 	//#pragma omp critical
					fputs(A[R1], f2);
					++r1;
					}
				//++R1;
			}

			NUM += (r1 - K);
			//printf("Vin la GIG%d.TXT %ld %snumere. ", NUME2(b1), r1 - K, PREP(r1 - K));
			s4:
			//printf("Gata scrierea.\n\n");
			num++;
			}
		fr1 = 0;
		/*
		if((a1 == 186) && (fr1 == 1)) {
			fclose(f1);
			strcpy(CITT, (const char *)"/run/media/root/12T/R190.TXT");
			P = LUNGHEZ2(CITT);
			f1 = fopen(CITT, "r");
			}*/
		}

	cifr = ':';
	a1 = VEC[q];
	if(!(--p))
		break;
	b1 = VEC[++q];
	}
}


void UMPLERE(int a1, int b1, gmp_ui *cur, char fil[][90], int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, char a[][DIMM], long r1, long R1, int *VEC, int *min, int *max, int mod, char cifr, char cifr2) {
f2 = fopen(SCR, "a");
q = 1;
b1 = VEC[q];

mod == 1?
	MODUL1(a1, b1, cur, fil, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, A, r1, R1, VEC, min, max, mod) :
	mod == 2? MODUL2(a1, b1, cur, fil, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, A, r1, R1, VEC, min, max, mod, cifr) :
	mod == 3? MODUL3(a1, b1, cur, fil, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, A, r1, R1, VEC, min, max, mod) :
	MODUL4(a1, b1, cur, fil, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, A, r1, R1, VEC, min, max, mod, cifr, cifr2);

fclose(f2);
if(!NUM) {
	//i = remove(SCR);//Nimic nou, jos cu R.TXT.
	printf("Nu sunt numere noi. Fară fară du-te afară.\n");
	//exit(0);
	}

fclose(f1);
printf("%s are dimensiunea %lu, noul GIG%d.TXT ia %llu %snumere noi de %d %scifre.\n\n", SCR, LUNGHEZ2(SCR), NUME2(b1), NUM, PREP(NUM), b1, PREP(b1));
}


void MARE(int a1, int b1, gmp_ui *cur, char fil[][90], int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, unsigned long P1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, char a[][DIMM], long r1, long R1, int *VEC, int *min, int *max, int mod, char cifr, char cifr2) {
UMPLERE(a1, b1, cur, fil, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, a, r1, R1, VEC, min, max, mod, cifr, cifr2);
}


void GASGIG(char *Y, char *c) {//GASGIG("GIG180.TXT");
	for(int i = 0; i < NDISC; i++) {
		strcpy(Y, disc[i]);
		strcat(Y, c);
		if(LUNGHEZ(Y))
			return;
	}

strcpy(Y, "");
}


void ACTUAL(gmp_ui F, int a1, int b1, char *CIT, int mod, char cifr, char cifr2) {
unsigned long P, P1, PP, PP1;
gmp_ui NUM = 0;
int I, p, q, X, VEC[400], min[1200], max[1200];
long r1, R1, K, K1 = 0, V;
FILE *f1, *f2;
char w1, Y[2000], CIT1[100], SCR[100];
char fil[1200][90];
gmp_ui cur[1200];

//TXT(b1, CIT);
printf("%d %d %d\n", a1, b1, mod);
//printf("%s se opreşte la numărul %d.\n\n", CIT, NUME2(b1));
q = a1;
p = 0;

if(b1 + 2 > DIMM) {
	printf("Mai ajustează dimensiunea, băiatule.\n");
	//return;
	}

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

//for(int i = 0; i < p; i++)
	//printf("%d ", VEC[i]);
p--;
}
//if(a1 >= 182) exit(0);
p--;
sprintf(CIT1, "GIG%d.TXT", NUME2(b1));
GASGIG(Y, CIT1);
strcpy(CIT1, Y);
if(mod == 5) { strcpy(CIT1, "/N3.TXT"); mod = 1; }
if(strlen(CIT1) < 4) exit(0);
puts(CIT1);
//mod = 2;
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
	: a1 < 220? "TB8"
	: a1 < 240? "12T"
	: a1 < 270? "TB8"
	: "T12");

strcat(SCR, Y);
sprintf(Y, "/R%d.TXT", NUME2(b1));
strcat(SCR, Y);
puts(SCR);
TRUNCTEXT(P1, PP1, SCR, f1, mod, a1, w1, cifr, cifr2);
sprintf(Y, "%sLIT%d.LPKQ", LITDIR, a1+1);
TRUNCTEXT(P1, PP1, Y, f1, mod, a1, w1, cifr, cifr2);
MARE(a1, b1, cur, fil, p, q, NUM, P, PP, PP1, Y, K1, P1, K, V, f1, f2, CIT1, SCR, w1, I, A, r1, R1, VEC, min, max, mod, cifr, cifr2);
NUM += F;
//printf("Totalul numeric este acum: %llu.\n", NUM);
f1 = fopen("/TOTAL.TXT", "a");
fprintf(f1, "Total: %llu.\n", NUM);
fclose(f1);//system("rm LITUANUL");
}


#endif
