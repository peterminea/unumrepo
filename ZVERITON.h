#ifndef _ZVERITON_H
#define _ZVERITON_H

#include "/TOLVECUN.h"
#include <omp.h>
#define PRAGW 5
//De front 1.
/*
Aici la numerele mici, nu va fi nevoie de cinci variante diferite pe mărimi de numere, deși s-ar putea face separație între numerele de maxim 18 cifre (sub un miliard de miliarde), ale căror sume de divizori sigur vor fi și ele gmp_ui, și numerele mai mari, unde sumele de divizori pot avea cel mai mare divizor impar prea mare. La ele, se poate face ca, în timp ce numărul de bază și primele componente sunt tratate ca gmp_ui (chiar și dacă numărul este peste 2 la 64, se poate despărți în puterea sa de 2 și-n cel mai mare divizor impar pentru primele componente, iar imparul acela sigur va fi gmp_ui și nu long double), suma divizorilor să fie o mepezetea, căreia să i se aplice verificarea de fond 2 (numitorul abundențial să fie mai mic decât PRAG = 1333334). Strict la fondul 1, verificarea se poate face scurt, cu construirea directă a abundenței ca long double bazat pe înmulțiri ale abundențelor parțiale (long double), sau să fie și aici mepezetea cu gmp-ui_uri impare despărțite prin puterea de 2 a numărului de bază, de numărul de bază. Chiar și despărțirea asta poate fi preferată la... numerele de minim 19 cifre, celelalte fiind integral tratate ca gmp_ui-uri. Dar pentru fondul 2 abundența nu va putea fi eficient obținută prin produse long double ale abundențelor parțiale, acolo nu se poate direct determina prin CMMDC mai-micimea numitorului abundențial față de PRAG, și chiar și prin înmulțirea cu PRAG-1 și cu o aproximare zecimală mai dificilă la long double, acela nu va fi decât pasul pentru numitorul 1333333, multe dintre celelalte valori de dedesubt trebuind verificate pe rând (cum și la fondul 1 s-ar verifica numitorii pentru 10, 9, 8, 7 și 6, de la 5 la 1 nemaiavând rost o dată ce valorile de mai sus, care cuprind 1, 2, 3, 4 și 5 cumulativ ca divizori, au fost găsite bune, dar iată, trebuiesc mai mulți pași de verificare abundențială la construirea abundenței cu long double-uri,  iar pentru sub 11 trebuiesc cinci pași, pe când de la 1333333 în jos, până la cuprinderea unui număr suficient de valori care să acumuleze ca divizori pe toată lumea de la 1 la 1333333, cine știe cât de mulți pași ar fi...). Pe câtă vreme la construirea sumei ca mepezetea (chiar și pentru fondul 1), prin VALIDN se obțin numărătorul și numitorul abundenței ca numere întregi (naturale, în fapt), cu CMMDC între naturale (imposibil la fracționarea long double) și numitorul se compară direct cu PRAG. La numerele de maxim 18 cifre, totul poate fi gmp_ui în loc de mpz_t, cu suma construită, CMMDC între gmp_ui (NU mpz_t, aici) pentru numărătorul și numitorul fracției abundențiale și comparația directă numitor-PRAG, și fără fracționarea urmată de verificări succesive (asta pentru fondul 1 numai) pe double / long double, cum se poate vedea în funcția VALIDV() din TOLIL.h. PUTERNUM-ul se poate folosi și aici, în NUM.h există funcția UNIFACTOR() care trebuie să facă matricea de puteri gmp_ui pentru numerele cu cel mai mare divizor impar pe 64 de biți fără semn, acei factori primi neavînd nevoie de vreo împărțire între mpz_t și gmp_ui, din moment ce toate numerele prime din componența numerelor cu cei mai mari divizori impari sub 2 la puterea a 64-a sunt și ele sub 2 la 64.
Atunci, UNIFACTOR(), PUTERNUM și, la numerele de maxim 18 cifre, numai gmp_ui pentru căutarea de numere noi, fără despărțire între puterea de 2 și divizorul impar (și suma gmp_ui, prin înmulțirile SUMELOR parțiale și nu a abundențelor). Deși separația ar fi grea, trebuind despărțire de funcții și de fișiere-sursă. Pentru peste miliardul de miliarde, numerele din GIGM.TXT se pot trece, prin mepezetele de manevră (la vecungizarea fără stringuri este deja ceva), în puterea de 2 și divizorul impar, când se citește fișierul, apoi pentru sumadivare, cu suma mepezetea (din nou nu long double cu fracții de abundențe parțiale), pentru numsimplare și restul, VALIDN-urile se pot face, iar acolo numărul de bază va trebui folosit în întregimea sa (salvat undeva în prealabil, înainte de despărțania în două ramuri) și, pesemne, convertit la mpz_t pentru apelul de  mpz_gcd cu suma mepezetea, ca long double eventual peste 2 la 64 neputând fi folosit în mpz_gcd_ui(d1, SUM, NUM).
Dar măcar la construcția obligatorie a sumelor numerelor de bază (pentru extragerea pe cale nefracționată a numărătorului și mai ales a numitorului abundențial) să se folosească un gmp_ui putere de 2 și alt gmp_ui divizor impar, care să fie verificat la divizibilitatea cu elementele din matricea gmp_ui de puteri de factori primi, pentru noua sumadivare, pe câtă vreme la numerele mari, la sumadivare, se folosește direct numărul de bază-mepezetea, când în unele situații și printre numerele prime pot fi mepezetele (la peste 160 de cifre).
La NUMSIMPL, MODPRIM, MODIFSUM pentru numerele mici fără abundențe făcute cu long double, pe lângă (faptul) că trebuiesc funcții noi, adaptate din cele mari, se poate folosi divizorul impar maxim al numărului de origine, în locul numărului în sine (astfel putând oricând fi NUM gmp_ui, nu long double - sau chiar mpz_t cum se întâmplă sus), cum la aceste trei programe factorii de legătură sunt exclusiv impari, numere prime peste 2. Dar va fi destul loc și de MODSPAR la numerele mici, caz în care trebuie văzut cum pot fi folosite împreună puterea de 2 și divizorul impar din numărul de bază la verificarea elementelor pare de legătură - asta la peste 18 cifre, la numerele „minore” NUM putând rămâne singur ca număr inițial, nedespărțit. Se înțelege că miliardul de miliarde va servi de limită-prag în stabilirea implementării funcțiilor pentru cercetarea numerelor mici, așa cum la cele mari sunt praguri pe la 52 sau 160 de cifre, de pildă.
La vecungizare, în schimb, se folosește alt prag, mai mare, cel de 19 cifre (zecea de miliarde de miliarde), pentru diferențierea citirii numerelor din GIGM.TXT, de astă dată integral ca long double, ele trebuind verificate și sortate crescător ca atare, în integralitatea lor. Cele sub 19 cifre se citesc direct din fișier, netrunchiabile din cauza depășirii pragului de 2^64 la divizorul impar, iar la cele mai mari se face temporar despărțirea în par maxim și impar maxim, prin două mepezetele de manevră, cu înmulțirea celor două valori în long double. La varianta cu stringuri (vecungul) nu este nevoie, fiind acolo exclusiv char, dar la vecung este long double și numerele trebuiesc sortate corect și căutate binar, cu valorile lor adevărate de long double.

Matricile de puteri prime sunt numai div1 și sum1, este clar că SUMADIV-ul va trebui adaptat din SM() de sus, aici nefiind potrivită nici despărțirea de puteri Mersenne speciale (88, 106 și 126) a lui NUMSUM.
Dar noile funcții nu trebuie să stea prin TOLIL.h și Z.h, ci în NUM.h și ZVERITON.h.

*/
//NUMSIMPL va avea doar două forme din cinci, una la numerele minore și alta la majore.


void NUMSIMPLSUS1(char *Q, long PP2, FILE *f1, int f, int W, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui j, gmp_ui j1, FILE *F2, gmp_ui p, gmp_ui *qq, char *t) {
	while(1) {
		unu = strtoul(Q, &t, 10);			
		p = unu >> (gmp_scan1(unu, qq, 0));
		f = W;

		while(1) {
			if(!f--)
				break;
			if(!(p % divInt[f]) && TRAT(j * sumInt[f], j1 * divInt[f])) {
				fprintf(F2, "%llu\n", unu * divInt[f]);
				}
		}
		
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j, &j1);
		}
}


void NUMSIMPLSUS2(char *Q, long PP2, FILE *f1, int f, int W, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui j, gmp_ui j1, FILE *F2, gmp_ui p, gmp_ui *qq, char *t) {
	while(1) {
		NUMPREL0(Q, t, unu, p, qq, 0);
		f = W;

		while(1) {
		if(!f--)
			break;
		if(!(p % divInt[f]) && !(VERTOITO < ((long double)p) * divInt[f]) && TRAT(j * sumInt[f], j1 * divInt[f])) {
			mpz_mul_ui(doi, unu, divInt[f]);
			SCRIE(doi, Q, F2);
			}
		}

		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j, &j1);
	}
}


void NUMSIMPLJOS1(char *Q, long PP2, FILE *f1, int f, int W, gmp_ui unu, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui j, gmp_ui j1, FILE *F2, gmp_ui p, gmp_ui *qq, char *t) {
	while(1) {
		unu = strtoul(Q, &t, 10);	
		p = unu >> (gmp_scan1(unu, qq, 0));
		f = W;
		
		while(1) {
			if(!f--)
				break;
			if((p % M[f]) && !(p % divInt[f]))  && TRAT(j * divInt[f], j1 * sumInt[f])) {
				fprintf(F2, "%llu\n", unu / divInt[f]);
				}				
			}
			
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j, &j1);
		}
}


void NUMSIMPLJOS2(char *Q, long PP2, FILE *f1, int f, int W, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui j, gmp_ui j1, FILE *F2, gmp_ui p, gmp_ui *qq, char *t, long double a) {
	while(1) {
		NUMPREL(Q, a, t, p, qq, 0);
		f = W;

		while(1) {
			if(!f--)
				break;
			if((p % M[f]) && !(p % divInt[f]) && TRAT(j * divInt[f], j1 * sumInt[f])) {
				gmp_fprintf(F2, "%.0Lf\n", a / divInt[f]);
				}				
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j, &j1);
		}
}


