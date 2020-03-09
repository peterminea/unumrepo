#ifndef _ACTUALV3_H
#define _ACTUALV3_H

#include "/GMP64.h"
#include <ctype.h>
#include "/TEXTUL.h"
#include "/URC.h"
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <dirent.h>

char A[N1][DIMM];


void ADUNTEXT(long &K, long &V, gmp_ui u, FILE *f1);

void MODUL3(int a1, int b1, int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, char A[][DIMM], mpz_t u, long r1, long R1, int *VEC, int *min, int *max, int mod);


void IATEXT(int a1, int b1, char a[][DIMM], long &K, long &V, char *S, char p1, char p2, int *min, int *max, int num, char scif1, char scif2, int mod) {//a1+1, b1+2.
	char t[80], *t1, t2[90], fil[600][80], u;
	DIR *dir;
	struct dirent *ent;
	int c, z, nm = 0, SP = 0;
	long PP;
	FILE *f1;

	for(int i1 = 0; i1 < NDISC; i1++) {//HDD + SSD.
		strcpy(t, disc[i1]);

		if ((dir = opendir (t)) != NULL) {
			while ((ent = readdir (dir)) != NULL) {
				t1 = strdup(ent->d_name);
				char ext[5] = ".LPG", ext1[5] = ".NUM";
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
			if(PP < 10000) continue;
			if(PP > 1900000000000L) continue;
			z = 0;
			
			f1 = fopen(t2, "r");			
			!num? CALCMINMAX(min[nm], max[nm], z = 0, c, f1, PP, S) : fseek(f1, PP, SEEK_CUR);
			//if(!num && GIACINTO(t2) > 600000) max[nm] = 0;
			//if(!max[nm]) {fclose(f1); ++nm; continue;}
			printf("%s, cifre între %d și %d, când a1 și b1 sunt %d și %d. ", t2, min[nm], max[nm], a1, b1);
			fclose(f1);
			strcpy(t2, (max[nm] < a1? "Prea jos.\n" : (2+min[nm] > b1? "Prea sus.\n" : t2) ) );
			
			if(t2[0] != '/') {
				printf("%s", t2);
				++nm;
				continue;
			}
			
			z = b1-2;
			++nm;
			f1 = fopen(t2, "r");
			c = a1 + 1;
			u = 'd';
			gmp_ui urccur, urcurm;
			scif1 == 't'? urccur = URC1(f1, c, S, u, (PP / 200), PP, ':') : urccur = URC2(f1, c, S, u, (PP / 200), PP, p1, scif1);

			if( (PP == urccur) || ((u == 'n') && (mod ^ 3))) {
				fclose(f1);
				printf("Nu e bun.\n");
				continue;
			}//Rezultat 0.
			
			//if(scif2 ^ 't') rewind(f1);
			if(scif2 == ':')
				scif2 = 't';

			scif1 == 't'? urcurm = URC1(f1, b1, S, u, (PP / 200), PP, ':') : urcurm = URC2(f1, (p2 == ':')? b1 : (b1 - 1), S, u, (PP / 200), PP,  (scif2 == 't')? p2 : p1, scif2);
						
			if(urccur == urcurm) {
				fclose(f1);
				printf("Nu e bun.\n");
				continue;
			}
			
			printf(" Intervalul %d-%d, %llu - %llu. ", a1 - 1, z, urccur, urcurm);
			fseek(f1, urccur - urcurm, SEEK_CUR);
			c = (a1 + b1) >> 1;
			if(scif1 ^ 't') {
				(scif1 ^ '.')? printf(" Cu cifra %c, subcifra %c. ", p1, scif1) : printf("De la cifra %c.", p1);
			}
			
			printf( (mod ^ 3)? " Numere de %d %scifre.\n" : " Numere care nu au fix %d %scifre, adică de la %d la %d.\n" , c-1, PREP(c-1), a1, b1-2);
			ADUNTEXT(K, V, urcurm, f1);
			}
}


void ADUNTEXT(long &K, long &V, gmp_ui u, FILE *f1) {
while(1) {
	if( !(ftell(f1) ^ u)  || (V + 2 > N1)
	)
		break;
	fgets(A[V], DIMM, f1);
	V += CBSTATIC(A, 0L, K, A[V]);
	}
}


void LIT(int K, int V, int jos, int sus, int mod, const char *CIT) {
	char flit[50];
	int num = (sus < 263)? (sus) : ((sus+2)/3)*3;
	sprintf(flit, (sus < 0? "/run/media/root/MARG/LPTUAN%d.LPT" : (sus < 275? "/LIT%d.LPTP" : "/LPT%d.LPT")), num);
	FILE *FLIT = fopen(flit, "a");
	printf("%d %d\n", K, V);
	sus++;

	if(mod ^ 3) {
		for(; K < V; K++) {
			if(CIF2(A[K], strlen(A[K])))
				fputs(A[K], FLIT);
		}
	} else {
		for(; K < V; K++) {
			if(CIF(A[K], strlen(A[K]), jos, sus))
				fputs(A[K], FLIT);
		}
	}

	fclose(FLIT);
}

void MODUL1(int a1, int b1, int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, char A[][DIMM], mpz_t u, long r1, long R1, int *VEC, int *min, int *max, int mod) {
printf("Modul %d nu are divizare.\n", mod);

int X;
mpz_ui_pow_ui(u, 2, 64);
while(1) {
	if(q > 1) {
		f2 = fopen(SCR, "a");
		}
	V = 0;
	RAT(f1, 2+a1, 2+b1, Y, w1, P, PP, PP1, mod, 0, 0, q-1);
	X = 1 + b1;

	while(1) {
		fgets(A[V], 1920, f1);
		if(VER1(A[V], X)) V++;		
		if(!(ftell(f1) ^ PP1)) {
			break;
		}		
	}

	K = V;
	printf("%d %d\n", K, b1);
	IATEXT(a1+1, b1+2, A, K, V, Y, 0, 0, min, max, q-1, 't', 't', mod);        
	printf("\nDe la textele numerice au venit %d %snumere.\n", V - K, PREP(V - K));
	if(b1 > 19) {
	   	HSS2(A, Y, K, V);
	   	printf("Gata cu sortarea de sus.\n");
	    	K1 = K;
		for(int i1 = K; i1 < V; i1++) {
			mpz_set_str(u, A[i1], 10);
			mpz_tdiv_q_2exp(u, u, mpz_scan1(u, 0));
			if(mpz_cmp_ui(u, VERTOITO) <= 0) {
				strcpy(A[K1++], A[i1]);
			}
			
		}
		V = K1;
	}

	if(V == K) {
		fseek(f1, PP - PP1, SEEK_CUR);
		CITR(8220000, f2, f1, PP1 - PP);
		goto s4;
		}

	//LIT(K, V, a1, b1, mod, CIT);//goto s4;
	for(int i1 = 0; i1 < b1; i1++)
		Y[i1] = '9';
	if(b1 < 8)
		Y[b1-1] = ':';
	Y[b1] = '\n';

	strcpy(A[V], Y);
	HSS(A, Y, V);
	printf(b1 < 20? "Gata sortarea.\n" : "Gata toată sortarea.\n");
	r1 = 0;
	R1 = 0;
	X = 1 + b1;
	printf("%d\n", V);
	
	while(R1 ^ V) {
		if( (strcmp(A[R1], A[R1+1]) < 0) && VER1(A[R1], X)
		 )	{
			fputs(A[R1], f2);
			++r1;
			}
		++R1;
		}

	NUM += (r1 - K);
	printf("Vin la GIG%d.TXT %ld %snumere. ", NUME2(b1), r1 - K, PREP(r1 - K));
	s4:
	fclose(f2);
	printf("Gata scrierea.\n");
	a1 = VEC[q];
	
	if(!(--p))
		break;
	b1 = VEC[++q];
	}
/*
return;
s0:
	f2 = fopen(SCR, "a");
	MODUL3(a1, b1, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, A, u, r1, R1, VEC, min, max, 3);*/
}


void MODUL2(int a1, int b1, int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, char A[][DIMM], mpz_t u, long r1, long R1, int *VEC, int *min, int *max, int mod, char cifr) {
///LPTUAN240.TXT && /LITUAN /LPTUAN420.TXT
///LITUAN /LPTUAN1910.TXT

printf("Modul %d are divizare.\n", mod);
printf("\np e %d\n", p);
char cif[7] = {'1', '2', '3', '5', ':'}, p2, ps2, cif2[5] = {'0', '3', '6', ':'};
int pp1, fr, fr1, num = 0;

while(1) {
	fr = 0, fr1 = 0;
	if(!num) {
		fr = (cifr == ':')? 0 : GASCIF(cif, cifr);
		fr1 = 0;
	}
	//if(b1 == 16) fr1 = 2;
	for(; fr < 4; fr++)
	for(fr1 = (fr? 0 : fr1); fr1 < (fr? 1 : 3); fr1++) {
		printf("FR: %d, FR1: %d.\n", fr, fr1);
		pp1 = (fr)? 0 : (cif2[fr1] == '6');
		if(num > 0) {
			f2 = fopen(SCR, "a");
			}

		V = 0;
		p2 = cif[fr+1];
		if(!fr1)
			RAT(f1, 2+a1, (p2 == ':'? 2+b1 : 2+a1), Y, w1, P, PP, PP1, mod, cif[fr], cif[fr+1], num);		
		I = b1 + 1;
		ps2 = cif2[fr1+1];

		if(!fr) {
			while(1) {
				fgets(A[V], 1920, f1);
				if( !(A[V][0] ^ p2) || (!pp1 && !(A[V][1] ^ ps2)) ) {
					mpz_set_str(u, A[V], 10);
					fseek(f1, -strlen(A[V]), SEEK_CUR);
					break;
					}

			if(FR2(pp1, I, p2, ps2, A[V])) V++;
			if( !(P ^ ftell(f1)) ) {				
				break;
				}
			}
		} else {
			while(1) {
				fgets(A[V], 1920, f1);
				if(VER(p2, A[V], I)) {
						V++;
					  }

				if(ftell(f1) == PP1) {
					break;
					}
				}
		}

		K = V;
		printf("%d %d\n", K, b1);
		!fr? IATEXT(a1+1, b1+2, A, K, V, Y, cif[fr], p2, min, max, num, cif2[fr1], cif2[fr1+1], mod)
			: IATEXT(a1+1, b1+2, A, K, V, Y, cif[fr], p2, min, max, num, '.', 't', mod);
		//mod = 2, cif2[fr1+1] în plus.
		printf("\nDe la textele numerice au venit %d %snumere.\n", V - K, PREP(V - K));
		if(b1 > 19) {
		   	HSS2(A, Y, K, V);
		   	printf("Gata cu sortarea de sus.\n");
		    	K1 = K;
			for(int i1 = K; i1 < V; i1++) {
				mpz_set_str(u, A[i1], 10);
				mpz_tdiv_q_2exp(u, u, mpz_scan1(u, 0));
				if(mpz_cmp_ui(u, VERTOITO) <= 0) {
					strcpy(A[K1++], A[i1]);
				}
			}
			V = K1;
		}

		//if(1==2)
		if(V == K) {//exit(0);
			fseek(f1, PP - PP1, SEEK_CUR);
			CITR(8220000, f2, f1, PP1 - PP);
			goto s4;
		}
		
		//LIT(K, V, a1, b1, mod, CIT);//De dat afară când nu sunt fișierele .TXT.
		for(int i1 = 0; i1 < b1; i1++)
			Y[i1] = '9';
		if(b1 < 8)
			Y[b1-1] = ':';
		Y[b1] = '\n';
		strcpy(A[V], Y);
		HSS(A, Y, V);
		printf(b1 < 20? "Gata sortarea.\n" : "Gata toată sortarea.\n");
		r1 = 0, R1 = 0;

		while(R1 ^ V) {
			if( VER(p2, A[R1], I) && FR(fr, pp1, ps2, A[R1])
			&& (strcmp(A[R1], A[R1+1]) < 0)
			) {
				fputs(A[R1], f2);
				++r1;
			}
			++R1;
		}

		NUM += (r1 - K);
		printf("Vin la GIG%d.TXT %ld %snumere. ", NUME2(b1), r1 - K, PREP(r1 - K));
		s4:
		fclose(f2);
		printf("Gata scrierea.\n");
		num++;		
		}

	cifr = ':';
	a1 = VEC[q];
	if(!(--p))
		break;
	b1 = VEC[++q];
	}
//return;
//s0:
	//MODUL1(a1, b1, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, A, u, u1, r1, R1, VEC, min, max, 1);
}


void MODUL4(int a1, int b1, int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, char A[][DIMM], mpz_t u, long r1, long R1, int *VEC, int *min, int *max, int mod, char cifr) {

printf("Modul %d are divizare.\n", mod);
char cif[7] = {'1', '2', '3', '4', '6', '8', ':'}, p2, ps2, cif2[4] = {'0', '3', '6', ':'};
int pp1, fr, fr1, num = 0;

while(1) {
	fr = 0, fr1 = 0;
	if(!num) {
		fr = (cifr == ':')? 0 : GASCIF(cif, cifr);
		fr1 = 0;
	}

	for(; fr < 6; fr++) {
		for(fr1 = (fr > 2? 0 : fr1); fr1 < (fr > 2? 1 : 3); fr1++) {
			printf("FR CU FR1: %d, %d.\n", fr, fr1);
			pp1 = (fr > 2)? 0 : (Y[1] == '6');
			if(num > 0) {
				f2 = fopen(SCR, "a");
				}

			V = 0;
			p2 = cif[fr+1];
			if(!fr1)
				RAT(f1, 2+a1, (p2 == ':'? 2+b1 : 2+a1), Y, w1, P, PP, PP1, mod, cif[fr], cif[fr+1], num);
			I = b1 + 1;
			ps2 = cif2[fr1+1];

			if(fr < 3) {
				while(1) {
					fgets(A[V], 1920, f1);
					if( !(A[V][0] ^ p2) || (!pp1 && !(A[V][1] ^ ps2)) ) {
						fseek(f1, -strlen(A[V]), SEEK_CUR);
						break;
						}

				if(FR2(pp1, I, p2, ps2, A[V])) V++;
				if( !(P ^ ftell(f1)) ) {
					break;
					}			
				}
			} else {
				while(1) {
					fgets(A[V], 1920, f1);
					if(VER(p2, A[V], I)) {
							V++;
						  }

					if(ftell(f1) == PP1) {					
						break;
						}
					}
			}

			//HSS(A, Y, V);
			//printf("Gata prima sortare.\n");
			K = V;
			printf("%d %d\n", K, b1);
			fr < 3? IATEXT(a1+1, b1+2, A, K, V, Y, cif[fr], p2, min, max, num, cif2[fr1], cif2[fr1+1], mod)
				: IATEXT(a1+1, b1+2, A, K, V, Y, cif[fr], p2, min, max, num, '.', 't', mod);
			printf("\nDe la textele numerice au venit %d %snumere.\n", V - K, PREP(V - K));
		
			if((K ^ V) && (b1 > 19)) {
			   	HSS2(A, Y, K, V);
			   	printf("Gata cu sortarea de sus.\n");
			    	K1 = K;
				for(int i1 = K; i1 < V; i1++) {
					mpz_set_str(u, A[i1], 10);
					mpz_tdiv_q_2exp(u, u, mpz_scan1(u, 0));
					if(mpz_cmp_ui(u, VERTOITO) <= 0) {
						strcpy(A[K1++], A[i1]);
					}
				}
				V = K1;
			}

			if(V == K) {
				fseek(f1, PP - PP1, SEEK_CUR);
				CITR(8220000, f2, f1, PP1 - PP);
				goto s4;
			}
			
			//LIT(K, V, a1, b1, mod, CIT);//De dat afară când nu sunt fișierele .TXT.
			for(int i1 = 0; i1 < b1; i1++)
				Y[i1] = '9';
			if(b1 < 8)
				Y[b1-1] = ':';
			Y[b1] = '\n';
			strcpy(A[V], Y);
			HSS(A, Y, V);
			printf(b1 < 20? "Gata sortarea.\n" : "Gata toată sortarea.\n");
			r1 = 0, R1 = 0;

			while(R1 ^ V) {
				if( VER(p2, A[R1], I) && FR3(fr, pp1, ps2, A[R1])
				&& (strcmp(A[R1], A[R1+1]) < 0)
				) {
					fputs(A[R1], f2);
					++r1;
				}
				++R1;
			}

		NUM += (r1 - K);
		printf("Vin la GIG%d.TXT %ld %snumere. ", NUME2(b1), r1 - K, PREP(r1 - K));
		s4:
		fclose(f2);
		printf("Gata scrierea.\n");
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
//return;
//s0:
	//MODUL1(a1, b1, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, A, u, u1, r1, R1, VEC, min, max, 1);
}


void MODUL3(int a1, int b1, int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, char A[][DIMM], mpz_t u, long r1, long R1, int *VEC, int *min, int *max, int mod) {
printf("Modul %d nu are divizare.\n", mod);

int X, Z = a1 + 2;
while(1) {
	if(q > 1) {
		f2 = fopen(SCR, "a");
		}		

	V = 0;
	I = b1 + 2;
	RAT(f1, 2+a1, 2+b1, Y, w1, P, PP, PP1, mod, 0, 0, q-1);
	
	while(1) {
		fgets(A[V++], 1920, f1);
		
		if(ftell(f1) == PP1) {
			mpz_set_ui(u, 1);
			
			if(PP1 == P) {
				if(b1 > 1910) b1 = 1910;
				mpz_set_ui(u, 0);
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
	K = V;
	printf("%d %d\n", K, b1);
	IATEXT(a1+1, b1+2, A, K, V, Y, 0, 0, min, max, q-1, 't', 't', mod);
	printf("\nDe la textele numerice au venit %d %snumere.\n", V - K, PREP(V - K));
	
	if(V > K1)
		K1 = V;
	if(V == K) {
		fseek(f1, PP - PP1, SEEK_CUR);
		CITR(8250000, f2, f1, PP1 - PP);
		goto s4;
	}
		
	LIT(K, V, a1, b1, mod, CIT);
	
	for(int i1 = 0; i1 < b1; i1++)
		Y[i1] = '9';
	if(b1 < 8)
		Y[b1-1] = ':';
	Y[b1] = '\n';
	strcpy(A[V], Y);
	HSS(A, Y, V);
	printf("Gata sortarea.\n");
	r1 = 0;
	X = 2 + b1;
	printf("%d\n", V);
	
	for(int i1 = Z; i1 < X; i1++) {
		R1 = 0;
		while(R1 ^ V) {
			if( (strlen(A[R1]) == i1) && (strcmp(A[R1], A[R1+1]) < 0) && CIF2(A[R1], i1)) {
				fputs(A[R1], f2);
				++r1;
				}
			++R1;
			}
	}

	NUM += (r1 - K);
	printf("Vin la GIG%d.TXT %ld %snumere. ", NUME2(b1), r1 - K, PREP(r1 - K));
	s4:
	fclose(f2);
	printf("Gata scrierea.\n");
	a1 = VEC[q];	
	
	if(!(--p))
		break;
	b1 = VEC[++q];
	}

//return;
//s0:
	//f2 = fopen(SCR, "a");
	//MODUL2(a1, b1, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, A, u, u1, r1, R1, VEC, min, max, 2, ':');
}


void UMPLERE(int a1, int b1, int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, char a[][DIMM], mpz_t u, long r1, long R1, int *VEC, int *min, int *max, int mod, char cifr) {
q = 1;
b1 = VEC[q];

mod == 1?
	MODUL1(a1, b1, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, A, u, r1, R1, VEC, min, max, mod) :
	(mod == 2? MODUL4(a1, b1, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, A, u, r1, R1, VEC, min, max, mod, cifr) :
		MODUL3(a1, b1, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, A, u, r1, R1, VEC, min, max, mod) );

if(!NUM) {
	//i = remove(SCR);//Nimic nou, jos cu R.TXT.
	printf("Nu sunt numere noi. Fară fară du-te afară.\n");
	//exit(0);
	}

f2 = fopen(SCR, "a");
printf("%s are dimensiunea %lu.\n", SCR, ftell(f2));
fclose(f2);
printf("GIG%d.TXT va mai lua %llu %snumere.\n", NUME2(b1), NUM, PREP(NUM));
}

#include <cstdio>


void MARE(int a1, int b1, int &p, int &q, gmp_ui &NUM, unsigned long P, unsigned long PP, unsigned long PP1, char *Y, long &K1, unsigned long P1, long &K, long &V, FILE *f1, FILE *f2, const char *CIT, const char *SCR, char w1, int &I, char a[][DIMM], mpz_t u, long r1, long R1, int *VEC, int *min, int *max, int mod, char cifr) {
f2 = fopen(SCR, "a");
UMPLERE(a1, b1, p, q, NUM, P, PP, PP1, Y, K1, K, V, f1, f2, CIT, SCR, w1, I, a, u, r1, R1, VEC, min, max, mod, cifr);
mpz_clears(u, NULL);
fclose(f1);
}


void ACTUAL(gmp_ui F, int a1, int b1, char *CIT, int mod, char cifr) {
unsigned long P, P1, PP, PP1;
gmp_ui NUM = 0;
int I, p, q, X, VEC[1000], min[1000], max[1000];
long r1, R1, K, K1 = 0, V;
FILE *f1, *f2;
char w1, Y[2000];
mpz_t u;
mpz_inits(u, NULL);

TXT(b1, CIT);
printf("%d %d %d\n", a1, b1, mod);
printf("%s se opreşte la numărul %d.\n\n", CIT, NUME2(b1));
q = a1;
p = 0;
printf("%d %d\n", a1, b1);
if(b1 + 2 > DIMM) {
	printf("Mai ajustează dimensiunea, băiatule.\n");
	//return;
	}

	if(a1 ^ 15) {//1187.
		mod = ((mod == 1) && (a1 >= 79) && (a1 < 161)? 2 : mod);
		while(q <= b1) {
			VEC[p++] = q;
			q++;
			}
		}
	else {
	mod = 3;
		for(int i = a1; i <= 19; i += 4) {
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

for(int i = 0; i < p; i++)
	printf("%d ", VEC[i]);
p--;

P = LUNGHEZ2(CIT);
if(mod ^ 2) cifr = ':';
f1 = fopen(CIT, "r");
P1 = URC1(f1, a1+2, Y, w1, 500000000L, P, cifr);//Cifră sau ':'; Mare atenție, mare.
printf("%llu\n", P1);
MARE(a1, b1, p, q, NUM, P, PP, PP1, Y, K1, P1, K, V, f1, f2, CIT, RTEXT, w1, I, A, u, r1, R1, VEC, min, max, mod, cifr);
NUM += F;
printf("Totalul numeric este acum: %llu.\n", NUM);
f1 = fopen("/TOTAL.TXT", "a");
fprintf(f1, "Total: %llu.\n", NUM);
fclose(f1);
mpz_clears(u, NULL);
}


#endif