void NUMSIMPL(char *Q, long PP2, FILE *f1, int f, int W, gmp_ui unul, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, FILE *F2, int &sus, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a, int dir) {//Regim de discriminare pentru categoriile numerice.
if(dir) {
	sus < 18? NUMSIMPLSUS1(Q, PP2, f1, f, W, unul, divInt, sumInt, 0, 0, F2, 0, p, qq, t)
	: NUMSIMPLSUS2(Q, PP2, f1, f, W, 0, divInt, sumInt, 0, 0, F2, p, qq, t);
	} else {	
	sus < 18? NUMSIMPLJOS1(Q, PP2, f1, f, W, unul, divInt, sumInt, M, 0, 0, F2, 0, p, qq, t)
	: NUMSIMPLJOS2(Q, PP2, f1, f, W, divInt, sumInt, M, 0, 0, F2, p, qq, t, a);
	}
}


//MODPRIM:
//DE GIACINTO
void SUSMODPRIM1(char *Q, long PP2, FILE *f1, int W, int f, gmp_ui unu, gmp_ui *A2, FILE *F2, gmp_ui j1, gmp_ui j2, gmp_ui p, gmp_ui *qq, char *t, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
	while(1) {
		unu = strtoul(Q, &t, 10);	
		p = unu >> (gmp_scan1(unu, qq, 0));
		f = W;

		while(1) {
			if(!--f)
				break;
			if(!(p % A2[f])) {
				MICMODPINTSUS(unu, p, A2[f], 2, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j, &j1);
		}
}


void SUSMODPRIM2(char *Q, long PP2, FILE *f1, int W, int f, int u, mpz_t unu, gmp_ui *A2, FILE *F2, gmp_ui j1, gmp_ui j2, int g, gmp_ui p, gmp_ui *qq, char *t, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
	while(1) {
		NUMPREL0(Q, t, unu, p, qq, 0);//n2 e p.
		f = W;		

		while(1) {
			if(!--f)
				break;
			if(!(p % A2[f]) && !(VERTOITO < ((long double)p) * A2[f])) {				
				VMODPINTSUS(unu, p, A2[f], doi, trei, 2, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j, &j1);
		}
}


void JOSMODPRIM1(char *Q, long PP2, FILE *f1, int W, int f, gmp_ui unu, gmp_ui *A2, gmp_ui *AP, FILE *F2, gmp_ui j1, gmp_ui j2, int g, gmp_ui p, gmp_ui *qq, char *t, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {

	while(1) {
		unu = strtoul(Q, &t, 10);
		p = unu >> (gmp_scan1(unu, qq, 0));
		f = W;

		while(1) {
		if(!f--) break;
		if(!(unu % AP[f])) {
			if(!u) {
				MICMODPINTJOS(unu, p, A2[f], 3, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
			}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j, &j1);
		}
}


void JOSMODPRIM2(char *Q, long PP2, FILE *f1, int W, int f, gmp_ui *A2, gmp_ui *AP, FILE *F2, gmp_ui j1, gmp_ui j2, gmp_ui p, gmp_ui *qq, char *t, long double a, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {

	while(1) {		
		NUMPREL(Q, a, t, p, qq, 0);//n2 e p.		
		f = W;

		while(1) {
			if(!f--) break;
			if(!(p % AP[f])) {
				VMODPINTJOS(a, p, A2[f], 3, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j, &j1);
		}
}


void MODPRIM(char *Q, long PP2, FILE *f1, int W, int f, gmp_ui unul, mpz_t unu, gmp_ui *A2, gmp_ui *AP, FILE *F2, gmp_ui p, gmp_ui *q, gmp_ui *qq, long double a, char *t, int &sus, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int dir) {
	if(dir) {
		sus < 18? SUSMODPRIM1(Q, PP2, f1, W, f, 0, unul, 0, A2, div1, sum1, F2, 0, 0, 0, p, qq, t, modpdiv1, modpsum1) 
			: SUSMODPRIM2(Q, PP2, f1, W, f, 0, unu, A2, div1, sum1, F2, 0, 0, 0, p, qq, t, modpdiv1, modpsum1);
		} else {
		sus < 18? JOSMODPRIM1(Q, PP2, f1, W, f, 0, unul, 0, A2, AP, div1, sum1, F2, 0, 0, 0, p, qq, t, modpdiv1, modpsum1) 
			: JOSMODPRIM2(Q, PP2, f1, W, f, 0, unu, A2, AP, div1, sum1, F2, 0, 0, 0, p, qq, t, a, modpdiv1, modpsum1);
		}
}


//Varianta 2 de MODPRIM:
void SUSMODPRIME1(char *Q, long PP2, FILE *f1, int W, int *M, int f, gmp_ui unu, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int j, gmp_ui j1, gmp_ui j2, gmp_ui p, gmp_ui *qq, char *t) {

	while(1) {
		unu = strtoul(Q, &t, 10);
		p = unu >> (gmp_scan1(unu, qq, 0));
		f = W;

		while(1) {
			if(!--f)
				break;
			if(!(p % A2[f])) {				
				j = M[f];
				MICMODPINTSUS(unu, p, A2[f], 2, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j, &j1);
		}
}


void SUSMODPRIME2(char *Q, long PP2, FILE *f1, int W, int *M, int f, mpz_t unu, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int j, gmp_ui j1, gmp_ui j2, gmp_ui p, gmp_ui *qq, char *t) {
	while(1) {
		NUMPREL0(Q, t, unu, p, qq, 0);
		f = W;

		while(1) {
			if(!--f)
				break;
			if(!(p % A2[f]) && !(VERTOITO < ((long double)p) * A2[f])) {				
				j = M[f];
				VMODPINTSUS(unu, p, A2[f], doi, trei, 2, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j, &j1);
		}
}


void JOSMODPRIME1(char *Q, long PP2, FILE *f1, int W, int *M, int f, gmp_ui unu, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int j, gmp_ui j1, gmp_ui j2, gmp_ui p, gmp_ui *qq, char *t) {
	while(1) {
		unu = strtoul(Q, &t, 10);	
		p = unu >> (gmp_scan1(unu, qq, 0));
		f = W;

		while(1) {
		if(!f--) break;
		if(!(unu % AP[f])) {
				j = M[f];
				MICMODPINTJOS(unu, p, A2[f], 3, j1, j2, div1[j], sum1[j], Q, F2);
			}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j, &j1);
		}
}


void JOSMODPRIME2(char *Q, long PP2, FILE *f1, int W, int *M, int f, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int j, gmp_ui j1, gmp_ui j2, gmp_ui p, gmp_ui *qq, char *t, long double a) {

	while(1) {
		NUMPREL(Q, a, t, p, qq, 0);//n2 e p.
		f = W;

		while(1) {
			if(!f--) break;
			if(!(p % AP[f])) {				
				j = M[f];
				VMODPINTJOS(a, p, A2[f], 3, j1, j2, div1[j], sum1[j], Q, F2);
				}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j, &j1);
		}
}


void MODPRIME(char *Q, long PP2, FILE *f1, int W, int *M, int f, gmp_ui unul, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a, int &sus, int dir) {
	if(dir) {
		sus < 18? SUSMODPRIME1(Q, PP2, f1, W, M, f, 0, unul, 0, A2, div1, sum1, F2, 0, 0, 0, 0, p, qq, t) 
			: SUSMODPRIME2(Q, PP2, f1, W, M, f, 0, unu, doi, trei, d1, A2, div1, sum1, F2, 0, 0, 0, 0, p, qq, t) ;
		} else {
		sus < 18? JOSMODPRIME1(Q, PP2, f1, W, M, f, 0, unul, 0, A2, AP, div1, sum1, F2, 0, 0, 0, 0, p, qq, t) 
			: JOSMODPRIME2(Q, PP2, f1, W, M, f, 0, A2, AP, div1, sum1, F2, 0, 0, 0, 0, p, qq, t, a);
		}
}


//MODIFSUM:
void IMPMUL0(gmp_ui &mul1, mpz_t sum, mpz_t d, gmp_ui imp, mpz_t mul, gmp_ui unu, gmp_ui doi, gmp_ui d1, char *Q, FILE *F2, gmp_ui A2, gmp_ui SM) {
if(mul1 ^ SM) {
	mpz_divexact_ui(sum, sum, imp);
	mpz_mul_ui(sum, sum, mul);
	imp = 1;
	mpz_set_ui(mul, 1);
	
	if(1 ^ mul1) {
		mpz_mul_ui(sum, sum, mul1);
		mul1 = 1;
		}

	goto s1;
	}

mpz_mul_ui(sum, d, mul1);
mul1 = 1;

s1:
doi = unu * A2;
if(MICVALID40(doi, d1, sum) == 1) {
	#pragma omp critical
	SCRIE(doi, Q, F2);
	}
}


void IMPMUL(gmp_ui &mul1, mpz_t sum, mpz_t d, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t doi, mpz_t d1, char *Q, FILE *F2, gmp_ui A2, gmp_ui SM) {
if(mul1 ^ SM) {
	mpz_divexact(sum, d, imp);	
	mpz_mul(sum, sum, mul);
	mpz_set_ui(imp, 1);
	mpz_set_ui(mul, 1);
	
	if(1 ^ mul1) {
		mpz_mul_ui(sum, sum, mul1);
		mul1 = 1;
		}

	goto s1;
	}

mpz_mul_ui(sum, d, mul1);
mul1 = 1;

s1:
mpz_mul_ui(doi, unu, A2);
if(VALID4(doi, d1, sum) == 1) {
	#pragma omp critical
	SCRIE(doi, Q, F2);
	}
}


void IMPMUL2(mpz_t sum, mpz_t d, mpz_t imp, mpz_t mul, mpz_t doi, mpz_t d1, char *Q, FILE *F2) {
mpz_divexact(sum, d, imp);
mpz_mul(sum, sum, mul);
mpz_set_ui(imp, 1);
mpz_set_ui(mul, 1);

if(VALID4(doi, d1, sum) == 1) {
	#pragma omp critical
	SCRIE(doi, Q, F2);
	}
}


void MODSUS0(mpz_t unu, mpz_t imp, mpz_t mul, int q, int k, int p, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2]) {//q FACTLEG, k PRIMP.
	for(; mpz_divisible_ui_p(unu, div1[q][p]); p += 2);
	mpz_mul_ui(imp, imp, mpz_divisible_ui_p(unu, div1[q][--p])? sum1[q][p] : sum1[q][--p]);
	mpz_mul_ui(mul, mul, sum1[q][p+k]);
}


void MODIFSUS1(gmp_ui mul1, int n, int z, int f, gmp_ui *S2, gmp_ui *A2, char *Q, FILE *F2, mpz_t p, gmp_ui unu, mpz_t doi, gmp_ui d, gmp_ui d1, mpz_t sum, mpz_t imp, mpz_t mul, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1]) {
for(; n < f; n++) {
for(z = 0; FACT[n][z]; z++) {
	if(!(p % FACT[n][z])) {
		MODSUS0(unu, imp, mul, FACTLEG[n][z], PRIMP[n][z], 2, div1, sum1);
		continue;
			}
			
		mul1 *= sum1[FACTLEG[n][z]][PRIMP[n][z]];
		}

	IMPMUL0(mul1, sum, d, imp, mul, unu, doi, d1, Q, F2, A2[n], S2[n]);
	}
}


void MODJOS0(gmp_ui unu, mpz_t imp, mpz_t mul, int q, int k, int p, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2]) {//p=2.	
	for(; !(unu % div1[q][p]); p += 2);
	mpz_mul_ui(imp, imp, !(unu % div1[q][--p])? sum1[q][p] : sum1[q][--p]);
	mpz_mul_ui(mul, mul, sum1[q][p-k]);
}


void MODIFJOS1(mpz_t unu, mpz_t d, mpz_t d1, gmp_ui A1, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p) {
	doi = unu/A1;
	for(A1 = 0; FACT[A1]; A1++)
		MODJOS0(p, imp, mul, FACTLEG[A1], PRIMP[A1], 2, div1, sum1);	
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);
}


void MODSUS1(mpz_t unu, mpz_t imp, mpz_t mul, int q, int k, int p, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2]) {//q FACTLEG, k PRIMP.
	for(; mpz_divisible_ui_p(unu, div1[q][p]); p += 2);
	mpz_mul_ui(imp, imp, mpz_divisible_ui_p(unu, div1[q][--p])? sum1[q][p] : sum1[q][--p]);
	mpz_mul_ui(mul, mul, sum1[q][p+k]);
}


void MODIFSUS2(gmp_ui mul1, int n, int z, int f, gmp_ui *S2, gmp_ui *A2, char *Q, FILE *F2, mpz_t p, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t sum, mpz_t imp, mpz_t mul, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1]) {
for(; n < f; n++) {
for(z = 0; FACT[n][z]; z++) {
	if(mpz_divisible_ui_p(p, FACT[n][z])) {
		MODSUS0(unu, imp, mul, FACTLEG[n][z], PRIMP[n][z], 2, div1, sum1);
		continue;
			}
			
		mul1 *= sum1[FACTLEG[n][z]][PRIMP[n][z]];
		}

	IMPMUL(mul1, sum, d, imp, mul, unu, doi, d1, Q, F2, A2[n], S2[n]);
	}
}


void MODJOS1(mpz_t unu, mpz_t imp, mpz_t mul, int q, int k, int p, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2]) {//p=2.	
	for(; mpz_divisible_ui_p(unu, div1[q][p]); p += 2);
	mpz_mul_ui(imp, imp, mpz_divisible_ui_p(unu, div1[q][--p])? sum1[q][p] : sum1[q][--p]);
	mpz_mul_ui(mul, mul, sum1[q][p-k]);
}


void MODIFJOS2(mpz_t unu, mpz_t d, mpz_t d1, gmp_ui A1, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p) {	
	mpz_divexact_ui(doi, unu, A1);
	for(A1 = 0; FACT[A1]; A1++)
		MODJOS0(p, imp, mul, FACTLEG[A1], PRIMP[A1], 2, div1, sum1);	
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);
}


//SECȚIUNEA NEMERNA: MODIFSUMAREA FĂRĂ DIVNUM.
void SUSMODIFSUM1(char *Q, long PP2, int &W, FILE *f1, int &u1, gmp_ui unu, gmp_ui d, mpz_t d1, gmp_ui doi, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui FACT[][5], int FACTLEG[][5], gmp_ui *FD, int PRIMP[][5], gmp_ui *sum, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, int g) {
	while(1) {//De aici se face bifurcare între MODIFSUM-uri.		
		unu = strtoul(Q, &t, 10);	
		p = unu >> (gmp_scan1(unu, qq, 0));		
		MODIFSUS1(W, u1, unu, A3, d, d1, 0, A2, doi, Q, F2, div1, sum1, FACT, FACTLEG, FD, PRIMP, sum, p);
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu", &d);
	}
}


void SUSMODIFSUM2(char *Q, long PP2, int &W, FILE *f1, int &u1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui FACT[][5], int FACTLEG[][5], gmp_ui *FD, int PRIMP[][5], mpz_t *sum, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, int g, int *A4) {
	while(1) {
		g = NUMPREL0(Q, t, unu, p, qq, 0);		
		MODIFSUS2(W, u1, unu, A3, d, d1, 0, A2, doi, Q, F2, div1, sum1, FACT, FACTLEG, FD, PRIMP, sum, p, A4);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		mpz_set_str(d, Q, 10);
		fgets(Q, 1920, f1);
	}
}


void JOSMODIFSUM1(char *Q, long PP2, int W, FILE *f1, int f, int u, gmp_ui unu, gmp_ui d, gmp_ui doi, gmp_ui trei, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui FACT[][5], int FACTLEG[][5], int PRIMP[][5], int g, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t) {
	while(1) {
		unu = strtoul(Q, &t, 10);	
		p = unu >> (gmp_scan1(unu, qq, 0));
		u = 0;
		
		for(f = W-1; f >= 0; --f)
		if(!(p % A2[f])) {			
			MODIFJOS1(unu, d, A2[f], doi, trei, Q, F2, div1, sum1, FACT[f], FACTLEG[f], PRIMP[f], p);
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu", &d);
	}
}


void JOSMODIFSUM2(char *Q, long PP2, int W, FILE *f1, int f, int u, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui FACT[][5], int FACTLEG[][5], int PRIMP[][5], int g, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a) {

	while(1) {
		g = NUMPREL(Q, a, t, p, qq, 0);			
		u = 0;
		
		for(f = W-1; f >= 0; --f)
		if(!(p % A2[f])) {			
			MODIFJOS2(unu, d, d1, A2[f], doi, trei, Q, F2, div1, sum1, FACT[f], FACTLEG[f], PRIMP[f], p);
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		mpz_set_str(d, Q, 10);
		fgets(Q, 1920, f1);
	}
}


void MODIFSUM(char *Q, long PP2, int &W, FILE *f1, int &u1, gmp_ui unul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int &sus, int &dir, gmp_ui FACT[][5], int FACTLEG[][5], gmp_ui *FD, int PRIMP[][5], gmp_ui *sum, mpz_t *summ, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a, int *A4) {
	if(dir) {
		sus < 18? SUSMODIFSUM1(Q, PP2, W, f1, u1, unul, 0, d1, 0, A2, A3, div1, sum1, F2, FACT, FACTLEG, FD, PRIMP, sum, p, q, qq, t, 0)
			: SUSMODIFSUM2(Q, PP2, W, f1, u1, unu, d, d1, doi, A2, A3, div1, sum1, F2, FACT, FACTLEG, FD, PRIMP, summ, p, q, qq, t, 0, A4);
		} else {
		sus < 18? JOSMODIFSUM1(Q, PP2, W, f1, 0, 0, unul, 0, 0, 0, A2, div1, sum1, F2, FACT, FACTLEG, PRIMP, 0, p, q, qq, t) 
			:JOSMODIFSUM2(Q, PP2, W, f1, 0, 0, unu, d, d1, doi, trei, A2, div1, sum1, F2, FACT, FACTLEG, PRIMP, 0, p, q, qq, t, a);
	}
}


//MODSPRIM:
//j = 2 sus, 3 jos.
void SUSMODSPRIM1(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui unu, gmp_ui doi, gmp_ui trei, gmp_ui d, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int g, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {

	while(1) {
		unu = strtoul(Q, &t, 10);
		p = unu >> (gmp_scan1(unu, qq, 0));
		f = W;
		
		while(1) {
			if(!f--) break;
			if(!(p % A2[f])) {				
				VSUMINT(p, unu, trei, A2[f], 2, d, doi, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu", &d);
		}
}


void SUSMODSPRIM2(char *Q, long PP2, FILE *f1, int W, int f, int u, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int g, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {

	while(1) {
		g = NUMPREL0(Q, t, unu, p, qq, 0);
		f = W;
		
		while(1) {
			if(!f--) break;
			if(!(p % A2[f]) && !(VERTOITO < ((long double)p) * A2[f])) {				
				VSUMINT1(p, unu, trei, A2[f], 2, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		mpz_set_str(d, Q, 10);
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIM1(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui unu, gmp_ui doi, gmp_ui trei, gmp_ui d, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int g, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {

	while(1) {
		unu = strtoul(Q, &t, 10);		
		p = unu >> (gmp_scan1(unu, qq, 0));
		f = W;

		while(1) {
			if(!f--) break;
			if(!(p % AP[f])) {				
				VSUMINTJOS(p, unu, trei, A2[f], 3, d, doi, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu", &d);
		}
}


void JOSMODSPRIM2(char *Q, long PP2, FILE *f1, int W, int f, int u, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int g, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {

	while(1) {
		g = NUMPREL(Q, a, t, p, qq, 0);
		f = W;

		while(1) {
			if(!f--) break;
			if(!(p % AP[f])) {				
				VSUMINTJOS1(p, unu, trei, A2[f], 3, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		mpz_set_str(d, Q, 10);
		fgets(Q, 1920, f1);
		}
}


void MODSPRIM(char *Q, long PP2, FILE *f1, int W, int f, gmp_ui unul, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int &sus, int dir, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
	if(dir) {
		sus < 18? SUSMODSPRIM1(Q, PP2, f1, W = f, f, 0, unul, 0, 0, 0, A2, div1, sum1, F2, 0, p, q, qq, t, modpdiv1, modpsum1) 
			:SUSMODSPRIM2(Q, PP2, f1, W = f, f, 0, unu, doi, trei, d, d1, A2, div1, sum1, F2, 0, p, q, qq, t, modpdiv1, modpsum1);
		} else {
		sus < 18? JOSMODSPRIM1(Q, PP2, f1, W = f, f, 0, unul, 0, 0, 0, A2, AP, div1, sum1, F2, 0, p, q, qq, t, modpdiv1, modpsum1) 
			:JOSMODSPRIM2(Q, PP2, f1, W = f, f, 0, unu, doi, trei, d, d1, A2, AP, div1, sum1, F2, 0, p, q, qq, t, a, modpdiv1, modpsum1);
		}
}


//MODSPRIM CONTRA MODSPRIME:
void SUSMODSPRIME1(int *M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui unu, gmp_ui doi, gmp_ui trei, gmp_ui d, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int j, FILE *F2,  int g, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t) {
if(W > PRAGW)
	while(1) {
		unu = strtoul(Q, &t, 10);	
		p = unu >> (gmp_scan1(unu, qq, 0));
		f = W;
		
		while(1) {
			if(!f--) break;
			if(!(p % A2[f])) {				
				j = M[f];
				VSUMINT(p, unu, trei, A2[f], 2, d, doi, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu", &d);
		}
}


void SUSMODSPRIME2(int *M, char *Q, long PP2, FILE *f1, int W, int f, int u, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int j, FILE *F2, int g, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t) {

	while(1) {
		g = NUMPREL0(Q, t, unu, p, qq, 0);
		f = W;
		
		while(1) {
			if(!f--) break;
			if(!(p % A2[f]) && !(VERTOITO >= ((long double)p) * A2[f])) {				
				j = M[f];
				VSUMINT1(p, unu, trei, A2[f], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		mpz_set_str(d, Q, 10);
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIME1(int *M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui unu, gmp_ui doi, gmp_ui trei, gmp_ui d, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int j, FILE *F2,  int g, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t) {

	while(1) {
		unu = strtoul(Q, &t, 10);	
		p = unu >> (gmp_scan1(unu, qq, 0));
		f = W;

		while(1) {
			if(!f--) break;
			if(!(p % AP[f])) {				
				j = M[f];
				VSUMINTJOS(p, unu, trei, A2[f], 3, d, doi, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu", &d);
		}
}


void JOSMODSPRIME2(int *M, char *Q, long PP2, FILE *f1, int W, int f, int u, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int j, FILE *F2, int g, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a) {

	while(1) {
		g = NUMPREL(Q, a, t, p, qq, 0);			
		f = W;

		while(1) {
			if(!f--) break;
			if(!(p % AP[f])) {				
				j = M[f];
				VSUMINTJOS1(p, unu, trei, A2[f], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		mpz_set_str(d, Q, 10);
		fgets(Q, 1920, f1);
		}
}


void MODSPRIME(char *Q, long PP2, FILE *f1, int W, int f, int *M, gmp_ui unul, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int &sus, int dir, gmp_ui p, gmp_ui *q, gmp_ui *qq, long double a, char *t) {
	if(dir) {
		sus < 18? SUSMODSPRIME1(M, Q, PP2, f1, W = f, f, 0, unul, 0, 0, 0, A2, div1, sum1, 0, F2, 0, p, q, qq, t) 
			: SUSMODSPRIME2(M, Q, PP2, f1, W = f, f, 0, unu, doi, trei, d, d1, A2, div1, sum1, 0, F2, 0, p, q, qq, t) ;
		} else {
		sus < 18? JOSMODSPRIME1(M, Q, PP2, f1, W = f, f, 0, unul, 0, 0, 0, A2, AP, div1, sum1, 0, F2, 0, p, q, qq, t) 
			: JOSMODSPRIME2(M, Q, PP2, f1, W = f, f, 0, unu, doi, trei, d, d1, A2, AP, div1, sum1, 0, F2, 0, p, q, qq, t, a) ;
		}
}


void NUMERICULSUS1(char *Q, long PP2, int W, FILE *f1, int f, int s, gmp_ui unu, gmp_ui d, gmp_ui doi, gmp_ui *divInt, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, int g) {
while(1) {	
	unu = strtoul(Q, &t, 10);
	f = W;
	while(1) {
		if(!f--)
			break;
		doi = unu * divInt[f];
		p = doi >> (gmp_scan1(unu, qq, 0));
		
		if(MICVALID(doi, d)) {
			fprintf(F2, "%llu\n", doi);
		}
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULSUS2(char *Q, long PP2, int W, FILE *f1, int f, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);	
	g = NUMPREL(Q, a, t, p, qq, 0);
	f = W;
	while(1) {
		if(!f--)
			break;
		if(VERTOITO < ((long double)p) * divInt[f])
			continue;
		mpz_mul_ui(doi, unu, divInt[f]);
		
		if(!(VALID(doi, d1, d) ^ 1)) {
			SCRIE(doi, Q, F2);
		}
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULJOS1(char *Q, long PP2, int W, FILE *f1, int f, int s, gmp_ui unu, gmp_ui d, gmp_ui doi, gmp_ui *divInt, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, int g) {
while(1) {	
	unu = strtoul(Q, &t, 10);
	f = W;
	while(1) {
		if(!f--)
			break;	
		if(!(unu % divInt[f])) {
			doi = unu / divInt[f];
			p = doi >> (gmp_scan1(unu, qq, 0));
			
			if(MICVALID(doi, d)) {
				fprintf(F2, "%llu\n", doi);
			}
		}
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULJOS2(char *Q, long PP2, int W, FILE *f1, int f, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a, int g, int g1) {
while(1) {	
	a = strtold(Q, &t);	
	f = W, g1 = 0;
	
	while(1) {
		if(!--f)
			break;
		if(!fmodl(a, divInt[f])) {
			if(!g1) {
				mpz_set_str(unu, Q, 10); 
				g1 = 1;
			}
			
			mpz_divexact_ui(doi, unu, divInt[f]);
			p = a / (qq[g = ld_scan1(a, qq, 0)] * divInt[f]);
			
			if(!(VALID(doi, d1, d) ^ 1)) {
				SCRIE(doi, Q, F2);
				}
			}
		}
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICUL(char *Q, long PP2, int W, FILE *f1, int f, gmp_ui unul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int &sus, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a, int dir) {
	if(dir) {
		sus < 18? NUMERICULSUS1(Q, PP2, W, f1, f, 0, unul, 0, 0, divInt, div1, sum1, F2, p, q, qq, t, 0) 
			: NUMERICULSUS2(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, div1, sum1, F2, p, q, qq, t, a, 0);
		} else {
		sus < 18? NUMERICULJOS1(Q, PP2, W, f1, f, 0, unul, 0, 0, divInt, div1, sum1, F2, p, q, qq, t, 0) 
			: NUMERICULJOS2(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, div1, sum1, F2, p, q, qq, t, a, 0, 0);
	}
}


//MODPRIMSUM:
#define HU ((gmp_ui)(0U)-1) / PRAG

void CMM(mpz_t nr, mpz_t nm, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui g, gmp_ui h, gmp_ui i, char *Q, FILE *F2) {
	if(!mpz_cmp_ui(nr, g = mpz_get_ui(nr))) {
		h = mpz_get_ui(nm);
		i = CMMDC(g, h, g%h);
		if( (i <= HU && i * PRAG > h) || (i > HU && h/i < PRAG) ) {
			mpz_mul_ui(doi, unu, A2);
			SCRIE(doi, Q, F2);
		} //else {
			//mpz_set_ui(doi, i); mpz_mul_ui(doi, doi, PRAG); if(mpz_cmp_ui(doi, h) > 0) {mpz_mul_ui(doi, unu, A2); SCRIE(doi, Q, F2);}
		//}
	} else {
		mpz_gcd(doi, nr, nm);
		mpz_mul_ui(doi, doi, PRAG);
		if(mpz_cmp(doi, nm) > 0) {
			mpz_mul_ui(doi, unu, A2);
			SCRIE(doi, Q, F2);
		}
	}
}


void CMMS0(mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui nr, gmp_ui nm, gmp_ui i, char *Q, FILE *F2) {
	//i = CMMDC(nr, nm, nr%nm);
	if( (i <= HU && i * PRAG > nm) || (i > HU && nm/i < PRAG) ) {//E valid.
			doi = unu * A2;
			SCRIE(doi, Q, F2);
		}
}


void CMMJ0(mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui nr, gmp_ui nm, gmp_ui i, char *Q, FILE *F2) {
	if( (i <= HU && i * PRAG > nm) || (i > HU && nm/i < PRAG) ) {
			doi = unu / A2;
			SCRIE(doi, Q, F2);
		}
}


void CMM2S0(mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui nr, gmp_ui nm, gmp_ui i, char *Q, FILE *F2) {
	if( (i <= HU && i * PRAG > nm) || (i > HU && nm/i < PRAG) ) {
			doi = unu * A2;
			SCRIE(doi, Q, F2);
		}
}


void CMM2J0(mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui nr, gmp_ui nm, gmp_ui i, char *Q, FILE *F2) {
	if( (i <= HU && i * PRAG > nm) || (i > HU && nm/i < PRAG) ) {
			doi = unu / A2;
			SCRIE(doi, Q, F2);
		}
}


void CMMS(mpz_t nr, mpz_t nm, mpz_t unu, mpz_t doi, gmp_ui A2, char *Q, FILE *F2) {
mpz_gcd(doi, nr, nm);
mpz_mul_ui(doi, doi, PRAG);

if(mpz_cmp(doi, nm) > 0) {
	mpz_mul_ui(doi, unu, A2);
	SCRIE(doi, Q, F2);
	}
}


void CMMJ(mpz_t nr, mpz_t nm, mpz_t unu, mpz_t doi, gmp_ui A2, char *Q, FILE *F2) {
mpz_gcd(doi, nr, nm);
mpz_mul_ui(doi, doi, PRAG);

if(mpz_cmp(doi, nm) > 0) {
	mpz_divexact_ui(doi, unu, A2);
	SCRIE(doi, Q, F2);
	}
}


void CMM2S(mpz_t nr, mpz_t nm, mpz_t unu, mpz_t doi, gmp_ui A2, char *Q, FILE *F2) {
mpz_gcd(doi, nr, nm);
mpz_mul_ui(doi, doi, PRAG);

if(mpz_cmp(doi, nm) > 0) {	
	VSCRIE(unu * A2, Q, F2);
	}
}


void CMM2J(mpz_t nr, mpz_t nm, gmp_ui unu, mpz_t doi, gmp_ui A2, char *Q, FILE *F2) {
mpz_gcd(doi, nr, nm);
mpz_mul_ui(doi, doi, PRAG);

if(mpz_cmp(doi, nm) > 0) {	
	VSCRIE(unu / A2, Q, F2);
	}
}


void MODPSUS0(gmp_ui unu, int q, gmp_ui k, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &nr, gmp_ui &nm, gmp_ui j, gmp_ui j2) {//Divizibile. j e 2.
	for(; !(unu % div1[q][j]); j += 2);
	nm *= (j2 = !(unu % div1[q][j--])? sum1[q][j+k] : sum1[q][--j+k]), nr *= (j2 - sum1[q][k-1]);
}


void MODPSUS1(int q, gmp_ui k, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &nr, gmp_ui &nm) {//Nedivizibile.
	nm *= div1[q][k], nr *= sum1[q][k];
}


void MODPSUSM0(gmp_ui unu, int q, gmp_ui k, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t nr, mpz_t nm, gmp_ui j, gmp_ui j2) {
	for(; !(unu % div1[q][j]); j += 2);
	mpz_mul_ui(nm, nm, (j2 = !(unu % div1[q][j--])? sum1[q][j+k] : sum1[q][--j+k]));
	mpz_mul_ui(nr, nr, (j2 - sum1[q][k-1]));
}


void MODPSUSM1(int q, gmp_ui k, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t nr, mpz_t nm) {
	mpz_mul_ui(nm, nm, div1[q][k]);
	mpz_mul_ui(nr, nr, sum1[q][k]);
}


void MODPJOS0(gmp_ui unu, int q, gmp_ui k, gmp_ui j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &nr, gmp_ui &nm) {
		for(; !(unu % div1[q][j]); j += 2);
		nm *= (j = !(unu % div1[q][--j])? sum1[q][j] : sum1[q][--j]), nr *= (j - sum1[q][k-1]);
}


void MODPJOSM0(gmp_ui unu, int q, gmp_ui k, gmp_ui j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t nr2, mpz_t nm2) {
		for(; !(unu % div1[q][j]); j += 2);
		mpz_mul_ui(nm2, nm2, (j = !(unu % div1[q][--j])? sum1[q][j] : sum1[q][--j]));
		mpz_mul_ui(nr2, nr2, (j - sum1[q][k-1]));
}


void MODPRIMSUMSUS(int n, int z, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, int f, gmp_ui unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], char *Q, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui p) {
	for(; n < f; n++) {
		mpz_set_ui(nr2, nr);
		mpz_set_ui(nm2, nm);
		
		for(z = 0; FACT[n][z]; z++)
		!(p % FACT[n][z])?
			MODPSUSM0(p, FACTLEG[n][z], PRIMP[n][z], div1, sum1, nr2, nm2, 2, 0)
				: MODPSUSM1(FACTLEG[n][z], PRIMP[n][z], div1, sum1, nr2, nm2);
		CMM2S(nr2, nm2, unu, doi, A2[n], Q, F2);
	}
}


void MODPRIMSUMSUS1(int n, int z, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, int f, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], char *Q, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui p) {
	for(; n < f; n++) {
	if(A2[n] * p % A2[n]) break;
		mpz_set_ui(nr2, nr);
		mpz_set_ui(nm2, nm);
		
		for(z = 0; FACT[n][z]; z++)
		!(p % FACT[n][z])?
			MODPSUSM0(p, FACTLEG[n][z], PRIMP[n][z], div1, sum1, nr2, nm2, 2, 0)
				: MODPSUSM1(FACTLEG[n][z], PRIMP[n][z], div1, sum1, nr2, nm2);
		CMMS(nr2, nm2, unu, doi, A2[n], Q, F2);
	}
}


void MODPRIMSUMJOS(mpz_t nr, mpz_t nm, gmp_ui unu, mpz_t doi, gmp_ui A1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int i, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui p) {
	for(; FACT[i]; i++)
		MODPJOSM0(p, FACTLEG[i], PRIMP[i], 2, div1, sum1, nr, nm);
	
	CMM2J(unu, doi, A1, nr, nm, Q, F2);
}


void MODPRIMSUMJOS1(mpz_t nr, mpz_t nm, mpz_t unu, mpz_t doi, gmp_ui A1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int i, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui p) {
	for(; FACT[i]; i++)
		MODPJOSM0(p, FACTLEG[i], PRIMP[i], 2, div1, sum1, nr, nm);
	
	CMMJ(unu, doi, A1, nr, nm, Q, F2);
}


void SUSMODPRIMSUM1(char *Q, long PP2, FILE *f1, int &W, gmp_ui nr, gmp_ui nm, gmp_ui unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui p, char *t, gmp_ui *q, int g) {
while(1) {
	unu = strtoul(Q, &t, 10);
	MODPRIMSUMSUS(0, 0, nr, nm, nr2, nm2, W, unu, doi, A2, div1, sum1, Q, F2, FACT, FACTLEG, PRIMP, p);
	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr, &nm);
	}
}


void SUSMODPRIMSUM2(char *Q, long PP2, FILE *f1, int &W, gmp_ui nr, gmp_ui nm, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui p, char *t, gmp_ui *q, int g) {
while(1) {
	NUMPREL0(Q, t, unu, p, q, 0);
	MODPRIMSUMSUS1(0, 0, nr, nm, nr2, nm2, W, unu, doi, A2, div1, sum1, Q, F2, FACT, FACTLEG, PRIMP, p);
	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr, &nm);
	}
}


void JOSMODPRIMSUM1(char *Q, long PP2, FILE *f1, int W, int f, int u, mpz_t nr1, mpz_t nm1, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui p, char *t, gmp_ui *q) {
while(1) {
	unu = strtoul(Q, &t, 10);
	p = unu / ui_scan1(unu, q, 0);
	u = 0;

	for(f = W-1; f >= 0; --f)
	if(!(unu % A2[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));			
			}

		MODPRIMSUMJOS(nr1, nm1, unu, doi, A2[f], div1, sum1, 0, Q, F2, FACT[f], FACTLEG[f], PRIMP[f], p);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr1, &nm1);
	}
}


void JOSMODPRIMSUM2(char *Q, long PP2, FILE *f1, int W, int f, int u, mpz_t nr1, mpz_t nm1, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui p, char *t, gmp_ui *q) {
while(1) {
	NUMPREL0(Q, t, unu, p, q, 0);
	
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		MODPRIMSUMJOS1(nr1, nm1, unu, doi, A2[f], div1, sum1, 0, Q, F2, FACT[f], FACTLEG[f], PRIMP[f], p);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr1, &nm1);
	}
}


void MODPDOISUS(gmp_ui j, gmp_ui j2, gmp_ui &nr, gmp_ui &nm, gmp_ui *sumdoi1) {//j = 2, j2 = mpz_scan1(unu, 0).
nr *= sumdoi1[j+j2], nm *= sumdoi1[--j];
}


void MODPDOIJOS(gmp_ui a, gmp_ui j1, gmp_ui &nr, gmp_ui &nm, gmp_ui *sumdoi1) {
nm *= sumdoi1[j1], nr *= (sumdoi1[j1] - sumdoi1[a]);
}


void DOIMODPJOS(mpz_t unu, gmp_ui j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi1, int doi, gmp_ui &nr, gmp_ui &nm, gmp_ui *FACT, int *FACTLEG, int *PRIMP) {//doi - 1.
MODPDOIJOS(doi, j, nr, nm, sumdoi1);
	for(j = 0; FACT[j]; j++)
		MODPJOS0(unu, FACTLEG[j], PRIMP[j], 2, div1, sum1, nr, nm);
}


//MODSPAR:
void MICDOISUS(mpz_t imp, mpz_t mul, gmp_ui *sumdoi, int v, gmp_ui j) {//j = indexul de putere de 2.
mpz_mul_ui(imp, imp, sumdoi[v]);
mpz_mul_ui(mul, mul, sumdoi[v+j]);
}


void MICDOIJOS(mpz_t imp, mpz_t mul, gmp_ui *sumdoi, int v, gmp_ui j) {//j = indexul de putere de 2.
mpz_mul_ui(imp, imp, sumdoi[v]);
mpz_mul_ui(mul, mul, sumdoi[v-j]);
}


void MICDOISPARJOS(mpz_t unu, mpz_t imp, mpz_t mul, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi, int doi, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP) {
	MICDOIJOS(imp, mul, sumdoi, v, doi);
	for(v = 0; FACT[v]; v++)
		MODJOS0(unu, imp, mul, FACTLEG[v], PRIMP[v], 2, div1, sum1);
}


void MICSEPSUS(mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t sum, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui *sumdoi, int v, int n, int *doiul, int sep) {//n = 0.
	for(; n < sep; n++) {
		MICDOISUS(imp, mul, sumdoi, v, doiul[n]);		
		mpz_mul_2exp(doi, unu, doiul[n]);
		IMPMUL2(sum, d, imp, mul, doi, d1, Q, F2);		
		}
}


void MICSEPJOS(mpz_t unu, mpz_t d, mpz_t d1, int doiul, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui *sumdoi, int v) {
	mpz_tdiv_q_2exp(doi, unu, doiul);
	MICDOIJOS(imp, mul, sumdoi, v, --doiul);
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);
}


void MODSPARSUS1(gmp_ui mul1, int f, int z, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui *AG, mpz_t doi, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi, int *doi1, int v, int n, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, int *doiul, int sep) {
	for(n = 0; n < f; n++) {
		MICDOISUS(imp, mul, sumdoi, v, doi1[n]);

		for(z = 0; FACT[n][z]; z++) {
			if(mpz_divisible_ui_p(unu, FACT[n][z])) {
				MODSUS0(unu, imp, mul, FACTLEG[n][z], PRIMP[n][z], 2, div1, sum1);
				continue;
				}
				
			mul1 *= sum1[FACTLEG[n][z]][PRIMP[n][z]];
			}

		mpz_mul_ui(doi, unu, AG[n]);
		IMPMUL3(mul1, sum, d, imp, mul, doi, d1, Q, F2);
		}
		
	MICSEPSUS(unu, d, d1, doi, sum, imp, mul, Q, F2, sumdoi, v, 0, doiul, sep);
}


void MODSPARJOS1(mpz_t p, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui AG, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *sumdoi, int doi1, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP) {
	mpz_divexact_ui(doi, unu, AG);
	MICDOISPARJOS(p, imp, mul, div1, sum1, sumdoi, doi1, v, FACT, FACTLEG, PRIMP);
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);	
}


void SUSMODSPAR1(char *Q, long PP2, FILE *f1, int &W, int &u1, gmp_ui unu, gmp_ui d, gmp_ui doi, mpz_t d1, gmp_ui *A3, gmp_ui *AG, int *doi1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int v, gmp_ui FACT[][5], int FACTLEG[][5], int PRIMP[][5], gmp_ui *summ, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, int *doiul, int sep) {
while(1) {
	unu = strtoul(Q, &t, 10);	
	p = unu >> (v = gmp_scan1(unu, qq, 0));
	MODSPARSUS1(W, u1, unu, d, A3, AG, doi1, doi, d1, Q, F2, div1, sum1, q, v, 0, FACT, FACTLEG, PRIMP, summ, p, doiul, sep);	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	d = strtoul(Q, &t, 10);
	fgets(Q, 1920, f1);
	}
}


void SUSMODSPAR2(char *Q, long PP2, FILE *f1, int &W, int &u1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *A2, gmp_ui *A3, gmp_ui *AG, int *doi1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int v, gmp_ui FACT[][5], int FACTLEG[][5], int PRIMP[][5], mpz_t *summ, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, int *A4, int *doiul, int sep) {
while(1) {
	v = NUMPREL0(Q, t, unu, p, qq, 0);
	MODSPARSUS2(W, u1, unu, d, d1, A2, A3, AG, doi1, doi, Q, F2, div1, sum1, q, v, 0, FACT, FACTLEG, PRIMP, summ, p, A4, doiul, sep);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	mpz_set_str(d, Q, 10);
	fgets(Q, 1920, f1);
	}
}


void JOSMODSPAR1(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui unu, gmp_ui d, gmp_ui doi, gmp_ui trei, gmp_ui *A5, gmp_ui *AG, int *doi1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui FACT[][5], int FACTLEG[][5], int PRIMP[][5], gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, int *doiul, int sep) {
while(1) {	
	unu = strtoul(Q, &t, 10);	
	if(unu & 1)
		goto n1;
	u = 0;
	
	for(f = W-1; f >= 0; --f)
	if(!(unu % AG[f])) {
		if(!u) {
			p = unu >> (u = gmp_scan1(unu, qq, 0));
		}
		MODSPARJOS1(p, unu, d, AG[f], doi1[f] - 1, doi, trei, Q, F2, div1, sum1, q, u, FACT[f], FACTLEG[f], PRIMP[f]);
	}

	for(f = sep-1; f >= 0; --f)
		if(!(unu % A5[f])) {
			if(!u) {
				p = unu >> (u = gmp_scan1(unu, qq, 0));
			}
			
			SEPJOS(unu, d, 0, F2, q, doiul[f], u);
	}

	n1:
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	d = strtoul(Q, &t, 10);
	fgets(Q, 1920, f1);
	}
}


void JOSMODSPAR2(char *Q, long PP2, FILE *f1, int &W, int f, int u, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, int *doi1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui FACT[][5], int FACTLEG[][5], int PRIMP[][5], gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a, int *doiul, int sep) {
while(1) {	
	a = strtold(Q, &t);
	if(fmodl(a, 2))
		goto n1;
	u = 0;

	for(f = W-1; f >= 0; --f)
	if(!fmodl(a, AG[f])) {
		if(!u) {
			mpz_set_str(unu, Q, 10);
			p = a / qq[u = ld_scan1(a, qq, 0)];
			}

		MODSPARJOS2(p, unu, d, d1, AG[f], doi1[f] - 1, doi, trei, Q, F2, div1, sum1, q, u, FACT[f], FACTLEG[f], PRIMP[f]);
	}
	
	for(f = sep-1; f >= 0; --f)
		if(!fmodl(a, AG[f])) {
			if(!u) {
				p = a / qq[u = ld_scan1(a, qq, 0)];
				mpz_set_str(unu, Q, 10);
			}

			SEPJOS0(unu, d, d1, doi, trei, Q, F2, q, doiul[f], u);
	}

	n1:
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	mpz_set_str(d, Q, 10);
	fgets(Q, 1920, f1);
	}
}


void MODSPARSUM(char *Q, long PP2, FILE *f1, int &W, int &u1, gmp_ui unul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui *A3, gmp_ui *A5, gmp_ui *AG, int *doi0, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int &sus, int &dir, gmp_ui FACT[][5], int FACTLEG[][5], gmp_ui *FD, int PRIMP[][5], mpz_t *summ, gmp_ui *sum, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a, int *A4, int *doiul, int sep) {
	if(dir) {
		sus < 18? SUSMODSPAR1(Q, PP2, f1, W, u1, unul, 0, 0, d1, A3, AG, doi0, div1, sum1, F2, 0, FACT, FACTLEG, PRIMP, sum, p, q, qq, t, doiul, sep) 
			: SUSMODSPAR2(Q, PP2, f1, W, u1, unu, d, d1, doi, A2, A3, AG, doi0, div1, sum1, F2, 0, FACT, FACTLEG, PRIMP, summ, p, q, qq, t, A4, doiul, sep);
		} else {
		sus < 18? JOSMODSPAR1(Q, PP2, f1, W, 0, 0, unul, 0, 0, 0, A5, AG, doi0, div1, sum1, F2, FACT, FACTLEG, PRIMP, p, q, qq, t, doiul, sep) 
			: JOSMODSPAR2(Q, PP2, f1, W, 0, 0, unu, d, d1, doi, trei, A5, AG, doi0, div1, sum1, F2, FACT, FACTLEG, PRIMP, p, q, qq, t, a, doiul, sep);
		}
}


void MODPRIMSUM(char *Q, long PP2, FILE *f1, int &W, int &f, int &u, int &u1, gmp_ui unul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *nr, gmp_ui *nm, int &sus, int &dir, gmp_ui FACT[][5], int FACTLEG[][5], gmp_ui *FD, int PRIMP[][5], gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a, int *A4) {
	if(dir) {
		sus < 18? SUSMODPRIMSUM1(Q, PP2, f1, W, u1, unul, 0, 0, 0, 0, A2, A3, div1, sum1, F2, nr, nm, FACT, FACTLEG, FD, PRIMP, p, q, qq, t, 0)
			:SUSMODPRIMSUM2(Q, PP2, f1, W, u1, unu, d, d1, doi, trei, A2, A3, div1, sum1, F2, nr, nm, FACT, FACTLEG, FD, PRIMP, p, q, qq, t, 0, A4);
		} else {
		sus < 18? JOSMODPRIMSUM1(Q, PP2, f1, W, f, u, unul, 0, 0, 0, A2, div1, sum1, F2, FACT, FACTLEG, PRIMP, 0, 0, p, q, qq, t)
			: JOSMODPRIMSUM2(Q, PP2, f1, W, f, u, unu, d, d1, trei, A2, div1, sum1, F2, FACT, FACTLEG, PRIMP, 0, 0, p, q, qq, t, a);
	}
}


void SUSMODPARSUM1(char *Q, long PP2, FILE *f1, gmp_ui *nr, gmp_ui *nm, int &W, int &u1, gmp_ui unu, gmp_ui d, gmp_ui d1, gmp_ui doi, gmp_ui trei, gmp_ui *A3, gmp_ui *AG, int *doi1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int j, gmp_ui FACT[][5], int FACTLEG[][5], gmp_ui *FD, int PRIMP[][5], gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, int *doiul, int sep) {
	while(1) {		
		unu = strtoul(Q, &t, 10);
		p = unu / qq[j = gmp_scan1(unu, qq, 0)];
		MODPARSUMSUS(0, trei, d1, nr, nm, W, unu, doi, A3, AG, doi1, u1, j, div1, sum1, q, Q, F2, FACT, FACTLEG, FD, PRIMP, p, doiul, sep);
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu %llu", &nr1, &nm1);
		}
	}


void SUSMODPARSUM2(char *Q, long PP2, FILE *f1, gmp_ui *nr, gmp_ui *nm, int &W, int &u1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui *A3, gmp_ui *AG, int *doi1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int j, gmp_ui FACT[][5], int FACTLEG[][5], gmp_ui *FD, int PRIMP[][5], gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, int *A4, int *doiul, int sep) {
while(1) {
	j = NUMPREL0(Q, t, unu, p, qq, 0);
	MODPARSUMSUS1(0, mpz_get_ui(trei), mpz_get_ui(d1), nr, nm, W, unu, doi, trei, A2, A3, AG, doi1, u1, j, div1, sum1, q, Q, F2, FACT, FACTLEG, FD, PRIMP, p, A4, doiul, sep);
	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr1, &nm1);
	}
}


void JOSMODPARSUM1(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui unu, gmp_ui d, gmp_ui d1, gmp_ui doi, gmp_ui trei, gmp_ui *A5, gmp_ui *AG, int *doi1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui FACT[][5], int FACTLEG[][5], int PRIMP[][5], int j, gmp_ui nr1, gmp_ui nm1, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, int *doiul, int sep) {//sumdoi1 e q.
while(1) {
	unu = strtoul(Q, &t, 10);	
	if(unu & 1)
		goto n1;
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(!(unu % AG[f])) {
		if(!u) {
			p = unu >> (u = gmp_scan1(unu, qq, 0));
		}

		MODPARSUMJOS(nr1, nm1, unu, AG[f], doi1[f]-1, u, div1, sum1, q, Q, F2, FACT[f], FACTLEG[f], PRIMP[f], p);
	}
	
	for(f = sep-1; f >= 0; --f)
		if(!(unu % A5[f])) {
			if(!u) {
				p = unu >> (u = gmp_scan1(unu, qq, 0));
				}
				
			SEPSUMJOS(unu, nr1, nm1, u, q, doiul[f], Q, F2);
	}

	n1:
	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr1, &nm1);
	}
}


void JOSMODPARSUM2(char *Q, long PP2, FILE *f1, int &W, int f, int u, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, int *doi1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui FACT[][5], int FACTLEG[][5], int PRIMP[][5], int j, gmp_ui nr1, gmp_ui nm1, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a, int *doiul, int sep) {
while(1) {	
	a = strtold(Q, &t);
	if(fmodl(a, 2))
		goto n1;
	
	u = 0;
	for(f = W-1; f >= 0; --f)	
	if(!fmodl(a, AG[f])) {
		if(!u) {
			p = a / qq[u = ld_scan1(a, qq, 0)];
			mpz_set_str(unu, Q, 10);
		}

		MODPARSUMJOS1(nr1, nm1, AG[f], u, doi1[f]-1, div1, sum1, q, Q, F2, FACT[f], FACTLEG[f], PRIMP[f], p, a);
	}

	for(f = sep-1; f >= 0; --f)
	if(!fmodl(a, A5[f])) {
		if(!u) {
			p = a / qq[u = ld_scan1(a, qq, 0)];
			mpz_set_str(unu, Q, 10);
			}

		SEPSUMJOS0(A5[f], a, nr1, nm1, u, q, doiul[f] - 1, Q, F2);
	}

	n1:
	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr1, &nm1);
	}
}


void MODPARSUM(char *Q, long PP2, FILE *f1, int &W, int &u1, gmp_ui unul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui *A3, gmp_ui *A5, gmp_ui *AG, int *doi0, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *nr, gmp_ui *nm, int &sus, int &dir, gmp_ui FACT[][5], int FACTLEG[][5], gmp_ui *FD, int PRIMP[][5], gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, int *A4, long double a, int *doiul, int sep) {
	if(dir) {
		sus < 18? SUSMODPARSUM1(Q, PP2, f1, nr, nm, W, u1, unul, 0, 0, 0, 0, A3, AG, doi0, div1, sum1, F2, 0, FACT, FACTLEG, FD, PRIMP, p, q, qq, t, doiul, sep) 
			: SUSMODPARSUM2(Q, PP2, f1, nr, nm, W, u1, unu, d, d1, doi, trei, A2, A3, AG, doi0, div1, sum1, F2, 0, FACT, FACTLEG, FD, PRIMP, p, q, qq, t, A4, doiul, sep);
		} else {
		sus < 18? JOSMODPARSUM1(Q, PP2, f1, W, 0, 0, unul, 0, 0, 0, 0, A5, AG, doi0, div1, sum1, F2, FACT, FACTLEG, PRIMP, 0, 0, 0, p, q, qq, t, doiul, sep)
			: JOSMODPARSUM2(Q, PP2, f1, W, 0, 0, unu, d, d1, doi, trei, A5, AG, doi0, div1, sum1, F2, FACT, FACTLEG, PRIMP, 0, 0, 0, p, q, qq, t, a, doiul, sep);
	}
}


void SUSDRUSOJURA1(char *Q, long PP2, FILE *f1, int s, int f, int W, gmp_ui unu, gmp_ui doi, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2,  gmp_ui nm, gmp_ui nr, FILE *F2, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t) {
while(1) {	
	unu = strtoul(Q, &t, 10);	
	s = 0;
	
	for(f = W-1; f >= 0; f--)		
		if(!(unu % divInt[f])) {
			if(!s) {
				p = unu >> (s = gmp_scan1(unu, qq, 0));
				VSMOD(p, doi, j, s, div1, sum1, e, j1, j2, nm = qq[s], nr = q[s]);
				//nr = mpz_get_ui(nm1);
				//nm = mpz_get_ui(nm1);
			}	
			if(TRAT(nr * sumInt[f], nm * divInt[f])) {
				fprintf(F2, "%llu\n", unu * divInt[f]);
			}
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSDRUSOJURA2(char *Q, long PP2, FILE *f1, int s, int f, int W, mpz_t unu, mpz_t doi, mpz_t d1, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2,  gmp_ui nm, gmp_ui nr, FILE *F2, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a) {//q cu nr, qq cu nm.
while(1) {	
	a = strtold(Q, &t);
	s = 0;

	for(f = W-1; f >= 0; f--)	
		if(!fmodl(a, divInt[f])) {
			if(!s) {
				mpz_set_str(unu, Q, 10);
				p = a / qq[s = ld_scan1(a, qq, 0)];
				VSMOD(p, 0, j, s, div1, sum1, e, j1, j2, nm = qq[s], nr = q[s++]);
			}

			if(TRAT(nr * sumInt[f], nm * divInt[f])) {
				mpz_mul_ui(doi, unu, divInt[f]);				
				SCRIE(doi, Q, F2);
			}
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSDRUSOJURA1(char *Q, long PP2, FILE *f1, int s, int f, int W, gmp_ui unu, gmp_ui doi, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2,  gmp_ui nm, gmp_ui nr, FILE *F2, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t) {
while(1) {
	unu = strtoul(Q, &t, 10);	
	s = 0;

	for(f = W-1; f >= 0; f--)
		if( ((unu % M[f])) && (!(unu % divInt[f]))  ) {
			if(!s) {				
				p = unu >> (s = gmp_scan1(unu, qq, 0));
				VSMOD(p, doi, j, s, div1, sum1, e, j1, j2, nm = qq[s], nr = q[s]);
			}
			
			if(TRAT(nm * sumInt[f], nr * divInt[f])) {
				fprintf(F2, "%llu\n", unu/divInt[f]);
				}
			}
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSDRUSOJURA2(char *Q, long PP2, FILE *f1, int s, int f, int W, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2,  gmp_ui nm, gmp_ui nr, FILE *F2, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a) {
while(1) {	
	a = strtold(Q, &t);
	s = 0;
	
	for(f = W-1; f >= 0; f--)		
		if( (fmodl(a, M[f])) && (!fmodl(a, divInt[f]))  ) {
			if(!s) {				
				p = a / qq[s = ld_scan1(a, qq, 0)];
				VSMOD(p, 0, j, s, div1, sum1, e, j1, j2, nm = qq[s], nr = q[s++]);				
				}

			if(TRAT(nm * sumInt[f], nr * divInt[f])) {
				fprintf(F2, "%.0Lf\n", a/divInt[f]);
				}
			}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void DRUSOJURA(char *Q, long PP2, FILE *f1, int dir, int s, int f, int W, gmp_ui unul, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int sus, gmp_ui nm, gmp_ui nr, FILE *F2, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a) {
	if(dir) {
		sus < 18? SUSDRUSOJURA1(Q, PP2, f1, s, f, W, unul, 0, divInt, sumInt, div1, sum1, 0, 0, 0, 0, nm, nr, F2, p, q, qq, t) 
			: SUSDRUSOJURA2(Q, PP2, f1, s, f, W, unu, doi, d1, divInt, sumInt, div1, sum1, 0, 0, 0, 0, nm, nr, F2, p, q, qq, t, a);
		} else {
		sus < 18? JOSDRUSOJURA1(Q, PP2, f1, s, f, W, unul, 0, divInt, sumInt, M, div1, sum1, 0, 0, 0, 0, nm, nr, F2, p, q, qq, t)
			: JOSDRUSOJURA2(Q, PP2, f1, s, f, W, divInt, sumInt, M, div1, sum1, 0, 0, 0, 0, nm, nr, F2, p, q, qq, t, a);
		}
}


void TILOIVER(gmp_ui *AG, gmp_ui *A2, gmp_ui *A1, int &f, gmp_ui *divdoi1, gmp_ui *A5, int &sep) {//sep = 0.
	int i, j;
	
	for(i = 0; i < f; i++)
		AG[i] = A2[i];
	
	for(j = 0; j < f; j++) {
		for(i = 1; !(A2[j] % divdoi1[i]); i++);
		A1[j] = divdoi1[--i];
		
		if(A2[j] == A1[j]) {
			A5[sep++] = A1[j];
			continue;
		}
		
		A2[j] /= A1[j];
	}

	i = 0;
	for(j = 0; j < f; j++)
		if(A2[j] & 1) {
			AG[i] = AG[j];
			A2[i++] = A2[j];
		}
		
	f = i;
	printf("Noul f fără puterile pure de 2 este %d.\n", f);
}

int IND(mpz_t div[][MAX1], gmp_ui np, int i, int K) {
	while(i < K) {
		if(np == mpz_get_ui(div[i][1]))
			return i;
			i++;
		}

return -1;
}


int IND1(gmp_ui div1[][MAX2], gmp_ui np, int i, int HK) {
	while(i < HK) {
		if(np == div1[i][1])
			return i;
		i++;
		}

return -1;
}


void INTDIV(gmp_ui *A2, gmp_ui *A3, int m, int u1, int f, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int &k, int &knk, int &nk) {
	for(int i = 0; i < f; i++) {
		int ek = 0, eknk = 0, enk = 0;
		
		for(int j = 0; j < u1; j++) {
			if( (j<m) && !(A2[i] % A3[j])) ek = 1;
			if(ek && (j>=m) && !(A2[i] % A3[j])) eknk = 1;
			if(!ek && (j>=m) && !(A2[i] % A3[j])) enk = 1;
		}
		
		if(!ek && !eknk && enk) m3[nk++] = A2[i];
		if(eknk) m2[knk++] = A2[i];
		if(ek && !eknk) m1[k++] = A2[i];
	}// 0-k, k-k+knk, k+knk-k+knk+nk.
	
	printf("Coeficienți de legătură doar K sunt %d, anume: \n", k);
	for(int i = 0; i < k; i++) printf("%llu ", m1[i]);
	printf("\n\n");

	printf("Coeficienți de legătură amestecați sunt %d, anume: \n", knk);
	for(int i = 0; i < knk; i++) printf("%llu ", m2[i]);
	printf("\n\n");

	printf("Coeficienți de legătură doar non-K sunt %d, anume: \n", nk);
	for(int i = 0; i < nk; i++) printf("%llu ", m3[i]);
	printf("\n\n");
}


int DETPUT(gmp_ui div1[][MAX2], int poz, int coef, int i) {//i = 1.
	while(!(coef % div1[poz][i])) i++;
	return --i;
}


int DEP(gmp_ui coef, gmp_ui np) {
gmp_ui s = np;
int i = 1;
while(coef % s == 0) {
	s *= np;
	i++;
	}
	
return --i;
}


//A3 cu FD.
//Sau AK cu FD, ANK cu FD1, A3 cu FD2.
void BOSJOLEY(int f, int lim, int u1, gmp_ui *A2, gmp_ui *A3, gmp_ui FACT[][5], int FACTLEG[][5], gmp_ui *FD, int PRIMP[][5], int H, gmp_ui div1[][MAX2]) {
	int i, i1, j;

	for(i = 0; i < f; i++) {
		i1 = 0;
		for(j = lim; j < u1; j++) {
			if(!(A2[i] % A3[j])) {//De scăpat de div-uri. Bun și pentru HMODIFSUM.
				FACTLEG[i][i1] =  IND1(div1, A3[j], 0, H);
				PRIMP[i][i1] = DEP(A2[i], A3[j]);
				FACT[i][i1++] = A3[j];//Numărul prim.
				}
			}

		FACT[i][i1] = 0;
		FD[i] = FACT[i][i1-1];
		}
}


void DIVNUM(int f, int &u1, int &H, int H2, gmp_ui *b, gmp_ui *A2, gmp_ui *A3, int &pp, int &n, int &p, int D, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t d, mpz_t d1, gmp_ui FACT[][5], int FACTLEG[][5], gmp_ui *FD, int PRIMP[][5]) {

gmp_ui z2[4000], z3[4000];
int k2;
n = 0, p = 0;

for(int i = 0; i < u1; i++) {
	H2 = H;
	if(PREZ3(A3[i], b, H2, 0)) {
		z2[n++] = A3[i];
	}
}

for(int i = 0; i < u1; i++) {
	H2 = D;
	if(PREZ3(A3[i], b, H2, H)) {
		z3[p++] = A3[i];
	}
}

pp = H;

for(int i = 0; i < u1; i++) {
	H2 = D;
	if(PREZ3(A3[i], b, H2, H)) {		
		div1[pp][0] = sum1[pp][0] = 1;
		div1[pp][1] = b[H2], sum1[pp][1] = 1+b[H2];		
		mpz_set_ui(d, b[H2]);
		mpz_add_ui(d1, d, 1);
		k2 = 2;

		while(1) {
			mpz_mul_ui(d, d, b[H2]);
			mpz_mul_ui(d1, d1, b[H2]);
			mpz_add_ui(d1, d1, 1);
			if(mpz_cmp_ui(d1, VERTOITO) > 0)
				break;
			div1[pp][k2] = mpz_get_ui(d);
			sum1[pp][k2++] = mpz_get_ui(d1);
		}
		
		div1[pp][k2] = sum1[pp][k2] = div1[pp][k2+1] = sum1[pp][k2+1] = NPS;		
		++pp;
	}
}

printf("%d\n\n\n", pp);
printf("n, p și totalul u1: %d %d %d.\n\n", n, p, u1);//n e 15, p 33, m 44: D-H, H-K, K. Se va parcurge de la K.

printf("H: \n");
for(int i = 0; i < n; i++) { A3[i] = z2[i]; printf("%llu ", z2[i]); }
putchar('\n');

printf("D-H: \n");
for(int i = 0; i < p; i++) { A3[i+n] = z3[i]; printf("%llu ", z3[i]);}
putchar('\n');

BOSJOLEY(f, 0, u1, A2, A3, FACT, FACTLEG, FD, PRIMP, pp, div1);
}


void DIVPARNUM(int f, int &u1, int &H, int H2, gmp_ui *b, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int &pp, int &n, int &p, int D, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t d, mpz_t d1, gmp_ui FACT[][5], int FACTLEG[][5], gmp_ui *FD, int PRIMP[][5], gmp_ui *divdoi, int *doi, gmp_ui *A5, int *doiul, int sep) {
gmp_ui z2[4000], z3[4000];
int k2;
n = 0, p = 0;

for(int i = 0; i < u1; i++) {
	H2 = H;
	if(PREZ3(A3[i], b, H2, 0)) {
		z2[n++] = A3[i];
	}
}

for(int i = 0; i < u1; i++) {
	H2 = D;
	if(PREZ3(A3[i], b, H2, H)) {
		z3[p++] = A3[i];
	}
}

pp = H;

for(int i = 0; i < u1; i++) {
	H2 = D;
	if(PREZ3(A3[i], b, H2, H)) {		
		div1[pp][0] = sum1[pp][0] = 1;
		div1[pp][1] = b[H2], sum1[pp][1] = 1+b[H2];		
		mpz_set_ui(d, b[H2]);
		mpz_add_ui(d1, d, 1);
		k2 = 2;

		while(1) {
			mpz_mul_ui(d, d, b[H2]);
			mpz_mul_ui(d1, d1, b[H2]);
			mpz_add_ui(d1, d1, 1);
			if(mpz_cmp_ui(d1, VERTOITO) > 0)
				break;
			div1[pp][k2] = mpz_get_ui(d);
			sum1[pp][k2++] = mpz_get_ui(d1);
		}
		
		div1[pp][k2] = sum1[pp][k2] = div1[pp][k2+1] = sum1[pp][k2+1] = NPS;		
		++pp;
	}
}

printf("%d\n\n\n", pp);
printf("n, p și totalul u1: %d %d %d.\n\n", n, p, u1);//n e 15, p 33, m 44: D-H, H-K, K. Se va parcurge de la K.

printf("H: \n");
for(int i = 0; i < n; i++) { A3[i] = z2[i]; printf("%llu ", z2[i]); }
putchar('\n');

printf("D-H: \n");
for(int i = 0; i < p; i++) { A3[i+n] = z3[i]; printf("%llu ", z3[i]);}
putchar('\n');

for(int i = 0; i < f; i++)
	doi[i] = gmp_scan1(A1[i], divdoi, 0);
BOSJOLEY(f, 0, u1, A2, A3, FACT, FACTLEG, FD, PRIMP, pp, div1);//exit(0);

for(int i = 0; i < sep; i++)
		doiul[i] = gmp_scan1(A5[i], divdoi, 0);
}


//TOLNUMICE:
void SUSTOLMODSUM1(char *Q, int &W, int &u1, gmp_ui unu, gmp_ui d, mpz_t d1, gmp_ui doi, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui FACT[][5], int FACTLEG[][5], gmp_ui *FD, int PRIMP[][5], gmp_ui *sum, int g, gmp_ui p, gmp_ui *q, int c) {
	if(!c) VSMV(p, d, g, div1, sum1, q[g]);
	MODIFSUS1(W, u1, unu, A3, d, d1, 0, A2, doi, Q, F2, div1, sum1, FACT, FACTLEG, FD, PRIMP, sum, p);
}


void SUSTOLMODSUM2(char *Q, int &W, int &u1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui FACT[][5], int FACTLEG[][5], gmp_ui *FD, int PRIMP[][5], mpz_t *sum, int g, gmp_ui p, gmp_ui *q, int c, int *A4) {
	if(!c) VSME(p, d, g, div1, sum1, q[g]);
	MODIFSUS2(W, u1, unu, A3, d, d1, 0, A2, doi, Q, F2, div1, sum1, FACT, FACTLEG, FD, PRIMP, sum, p, A4);
}


void JOSTOLMODSUM1(char *Q, int W, gmp_ui unu, gmp_ui d, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui FACT[][5], int FACTLEG[][5], int PRIMP[][5], int g, gmp_ui p, gmp_ui *q, int c) {
 {
	if(!c) {
		p = unu >> g;
		VSMV(p, d, g, div1, sum1, q[g]);
	}
	
		for(--W; W >= 0; --W)
		if(!(p % A2[W])) {		
			MODIFJOS1(unu, d, A2[W], 0, 0, Q, F2, div1, sum1, FACT[W], FACTLEG[W], PRIMP[W], p);
			}
	/*}
else {
		u = 0;
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(unu, A2[f])) {
			if(!u) {
				VSME(unu, d, g = mpz_scan1(unu, 0), div1, sum1, 2, p);
				u = 1;
				}
				
			MODIFJOS1(unu, d, A2[f], doi, trei, Q, F2, div1, sum1, FACT[f], FACTLEG[f], p);
			}
	}*/
}
	

void JOSTOLMODSUM2(char *Q, int W, long double a, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui FACT[][5], int FACTLEG[][5], int PRIMP[][5], int g, gmp_ui p, gmp_ui *q, gmp_ui *qq, int c) {
 {	
	if(!c) {
		p = a / qq[g];
		VSME(p, d, g, div1, sum1, q[g]);
	}
	
	for(--W; W >= 0; --W)
	if(!(p % A2[W])) {
		MODIFJOS2(unu, d, d1, A2[W], doi, trei, Q, F2, div1, sum1, FACT[W], FACTLEG[W], PRIMP[W], p);
		}
	/*}
else {
	u = 0;		
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(p, A2[f])) {
		if(!u) {
			VSME(p, d, g, div1, sum1, q[g]);
			u = 1;
			}
			
		MODIFJOS2(unu, d, d1, A2[f], doi, trei, Q, F2, div1, sum1, FACT[f], FACTLEG[f], PRIMP[f], p);
		}
	}*/
}


void TOLMODSUM(char *Q, int &W, int &u1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int &sus, int &dir, gmp_ui FACT[][5], int FACTLEG[][5], gmp_ui *FD, int PRIMP[][5], mpz_t *summ, gmp_ui *sum, int g, gmp_ui p, gmp_ui *q, gmp_ui *qq, char *t, long double a, int &c, int *A4) {

if(!c) {
	sus < 18? p = mpz_get_ui(unu) >> g : p = a / qq[g];
}

if(dir) {
	sus < 18? SUSTOLMODSUM1(Q, W, u1, mpz_get_ui(unu), 0, d1, 0, A2, A3, div1, sum1, F2, FACT, FACTLEG, FD, PRIMP, sum, g, p, q, c)
		:SUSTOLMODSUM2(Q, W, u1, unu, d, d1, doi, A2, A3, div1, sum1, F2, FACT, FACTLEG, FD, PRIMP, summ, g, p, q, c, A4);
	} else {
	sus < 18? JOSTOLMODSUM1(Q, W, mpz_get_ui(unu), 0, A2, div1, sum1, F2, FACT, FACTLEG, PRIMP, g, p, q, c)
		: JOSTOLMODSUM2(Q, W, a, unu, d, d1, doi, trei, A2, div1, sum1, F2, FACT, FACTLEG, PRIMP, g, p, q, qq, c);
	}
	
c = 1;
}


void JOSTOLMODSPAR1(char *Q, int W, gmp_ui unu, gmp_ui d, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *sumdoi, gmp_ui FACT[][5], int FACTLEG[][5], int PRIMP[][5], int v, gmp_ui p, int *doi1, int *doiul, int sep) {
	for(W--; W >= 0; --W)
	if(!(unu % AG[W])) {
		MODSPARJOS1(p, unu, d, AG[W], doi1[W]-1, 0, 0, Q, F2, div1, sum1, sumdoi, v, FACT[W], FACTLEG[W], PRIMP[W]);
	}
	
	for(sep--; sep >= 0; --sep)
		if(!(unu % A5[sep])) {
			SEPJOS(unu, d, 0, F2, sumdoi, doiul[sep], v);
	}
}


void JOSTOLMODSPAR2(char *Q, int W, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *sumdoi, gmp_ui FACT[][5], int FACTLEG[][5], int PRIMP[][5], int v, gmp_ui p, int *doi1, int *doiul, int sep) {
	for(W--; W >= 0; --W)
	if(mpz_divisible_ui_p(unu, AG[W])) {
		MODSPARJOS2(p, unu, d, d1, AG[W], doi1[W]-1, doi, trei, Q, F2, div1, sum1, sumdoi, v, FACT[W], FACTLEG[W], PRIMP[W]);
	}
	
	for(sep--; sep >= 0; --sep)
		if(mpz_divisible_ui_p(unu, A5[sep])) {
			SEPJOS0(unu, d, d1, doi, trei, Q, F2, sumdoi, doiul[sep], v);
	}
}


void TOLMODSPAR(char *Q, int &W, int &u1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui *A3, gmp_ui *A5, gmp_ui *AG, int *doi1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *sumdoi, int &sus, int &dir, gmp_ui FACT[][5], int FACTLEG[][5], gmp_ui *FD, int PRIMP[][5], gmp_ui *sum, mpz_t *summ, int g, gmp_ui p, int *A4, int *doiul, int sep) {
	if(dir) {
		sus < 18? MODSPARSUS1(W, u1, mpz_get_ui(unu), mpz_get_ui(d), A3, AG, doi1, 0, d1, Q, F2, div1, sum1, sumdoi, g, 0, FACT, FACTLEG, FD, PRIMP, sum, p, doiul, sep)
		: MODSPARSUS2(W, u1, unu, d, d1, A2, A3, AG, doi1, doi, Q, F2, div1, sum1, sumdoi, g, 0, FACT, FACTLEG, FD, PRIMP, summ, p, A4, doiul, sep);
	} else {
		sus < 18? JOSTOLMODSPAR1(Q, W, mpz_get_ui(unu), mpz_get_ui(d), A5, AG, div1, sum1, F2, sumdoi, FACT, FACTLEG, PRIMP, g, p, doi1, doiul, sep)
		: JOSTOLMODSPAR2(Q, W, unu, d, d1, doi, trei, A5, AG, div1, sum1, F2, sumdoi, FACT, FACTLEG, PRIMP, g, p, doi1, doiul, sep);
		}
}


#endif
