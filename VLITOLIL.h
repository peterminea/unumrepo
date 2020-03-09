#ifndef _VLITOLIL_H
#define _VLITOLIL_H
#define U1 5300

#include <cstring>
#include <math.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/VLI.h"
#include "/GMP64.h"
#include "/TEXTUL.h"
#include "/URC.h"
#include "/LITUAN2.h"
#include "/CIF.h"
#include "/DETRITO.h"

//ACTUALIZAREA VECTORILOR DE FACTORI PRIMI:

void TOLIL(int J, int256 *a, int B, int G, int &W, gmp_ui *b, int320 *C, int *c, int &D, int &E, int &L, const char *Z);
void PUTDOI(int256 *a, int B, int G);
void PUTMAX(const char *v, gmp_ui *MX, int256 *MXM, int *EXP, int K, int H);
int MAXPUT(int A, int &D, gmp_ui *b, int *EXP, int256 h, int256 *a, int256 *K3, int256 *K4, gmp_ui *L3, gmp_ui *L4, int b1, char *v, int H, long PP1, char *Y, int256 u);
void TOL0(gmp_ui *L3, gmp_ui *L4, gmp_ui *b, int *EXP, int H, fstream &F1, int b1, char *v);
void TOL1(int256 *K3, int256 *K4, gmp_ui *b, int *c, int k, fstream &F1, int b1, char *v);
void TOL2(int e, int f, int &I, gmp_ui *b, int256 *a, long PP1, char *Y, int256 u);
void TOL3(int &f, int &I, int320 *C, int256 *a, int b1, char *v, long PP1, char *Y, int256 u);
//void TOLMARE(gmp_ui *b, int320 *C, int D, int E, fstream &F1, const char *Z);
void ARANJTEXT(char *t, const char *t1, const char *u, const char *t2);
//void PUTERVEC();
int HH(int &b1);
int FILEEXISTS(const char *file);

//SORTĂRI:
void QS(int256 *a, int b, int e, int256 pv);
void SIB(int256 *a, int b, int c, int256 d);
void QS2(gmp_ui *a, int b, int e);
void HS(int256int256*a, int256 t, unsigned long D);
void HSS(char A[][DIMM], char *t, unsigned long D);
void HSI(int256 *a, gmp_ui t, unsigned long D);

//CĂUTĂRI BINARE:
int CB(int256 *a, int256 b, long I, long R);
int CBSTATIC(char A[][DIMM], long jos, long sus, char *t);
int CBPOZ(int256 *a, int256 b, long I, long R);
int CBPOZI(gmp_ui *a, gmp_ui b, long I, long R);
int CBIN(gmp_ui *a, gmp_ui &b, long I, long R);
int CBINT(int *a, int &b, long I, long R);
int CBINV(gmp_ui *a, gmp_ui b, long I, long R);
int CBDIV(int256 f, gmp_ui *M, int I, int R, int &j, int A);
int CBDIVM(int256 f, int256 *N, int I, int R, int &j, int A);

//GENERARE DE COEFICIENŢI DE LEGĂTURĂ, VECTOR / FIŞIER:
int COEFG(int256 A, gmp_ui *b, int320 *C, int D, int E, int256 L);
int COEFG1(int c, int d, gmp_ui *b, int320 *C, int &D, int &E, int l);
int COEF(gmp_ui a, gmp_ui *b, int D);
int COEF1(int c, int d, int e, gmp_ui *b, int &D);
void FACT(int &W, int256 *A1, fstream &f1, int256 I, int n);
void FACT1(int &W, gmp_ui *A1, fstream &f1, int &e, int n);
int VC(int256 *a, gmp_ui *d, int g, int n, int D, int s);
int VC1(int256 *a, int256 *d, int g, int n, int D, int a1, int b1, int s);
int V(int256 a, int256 *b, int c);
int V1(gmp_ui &a, gmp_ui *b, int c);

//GENERAREA ŞI ORDONAREA VECTORULUI DE FACTORI PRIMI LA CĂUTARE:
void GEN(int L, int W, gmp_ui *b, int320 *C, int &D, int &E, const char *Z);
int GENM(gmp_ui *b, const char *Z);
void GENMIN(int b1, gmp_ui *b, int &i, int &j, int &l, int &I, int &V, int inv);
void GENERARE(int b1, gmp_ui *b, int256 *C, int &i, int &j, int &J, int &l, int &I, int &V, int k);
void GENERARE2(int b1, gmp_ui *b, int256 *C, int &i, int &j, int &J, int &l, int &I, int &V, int inv);
void INV(gmp_ui *b, int320 *C, int d1, int D, int E);
void INV2(int i, gmp_ui j, gmp_ui *b, int d1, int D);

//VECTORI DE NUMERE PRIME PENTRU DIVIZORI AI NUMĂRULUI CURENT, LA CĂUTAREA ÎN JOS:
void LOTVEC(int256 a, gmp_ui *B, int256 *H, int &Y, gmp_ui *b, int320 *C, gmp_ui *b1, int320 *C1, gmp_ui *y1, int256 *z, int D, int E, int d1, int &d2, int &i, int *f2);
void LOTVEC1(int256 a, gmp_ui *B, int &Y, gmp_ui *b, gmp_ui *b1, gmp_ui *y1, int D, int d1, int &d2, int i, int *f2);
//void LOTVECM(int256 a, gmp_ui *B, int256 *H, int &Y, gmp_ui *b, int320 *C, gmp_ui *b1, int320 *C1, gmp_ui *y1, int256 *z, int D, int E, int d1, int &d2, int f1, int &d3, int &i, int *f2);

//VALIDATORI ABUNDENŢIALI ȘI FUNCȚII AUXILIARE:
gmp_ui CMMDC(gmp_ui a, gmp_ui b, gmp_ui c);
gmp_ui CMMDC2(gmp_ui n, gmp_ui a, gmp_ui b, gmp_ui c);
gmp_ui CMMDCA(gmp_ui a, gmp_ui b, gmp_ui c);
int FOND1(gmp_ui j, gmp_ui j1);
int TRAT(gmp_ui j, gmp_ui j1, int N);//NUMSIMPL.
int TRAT1(gmp_ui j, gmp_ui j1, gmp_ui k, gmp_ui k1);
int VALID(int256 A, int256 f, int256 B);
int VALID2(int256 A, int256 f, int256 B, int256 e, int &i);
int VALID3(int256 A, double &a2, double &a3, double &a4, double &E2);
int VALID4(int256 A, int256 f, int256 B);
int VALIDN(int256 A, int256 f, int256 B, int256 trei);
int VALIDV(int256 A, int256 f, int256 B, int256 e, int &i);
void SINT(gmp_ui &j, int256 NUM, gmp_ui *div, gmp_ui *sum, int z1);
//void SMPZ(int256 j, int256 NUM, int256 *div, int256 *sum, int z2);
//void SMPZ1(int256 j, int256 NUM, int256 *div, int256 *sum, int z2);
int MODPINTSUS(int256 NUM, gmp_ui coef, gmp_ui j, gmp_ui k, gmp_ui k1, int N, gmp_ui *div, gmp_ui *sum);
int MODPINTJOS(int256 NUM, gmp_ui j, gmp_ui k, gmp_ui k1, int N, gmp_ui *div, gmp_ui *sum);
//int MODPMPZSUS(int256 NUM, gmp_ui coef, int256 j, int256 e, gmp_ui k, gmp_ui k1, int N, int256 *div, int256 *sum);
//int MODPMPZJOS(int256 NUM, gmp_ui coef, int256 j, gmp_ui k, gmp_ui k1, int N, int256 *div, int256 *sum);

//CITIRE DIN FIŞIER ÎN VECTOR:
void CIT(fstream &f1, int256 *a, int a1, int b1, int &e, const char *t, gmp_ui L);
void CIT1(fstream &f1, int256 *a, int a1, int &e, const char *t, gmp_ui L);

//REDENUMIRE DE FIŞIER CU ÎNLOCUIRE:
void REN(int &i, const char *t, const char *u);

//CĂUTĂRI NEBINARE:
int PREZ2(gmp_ui a, gmp_ui *b, int c, int d);
int PREZ3(gmp_ui a, gmp_ui *b, int &c, int d);
int PREZI(int a, int *b, int &c, int d);
int PREZM(int256 a, int256 *b, int c, int d);
int GAS(gmp_ui *y, gmp_ui n, int Y);
int GAS2(gmp_ui *A2, gmp_ui u, int W);
int GAS3(gmp_ui *A2, gmp_ui u, int W, int W1);

//SCRIERE DE NUMERE:
void SCRIE(int256 a, char *Y, fstream &f2);
void SCRIE1(char *Y, fstream &f2);
void SCRIE2(int256 a, fstream &f2);

//FACTUS + FRACTUS - factorii primi ai unui număr:
/*void FACTDIV1(int256 a, int256 e, int256 f, gmp_ui &c, int &d);
void FACTDIV2(int256 a, int256 h, int256 e, int256 e1, int256 f, int &d);
void FRACTDIV1(int256 a, int256 b, int256 e, int256 f, gmp_ui &c, int &d);
void FRACTDIV2(int256 a, int256 b, int256 h, int256 e, int256 e1, int256 f, int &d);*/

//ALTE FUNCŢII:
int NUME(const char *CIT);
void ADTEXT(const char *t1, const char *t2);
/*void TEXTSAR(char t, char *Q, int jos, int sus, unsigned long &PP, const char *t1, const char *t2);
void FACTORI(gmp_ui *b, int i, int &I, int &J, int &V, int num);
void FACTOR(gmp_ui *b, int &I, int &D);
void MARG1(int256 *a, int256 d, int &e, int &l, int &I, int &R, int un, int doi);
void MARG2(int256 *a, int256 d, int &I, int &R, int &l, int &m, int un, int doi);*/
void INTEROGARE(char &t);
int ZER(fstream &L1, int &d, int &q);
void PUTERE(gmp_ui &a, gmp_ui b, int n);
void PUTEREA(const char *t1, const char *u);
void FACTORMATR(const char *P, const char *t1, const char *u, const char *w, char spec);
int DESC(gmp_ui a, gmp_ui *b1, gmp_ui *A3, int &u1);
void ARANJFACT(int u, int D, gmp_ui *b, gmp_ui *b1, int &u1, int f, gmp_ui *A2, gmp_ui *A3, int I);
void HVEC(int &f, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int *A4, gmp_ui *b, gmp_ui *b1, int e, int H, int &u1);
void CF(int t);
int PUTEREA1();
//void VECUN2();
void *TXT(int sus);
gmp_ui LITUAN(int256 *a, char *tx);
void LITUAN2(fstream &FLIT, long D, char *tx, int min, int max);
void TRUNC(long PP, char *t2, int c);
void RAT(fstream &f1, int a1, int b1, char *Y, char &w1, unsigned long P, unsigned long &PP, unsigned long &PP1, int mod, int p1);
int CALCMINMAX(int &min, int &max, int &z, int &c, fstream &f1, long PP, char *S);
gmp_ui PREGTEXT(fstream &FLIT, gmp_ui n, int dim, gmp_ui D, int min, int max, char *Y, char *tx);
long MANUCE(fstream &f1, char *t2, long PP, char *S, int c, int max);
void REN2(char *tx);

//REFORMA PUTERNUM:
void VERIFSUM(int256 A, int256 B, int i, int256 *div, int256 *sum);
void VERIFSUM2(int256 A, int256 B, int i, gmp_ui *div, gmp_ui *sum);
//void SUMADIV(int256 A, int256 B, int320 *C, int320 *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1]);
//void SUMADIV1(int256 A, int256 B, int320 *C, int320 *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1]);
void NUMSUM(int256 A, int256 B, gmp_ui *b, gmp_ui *b1, int D, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1]);
void NUMSUM1(int256 A, int256 B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2]);
void SM(int256 A, int256 B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui e);
void SUM(int256 A, int256 B, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int D, int E, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2]);
void SUM1(int256 A, int256 B, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int D, int E, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2);
//void SUMDIVMOD(int256 A, int256 B, int256 unu, int256 doi, int256 trei, int256 d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1], int320 *C, int320 *C1, int E, int K, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, int256 nm, int256 nr);
//void SUMDIVMOD1(int256 A, int256 B, int256 unu, int256 doi, int256 trei, int256 d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1], int320 *C, int320 *C1, int E, int K, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, int256 nm, int256 nr);
void NUMSUMMOD(int256 A, int256 B, int256 unu, int256 doi, int256 trei, int256 d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1], int K, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, int256 nm, int256 nr);
void NUMSUMMOD1(int256 A, int256 B, int256 unu, int256 doi, int256 trei, int256 d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &j1, gmp_ui &j2, gmp_ui &k, int256 nm, int256 nr);
void SMOD(int256 A, int256 doi, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &j1, gmp_ui &j2, gmp_ui &k, gmp_ui &nm, gmp_ui &nr);
void SMOD1(int256 A, int256 doi, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, int &j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &j1, gmp_ui &j2, gmp_ui &k, int *f2, gmp_ui &nm, gmp_ui &nr);
//void INIT(int K, int256 modpdiv[][MAX1], int256 modpsum[][MAX1]);
void DECIDTEXT(char *PUT, int jos);
void PUTERI2(const char *t, int *put);
void UNIFACTSUB(int sus, gmp_ui *b, gmp_ui *b1, gmp_ui *b2, int D, int H, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 divdiv[][3], int256 divsum[][3], int *P, int *P1, int256 unu, int256 d, int256 trei, int256 *SUMDOI, int sumcap, int inv);
//void UNIFACTSUBM(int sus, gmp_ui *b, gmp_ui *b1, gmp_ui *b2, int320 *C, int256 *J, int D, int E, int H, int K, int256 div[][MAX1], int256 sum[][MAX1], int256 divdiv[][3], int256 divsum[][3], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *P, int *P1, int256 unu, int256 d, int256 trei, int256 *SUMDOI, int sumcap, int inv, int lim);
//void UNIFACTUS(int jos, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int D, int &E, int H, int K, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int inv);
//void UNIFACTUS2(int sus, gmp_ui *b, int320 *C, int D, int E, int H, int K, int256 div[][MAX1], gmp_ui div1[][MAX2], int inv);
void UNIFACTUM(int sus, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int inv);
//void UNIFACTO(int sus, int D, int E, int H, int K, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1], int256 unu, int256 d, int256 trei, int inv, gmp_ui lim);
//void mpz_init_va(int256 first, ...);
//void PURGANTE(int320 *C, int320 *C1, int &E);


void TOLIL(int J, int b1, int256 *a, int B, int G, int &W, gmp_ui *b, int320 *C, int *EXP, int &D, int &E, int &L, const char *Z, int a1) {
int i, j, m, n, H;
int256 u, u1, K[700], K3[700], K4[700];
fstream &F1, *F2, *f1;
gmp_ui I[U1], I1[U1], X = 0, L3[600], L4[600];//Alternativ la K3, K4 pentru puteri sub 2^64 de factori primi (<=CF160.TXT).
char t[35], v[35], Y[1920], t1;
long PP1, PP2;
/*
if(b1 == 0)
	{
	sprintf(t, "PRIME%d.TXT", 2);//PRIME2.TXT
	D = 5293;
	E = 618;
	H = 360;
	TOLMARE(b, C, D, E, F1, Z);
	goto s2;
	}
else*/
	{
	H = HH(b1);
	b1 ^ 1910? sprintf(t, "CF%d.TXT", b1) : sprintf(t, "P2.TXT");
	}
	
	--X;
	gmp_ui bb[U1];
	n = FILEEXISTS(t);
	puts(t);
	if(!n) {
		strcpy(v, "/");
		strcat(v, t);
		F1 = fopen(v, "r");
		fseek(F1, 0L, SEEK_END);
		PP1 = ftell(F1);
		rewind(F1);
		F1 = fopen(v, "r");
		F2 = fopen(t, "w");
		CITR(10000, F2, F1, PP1);
		F1.close();
		F2.close();
		}
	
	F2 = fopen(t, "r");
	if(n)
		{
		fseek(F2, 0L, SEEK_END);
		PP1 = ftell(F2);
		rewind(F2);
		}

	while(1)
		{
		gmp_fscanf(F2, "%Zd", u);
		if(ftell(F2) == PP1)
			break;

		if(mpz_cmp_ui(u, X) < 0)
			b[D++] = mpz_get_ui(u);
		else
			mpz_set(C[E++], u);
		}

	F2.close();
	printf("E = %d.\n", E);
	for(i = 0; i < D; i++)
		bb[i] = b[i];

	QS2(bb, 0, D);
	QS(C, 0, E, u);
	F1 = fopen(Z, "r");
//La MAXPUT trebuiesc puşi acei factori din bb care sunt între H şi D, să se vadă dacă sunt noutăţi. De preferat ca bb să-i aibă doar pe ei acolo.
	m = 0;
	n = 0;

	for(i = 0; i < L; i++) {
		fscanf(F1, "%llu", &X);
		if(CBIN(bb, X, 0, D))
			I[m++] = X;
		}
	
	L = W - L;

	for(i = 0; i < L; i++)
		{
		gmp_fscanf(F1, "%Zd", u);
		if(!E || CB(C, u, 0, E))
			mpz_set(K[n++], u);	
		}

	L = W - L;
	F1.close();

QS2(I, 0, m);
printf("%d %d\n", m, n);
i = 0;
printf("%d este numărul cu care încep factorii cei mici.\n", D);
PP2 = D;

while(1) {
	j = B;
	while(1) {
		if(!(a[j] % I[i])) {
			b[D++] = I[i];			
			break;
			}
		if(!j--)
			break;
		}

	if(i % 300 == 0) printf("%d\n", i);
	if(!(++i ^ m))
	//if(I[++i] > 105000000)//00
		break;//Gata D pentru MAXPUT.
	}
printf("%d: numărul la care vor ajunge factorii cei mici.\n\nCine mai vine: ", D);

for(; PP2 < D; PP2++) {
	printf("%llu ", b[PP2]);
	}
putchar('\n');

i = 0;
L = W - L;
//Bun pentru FACTORSUBM la numerele de peste 160 de cifre.
if(b1 > 160) {
	printf("Factorii cei mari pornesc cu %d.\n", E);
	PP2 = E;
	
	while(1) {
		j = B;	
		while(1) {			
			if(!(a[j] % K[i]))	{
				mpz_set(C[E++], K[i]);
				break;
				}
			
			if(!j--)
				break;
			}
		
		if(i % 30 == 0) printf("%d\n", i);
		if(!(++i ^ n))
			break;
		}

	printf("Factorii cei mari sunt acum %d.\n\nCine mai vine la ei: ", E);
	for(; PP2 < E; PP2++) {
		gmp_printf("%Zd ", C[PP2]);
		}

	putchar('\n');
	}

//Dacă nu am folosit coeficienți de legătură peste 2^64 într-o zonă, nu apar factori primi int256 noi acolo.
s2:

for(i = 0; i < 700; i++)
	mpz_clears(K[i], NULL);

if(J)	{
	W = MAXPUT(B, D, b, EXP, u, a, K3, K4, L3, L4, b1, v, H, PP1, Y, u);//PP1
	TOL2(W, D-W, B, b, a, PP1, Y, u);//PP1
	if(E > 0)
		TOL3(E, B, C, a, b1, v, PP1, Y, u);//De aranjat numele textelor; PP1

	F1 = fopen(t, "w");
	for(i = 0; i < D; i++)
		fprintf(F1, "%llu\n", b[i]);
	for(i = 0; i < E; i++)
		gmp_fprintf(F1, "%Zd\n", C[i]);
	F1.close();
	
	F1 = fopen("/CFPAR.TXT", "a");
	fprintf(F1, "%s: %d %d %d %d.\n", t, W, D, E, D+E);
	F1.close();
	printf("%d %d %d %d\n", W, D, E, D+E);
	}

for(i = 0; i < 700; i++)
	mpz_clears(K3[i], K4[i], NULL);

mpz_clear(u);
}


void PUTDOI(int256 *a, int B, int G) {
int i = 0, c = B, d;

while(1) {
	d = mpz_scan1(a[c], 0);		
	if(d > i)
		i = d;
	
	if( !(c-- ^ G) )
		break;
	}

printf("Puterea de 2 maximă: %d.\n", i);
}


void PUTMAX(const char *v, gmp_ui *MX, int256 *MXM, int *EXP, int K, int H) {
fstream &F = fopen(v, "r");
char t;
int i = 0, j;

if(K)	{
	while(1) {
		fscanf(F, "%c", &t);

		if(t == ':') {
			gmp_fscanf(F, "%Zd", MXM[i]);
			++i;
			}
		
		if(i == K)
			break;	
		}
	}
	
while(1) {
	fscanf(F, "%c", &t);

	if(t == ':') {
		fscanf(F, "%llu", &MX[i - K]);
		++i;
		}
		
	if(i == H)
		break;	
	}

rewind(F);
i = 0;
j = 3;

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
	
	if(i == H)
		break;
	}

fclose(F);
}


int MAXPUT(int A, int &D, gmp_ui *b, int *EXP, int256 h, int256 *a, int256 *K3, int256 *K4, gmp_ui *L3, gmp_ui *L4, int b1, char *v, int H, long PP1, char *Y, int256 u) {
gmp_ui i1[U1], j[5300], m, MX[1000];
int256 MXM[400];

int e = 0, i = 0, g, k;
fstream &F1;

(b1 ^ 1910)? sprintf(v, "/PUTERI%d.TXT", b1) : sprintf(v, "/PUTERITOT.TXT");
int K = 0;

if(b1 == 1910)
	K = KTOT + 5;
else if(b1 == 420)
  	K = K420 + 5;
else if(b1 == 240)
	K = K240 + 5;

PUTMAX(v, MX, MXM, EXP, K, H);//Se iau informaţii din fişierul de PUTERI ce corespunde cu b1.
/*int256 Z1[100][15];
gmp_ui Z2[5300][MAX2];
int256 xe;
mpz_init(xe);

for(int i = 0; i < 100; i++)
for(int j = 0; j < 15; j++) {
	mpz_init(Z1[i][j]);	
}

for(int i = 0; i < K; i++)
for(int j = 0; j < MAX2; j++)
	Z2[i][j] = 1;
	


for(int i = 0; i < K; i++) {
for(int j = EXP[i]; j < 4+EXP[i]; j++) {
	mpz_ui_pow_ui(Z2[i][j-EXP[i]], b[i], j;
	}
	
	mpz_set_ui(Z2[i][4], 1667);
}

for(int i = K; i < H; i++) {
	m = MX[i-K];
for(int j = EXP[i]; j < EXP[i] + 2; j++) {
	Z2[i][j-EXP[i]] = m;
	m *= b[e];
	}
	
	Z2[i][[2] = 1667;
}

for(int i = H; i < D; i++) {
mpz_set_ui(z2[i][0], b[i]);
	for(int j = 1; j < 2; j++) {
		mpz_mul_ui[z2[i][j], z2[i][j-1], b[i]);
	}
}

*/

for(e = 0; e < H; e++) {
	i1[e] = b[e];
	}
e = 0;
//De la linia 461 la 494 se caută multiputeri noi (e pentru situaţia când apar noi puteri multiple peste H).De la 256 la 317 se caută noi exponenți măriți pentru cele încadrate în H, că pot crește. Chilărița Clintonița a fost învinsă.
if(K) {
	while(1) {
		g = A;
		h = MXM[e];		

		while(1) {
			if(!(a[g] % h)) {
				while(1) {
					mpz_mul_ui(h, h, i1[e]);					
					if((a[g] % h))
						break;
					EXP[e]++;
					}

				h /= i1[e];
				}

			if(! (g--) ) {
				mpz_set(MXM[e], h);
				break;
				}
			}
				
		if(! (++e ^ K) )//K, pe stil vechi H.
			break;
		}	
	}
//else//Jos cu else.
	while(1) {
		g = A;		
		m = MX[e-K];		
		
		while(1) {
			if(!(a[g] % m))	{
				while(1) {
					m *= i1[e];					
					if((a[g] % m))
						break;
					EXP[e]++;
					}			
				m /= i1[e];
				}
				
			if(! (g--) ) {
				MX[e-K] = m;
				break;
				}
			}
			
		if(! (++e ^ H) )
			break;
		}
i = H;
k = 0;
for(g = H; (g < D); g++) {
	if(b[g] < 22400000U)
		j[k++] = b[g];
}
		
printf("DE COMPARAT: %d cu %d. Doar al doilea număr de numere prime va fi parcurs, nu primul.\n\nCine mai vine peste H: ", D-H, k);

while(1) {//Filtrare; de depistat noile puteri multiple care s-ar adăuga la H.
	if(!k--)
		break;
	g = A;
	//int nk = (j[k] < 429496726L);
	m = j[k] * j[k];
//	mpz_set_ui(h, j[k]);
//	mpz_mul_ui(h, h, j[k]);
	//mpz_ui_pow_ui(h, j[k], 2);
	int exp = 2, nimic = 0;
	//gmp_printf("%Zd %llu\n", h, j[k]);

	while(1) {
		if(!(a[g] % m))
		//if(mpz_divisible_p(a[g], h)) 
			{
			nimic = 1;
			while(1) {
				m *= j[k];
				if((a[g] % m))
				//mpz_mul_ui(h, h, j[k]);
				//if(!mpz_divisible_p(a[g], h))
					break;
				exp++;
				}
				
			m /= j[k];
			//mpz_divexact_ui(h, h, j[k]);
			}
			
		if(! (g--) ) {
			if(nimic) {
				i1[i] = j[k];
				printf("%llu ", i1[i]);
				MX[i-K] = m;
				//MX[i-K] = mpz_get_ui(h);
				EXP[i++] = exp;
				}			
			break;
			}
		}
	}

int P = i - H;
H += P;
printf("\nCâți factori noi vin peste H: %d.\n", P);

g = 0;
for(i = H - P; i < D; i++)
if(!PREZ2(b[i], i1, H, 0))
	j[g++] = b[i];
	
for(i = H; i < D; i++)
	i1[i] = j[i - H];//Eventualii factori primi multiputere nou-veniţi au fost puşi în continuarea celor deja prezenţi, în vectorul i. După ei vine zona factorilor uniputere H spre D, din b. Cine a rămas fără putere-pereche.

for(i = 0; i < D; i++)
	b[i] = i1[i];//Vectorul b ia valorile din i, cu multiputerile actuale urmate de uniputeri.

if(b1 ^ 1910)
	sprintf(v, "VP%d.TXT", b1);
else
	strcpy(v, "VPTOT.TXT");

QS2(i1, 0, H);
F1 = fopen(v, "w");
if(K) {
	for(e = 0; e < H; e++) {
		fprintf(F1, "%llu\n", i1[e]);
		//if(e<K) gmp_printf("LANGBEHN %Zd\n", MXM[e]);
		(e < K) ? mpz_set(K4[e], MXM[e]) : mpz_set_ui(K4[e], MX[e-K]);
		mpz_set(K3[e], K4[e]);
		}
	}
else {//La <=160 nu se pune problema lui K.
	for(e = 0; e < H; e++) {
		fprintf(F1, "%llu\n", i1[e]);
		L4[e] = MX[e];
		L3[e] = L4[e];
		}
	}
F1.close();
if(K) {
	QS(K4, 0, e, h);
	TOL1(K3, K4, b, EXP, H, F1, b1, v);//L3, L4.
	}
else {
	QS2(L4, 0, e);
	TOL0(L3, L4, b, EXP, H, F1, b1, v);
	}
	
for(i = 0; i < 400; i++)
	mpz_clear(MXM[i]);

return H;
}


void TOL0(gmp_ui *L3, gmp_ui *L4, gmp_ui *b, int *EXP, int H, fstream &F1, int b1, char *v) {
int i = H-1, j;//, l = 0;
gmp_ui d[500], e[500];//De aici va lua b factorii rearanjați în ordinea descrescătoare a puterii maxime de apariție.
//for(j = 0; j < 500; j++) {
//	d[j] = 0;
//	e[j] = 0;
//}

while(1) {	
	j = H - CBPOZI(L4, L3[i], 0, H) - 1;
	e[j] = EXP[i];
	d[j] = b[i];
		
	if(!i--)
		break;
	}

//l e H?
//l = i;

sprintf(v, "PUTERI%d.TXT", b1);
F1 = fopen(v, "w");
for(i = 0; i < H; i++){
	b[i] = d[i];
	fprintf(F1, "%llu la puterea %llu este: %llu.\n", b[i], e[i], L4[H-i-1]);
	}	
F1.close();
}


void TOL1(int256 *K3, int256 *K4, gmp_ui *b, int *EXP, int H, fstream &F1, int b1, char *v) {
int i = H-1, j;//, l = 0;
gmp_ui d[500], e[500];

while(1) {//i = H - 1, l = 0; H-2 cu 1, H-3 cu 2, 0 cu H - 1.
	j = H - CBPOZ(K4, K3[i], 0, H) - 1;
	e[j] = EXP[i];
	d[j] = b[i];

	if(!i--)
		break;
	}	

if(b1 ^ 1910)
	{sprintf(v, "PUTERI%d.TXT", b1);}
else
	{strcpy(v, "PUTERITOT.TXT");}

F1 = fopen(v, "w");
for(i = 0; i < H; i++) {
	b[i] = d[i];
	gmp_fprintf(F1, "%llu la puterea %llu este: %Zd.\n", b[i], e[i], K4[H-i-1]);
	}	
F1.close();
}


void TOL2(int e, int f, int &I, gmp_ui *b, int256 *a, long PP1, char *Y, int256 u) {
gmp_ui A[5300], B[5300], c[5300], d[5300];
int i, j, k, l, m, I1;
fstream &F1;
i = 0;
k = 0;
m = e;
//Dacă e este 0, se regrupează factorii primi prezenți la puteri peste 1, dar în funcție de mărimea descrescătoare a puterilor lor (de pildă 3 la 80, 7 la 45, 5 la 40...)
//Dacă e nu mai este 0, cealaltă regrupare, valabilă din luna decembrie 2010.
//Puterile sunt în vectorul c1 (el e c), se calculează și se sortează: trebuie un vector nou, int256, de dimensiune >= 360.

while(1) {
	j = 0;
	k = I;

	while(1) {//Se ia fiecare factor prim şi se trece prin vectorul de numere, ca să se vadă de câte ori apare factorul acolo.		
		if(!(a[k] % b[m]))
			++j;
		if(! (k--) )
			break;
		}

	A[i] = b[m++];//numere prime
	B[i] = j;//de câte ori apar ele
	if( !(++i ^ f) )
		break;
	}
i = 0;
while(i < f) {
	c[i] = B[i];
	++i;
	}

QS2(c, 0, f);
l = 0;
i = f - 1;

while(1) {
	j = f;
	I1 = 0;
	
	if( i && (! (c[i] ^ c[i-1]) ))
		I1 = 1;

	if(I1) {
		while(1) {
			if( !(c[i] ^ B[--j]) )
				d[l++] = A[j];
			if(!j)
				break;
			}	
		}		
	else {
		while(1) {
			if( !(c[i] ^ B[--j]) ) {
				d[l++] = A[j];
				break;
				}
			}
		}

	if(i) {
		while ( !(c[i] ^ c[i-1]) ) {
			if (!(--i))
				break;
			}
		}
	if(!i)
		break;
	--i;
	}
	
for(i = 0; i < f; i++)//l e f
	b[i+e] = d[i];
}


void TOL3(int &f, int &I, int320 *C, int256 *a, int b1, char *v, long PP1, char *Y, int256 u) {
gmp_ui B[671], c[671];
int256 A[671], d[671];
int i, j, l, I1;
unsigned long k;
fstream &F1;
i = 0;

while(i < f) {
	j = 0;
	k = I;
	
	while(1) {			
		if(!(a[k] % C[i]))
			++j;
		if(! (k--) )
			break;
		}

	A[i] = C[i];
	B[i++] = j;
	}
i = 0;
while(i < f) {
	c[i] = B[i];
	++i;
	}
	
QS2(c, 0, f);
l = 0;

if(b1 ^ 1910)
	sprintf(v, "VC%d.TXT", b1);
else
	strcpy(v, "VCTOT.TXT");

F1 = fopen(v, "w");
i = f - 1;

while(1) {
	j = f;
	I1 = 0;
	if( i && (c[i] == c[i-1]) )
		I1 = 1;

	if(I1) {//S-a găsit consecutivitate în valori egale.		
		while(1) {//Se caută nesortatul (B) până la capăt, ca să fie prinse toate mepezetelele prime care apar de acelaşi număr de ori în intervalul dat la TOLIL.
			if( c[i] == B[--j] ) {				
				d[l++] = A[j];
				gmp_fprintf(F1, "%Zd\n", A[j]);				
				}
			if(!j)
				break;
			}
	}	
	else {//Nu e consecutivitate în valori egale pentru numerele de apariţii ale factorilor primi.
		while(1) {//Se caută în B numai până la locul unde factorul prim are numărul corespunzător de apariţii, care sigur se găseşte o singură dată.
			if( c[i] == B[--j] ) {
				d[l++] = A[j];
				gmp_fprintf(F1, "%Zd\n", A[j]);
				break;
				}
			}
		}
		
	if(i) {
		while (c[i] == c[i-1]) {//Dacă sunt numere egale consecutive de apariţii, se scade poziţia prin c. Prelucrarea s-a făcut mai sus.
			if (!(--i))
				break;
			}
		}	
	if(!i)
		break;
	--i;
	}

//F1.close();
//F1 = fopen(v, "r");

F1.close();
F1.open(v, ios::in);

for(i = 0; i < f; i++)
	gmp_fscanf(F1, "%Zd", C[i]);

for(i = 0; i < 671; i++)
	mpz_clears(A[i], d[i], NULL);
F1.close();
}

/*
void TOLMARE(gmp_ui *b, int320 *C, int D, int E, fstream &F1, const char *Z) {//Pentru P2

F1 = fopen(Z, "r");
for(int i = 0; i < D; i++)
	fscanf(F1, "%llu", &b[i]);
	
for(int i = 0; i < E; i++)
	gmp_fscanf(F1, "%Zd", C[i]);
	
F1.close();
}*/


void ARANJTEXT(char *t, const char *t1, const char *u, const char *t2) {
strcpy(t, t1);
strcat(t, u);//export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib
strcat(t, t2);
}

/*
void PUTERVEC() {
fstream &F1;
int i, j, k, y, IND[350];
gmp_ui b[5000], ba[5000];
int256 C[421], u, u1, D[5317];

mpz_inits(u, u1, NULL);
for(i = 0; i < 421; i++)
	mpz_init(C[i]);
TOLMARE(b, C, 4896, 421, F1, "/P2.TXT");

F1 = fopen("/P2.TXT", "r");
for(i = 0; i < 5317; i++)
	{
	gmp_fscanf(F1, "%Zd", u);
	mpz_init_set(D[i], u);
	}
F1.close();

IND[0] = 534;
F1 = fopen("/INDTOTJ.TXT", "r");

for(i = 1; i < 350; i++)
	fscanf(F1, "%d", &IND[i]);
F1.close();

ba[0] = 2;
for(i = 1; i < 4897; i++)
		ba[i] = b[i-1];
y = 0;
		
for(k = 0; k < 5317; k++) {
	for(i = 0; i < 360; i++) {
		for(j = 2; j <= IND[i]; j++) {
		
			mpz_ui_pow_ui(u, ba[i], j);
			mpz_divexact_ui(u1, u, ba[i] - 1);
	
			if(mpz_divisible_p(u1, D[k]))
				{
				gmp_printf("%Zd DIN MIC\n", D[k]);
				y++;
				//goto s1;
				}
			}
		}

	for(i = 350; i < 4897; i++)
		{
		mpz_set_ui(u1, ba[i] + 1);
		if(mpz_divisible_p(u1, D[k]))
			{
			gmp_printf("%Zd DIN MIJLOCIU\n", D[k]);			
			y++;
			//goto s1;
			}	
		}
		
	for(i = 0; i < 421; i++)
		{
		mpz_set(u1, C[i]);
		mpz_add_ui(u1, u1, 1);
		if(mpz_divisible_p(u1, D[k]))
			{
			gmp_printf("%Zd DIN MARE\n", D[k]);			
			y++;
			//goto s1;
			}		
		}
	}
s1:
printf("\n%d\n", y);

for(i = 0; i < 5317; i++)
	{
	mpz_set(u, D[i]);
	mpz_add_ui(u, u, 1);
	if(mpz_divisible_ui_p(u, 1667))
		gmp_printf("%Zd 1667\n", D[i]);	
	}

for(i = 0; i < 5317; i++)
	mpz_clear(D[i]);
for(i = 0; i < 421; i++)
	mpz_clear(C[i]);
}
*/

int HH(int &b1) {
if(b1 <= 52)
	{
	b1 = 52;
	return H52;
	}
if(b1 <= 80)
	{
	b1 = 80;
	return H80;
	}
if(b1 <= 100)
	{
	b1 = 100;
	return H100;
	}
if(b1 <= 130)
	{
	b1 = 130;
	return H130;
	}
if(b1 <= 160)
	{
	b1 = 160;
	return H160;
	}
if(b1 <= 240)
	{
	b1 = 240;
	return H240;
	}
if(b1 <= 420)
	{
	b1 = 420;
	return H420;
	}

b1 = 1910;
return HTOT;//0;
}


int FILEEXISTS(const char *file) {
    struct stat buf;
    return (stat(file, &buf) == 0);
}


void intswap(int256 &a, int256 &b) {
a ^= b;
b = a^b;
a ^= b;
}


void QS(int256 *a, int b, int e, int256 pv) {
int l, r;
 if(e > b+1) {
	pv = a[b];
	l = b+1;
	r = e;

	while(1)
		{
		if(l>=r)
			break;
		
		if(a[l] <= pv)
			++l;
		else
			intswap(a[l], a[--r]);		
		}
	
	intswap(a[--l], a[b]);
	QS(a, b, l, pv);
	QS(a, r, e, pv);	
	}
}


void SIB(int256 *a, int b, int c, int256 d) {
int e = b + 1, f, g, h, i;

while(e < c) {
	d = a[e];
	f = b;
	g = e - 1;
	
	while(1) {
		if(f > g)
			break;
		
		h = (f + g) >> 1;
		a[h] > d?
			g = h-1 : f = h+1;
		}

	for(i = e-1; i>=f; --i)
		a[i+1] = a[i];
		
	a[f] = d;
	++e;
	}
}


void QS2(gmp_ui *a, int b, int e) {
gmp_ui j, pv;
int l, r;

if(e > b+1) {
	pv = a[b];
	l = b + 1;
	r = e;

	    while(1)
		{
		if(l >= r)
			break;
		
		if(a[l] <= pv)
			++l;
		else
			{
			//a[--r] ^= a[l];
			//a[l] = a[r] ^ a[l];//a[l] ^= a[r];
			//a[r] ^= a[l];
			j = a[--r];
			a[r] = a[l];
			a[l] = j;	
			}
		} 
	//a[--l] ^= a[b];
	//a[b] = a[l] ^ a[b];//a[b] ^= a[l];
	//a[l] ^= a[b];
	j = a[--l];
	a[l] = a[b];
	a[b] = j;

	QS2(a, b, l);
	QS2(a, r, e);
	}
}


void HS(int256 *a, int256 t, unsigned long D) {/*t, variabilă temporară.*/

unsigned long n = D, par = (D>>1), ind, cop; /*Indecşi de heap.*/

while (1)/*Ciclează până ce vectorul este sortat.*/
	{
	if (par > 0) {
	       	t = a[--par];/*Prima parte: sortarea heapului. Vechea valoare trece în t.*/
	       	}
	else 	{/*Partea a doua: extragerea elementelor la faţa locului (in-place).*/
	       	 if (!--n)/*Heapul se micşorează.*/
	       		{
		      	return; /*Heapul gol = s-a terminat sortarea.*/
		    	}
		
		t = a[n];/*Salvarea vechii poziţii de heap în temporar.*/
		a[n] = a[0];/*Salvarea primei poziţii dincolo de heap.*/
	       	}        
        /*Inserarea: punerea lui t în josul heapului pentru înlocuirea părintelui.*/
        ind = par;/*Se începe la indexul părintelui.*/
        cop = (ind<<1) + 1; /*Se obţine indexul copilului său stâng.*/

        while (cop < n) {
		if ( (cop + 1 < n) && (a[cop + 1] > a[cop]) )/*Alegerea celui mai mare copil.*/
			{
		    	cop++; /*Copilul din dreapta există şi este mai mare.*/
			}
        
		if (a[cop] > t)/*E cel mai mare copil mai mare decât poziţia din heap (Entry)?*/
			{
		        a[ind] = a[cop]; /*Suprascrierea poziţiei din heap cu copilul.*/
		        ind = cop; /*Punerea indexului la copil.*/
		        cop = (ind<<1) + 1; /*Se obţine copilul stâng, şi procesul se reia.*/
		    	}
		else
			{
		        break; /*S-a găsit locul pentru t.*/
			}
        }

	a[ind] = t;/*Variabila temporară se memorează în noul loc.*/
    }
}


void HSS(char A[][DIMM], char *t, unsigned long D) {//t, variabilă temporară.

unsigned long n = D, par = (D>>1), ind, cop; //Indecşi de heap.

while (1) {//Ciclează până ce vectorul este sortat.

	if (par > 0) {
	       	strcpy(t, A[--par]);//Prima parte: sortarea heapului. Vechea valoare trece în t.
	       	}
	else 	{//Partea a doua: extragerea elementelor la faţa locului (in-place).
	       	 if (!--n) {//Heapul se micşorează.
		      	return; //Heapul gol = s-a terminat sortarea.
		    	}
			
	       	strcpy(t, A[n]);//Salvarea vechii poziţii de heap în temporar.
		strcpy(A[n], A[0]);//Salvarea primei poziţii dincolo de heap.
	       	}
        //Inserarea: punerea lui t în josul heapului pentru înlocuirea părintelui.
        ind = par;//Se începe la indexul părintelui.
        cop = (ind<<1) + 1; //Se obţine indexul copilului său stâng.

        while (cop < n)	{
		if ( (cop + 1 < n) && (strcmp(A[cop + 1], A[cop]) > 0) )//Alegerea celui mai mare copil.
			{
		    	cop++; //Copilul din dreapta există şi este mai mare.
			}

		if (strcmp(A[cop], t) > 0) {//E cel mai mare copil mai mare decât poziţia din heap (Entry)?
		        strcpy(A[ind], A[cop]); //Suprascrierea poziţiei din heap cu copilul.
		        ind = cop; //Punerea indexului la copil.
		        cop = (ind<<1) + 1; //Se obţine copilul stâng, şi procesul se reia.
		    	}
		else	{
		        break; //S-a găsit locul pentru t.
			}
        }

        strcpy(A[ind], t);//Variabila temporară se memorează în noul loc.
    }
}


void HSI(gmp_ui *a, gmp_ui t, unsigned long D) {/*t, variabilă temporară.*/

unsigned long n = D, par = (D>>1), ind, cop; /*Indecşi de heap.*/

while (1)/*Ciclează până ce vectorul este sortat.*/
	{
	if (par > 0)
	       	{
	       	/*Prima parte: sortarea heapului. Vechea valoare trece în t.*/
	       	t = a[--par];
	       	}
	else 	{/*Partea a doua: extragerea elementelor la faţa locului (in-place).*/
	       	 if (!--n)/*Heapul se micşorează.*/
	       		{
		      	return; /*Heapul gol = s-a terminat sortarea.*/
		    	}
			
	       	/*Salvarea vechii poziţii de heap în temporar.*/
		/*Salvarea primei poziţii dincolo de heap.*/
		t = a[n];
		a[n] = a[0];
	       	}        
        /*Inserarea: punerea lui t în josul heapului pentru înlocuirea părintelui.*/
        ind = par;/*Se începe la indexul părintelui.*/
        cop = (ind<<1) + 1; /*Se obţine indexul copilului său stâng.*/

        while (cop < n)
		{
		if ( (cop + 1 < n) && (a[cop + 1] > a[cop]) )/*Alegerea celui mai mare copil.*/
			{
		    	cop++; /*Copilul din dreapta există şi este mai mare.*/
			}
        
		if (a[cop] > t)/*E cel mai mare copil mai mare decât poziţia din heap (Entry)?*/
			{
			a[ind] = a[cop];/*Suprascrierea poziţiei din heap cu copilul.*/
		        ind = cop; /*Punerea indexului la copil.*/
		        cop = (ind<<1) + 1; /*Se obţine copilul stâng, şi procesul se reia.*/
		    	}
		else
			{
		        break; /*S-a găsit locul pentru t.*/
			}
        }

			a[ind] = t;/*Variabila temporară se memorează în noul loc.*/
    }
}


int CB(int256 *a, int256 b, long I, long R) {
//Nu e --R:
//m = 7/2, I = 4, m = 11/2, I = 6, m = 13/2, I = 7, dim=R=7, anomalie.
//m = 8/2, I = 5, m = 13/2, I = 7, m = 7, I = 8, dim=R=8, nu e bine.
//m = 8/2, R = 3, m = 1, R = 0, I = 0, m = 0, R = -1 cu I 0 sau I e 1 cu R 0
//m = 8/2, I = 5, m = 13/2, R = 5, m = 10/2, R = 4 cu I 5 sau I e 6 cu R 5
//Apar nereguli fie la I>=R, fie la I>R. R trebuie să scadă cu 1.

//Cu --R:
//m = 6/2, I = 4, m = 10/2, I = 6 = R, m = 12/6, I e 7 cu R 6 sau R e 5 cu I 6, stop.
//m = 7/2, I = 4, m = 11/2, I = 6, m = 13/2, I = 7 = R, m = 14/2, I 8 cu R 7 sau R 6 cu I 7, stop.
//m = 7/2, R = 2, m = 1, R = 0 = I, I e 1 cu R 0 sau R e -1 cu I 0, stop.
//m = 7/2, I = 4, m = 11/2, R = 4 = I, m = 8/2, I e 5 cu R 4 sau R e 3 cu I 4, stop.
//E corect.

int m, c;
--R;

while(1) {
	if(I > R)
		break;
	m = (I+R) >> 1;
	
	if(a[m] == b)
		return 0;
	a[m] < b? I = m + 1 : R = m - 1;
	}

return 1;
}


int CBSTATIC(char A[][DIMM], long jos, long sus, char *t) {

int mij, c;
--sus;

while(1) {
	if(jos > sus) break;
	mij = (jos + sus) >> 1;
	c = strcmp(A[mij], t);	
	if (!c) 
		return 0;
		
	c < 0? jos = mij + 1 : sus = mij - 1;
	}

return 1;
}


int CBPOZ(int256 *a, int256 b, long I, long R) {
int m, c;
--R;

while(1)
	{
	if(I > R)
		break;
	m = (I+R) >> 1;
	if(a[m] == b)
		return m;

	a[m] < b? I = m + 1 : R = m - 1;
	}

return m;
}


int CBPOZI(gmp_ui *a, gmp_ui b, long I, long R) {
int m;
--R;

while(1)
	{
	if(I > R)
		break;
	m = (I+R) >> 1;
	if(a[m] == b)
		return m;

	a[m] < b? I = m + 1 : R = m - 1;
	}

return m;
}


int CBIN(gmp_ui *a, gmp_ui &b, long I, long R) {
int m;
--R;

while(1)
	{
	if(I > R)
		break;
	m = (I+R) >> 1;
	if(a[m] == b)
		return 0;

	a[m] < b? I = m + 1 : R = m - 1;
	}

return 1;
}


int CBINT(int *a, int &b, long I, long R) {
int m;
--R;

while(1)
	{
	if(I > R)
		break;
	m = (I+R) >> 1;
	if(a[m] == b)
		return 0;

	a[m] < b? I = m + 1 : R = m - 1;
	}

return 1;
}


int CBINV(gmp_ui *a, gmp_ui b, long I, long R) {
int m;
--R;

while(1)
	{
	if(I>R)
		break;
	m = (I+R) >> 1;
	if(a[m] == b)
		return 1;

	a[m] < b? I = m + 1 : R = m - 1;
	}

return 0;
}


int CBDIV(int256 f, gmp_ui *M, int I, int R, int &j, int A) {
R--;
while(1) {
	if(I>R)
		break;
		
	j = (I+R) >> 1;	
	if(!(f % M[j]) == A)
		return A;
		
	A? R = j - 1 : I = j + 1;
	}
	
return 0;
}


int CBDIVM(int256 f, int256 *N, int I, int R, int &j, int A) {
R--;
while(1) {
	if(I>R)
		break;
	j = (I+R) >> 1;	
	if(!(f % N[j]) == A)
		return A;
		
	A? R = j - 1 : I = j + 1;
	}
	
return 0;
}


int COEFG(int256 A, gmp_ui *b, int320 *C, int D, int E, int256 L) {
mpz_set_ui(L, 0);
mpz_setbit(L, mpz_scan1(A, 0));
if(L == A))
	return 1;

while(1)
	{
	if(!D--)
		break;	
	while(1)
		{
		if((A % L))
			break;
		L *= b[D];
		}

		L /= b[D];
		if(L == A)
			return 1;	
	}

while(1) {
	if(!E--)
		break;

	while(1)
		{
		if((A % L))
			break;
		L *= C[E];
		}

		L /= C[E];
		if(L == A)
			return 1;
	}

return 0;
}


int COEFG1(int c, int d, gmp_ui *b, int320 *C, int &D, int &E, int l) {
fstream &M = fopen("/COEFLEG.TXT", "r");
int i = 0, j = 0;
fstream &Q = fopen("VEC.TXT", "w");
int256 C1, B, L;
mpz_ui_pow_ui(C1, 10, l);

while(1)
	{
	gmp_fscanf(M, "%Zd", B);
	if( (mpz_cmp(B, C1) > 0) && !(i++ % d) && COEFG(B, b, C, D, E, L) )
		{
		gmp_fprintf(Q, "%Zd\n", B);
		++j;
		}
		
	if( !(j ^ c) )
		break;
	}

mpz_clears(C1, B, L, NULL);
fclose(M);
fclose(Q);

return j;
}


int COEF(gmp_ui a, gmp_ui *b, int D) {
if(a & 1)
	goto s1;
	
while(1)
		{
		a >>= 1;
		if(a & 1)
			break;
		}

if( !(a ^ 1) )
	return 1;

s1:

while(1)
	{
	if(!D--)
		break;

	while(1)
		{
		if(a % b[D])
			break;
		a /= b[D];
		}	 
		
	if( !(a ^ 1) )
		return 1;
	}

return 0;
}


int COEF1(int c, int d, int e, gmp_ui *b, int &D) {
fstream &M, *Q;
int i = 0, j = 0;
gmp_ui B;
M = fopen("/COEFLEG.TXT", "r");
Q = fopen("VEC.TXT", "w");

while(1)
	{
	fscanf(M, "%llu", &B);
	if( (B > e) && !(i++ % d) && COEF(B, b, D) )
			{
			fprintf(Q, "%llu\n", B);
			++j;
			}
			
	if( !(j ^ c) )
		break;
	}

fclose(M);
fclose(Q);
return j;
}


void FACT(int &W, int256 *A1, fstream &f1, int256 I, int n) {
f1 = fopen("VEC.TXT", "r");

while(1) {
	gmp_fscanf(f1, "%Zd", I);
	if(W <= n)
		mpz_set(A1[n-W], I);

	if(!--W)
		break;
	}

f1.close();
W = n;
}


void FACT1(int &W, gmp_ui *A1, fstream &f1, int &e, int n) {
f1 = fopen("VEC.TXT", "r");

while(1) {
	fscanf(f1, "%d", &e);
	if(W <= n)
		A1[n-W] = e;

	if(!--W)
		break;
	}

f1.close();
W = n;
}


int VC(int256 *a, gmp_ui *d, int g, int n, int D, int s) {//Coeficienți sub 2^64.

int e = 0, f;
fstream &F4;
gmp_ui l, m = 0;
--m;
int256 I;

F4.open("VEC1.TXT", ios::out);

	while(1) {
		f = g-s;
		while(1) {
			if(!(a[g] % a[f]))	{
			
				I = a[g]/a[f];
				if(I > m)
					break;
				l = (I);
				
				if(V1(l, d, e))	{
					F4<<l<<endl;

					if( !(++e^D) )	{
						F4.close();						
						return e;
						}
					}
				}

			if( !(f-- ^ n))
				break;
			}
		if( !(--g ^ n))
			break;
		}

F4.close();
return e;
}


int VC1(int256 *a, int256 *d, int g, int n, int D, int a1, int b1, int s) {//Coeficienți de la 2^64 în sus.
int e = 0, f;
int256 l, m, M;
fstream &G;

mpz_ui_pow_ui(m, 10, a1);
mpz_ui_pow_ui(M, 10, b1);
G.open("VEC.TXT", ios::out);

while(1) {
	f = g-s;
	while(1) {
		if(!(a[g] % a[f])) {
			l = a[g]/a[f];
			if(l > m)
				break;

			if( (l > M) && V(l, d, e) ) {
					G<<l<<endl;
					++e;
					}
			}

		if(!(e^D) ) {//!(x^y), totuna cu x==y
			G.close();
			return e;
			}

		if( !(f-- ^ n) )
			break;		
		}

	if( !(--g ^ n) )
		break;
	}

G.close();
return e;
}

int V(int256 a, int256 *b, int c) {
int d = c;

while(1) {
	if(!d)
		break;
	if(!mpz_cmp(b[--d], a))
		return 0;
	}
		
mpz_set(b[c], a);
return 1;
}


int V1(gmp_ui &a, gmp_ui *b, int c) {
int d = c;

while(1) {
	if(!d)
		break;
	
	if( !(b[--d]^a) )
		return 0;
	}
			
b[c] = a;
return 1;
}


void GEN(int L, int W, gmp_ui *b, int320 *C, int &D, int &E, const char *Z) {
fstream &f2 = fopen(Z, ios::in);
int i;

for(i = 0; i < W; i++)
	(i<L)?
		fscanf(f2, "%llu", &b[i]) :  gmp_fscanf(f2, "%Zd", C[i-L]);
f2.close();
D = L;
E = W - L;
}


int GENM(gmp_ui *b, const char *Z) {
fstream &f = fopen(Z, ios::in);
int i = 0;
gmp_ui a = 0;
--a;

int320 b1;

while(1) {
	gmp_fscanf(f, "%Zd", b1);
	if(feof(f))
		break;		
	if(b1 > a)
		b[i++] = mpz_get_ui(b1);
	}

f.close();
return i;
}


void GENMIN(int b1, gmp_ui *b, int &i, int &j, int &l, int &I, int &V, int inv) {
j = HH(b1);
l = 0;
i = GENM(b, "/CF52.TXT");
if(inv)
	INV2(0, 0, b, j, i);
}


void GENERARE(int b1, gmp_ui *b, int320 *C, int &i, int &j, int &J, int &l, int &I, int &V, int k) {
	if(b1 >= 421)
		{
		j = HTOT;
		GEN(DTOT, NTOT, b, C, i, J, "/PRIME2.TXT");
		k? l = k : l = KTOT;
		}
	else
	if (b1 >= 241)
		{
		j = H420;
		GEN(D420, N420, b, C, i, J, "/CF420.TXT");
		l = K420;
		}
	else
	if(b1 >= 161)
		{
		j = H240;
		GEN(D240, N240, b, C, i, J, "/CF240.TXT");
		l = K240;
		}
	else
	if(b1 >= 131)
		{
		j = H160;
		GEN(D160, N160, b, C, i, J, "/CF160.TXT");
		l = 0;
		}
	else
	if(b1 >= 101)
		{
		j = H130;
		GEN(D130, N130, b, C, i, J, "/CF130.TXT");
		l = 0;
		}
	else
	if(b1 >= 81)
		{
		j = H100;
		GEN(D100, N100, b, C, i, J, "/CF100.TXT");
		l = 0;
		}
	else
	if(b1 >= 53)
		{
		j = H80;
		GEN(D80, N80, b, C, i, J, "/CF80.TXT");
		l = 0;
		}
	else
		{
		j = H52;
		GEN(D52, N52, b, C, i, J, "/CF52.TXT");
		l = 0;
		}			

	INV(b, C, j, i, J);
}


void GENERARE2(int b1, gmp_ui *b, int320 *C, int &i, int &j, int &J, int &l, int &I, int &V, int inv) {
j = HH(b1);
	if(b1 >= 421)
		{
		GEN(D1910, N1910, b, C, i, J, "/P2.TXT");
		l = KTOT;
		}
	else
	if (b1 >= 241)
		{
		GEN(D420, N420, b, C, i, J, "/CF420.TXT");
		l = K420;
		}
	else
	if(b1 >= 161)
		{
		GEN(D240, N240, b, C, i, J, "/CF240.TXT");
		l = K240;
		}
	else
	if(b1 >= 131)
		{
		GEN(D160, N160, b, C, i, J, "/CF160.TXT");
		l = 0;
		}
	else
	if(b1 >= 101)
		{
		GEN(D130, N130, b, C, i, J, "/CF130.TXT");
		l = 0;
		}
	else
	if(b1 >= 81)
		{
		GEN(D100, N100, b, C, i, J, "/CF100.TXT");
		l = 0;
		}
	else
	if(b1 >= 53)
		{
		GEN(D80, N80, b, C, i, J, "/CF80.TXT");
		l = 0;
		}
	else
		{
		GEN(D52, N52, b, C, i, J, "/CF52.TXT");
		l = 0;
		}		

	inv == 1? INV(b, C, j, i, J) : INV2(0, 0, b, j, i);
}


void INV(gmp_ui *b, int320 *C, int d1, int D, int E) {
int i;
gmp_ui j;

for(i = (E>>1); i; ) {
	--i;
	intswap(C[i], C[E-i-1]);
	}
	
INV2(i, j, b, d1, D);
}


void INV2(int i, gmp_ui j, gmp_ui *b, int d1, int D) {

for(i = (d1>>1); i; ) {
	j = b[--i];
	b[i] = b[d1-i-1];
	b[d1-i-1] = j;
	}
	
for(i = ((D+d1)>>1); i > d1; ) {
	j = b[--i];
	b[i] = b[D-i-1 + d1];
	b[D-i-1 + d1] = j;
	}
}


void LOTVEC(int256 a, gmp_ui *B, int320 *H, int &Y, gmp_ui *b, int320 *C, gmp_ui *b1, int320 *C1, gmp_ui *y1, int320 *z3, int D, int E, int d1, int &d2, int &i, int *f2) {
int d = 0, e = 0;
i = d1;

while(1) {
	if(!i--)
		break;
	if(!(a % b[i]))	{
			B[d] = b[i];
			f2[d++] = i;
			}
	}
d2 = d;

while(1) {
	if( !(D-- ^ d1) )
		break;
		
	if(!(a % b[D]))	{
			B[d] = b[D];
			y1[d++] = b1[D];
			}
	}

while(1) {
	if(!E--)
		break;
	if(!(a % C[E])) {
		H[e] = C[E];
		z3[e++] = C1[E];
		}
	}
Y = d;
i = e;
}


void LOTVEC1(int256 a, gmp_ui *B, int &Y, gmp_ui *b, gmp_ui *b1, gmp_ui *y1, int D, int d1, int &d2, int i, int *f2) {
int d = 0, e = 0;
i = d1;

while(1) {
	if(!i--)
		break;
	if(!(a % b[i]))	{
			B[d] = b[i];
			f2[d++] = i;
			}
	}
d2 = d;

while(1) {
	if( !(D-- ^ d1) )
		break;
		
	if(!(a % b[D]))	{
			B[d] = b[D];
			y1[d++] = b1[D];
			}
	}
Y = d;
}

/*
void LOTVECM(int256 a, gmp_ui *B, int256 *H, int &Y, gmp_ui *b, int320 *C, gmp_ui *b1, int320 *C1, gmp_ui *y1, int256 *z3, int D, int E, int d1, int &d2, int f1, int &d3, int &i, int *f2) {//d1 e H mare; f1 K
int d = 0, e = 0;
i = d1;

while(1) {
	if(!(i-- ^ f1))
		break;
	if(mpz_divisible_ui_p(a, b[i])) {
		B[d] = b[i];		
		f2[d++] = i-f1;//i sau i-f1.
		}
	}

d3 = 0;
while(1) {
	if(!f1--)
		break;
	if(mpz_divisible_ui_p(a, b[f1])) {
		++d3;		
		B[d] = b[f1];
		f2[d++] = f1;
		}
	}

d2 = d;
while(1) {
	if( !(D-- ^ d1) )
		break;
	if(mpz_divisible_ui_p(a, b[D])) {
		B[d] = b[D];
		y1[d++] = b1[D];
		}
	}	

while(1) {
	if(!E--)
		break;
	if(mpz_divisible_p(a, C[E])) {
		mpz_set(H[e], C[E]);
		mpz_set(z3[e++], C1[E]);
		}
	}
Y = d;
i = e;
}
*/

//j = s / (b[d] - 1);
//k = s / b[d];
//j1 = CMMDCA(nm, j, nm%j);
//j2 = CMMDCA(nr, k, nr%k);
//nm = (nm / j1) * (k / j2);
//nr = (nr / j2) * (j / j1);
//nm, nr pot fi mepezetele. Atunci mpz_gcd_ui(NULL, j, nm), mpz_gcd_ui(NULL, nr, k), sau chiar mpz_gcd(j1, nm, j) cu mpz_gcd(j2, nr, k).
//Cu mpz_divexact_ui(?, nm, j1), mpz_divexact_ui(?2, k, j2), mpz_divexact_ui(?3, nr, j2), mpz_divexact_ui(?4, j, j1).
//Sau chiar mpz_divexact(?, nm, j1), mpz_divexact(?2, k, j2), mpz_divexact(?3, nr, j2), mpz_divexact(?4, j, j1).
//Altfel e ca mai sus. Dar cu mepezetelele se fac destule operații în plus.
//Și când de la început trebuie mepezetea, trebuie să rămână până la sfârșitul SUMADIVului. Când e sigur că va rămâne numai în valori pe 64 de biți, după ce s-a ajuns la mepezetea?
//Iar mepezetelele nr, nm sunt necesare deja de atunci când puterea lui 2 a numărului de bază din fișier este de la 64 în sus. Ea ar fi primul numitor abundențial parțial pe drumul calculului numitorului abundențial total al numărului, iar procesul de mai sus, de la 3 ori 5 ori 7 (sau primul divizor impar prim al numărului) în sus.
//Și: când este sigur că se poate trece în mpz_get_ui? Și la câți factori primi se încadrează așa? Până când? Până la sfârșit sau nu? Un mod general pentru toate numerele mari?
//Nu se vede a fi previzibil.
//Așa că la numerele care deja au măcar 2^64: mepezetea pentru 2. Și dacă se separă de nm-ul și nr-ul celorlalți factori primi, acolo la ei nu se va întâmpla iar să se ajungă la numitor + numărător mai mari de 64 de biți? Și dacă da, atunci când? Și trebuie înmulțire int256 cu mepezeteaua de la 2.
//mpz_gcd_ui cu mpz_divexact_ui, iar mpz_gcd, cu mpz_divexact.
//Apoi mai sunt și înmulțiri care pot fi de exemplu mpz_mul_ui(nm, nm, k / j2) sau chiar mpz_mul(nm, nm, k / j2).
//Ținând seama de această complexitate a operațiilor și de o anumită măsurare care arată că mepezetelele cu mai puține cifre nu se operează între ele chiar mult mai repede decât cele mai mari (cele de 20 și ceva de cifre față de cele de peste 100, cu doar câteva zeci de procente mai repede), și că sunt cam multe împărțiri, și că în situații normale de SUMADIV aici nici nu se împarte, doar un mpz_mul_ui, se prea poate ca implementarea de MODPRIMSUM peste SUMADIV să aducă încetineală.
//Dar contoarele care să numere câți factori primi au fost maxim parcurși ca divizori, fără să se mai facă mpz_cmp(f, A), poate că vor aduce ceva viteză, fără MODPRIMSUM.
//De statisticat.
//gmp_printf("%Zd B\n\n", B);


/*
gmp_ui gcd(gmp_ui u, gmp_ui v, int shift)//CMMDC binar ineficient.
{
//  int shift;

  // GCD(0,v) == v; GCD(u,0) == u, GCD(0,0) == 0; Nu vor fi zerouri.
//  if (!u) return v;
 // if (!v) return u;
 
  // Let shift := lg K, where K is the greatest power of 2 dividing both u and v.
  for (shift = 0; !((u | v) & 1); ++shift) {
         u >>= 1;
         v >>= 1;
  }
 
  while (!(u & 1))
    u >>= 1;
 
  // From here on, u is always odd. 
  do {
       // remove all factors of 2 in v -- they are not common
       //   note: v is not zero, so while will terminate
       while (!(v & 1))  // Loop X
           v >>= 1;

       // Now u and v are both odd. Swap if necessary so u <= v,
       //  then set v = v - u (which is even). For bignums, the
       //  swapping is just pointer movement, and the subtraction
       //  can be done in-place.
       if (u > v) {
         //unsigned int t = v; v = u; u = t;
         u ^= v;
         v ^= u;
         u ^= v;
         }  // Swap u and v.
       v = v - u;// Here v >= u.
     } while (v);

  // restore common factors of 2
  return u << shift;
}*/


//Dar dacă a ar fi 65 și b 182, iar c 65?
//a ar fi 182, b ar fi 65, c 52; o iterație în plus dacă a e mai mic decât b și nu invers.
gmp_ui CMMDC(gmp_ui a, gmp_ui b, gmp_ui c) {//a = 182, b = 65, c = 52; Știm sigur că a nu e mai mic, de fapt mai mare decât b.

while(1) {
  if(!c)
	return b;
    a = b;//a e 65, apoi 52
    b = c;//b e 52, apoi 13
    c = a % b;//c e 13, apoi 0	
  }
  
return 0;
}

//19, 71, 19: c e 14, b 14, 
gmp_ui CMMDC2(gmp_ui n, gmp_ui a, gmp_ui b, gmp_ui c) {//a = 19, b = 71, c = 19

if(a < b) {c = b%a; b = a;}//c e 14, b e 19, a e 19
while(1) {
  if(!c)
	return n/b;
    a = b;//a e 19, iar 19
    b = c;//b e 14
    c = a % b;//c e 5
  }
  
return 0;
}


gmp_ui CMMDCA(gmp_ui a, gmp_ui b, gmp_ui c) {//Aranjare când nu se știe sigur că a e cel puțin cât b.

if(a < b) {c = b%a; b = a;}
while(1)
  {
  if(!c)
	return b;
    a = b;
    b = c;
    c = a % b;
  }
  
return 0;
}


int FOND1(gmp_ui j, gmp_ui j1) {
return (j1 < (11 * CMMDC(j, j1, j%j1)) );
}


int TRAT(gmp_ui j, gmp_ui j1, int N) {
return (j1 < (N * CMMDC(j, j1, j%j1)) );
}
//La frontul 2: fie sub 11, fie de la 1048577 la 1200000. Alternativ, doar sus, dar numerele de fond 1 trebuie să se caute separat.
//Acolo trebuiesc schimbate TRAT, VALID4 și funcțiile de la MODPRIM(E) din Z.h (adică MODPINTSUS, JOS, MPZSUS, JOS). Va fi nevoie de parametru nou int256.

int TRAT1(gmp_ui j, gmp_ui j1, gmp_ui k, gmp_ui k1) {
if( (j % k == 0) && (j1 % k1 == 0) )	
	return (j1 < 11*k1);

if( (k % j == 0) && (k1 % j1 == 0) )
	return (k1 < 11*j1);	

return 0;
}

//j = 114841, j1 = 22416, k = 2801, k1 = 2802
//114841 / 22416 * 2802 / 2801
//Sau 57441 / 11204 * 2801 / 2802


int VALID(int256 A, int256 f, int256 B) {
mpz_gcd(f, A, B);
mpz_mul_ui(f, f, 11);
return f > A;
}


int VALID2(int256 A, int256 f, int256 B, int256 e, double &i) {
mpz_gcd(f, A, B);
mpz_divexact(e, B, f);
mpz_divexact(f, A, f);

if(mpz_cmp_ui(f, 11) < 0) {
	i = (mpz_get_d(e)) / mpz_get_ui(f);
	return 1;
	}
	
return 0;
}


int VALID3(int256 A, double &a2, double &a3, double &a4, double &E2) {
a4 = a2;
a2 *= 10;		//10

	a3 = modf(a2, &a3);	
	if((a3 < E2) || (1-a3 < E2))
		return 1;
	a2 -= a4;	//9

	a3 = modf(a2, &a3);
	if((a3 < E2) || (1-a3 < E2))
		return 1;
	a2 -= a4;	//8

	a3 = modf(a2, &a3);	
	if((a3 < E2) || (1-a3 < E2))
		return 1;
	a2 -= a4;	//7

	a3 = modf(a2, &a3);	
	if((a3 < E2) || (1-a3 < E2))
		return 1;
	a2 -= a4;	//6
	
	a3 = modf(a2, &a3);
	if((a3 < E2) || (1-a3 < E2))
		return 1;
return 0;
}


int VALID4(int256 A, int256 f, int256 B) {
mpz_gcd(f, A, B);
mpz_mul_ui(f, f, 1048577);
return f > A;
}


int VALIDN(int256 A, int256 f, int256 B, int256 trei) {
mpz_gcd(f, A, B);
mpz_set(trei, f);
mpz_divexact(f, A, f);//5
mpz_divexact(trei, B, trei);//13
}


int VALIDV(int256 A, int256 f, int256 B, int256 e, int &i) {
mpz_gcd(f, A, B);
mpz_divexact(e, B, f);
mpz_divexact(f, A, f);

if(mpz_cmp_ui(f, 11) < 0) {
	i = (2520 * mpz_get_ui(e)) / mpz_get_ui(f);
	return 1;
	}
	
return 0;
}


void SINT(gmp_ui &j, int256 NUM, gmp_ui *div, gmp_ui *sum, int z1) {
	while(!(NUM % div[z1])) z1 += 2;
	if((NUM % div[--z1])) z1--;
	j = sum[z1];
}

/*
void SMPZ(int256 j, int256 NUM, int256 *div, int256 *sum, int z2) {//Aici e aici.
//Cu 3, de la 9.
	while(mpz_divisible_p(NUM, div[z2])) z2 += 2;
	if(!mpz_divisible_p(NUM, div[--z2])) z2--;
	mpz_set(j, sum[z2]);
}


void SMPZ1(int256 j, int256 NUM, int256 *div, int256 *sum, int z2) {
	while(mpz_divisible_p(NUM, div[z2])) z2 += 2;
	z2 += (!mpz_divisible_p(NUM, div[--z2])? 0 : 1);
	mpz_set(j, sum[z2]);
}*/


//1667, primul număr prim care lipsește.
int MODPINTSUS(int256 NUM, gmp_ui coef, gmp_ui j, gmp_ui k, gmp_ui k1, int N, gmp_ui *div, gmp_ui *sum) {
	while(!(NUM % div[j])) j += 2;
	(NUM % div[--j])? j = sum[j] : ++j = sum[j];
	return CMMDC2(j-1, j-1, k, (j-1)%k) * CMMDC2(k1, k1, j, k1%j) < N;
}


int MODPINTJOS(int256 NUM, gmp_ui j, gmp_ui k, gmp_ui k1, int N, gmp_ui *div, gmp_ui *sum) {	
	SINT(j, NUM, div, sum, 3);
	return CMMDC2(j, j, k, j%k) * CMMDC2(k1, k1, j-1, k1%(j-1)) < N;
}

/*
int MODPMPZSUS(int256 NUM, gmp_ui coef, int256 j, int256 e, gmp_ui k, gmp_ui k1, int N, int256 *div, int256 *sum) {
	SMPZ1(j, NUM, div, sum, 2);
	mpz_sub_ui(e, j, 1);
	k = N * mpz_gcd_ui(NULL, e, k) * mpz_gcd_ui(NULL, j, k1);
	mpz_mul_ui(e, e, k1);
	return mpz_cmp_ui(e, k) < 0;//1
	//return mpz_cmp_ui(e, mpz_gcd_ui(NULL, e, k) * mpz_gcd_ui(NULL, j, k1) * (N / (long double)k1)) < 1;
}


int MODPMPZJOS(int256 NUM, gmp_ui coef, int256 j, gmp_ui k, gmp_ui k1, int N, int256 *div, int256 *sum) {
	SMPZ(j, NUM, div, sum, 3);
	coef = mpz_gcd_ui(NULL, j, k);
	mpz_sub_ui(j, j, 1);
	coef *= N * mpz_gcd_ui(NULL, j, k1);
	mpz_mul_ui(j, j, k1);
	return mpz_cmp_ui(j, --coef) < 0;//1
	//return mpz_cmp_ui(j, coef * mpz_gcd_ui(NULL, j, k1) * (N / (long double)k1) - 1) < 1;
}*/


void CIT(fstream &f1, int256 *a, int a1, int b1, int &e, const char *t) {
f1 = fopen(t, "r");
char t1, Y[1920];

while(1) {
	fgets(Y, 1920, f1);
	if(strlen(Y) > (b1+1))
		break;
		
	if(strlen(Y) > (a1+1)) {
		mpz_init_set_str(a[e++], Y, 10);
		}
	}

f1.close();
}


void CIT1(fstream &f1, int256 *a, int a1, int &e, const char *t, gmp_ui PP) {
f1 = fopen(t, "r");
char t1, Y[1920];

while(1) {
	fgets(Y, 1920, f1);
	if(strlen(Y) > (a1+1)) {
		mpz_set_str(a[e++], Y, 10);
		}
		
	if(PP == f1.tellg())
		break;
	}

f1.close();
}


void PARTDEPL(fstream &f1, char *Y, int i) {
	for(int e = 0; e < i; e++) {
		fgets(Y, 1920, f1);
	}
}

void CITLIM(fstream &f1, int256 *a, int a1, int b1, int &e, const char *t, gmp_ui L, gmp_ui PP, long M, long N) {
f1 = fopen(t, "r");
char t1, Y[2000];
if(L)	
	URC(f1, a1+2, Y, t1, L, PP, ':');

if(M) {
	PARTDEPL(f1, Y, M);
	}

while(1) {
	fgets(Y, 1920, f1);
	if( (strlen(Y) > (b1+1)) || (e == N) )
		break;
		
	if(strlen(Y) > (a1+1)) {
		mpz_init_set_str(a[e], Y, 10);
		if(mpz_cmp_ui(a[e], 0)) e++;
		}
	}

printf("%ld\n", f1.tellg());
f1.close();
}


void CITLIM1(fstream &f1, int256 *a, int a1, int &e, const char *t, gmp_ui L, gmp_ui PP, long M, long N) {
f1 = fopen(t, "r");
char t1, Y[2000];
putchar('\n');
putchar('\n');
if(L)
	URC(f1, a1+2, Y, t1, L, PP, ':');

if(M) {
	PARTDEPL(f1, Y, M);
}

while(1) {
	fgets(Y, 1920, f1);
	if(strlen(Y) > (a1+1)) {
		mpz_set_str(a[e], Y, 10);
		if(mpz_cmp_ui(a[e], 0)) e++;
		}
		
	if( (PP == f1.tellg()) || (e == N))
		break;
	}

printf("%ld\n", f1.tellg());
f1.close();
}


void REN(int &i, const char *t, const char *u) {
i = remove(u);
i = rename(t, u);
}


int PREZ2(gmp_ui a, gmp_ui *b, int c, int d) {
while(1) {
	if(!(c-- ^ d))
		break;
	if(b[c] == a)
		return 1;
	}
	
return 0;
}


int PREZ3(gmp_ui a, gmp_ui *b, int &c, int d) {
while(1) {
	if(!(c-- ^ d))
		break;
	if(b[c] == a)
		return 1;
	}
	
return 0;
}


int PREZI(int a, int *b, int &c, int d) {
while(1) {
	if(!(c-- ^ d))
		break;
	if(b[c] == a)
		return 1;
	}
	
return 0;
}


int PREZM(int256 a, int256 *b, int c, int d) {
while(1) {
	if(!(c-- ^ d))
		break;
	if(b[c] == a)
		return 1;
	}
	
return 0;
}


int GAS(gmp_ui *y, gmp_ui n, int Y) {
while(1)
	if(y[--Y] == n)
		break;
return Y;
}


int GAS2(gmp_ui *A2, gmp_ui u, int W) {
	for(; W >= 0; W--)
		if(u == A2[W]) break;
return W;
}

int GAS3(gmp_ui *A2, gmp_ui u, int W, int W1) {
	for(; W > W1;)
		if(u == A2[--W]) break;
return W;
}


void SCRIE(int256 a, char *Y, fstream &f2) {
//mpz_get_str(Y, 10, a);
//fputs(Y, f2);
//fputc('\n', f2);
f2<<a<<endl;
}


void SCRIE1(char *Y, fstream &f2) {
fputs(Y, f2);
fputc('\n', f2);
}


void SCRIE2(int256 a, fstream &f2) {
gmp_fprintf(f2, "%Zd\n", a);
}

/*
void FACTDIV1(int256 a, int256 e, int256 f, gmp_ui &c, int &d) {

mpz_set_ui(e, c);
d = 0;

while(1) {
	if( !mpz_divisible_p(a, e) )
		break;
	mpz_mul_ui(e, e, c);
	++d;
	}

printf("%llu", c);
d == 1? printf(" * ") : printf("^%d * ", d);

if(d == 1) {
	mpz_divexact_ui(a, a, c);
	mpz_mul_ui(f, f, c+1);
	return;
	}

mpz_mul_ui(a, a, c);
mpz_divexact(a, a, e);		
mpz_divexact_ui(e, e, c-1);
mpz_mul(f, f, e);
}


void FACTDIV2(int256 a, int256 h, int256 e, int256 e1, int256 f, int &d) {

mpz_set(h, e1);
d = 0;

while(1) {
	if( !mpz_divisible_p(a, h) )
		break;	
	mpz_mul(h, h, e1);
	++d;
	}

gmp_printf("%Zd ", e1);
d == 1? printf(" * ") : printf("^%d * ", d);

mpz_mul(a, a, e1);
mpz_divexact(a, a, h);
mpz_sub_ui(e, e1, 1);
mpz_divexact(h, h, e);
mpz_mul(f, f, h);
}


void FRACTDIV1(int256 a, int256 b, int256 e, int256 f, gmp_ui &c, int &d) {

mpz_set_ui(e, c);
d = 1;

while(1) {	
	mpz_mul_ui(e, e, c);
	if( !mpz_divisible_p(a, e) )
		break;
	++d;
	}

printf("%llu", c);
d == 1? printf(" * ") : printf("^%d * ", d);

if(d == 1) {
	mpz_mul_ui(b, b, c);
	mpz_mul_ui(f, f, c+1);
	return;
	}

mpz_mul(b, b, e);
mpz_divexact_ui(b, b, c);
mpz_divexact_ui(e, e, c-1);
mpz_mul(f, f, e);
}


void FRACTDIV2(int256 a, int256 b, int256 h, int256 e, int256 e1, int256 f, int &d) {

mpz_set(h, e1);
d = 1;

while(1)
	{	
	mpz_mul(h, h, e1);
	if( !mpz_divisible_p(a, h) )
		break;
	++d;
	}

gmp_printf("%Zd ", e1);
d == 1? printf(" * ") : printf("^%d * ", d);

mpz_mul(b, b, h);
mpz_divexact(b, b, e1);
mpz_sub_ui(e, e1, 1);
mpz_divexact(h, h, e);
mpz_mul(f, f, h);	
}*/


int NUME(const char *CIT) {
int n1 = 0, n2, n3;
while(1 == sscanf(CIT + n1, "%*[^0123456789]%d%n", &n2, &n3)) {
	n1 += n3;
	}

return n2;
}


void ADTEXT(const char *t1, const char *t2) {

fstream &F1 = fopen(t1, "a");
fstream &F2 = fopen(t2, "a");
long P = ftell(F2);
F2.close();

F2 = fopen(t2, "r");
CITR(8330000, F1, F2, P);
F1.close();
F2.close();
}

/*
void TEXTSAR(char t, char *Q, int jos, int sus, unsigned long &PP, const char *t1, const char *t2) {

fstream &F1, *F2;
long P, P1;

F1 = fopen(t1, "a");
PP = ftell(F1);
F1.close();

F1 = fopen(t1, "r");
P = URC1(F1, jos, Q, t, 500000000L, PP, ':');
F1.close();

F1 = fopen(t1, "r");
P1 = URC1(F1, sus, Q, t, 500000000L, PP, ':');
F1.close();

PP = P1;
F1 = fopen(t1, "r");
F2 = fopen(t2, "a");

fseek(F1, P, SEEK_CUR);
P1 -= P;

CITR(8330000, F2, F1, P1);
F1.close();
F2.close();
}


void FACTORI(gmp_ui *b, int i, int &I, int &J, int &V, int num) {

fstream &f1 = fopen("/PA.TXT", "r");
J = 0;

while(1) {
	fscanf(f1, "%d", &I);
	if(feof(f1))
		break;
	J++;
	}

f1.close();
I = i + J - 1;
V = J;
J += num;
		
for(; I>=J; I--)
	b[I] = b[I-V];
	
J = V;	
V = num;
f1 = fopen("/PA.TXT", "r");
		
while(1) {
	fscanf(f1, "%d", &I);
	if(feof(f1))
		break;
	b[V++] = I;		
	}
	
V = num;
f1.close();
}


void FACTOR(gmp_ui *b, int &I, int &D) {

fstream &f1 = fopen("/PA.TXT", "r");
int i = D;

while(1) {
	fscanf(f1, "%d", &I);
	if(feof(f1))
		break;
	b[D++] = I;			
	}				
		
f1.close();
I = i;
}


void MARG1(int256 *a, int256 d, int &e, int &l, int &I, int &R, int un, int doi) {
mpz_mul_ui(d, a[l], doi);
	while(mpz_cmp(a[R], d) > 0)
		--R;	
mpz_mul_ui(d, a[e], un);
I = R;
	while(mpz_cmp(a[I], d) > 0)
		--I;
}


void MARG2(int256 *a, int256 d, int &I, int &R, int &l, int &m, int un, int doi) {
int256div_q_ui(d, a[l], un);
R = l;
while( (mpz_cmp(a[R], d) > 0) && R)
	--R;		
int256div_q_ui(d, a[m], doi);
I = m;
while( (mpz_cmp(a[I], d) > 0) && I)
	--I;
}*/


void INTEROGARE(char &t) {
printf("Sus sau jos? 'a' sau 's'.\n");
while(1) {
	scanf("%c", &t);
	if( (t == 'a') || (t == 's') )
		break;
		}
}

//PUTERITOT: K=17, 38 la ACTUAL
//PUTERI420: K=3
//PUTERI240: K=2
//PUTERI160: K=0, 1, 4 la ACTUAL
//PUTERI130: K=0, 4
//PUTERI100, <100: K = 0

int ZER(fstream &L1, int &d, int &q) {
fscanf(L1, "%d", &d);
q = 0;
return d;
}


void PUTERE(gmp_ui &a, gmp_ui b, int n) {
a = 1;

while(1) {
	if( !(n&1) )
		{
		b*=b;
		n>>=1;
		}
	else
		{
		a*=b;
		--n;
		}
	if(!n)
		break;	
	}
}


void PUTEREA(const char *t1, const char *u) {

fstream &L1 = fopen(t1, "r"), *L2 = fopen(u, "w");
int256 Q[360], z;
int R[657], d = 0, n = 0, p = 0, q = 1, r = 0, s = 0;
char t;
n = 0;

while(1) {
	//s < 5?
		//(q? R[r++] = ZER(L1, d, q) : fscanf(L1, "%c", &t)) : gmp_fscanf(L1, "%Zd", Q[p++]);
	if(s < 5) {
		if (q == 1)
			{
			fscanf(L1, "%d", &R[r++]);
			q = s == 3? 2 : 0;
			}
		else	{
			fscanf(L1, "%c", &t);
			if(t == ' ')
				s++;
			if(t == '\n') {
				s = 0;
				q = 1;
				}
			}
		}
	else	{
		s = 0;
		gmp_fscanf(L1, "%Zd", Q[p++]);
		}
		
	if(feof(L1))
		break;

	if(!q && (s == 3))//20, 21, 22, 23: 11; 24, 25, 26, 27: 13
		q = 1;
	}

printf("%d %d\n", r, p);

for(n = 0; n < p; n++) {
	s = n+n;
	gmp_printf("%d %d %Zd\n", R[s], q, Q[n]);
	q = (R[s + 1]) >> 1;
	if(!(q & 1))
		q++;
	mpz_ui_pow_ui(z, R[s], q);
	gmp_fprintf(L2, "%d la puterea %d este %Zd.\n", R[s], q, z);
	}
	
for(p = 0; p < 360; p++)
	mpz_clear(Q[p]);
mpz_clear(z);	
fclose(L1);
fclose(L2);
}


void FACTORMATR(const char *P, const char *t1, const char *u, const char *w, char spec) {
char t, s1[25], v[25], x[25];

strcpy(s1, t1);
strcpy(v, u);
strcpy(x, w);
strcat(s1, P);
strcat(v, P);
strcat(x, P);

if(spec == 'S')	{
	strcat(v, "S");
	strcat(x, "S");
	}
else
	{
	strcat(v, "J");
	strcat(x, "J");
	}

strcat(s1, ".TXT");	
strcat(v, ".TXT");
strcat(x, ".TXT");
printf("%s, %s, %s.\n", s1, v, x);

fstream &L1 = fopen(s1, "r"), *L2 = fopen(v, "w"), *L3 = fopen(x, "w");
int256 Q[360], z;
int R[657], d = 0, n = 0, p = 0, q = 1, r = 0, s = 0;
n = 0;

while(1) {	
	if(s < 5) {
		if (q == 1) {
			fscanf(L1, "%d", &R[r++]);
			q = s == 3? 2 : 0;
			}
		else	{
			fscanf(L1, "%c", &t);
			if(t == ' ')
				s++;
			if(t == '\n') {
				s = 0;
				q = 1;
				}
			}
		}
	else
		{
		s = 0;
		gmp_fscanf(L1, "%Zd", Q[p++]);
		}
		
	if(feof(L1))
		break;

	if(!q && (s == 3))//20, 21, 22, 23: 11; 24, 25, 26, 27: 13
		q = 1;
	}

printf("%d %d\n", r, p);
d = 0;
int L[12] = {3, 2, 3, 2, 2, 2, 2, 2, 1, 2, 2, 1};

if(spec == 'S')//'S' sau 'J', sus sau jos
	goto s1;
else
	goto s2;

s1:

for(n = p-1; n >= 0; n--) {
	s = (n<<1);
	q = R[s+1];
	
	if (n < 12 && ( (R[s] ^ 398581 ) 
	&& (R[s] ^ 100801 ) && (R[s] ^ 22366891) ) )
		q += L[n];
	d += q;
	fprintf(L3, "%d\n", q);

	for(r=1; r<=q; r++)
		{
		mpz_ui_pow_ui(z, R[s], r);
		gmp_fprintf(L2, "%Zd ", z);
		}
	fprintf(L2, "%c", '\n');
	}

printf("%d\n", d);
goto fin;

s2:
for(n = 0; n < p; n++) {
	s = (n << 1);
	q = R[s+1];		
	d += q;
	fprintf(L3, "%d\n", q);

	for(r = 1; r <= q; r++)	{
		mpz_ui_pow_ui(z, R[s], r);
		gmp_fprintf(L2, "%Zd ", z);
		}
	fprintf(L2, "%c", '\n');
	}

printf("%d\n", d);

fin:	
for(p = 0; p < 360; p++)
	mpz_clear(Q[p]);
mpz_clear(z);	
fclose(L1);	
fclose(L2);
fclose(L3);
}


int DESC(gmp_ui a, gmp_ui *b1, gmp_ui *A3, int &u1) {
for(int i = 0; b1[i] < a; i++)
	if(!(a % b1[i])) {
		A3[u1++] = b1[i];
		}

return u1;
}


void ARANJFACT(int u, int D, gmp_ui *b, gmp_ui *b1, int &u1, int f, gmp_ui *A2, gmp_ui *A3, int I) {//A2 cu factorii, A3 cu primele.
for(u = 0; u < D; u++)
	b1[u] = b[u];

QS2(b1, 0, D);
u1 = 0;
for(I = 0; I < f; I++)
	u1 = DESC(A2[I], b1, A3, u1);

QS2(A3, 0, u1);
A3[u1] = A3[u1 - 1] + 1;
I = u1 + 1;
u1 = 0;

for(int i = 0; i < I-1; i++)
if(A3[i] < A3[i+1]) {
	A3[u1++] = A3[i];
	}
}


void HVEC(int &f, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int *A4, gmp_ui *b, gmp_ui *b1, int e, int H, int &u1) {

int i = 0, j, k = 0;

for(e = 0; e < H; e++)
	b1[e] = b[e];

QS2(b1, 0, H);
printf("\nf și u1, %d cu %d. Suntem între vectorii nefiltrați.\n", f, u1);

for(e = 0; e < u1; e++) {
	printf("%llu ", A3[e]);
	A4[e] = CBIN(b1, A3[e], 0, H);
	}
	
for(e = 0; e < f; e++) {
	for(j = 0; j < u1; j++)
		if(A4[j] && !(A2[e] % A3[j])) {
			j = -1;
			break;
		}
	
	if(j ^ -1)
		A1[i++] = A2[e];	
	}

for(e = 0; e < i; e++)
	A2[e] = A1[e];
	
for(e = 0; e < u1; e++)
	if(!A4[e]) A3[k++] = A3[e];
f = i;
u1 = k;

printf("\nf și u1, %d cu %d. Vectorii filtrați: \n", f, u1);
for(i = 0; i < f; i++)
	printf("%llu ", A2[i]);
printf("\n\n");
for(i = 0; i < u1; i++)
	printf("%llu ", A3[i]);
printf("\n\n");
}


void CF(int t) {
char c1[20];
sprintf(c1, "/CF%d.TXT", t);
fstream &H4 = fopen(c1, "r");
int256 G1;
int I = 0, I1 = 0;

gmp_ui S = 0;
--S;

while(1) {
	gmp_fscanf(H4, "%Zd", &G1);
	if(feof(H4))
		break;

	if(mpz_cmp_ui(G1, S) >0)
		I1++;
	if(I1 == 1)
		printf("%d\n", I);
	++I;
	}
	
printf("%d\n", I);
mpz_clear(G1);
fclose(H4);
}


int PUTEREA1() {

fstream &L1 = fopen("/PUTERI.TXT", "r");
int256 Q[360];
int n = 0, p = 0;
gmp_ui R = 18446744073709551615U;
char t;
n = 0;

while(1) {
	n < 4?
		fscanf(L1, "%c", &t) : gmp_fscanf(L1, "%Zd", Q[p++]);
	if(feof(L1))
		break;
		
	if(n == 4)
		n = 0;
	if( (t == 's') || (n) )
		n++;		
	}

for(n = p-1; n >= 0; --n) {
	int i = mpz_cmp_ui(Q[n], R);
	if (i > 0)
		break;
	}


if(++n) {
	printf("%d\n", n);
      }

for(p = 0; p < 360; p++)
	mpz_clear(Q[p]);
fclose(L1);

return n;
}

/*
void VECUN2() {

int256 e, A, unu;
gmp_ui d;
int l;
fstream F1, F2;
char s[512];

F1.open(GIGTEXT, ios::in);
F2.open("N1.TXT", ios::out);
l = 0;
mpz_ui_pow_ui(A, 10, 52);
d = 18446744073709551615U;

while(1) {
	gmp_fscanf(F1, "%Zd", e);
	CONV512(F1, s, e);
	if(e > A)
		break;
		
	int256div_q_2exp(unu, e, mpz_scan1(e, 0));
	
	if(unu <= d) {
		F2<<e<<endl;
		++l;
		}
	}

F1.close();
F2.close();
printf("%d\n", l);
}*/


void TXT(int sus, char *TEXT) {
	if(strlen(TEXT) > 8)
		goto s1;

	if(sus < 53)
		strcpy(TEXT, "/run/media/root/6TB/GIG52.TXT");
	else
	if(sus < 81)
		strcpy(TEXT, "/run/media/root/10TB/GIG80.TXT");
	else
	if(sus < 101)
		strcpy(TEXT, "/run/media/root/10TB/GIG100.TXT");
	else
	if(sus < 116)
		strcpy(TEXT, "/run/media/root/12TB/GIG115.TXT");
	else
	if(sus < 131)
		strcpy(TEXT, "/run/media/root/8TB/GIG130.TXT");
	else
	if(sus < 161)
		strcpy(TEXT, "/run/media/root/12TB/GIG160.TXT");
	else
	if(sus < 241)
		strcpy(TEXT, "/run/media/root/10TB/GIG240.TXT");
	else
	if(sus < 421)
		strcpy(TEXT, "/run/media/root/12TB/GIG420.TXT");
	else
	if(sus < 1911)
		strcpy(TEXT, "/run/media/root/12TB/GIG1910.TXT");
s1:
	printf("Textul este %s.\n", TEXT);
}


gmp_ui LITUAN(int256 *a, char *tx) {
	fstream &FLIT = fopen(tx, "a");
	gmp_ui D = ftell(FLIT);
	fclose(FLIT);
	if(D < 100) return 0;
	FLIT = fopen(tx, "r");
	int V = 0;
	char Y[2000];
	printf("%llu\n", D);
	//D--;//La gmp_fscanf.
	
	while(1) {
		fgets(Y, 2000, FLIT);
		mpz_set_str(a[V], Y, 10);
		//gmp_fscanf(FLIT, "%Zd", a[V]);
		if(mpz_cmp_ui(a[V], 0) > 0) ++V;
		if(! (ftell(FLIT) ^ D) ) break;
	}
	
	fclose(FLIT);
	if(V==1) return 0;
	int256 b;
	HS(a, b, V);
	mpz_ui_pow_ui(a[V], 10, 1910//NUME(argv[1]) + 1
	);

	D = 0;
	mpz_get_str(Y, 10, a[0]);
	int n = strlen(Y);
	mpz_get_str(Y, 10, a[1]);
	if(strlen(Y) - n > 3)
		D = 1;
	
	while(!mpz_cmp_ui(a[D], 0)) ++D;

	FLIT = fopen(tx, "w");
	for(; D < V; D++) {
		if(mpz_cmp(a[D], a[D+1]) < 0)
			SCRIE(a[D], Y, FLIT);
	}
	
	fclose(FLIT);
	FLIT = fopen(tx, "a");
	D = ftell(FLIT);
	fclose(FLIT);
	REN2(tx);
	return D;
}


void LITUAN2(char A[][DIMM], fstream &FLIT, long D, char *tx, int min, int max) {//return;//De separat; ideal - de separat și LITUAN-ul de la VECUNG de actualizarea fișierelor.
	char Y[DIMM];
	if(D < 100) return;
	long V = 0;
	long long prod = N1;
	prod *= DIMM;

	while(1) {
		fgets(A[V++], 1920, FLIT);
		if(!(ftell(FLIT) ^ D)) break;
	}
	printf("%d %ld\n", N1, V);
	printf("%s lung de %llu - cifre de la %d la %d. Are %d %selemente.\nVectorul: %ld * %ld = %lld sau %.2lf GiB.\n", tx, D, min-1, max-1, V, PREP(V), N1, DIMM, prod, prod / 1073741824.0);
	prod = V;
	prod *= DIMM;
	printf("Ocupat: %ld * %ld = %lld sau %.2lf GiB.\n", V, DIMM, prod, prod / 1073741824.0);
	
	fclose(FLIT);
	if( (V == 1) || (N1 <= V) ) {
		printf("Elemente insuficiente.\n");
		return;	
	}

	HSS(A, Y, V);
	for(int i1 = 0; i1 < max-2; i1++)//1910
		Y[i1] = '9';

	Y[max-2] = ':';
	Y[max-1] = '\n';
	strcpy(A[V], Y);
	FLIT = fopen(tx, "w");

	for(int i1 = min; i1 <= max; i1++) {
		D = 0;
		while(D ^ V) {
			if( (strlen(A[D]) == i1) && (strcmp(A[D], A[D+1]) < 0) ) {
				fputs(A[D], FLIT);
				}
			++D;
			}
	}

	fclose(FLIT);
}


void TRUNC(long PP, char *t2, int c) {
	char com[100];
	sprintf(com, "truncate --size=%ld %s", PP - c, t2);
	system(com);
}


void RAT(fstream &f1, int a1, int b1, char *Y, char &w1, unsigned long P, unsigned long &PP, unsigned long &PP1, int mod, char p1, char p2, int num) {
	PP = f1.tellg();
	PP1 = URC1(f1, b1, Y, w1, 500000000L, P, (mod ^ 2? ':' : p2) );
	printf("PP = %lu , PP1 = %lu .\n", PP, PP1);
	fseek(f1, PP - PP1, SEEK_CUR);
	printf("%ld\n", f1.tellg());
}


int CALCMINMAX(int &min, int &max, int &z, int &c, fstream &f1, long PP, char *S) {
	do {
	fgets(S, 1920, f1);
	z = strlen(S);
	} while(z < 4);

	c = (PP < 200000? (int)PP : ( PP < 1000000? 200000 : 600000) );

	while(1) {
		fgets(S, 1920, f1);
		if((strlen(S) < z) && (strlen(S) > 3))
			z = strlen(S);
		if(f1.tellg() >= c)
			break;
		}

	min = z-1;
	fseek(f1, PP - f1.tellg() - c, SEEK_CUR);
	z = 0;

	while(1) {
		fgets(S, 1920, f1);
		if( (strlen(S) > z) && (1919 > strlen(S)) )
			z = strlen(S);
		if(f1.tellg() >= PP)//>=, ==
			break;
		}

	max = z-1;

return 0;
}


gmp_ui PREGTEXT(fstream &FLIT, gmp_ui n, int dim, gmp_ui D, int min, int max, char *Y, char *tx) {
	gmp_ui num = n;
	num *= dim;
	if(num > 132300000000U) {
		printf("Prea mare.\n");
		return 0;
	}
	
	FLIT = fopen("/LITUAN2.h", "w");
	sprintf(Y, "#define N1 %lluU\n", n);
	fputs(Y, FLIT);
	sprintf(Y, "#define DIMM %dU\n", dim);
	fputs(Y, FLIT);
	sprintf(Y, "#define LN %lluU\n", D);
	fputs(Y, FLIT);
	sprintf(Y, "#define MIN %d\n", min);
	fputs(Y, FLIT);
	sprintf(Y, "#define MAX %d\n", max);
	fputs(Y, FLIT);

	fclose(FLIT);
	system("rm LITUAN2");
	system("g++ -mavx512f /LITUAN2.cc -lgmp -o /LITUAN2");
	sprintf(Y, "/LITUAN2 %s", tx);
	system(Y);	
	FLIT = fopen(tx, "a");
	num = ftell(FLIT);
	fclose(FLIT);
	if(num == D) {//LITUAN2 a eșuat, dimensiunea nu s-a schimbat în sortare.
		return 0;
	}
	REN2(tx);
	return num;
}


long MANUCE(fstream &f1, char *t2, long PP, char *S, int c, int max) {
	gmp_ui b[D1], b1[D1], div1[H1-K2][MAX2], sum1[H1-K2][MAX2], M[360];
	int256 C[E1], C1[E1], div[K2][MAX1], sum[K2][MAX1], D2, d1, e1;
	int D, E, H, K, I, L;

	GENERARE2(1910, b, C, D, H, E, K, I, L, 1);
	UNIFACTUS(1910, b, b1, C, C1, D, E, H, K, div, sum, div1, sum1, 1);
	
	f1 = fopen(t2, "r+");
	fseek(f1, PP - 8000, SEEK_CUR);

	do {
		fgets(S, 1920, f1);
	} while(PP > f1.tellg());

	c = strlen(S);
	
	if(c < max) {
		fseek(f1, PP-c, SEEK_SET);
		TRUNC(PP, t2, c);
	} else {
		if(S[c - 1] != '\n') {
			++c;
			fputc('\n', f1);
			}

		mpz_set_str(D2, S, 10);
		SUMADIV(D2, e1, C, C1, b, b1, D, E, H, K, mpz_scan1(D2, 0), div1, sum1, div, sum);
		if( (!( (mpz_cmp(e1, D2) == 1) && (VALID4(D2, d1, e1) == 1) ) ))
			{fseek(f1, -c, SEEK_CUR);}
		}

	mpz_ui_pow_ui(D2, 10, 1917);
	mpz_add_ui(D2, D2, 1);
	SCRIE(D2, S, f1);
	PP = f1.tellg() - strlen(S);
	f1.close();
	
	mpz_clears(D2, d1, e1, NULL);
	for(L = 0; L < E1; L++) {
		mpz_clears(C[L], C1[L], NULL);
	}

	return PP;
}


void REN2(char *tx) {
	char t[100], t1 = tx[strlen(tx) - 1];
	
	if( (t1 == '0') || (t1 == '1')) {//0 sau 1.
		strcpy(t, tx);
		t[strlen(tx) - 1] = '\0';
		rename(tx, t);
		tx[strlen(tx) - 1] = '\0';
	}
}


void VERIFSUM(int256 A, int256 B, int i, int256 *div, int256 *sum) {//E cu 3, merge de la 9.
	while(!(A % div[i])) i += 2;//Maximum 81 (3), ajunge la 729 (5).
	if((A % div[--i])) i--;//Nu 243? Atunci 81.
	//i -= (1 + !mpz_divisible_p(A, div[i-1]));
	B *= sum[i];
}


void VERIFSUM2(int256 A, int256 B, int i, gmp_ui *div, gmp_ui *sum) {
	while(!(A % div[i])) i += 2;
	if((A % div[--i])) i--;
	//i -= (1 + !mpz_divisible_ui_p(A, div[i-1]));
	B *= sum[i];
}

/*
//Peste 160:
void SUMADIV(int256 A, int256 B, int320 *C, int320 *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1]) {
mpz_set_ui(B, 0);
mpz_setbit(B, ++d);
mpz_sub_ui(B, B, 1);
d = H;

while(1) {
	if(!K--)
		break;
	if(!(A % b[--d])) {
		VERIFSUM(A, B, 2, div[K], sum[K]);		
		}
	}

while(1) {
	if(!d--)
		break;
	if(!(A % b[d])) {
		VERIFSUM2(A, B, 2, div1[d], sum1[d]);
		}
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(!(A % b[D]))	{
		B *= b1[D];
		if(B == A)
			return;
		}
	}

while(1) {
	if(!E--)
		break;
	if(!(A % C[E])) {
		B *= C1[E];
		if(B == A)
			return;
		}
	}
}


void SUMADIV1(int256 A, int256 B, int320 *C, int320 *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1]) {
mpz_set_ui(B, 0);
mpz_setbit(B, ++d);
mpz_sub_ui(B, B, 1);
if( !(d ^ 89) || !(d ^ 107) || !(d ^ 127) ) B <<= d;
d = H;

while(1) {
	if(!K--)
		break;
	if(!(A % b[--d])) {
		VERIFSUM(A, B, 2, div[K], sum[K]);
		}
	}

while(1) {
	if(!d--)
		break;
	if(!(A % b[d])) {
		VERIFSUM2(A, B, 2, div1[d], sum1[d]);
		}
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(!(A % b[D]))	{
		mpz_mul_ui(B, B, b1[D]);
		B *= b1[D];
		if(B == A)
			return;
		}
	}

while(1) {
	if(!E--)
		break;
	if(!(A % C[E])) {
		B *= C1[E];
		if(B == A)
			return;
		}
	}
}
*/

//Sub 161:
void NUMSUM(int256 A, int256 B, gmp_ui *b, gmp_ui *b1, int D, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1], int256 divdoi, int256 sumdoi) {
DOI(A, B, divdoi, sumdoi, 1);

if( !(d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	B <<= d;
	}

d = H;
while(1) {
	if(!K--)
		break;
	if(!(A % b[--d])) {
		VERIFSUM(A, B, 2, div[K], sum[K]);
		}
	}
	
while(1) {
	if(!d--)
		break;
	if(!(A % b[d])) {
		VERIFSUM2(A, B, 2, div1[d], sum1[d]);
		}
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(!(A % b[D]))	{
		B *= b1[D];
		if(B > A)
			return;
		}
	}
}


//Sub 100/130:
void NUMSUM1(int256 A, int256 B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2]) {
DOI(A, B, divdoi, sumdoi, 1);

if( !(d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_mul_2exp(B, B, d);
	}

d = H;	
while(1) {
	if(!d--)
		break;
	if(!(A % b[d])) {
		VERIFSUM2(A, B, 2, div1[d], sum1[d]);
		}
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(!(A % b[D]))	{
		B *= b1[D];
		if(B > A)
			return;
		}
	}
}


//Sub 53:
void SM(int256 A, int256 B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui e) {//e = 2
mpz_set_ui(B, (e<<d) - 1);
d = H;
	
while(1) {
	if(!d--)
		break;
	if(!(A % b[d])) {
		VERIFSUM2(A, B, 2, div1[d], sum1[d]);
		}
	}

if(B == A)
	return;

while(1) {
	if(!(D-- ^ H))
		break;
	if(!(A % b[D]))	{
		B *= b1[D];
		if(B > A)
			return;
		}
	}
}


void SUM(int256 A, int256 B, int256 *divdoi, int256 *sumdoi, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int D, int E, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2]) {
DOI(A, B, divdoi, sumdoi, 1);

d = d1;
while(1) {
	if(!d--)
		break;
	if(!(A % b[d])) {		
		VERIFSUM2(A, B, 2, div1[d], sum1[d]);
		}
	}

while(1) {
	if(!(D-- ^ d1))
		break;		
	if(!(A % b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(B > A)
			return;
		}
	}

while(1) {
	if(!E--)
		break;
	if(!(A % C[E])) {
		B *= C1[E];
		if(B > A)
			return;
		}
	}		
}


void SUM1(int256 A, int256 B, int256 *divdoi, int256 *sumdoi, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int D, int E, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2) {
DOI(A, B, divdoi, sumdoi, 1);
d = d1;

while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(A, b[d]))	{
		VERIFSUM2(A, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}
while(1) {
	if(!(D-- ^ d1))
		break;
		
	if(mpz_divisible_ui_p(A, b[D]))	{
		B *= b1[D];
		}
	}

while(1) {
	if(!E--)
		break;
	B *= C1[E];
	}	
}

/*
void SUMDIVMOD(int256 A, int256 B, int256 unu, int256 doi, int256 trei, int256 d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1], int320 *C, int320 *C1, int E, int K, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, int256 nm, int256 nr) {

mpz_set_ui(nm, 0);
mpz_setbit(nm, d++);
mpz_set_ui(nr, 0);
mpz_setbit(nr, d);
mpz_sub_ui(nr, nr, 1);
mpz_set(doi, nm);
d = d1;

while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(A, b[--d])) {
		e = 2;		
		while(mpz_divisible_p(A, div[K][e])) e += 2;
		if(!mpz_divisible_p(A, div[K][--e])) e--;
		mpz_mul(doi, doi, div[K][e]);
		mpz_gcd(d2, nm, sum[K][e]);
		mpz_gcd(trei, nr, div[K][e]);
		mpz_divexact(nm, nm, d2);
		mpz_divexact(nr, nr, trei);
		mpz_divexact(B, div[K][e], trei);
		mpz_mul(nm, nm, B);		
		mpz_divexact(B, sum[K][e], d2);
		mpz_mul(nr, nr, B);
	}
}

while(1) {
	if(!d--)
		break;	
	if(mpz_divisible_ui_p(A, b[d]))	{
		e = 2;		
		while(mpz_divisible_ui_p(A, div1[d][e])) e += 2;
		if(!mpz_divisible_ui_p(A, div1[d][--e])) e--;
		k = div1[d][e];
		e = sum1[d][e];
		mpz_mul_ui(doi, doi, k);
		mpz_gcd_ui(d2, nm, e);
		mpz_gcd_ui(trei, nr, k);
		j1 = mpz_get_ui(d2);
		j2 = mpz_get_ui(trei);
		
		mpz_divexact_ui(nm, nm, j1);
		mpz_divexact_ui(nr, nr, j2);
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);
		}
	}

while(1) {
	if(!(D-- ^ d1))
		break;
	if(mpz_divisible_ui_p(A, b[D]))	{
		e = b1[D];
		mpz_mul_ui(doi, doi, b[D]);
		mpz_gcd_ui(d2, nm, e);
		mpz_gcd_ui(trei, nr, b[D]);
		j1 = mpz_get_ui(d2);
		j2 = mpz_get_ui(trei);
		mpz_divexact_ui(nm, nm, j1);
		mpz_divexact_ui(nr, nr, j2);
		mpz_mul_ui(nm, nm, b[D] / j2);
		mpz_mul_ui(nr, nr, e / j1);
			
		if(!mpz_cmp(doi, A))
			return;
		}
	}

while(1) {
	if(!E--)
		break;
	if(mpz_divisible_p(A, C[E])) {
		mpz_mul(doi, doi, C[E]);
		mpz_gcd(d2, nm, C1[E]);
		mpz_gcd(trei, nr, C[E]);
		mpz_divexact(nm, nm, d2);
		mpz_divexact(nr, nr, trei);
		mpz_divexact(unu, C[E], trei);
		mpz_mul(nm, nm, unu);
		mpz_divexact(unu, C1[E], d2);
		mpz_mul(nr, nr, unu);
		
		if(!mpz_cmp(doi, A))
			return;
		}
	}
}


void SUMDIVMOD1(int256 A, int256 B, int256 unu, int256 doi, int256 trei, int256 d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1], int320 *C, int320 *C1, int E, int K, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, int256 nm, int256 nr) {

mpz_set_ui(nm, 0);
mpz_setbit(nm, d++);
mpz_set_ui(nr, 0);
mpz_setbit(nr, d);
mpz_sub_ui(nr, nr, 1);
mpz_set(doi, nm);

if( !(d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_set_ui(d2, 0);
	mpz_setbit(d2, d);
	mpz_gcd(B, nm, d2);
	mpz_sub_ui(trei, d2, 1);
	mpz_mul(doi, doi, trei);
	mpz_gcd(unu, nr, trei);
	mpz_divexact(nm, nm, B);
	mpz_divexact(nr, nr, unu);
	mpz_divexact(unu, trei, unu);
	mpz_mul(nm, nm, unu);
	mpz_divexact(B, d2, B);
	mpz_mul(nr, nr, B);
	}

d = d1;
while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(A, b[--d])) {
		e = 2;		
		while(mpz_divisible_p(A, div[K][e])) e += 2;
		if(!mpz_divisible_p(A, div[K][--e])) e--;
		mpz_mul(doi, doi, div[K][e]);
		mpz_gcd(d2, nm, sum[K][e]);
		mpz_gcd(trei, nr, div[K][e]);
		mpz_divexact(nm, nm, d2);
		mpz_divexact(nr, nr, trei);
		mpz_divexact(B, div[K][e], trei);
		mpz_mul(nm, nm, B);		
		mpz_divexact(B, sum[K][e], d2);
		mpz_mul(nr, nr, B);
	}
}

while(1) {
	if(!d--)
		break;	
	if(mpz_divisible_ui_p(A, b[d]))	{
		e = 2;		
		while(mpz_divisible_ui_p(A, div1[d][e])) e += 2;
		if(!mpz_divisible_ui_p(A, div1[d][--e])) e--;
		k = div1[d][e];
		e = sum1[d][e];
		mpz_mul_ui(doi, doi, k);
		mpz_gcd_ui(d2, nm, e);
		mpz_gcd_ui(trei, nr, k);
		j1 = mpz_get_ui(d2);
		j2 = mpz_get_ui(trei);
		
		mpz_divexact_ui(nm, nm, j1);
		mpz_divexact_ui(nr, nr, j2);
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);
		}
	}

while(1) {
	if(!(D-- ^ d1))
		break;
	if(mpz_divisible_ui_p(A, b[D]))	{
		e = b1[D];
		mpz_mul_ui(doi, doi, b[D]);
		mpz_gcd_ui(d2, nm, e);
		mpz_gcd_ui(trei, nr, b[D]);
		j1 = mpz_get_ui(d2);
		j2 = mpz_get_ui(trei);
		mpz_divexact_ui(nm, nm, j1);
		mpz_divexact_ui(nr, nr, j2);
		mpz_mul_ui(nm, nm, b[D] / j2);
		mpz_mul_ui(nr, nr, e / j1);
			
		if(!mpz_cmp(doi, A))
			return;
		}
	}

while(1) {
	if(!E--)
		break;
	if(mpz_divisible_p(A, C[E])) {
		mpz_mul(doi, doi, C[E]);
		mpz_gcd(d2, nm, C1[E]);
		mpz_gcd(trei, nr, C[E]);
		mpz_divexact(nm, nm, d2);
		mpz_divexact(nr, nr, trei);
		mpz_divexact(unu, C[E], trei);
		mpz_mul(nm, nm, unu);
		mpz_divexact(unu, C1[E], d2);
		mpz_mul(nr, nr, unu);
		
		if(!mpz_cmp(doi, A))
			return;
		}
	}
}
*/

void NUMSUMMOD(int256 A, int256 B, int256 unu, int256 doi, int256 trei, int256 d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1], int K, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, int256 nm, int256 nr) {

mpz_set_ui(nm, 0);
mpz_setbit(nm, d++);
mpz_set_ui(nr, 0);
mpz_setbit(nr, d);
mpz_sub_ui(nr, nr, 1);
mpz_set(doi, nm);

if( !(d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_set_ui(d2, 0);
	mpz_setbit(d2, d);
	mpz_gcd(B, nm, d2);
	mpz_sub_ui(trei, d2, 1);
	mpz_mul(doi, doi, trei);
	mpz_gcd(unu, nr, trei);
	mpz_divexact(nm, nm, B);
	mpz_divexact(nr, nr, unu);
	mpz_divexact(unu, trei, unu);
	mpz_mul(nm, nm, unu);
	mpz_divexact(B, d2, B);
	mpz_mul(nr, nr, B);
	}

d = d1;
while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(A, b[--d])) {
		e = 2;		
		while(mpz_divisible_p(A, div[K][e])) e += 2;
		if(!mpz_divisible_p(A, div[K][--e])) e--;
		mpz_mul(doi, doi, div[K][e]);
		mpz_gcd(d2, nm, sum[K][e]);
		mpz_gcd(trei, nr, div[K][e]);
		mpz_divexact(nm, nm, d2);
		mpz_divexact(nr, nr, trei);
		mpz_divexact(B, div[K][e], trei);
		mpz_mul(nm, nm, B);		
		mpz_divexact(B, sum[K][e], d2);
		mpz_mul(nr, nr, B);
	}
}

while(1) {
	if(!d--)
		break;	
	if(mpz_divisible_ui_p(A, b[d]))	{
		e = 2;		
		while(mpz_divisible_ui_p(A, div1[d][e])) e += 2;
		if(!mpz_divisible_ui_p(A, div1[d][--e])) e--;
		k = div1[d][e];
		e = sum1[d][e];
		mpz_mul_ui(doi, doi, k);
		mpz_gcd_ui(d2, nm, e);
		mpz_gcd_ui(trei, nr, k);
		j1 = mpz_get_ui(d2);
		j2 = mpz_get_ui(trei);
		
		mpz_divexact_ui(nm, nm, j1);
		mpz_divexact_ui(nr, nr, j2);
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);
		}
	}

while(1) {
	if(!(D-- ^ d1))
		break;
	if(mpz_divisible_ui_p(A, b[D]))	{
		e = b1[D];
		mpz_mul_ui(doi, doi, b[D]);
		mpz_gcd_ui(d2, nm, e);
		mpz_gcd_ui(trei, nr, b[D]);
		j1 = mpz_get_ui(d2);
		j2 = mpz_get_ui(trei);
		mpz_divexact_ui(nm, nm, j1);
		mpz_divexact_ui(nr, nr, j2);
		mpz_mul_ui(nm, nm, b[D] / j2);
		mpz_mul_ui(nr, nr, e / j1);
			
		if(!mpz_cmp(doi, A))
			return;
		}
	}
}


void NUMSUMMOD1(int256 A, int256 B, int256 unu, int256 doi, int256 trei, int256 d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &j1, gmp_ui &j2, gmp_ui &k, int256 nm, int256 nr) {

mpz_set_ui(nm, 0);
mpz_setbit(nm, d++);
mpz_set_ui(nr, 0);
mpz_setbit(nr, d);
mpz_sub_ui(nr, nr, 1);
mpz_set(doi, nm);

if( !(d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_set_ui(d2, 0);
	mpz_setbit(d2, d);
	mpz_gcd(B, nm, d2);
	mpz_sub_ui(trei, d2, 1);
	mpz_mul(doi, doi, trei);
	mpz_gcd(unu, nr, trei);
	mpz_divexact(nm, nm, B);
	mpz_divexact(nr, nr, unu);
	mpz_divexact(unu, trei, unu);
	mpz_mul(nm, nm, unu);
	mpz_divexact(B, d2, B);
	mpz_mul(nr, nr, B);
	
	//mpz_set(d1, doi);
	//mpz_mul_2exp(doi, d);
	//mpz_sub(doi, doi, d1);
	//mpz_mul_2exp(nr, d);
	//mpz_divexact(d1, doi, d1);
	//mpz_mul(nm, nm, d1);
	}

d = d1;

while(1) {
	if(!d--)
		break;	
	if(mpz_divisible_ui_p(A, b[d]))	{
		e = 2;		
		while(mpz_divisible_ui_p(A, div1[d][e])) e += 2;
		if(!mpz_divisible_ui_p(A, div1[d][--e])) e--;
		k = div1[d][e];
		e = sum1[d][e];
		mpz_mul_ui(doi, doi, k);
		mpz_gcd_ui(d2, nm, e);
		mpz_gcd_ui(trei, nr, k);
		j1 = mpz_get_ui(d2);
		j2 = mpz_get_ui(trei);
		
		mpz_divexact_ui(nm, nm, j1);
		mpz_divexact_ui(nr, nr, j2);
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);
		}
	}

while(1) {
	if(!(D-- ^ d1))
		break;
	if(mpz_divisible_ui_p(A, b[D]))	{
		e = b1[D];
		mpz_mul_ui(doi, doi, b[D]);
		mpz_gcd_ui(d2, nm, e);
		mpz_gcd_ui(trei, nr, b[D]);
		j1 = mpz_get_ui(d2);
		j2 = mpz_get_ui(trei);
		mpz_divexact_ui(nm, nm, j1);
		mpz_divexact_ui(nr, nr, j2);
		mpz_mul_ui(nm, nm, b[D] / j2);
		mpz_mul_ui(nr, nr, e / j1);
			
		if(!mpz_cmp(doi, A))
			return;
		}
	}
}


void SMOD(int256 A, int256 doi, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &j1, gmp_ui &j2, gmp_ui &k, gmp_ui &nm, gmp_ui &nr) {
nr = (e<<d);
nm = ((nr--)>>1);
d = d1;
mpz_set_ui(doi, nm);

while(1) {
	if(!d--)
		break;	
	if(!(A % b[d]))	{
		e = 2;		
		while(mpz_divisible_ui_p(A, div1[d][e])) e += 2;
		if(!mpz_divisible_ui_p(A, div1[d][--e])) e--;
		k = div1[d][e];
		e = sum1[d][e];
		mpz_mul_ui(doi, doi, k);		
		j1 = CMMDCA(nm, e, nm%e);
		j2 = CMMDCA(nr, k, nr%k);
		nm = (nm / j1) * (k / j2);
		nr = (nr / j2) * (e / j1);
		}
	}

if(doi == A)
	return;

while(1) {
	if(!(D-- ^ d1))
		break;
	if(!(A % b[D]))	{	
		e = b1[D];
		mpz_mul_ui(doi, doi, b[D]);
		j1 = CMMDCA(nm, e, nm%e);
		j2 = CMMDCA(nr, b[D], nr%b[D]);
		nm = (nm / j1) * (b[D] / j2);
		nr = (nr / j2) * (e / j1);		
		if(doi == A)
			return;
		}
	}
}


void SMOD1(int256 A, int256 doi, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &j1, gmp_ui &j2, gmp_ui &k, int *f2, gmp_ui &nm, gmp_ui &nr) {
nr = (e<<d);
nm = ((nr--)>>1);
d = d1;
mpz_set_ui(doi, nm);//nr = 4, nm = 1.

while(1) {
	if(!d--)
		break;	
	if(!(A % b[d]))	{
		e = 2;
		j1 = f2[d];
		while(mpz_divisible_ui_p(A, div1[j1][e])) e += 2;
		if(!mpz_divisible_ui_p(A, div1[j1][--e])) e--;
		k = div1[j1][e];//8191
		e = sum1[j1][e];//8192
		mpz_mul_ui(doi, doi, k);
		j1 = CMMDCA(nm, e, nm%e);//1
		j2 = CMMDCA(nr, k, nr%k);//1
		nm = (nm / j1) * (k / j2);//nm * 8191 = 8191
		nr = (nr / j2) * (e / j1);//nr * 8192 = 32768
		}
	}

if(doi == A)
	return;

while(1) {
	if(!(D-- ^ d1))
		break;
	if(!(A % b[D]))	{	
		e = b1[D];
		mpz_mul_ui(doi, doi, b[D]);
		j1 = CMMDCA(nm, e, nm%e);
		j2 = CMMDCA(nr, b[D], nr%b[D]);
		nm = (nm / j1) * (b[D] / j2);
		nr = (nr / j2) * (e / j1);
		if(doi == A)
			return;
		}
	}
}

/*
void INIT(int K, int256 modpdiv[][MAX1], int256 modpsum[][MAX1]) {
	for(int i = 0; i < K; i++)
	for(int j = 0; j < MAX1; j++)
		mpz_inits(modpdiv[i][j], modpsum[i][j], NULL);
}*/


void DECIDTEXT(char *PUT, int sus) {
	if(sus <= 52) {
		sprintf(PUT, "/PUTERI52.TXT");
	} else
	if(sus <= 80) {
		sprintf(PUT, "/PUTERI80.TXT");
	} else
	if(sus <= 100) {
		sprintf(PUT, "/PUTERI100.TXT");
	} else
	if(sus <= 130) {
		sprintf(PUT, "/PUTERI130.TXT");
	} else
	if(sus <= 160) {		
		sprintf(PUT, "/PUTERI160.TXT");
	} else
	if(sus <= 240) {
		sprintf(PUT, "/PUTERI240.TXT");
	} else
	if(sus <= 420) {
		sprintf(PUT, "/PUTERI420.TXT");
	} else
	if(sus <= 1910) {
		sprintf(PUT, "/PUTERITOT.TXT");
	}
}


void PUTERI2(const char *t, int *put) {
	fstream &F = fopen(t, "r");
	int i = 0, j = 0, k = 0;
	char u;

	while(1) {
		fscanf(F, "%c", &u);
		
		if(feof(F))
			break;
			
		if (u == 'a')
			j++;
		if (j == 2)
			k++;
		if (k == 2) {
			fscanf(F, "%d", &put[i++]);
			j = 0;
			k = 0;
			}	
		}
}


void UNIFACTSUB(int sus, gmp_ui *b, gmp_ui *b1, gmp_ui *b2, int D, int H, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 divdiv[][3], int256 divsum[][3], int *P, int *P1, int256 unu, int256 d, int256 trei, int256 *SUMDOI, int sumcap, int inv) {

	int256 xe, g;
	int f, sb, d1, i = 0, j, k, ll, ind[H1], PP;
	char t, PUT[25];
	DECIDTEXT(PUT, sus);
	puts(PUT);

	fstream &F1 = fopen(PUT, "a");
	PP = ftell(F1);
	F1.close();
	F1 = fopen(PUT, "r");
	j = 3;

	while(1) {
	fscanf(F1, "%c", &t);
	if(t == ' ') --j;
	if(!j)	{
		fscanf(F1, "%d", &sb);
		ind[i++] = sb;
		};

	if(t == '\n')
		j = 3;
		
	if(ftell(F1) == PP)
		break;
	}

	F1.close();

	if(inv) {
	 for(i = (H>>1); i; ) {
		j = ind[--i];
		ind[i] = ind[H-i-1];
		ind[H-i-1] = j;
	 }
	}

	printf("RAB %d %d\n", D, H);	 
	d1 = inv? H-1 : 0;

	for(i = 0; i < H; i++) {//H descotfactizat.
	mpz_set_ui(xe, 1);

	for(j = 0; j < ind[i]; j++) {
		mpz_mul_ui(xe, xe, b1[i]);
		mpz_mul_ui(g, xe, b1[i]);
		mpz_divexact_ui(g, g, b1[i]-1);
		k = inv? H-d1-1 : d1;
		div1[k][j] = mpz_get_ui(xe);
		sum1[k][j] = mpz_get_ui(g);
	}
	for(; j < ind[i] + 2; j++) {
		k = inv? H-d1-1 : d1;
		div1[k][j] = 1667;
		sum1[k][j] = 1667;
	}		
		k++;			
		d1 += inv? -1 : +1;
	}

	for(i = 0; i < D; i++) {
		b2[i] = 1 + b1[i];
	}

	for(f = H; f < D; f++)
		P[f] = 2;

	PUTERI2(PUT, P);
	printf("%d %d %d\n", D, H, D-H);

	for(i = 0; i < D-H; i++) {
		mpz_set_ui(divdiv[i][0], 1);
		mpz_set_ui(divsum[i][0], 1);

		mpz_set_ui(divdiv[i][1], b1[i+H]);
		mpz_add_ui(divsum[i][1], divdiv[i][1], 1);
		
		mpz_ui_pow_ui(divdiv[i][2], b1[i+H], 2);
		mpz_mul_ui(divsum[i][2], divsum[i][1], b1[i+H]);
		mpz_add_ui(divsum[i][2], divsum[i][2], 1);
	}

	for(i = 0; i < H; i++)
		b[i] = div1[i][0];
		
	for( i = H; i < D; i++)
		b[i] = mpz_get_ui(divdiv[i-H][1]);

	for(i = 0; i < H; i++) {	
		P1[i] = P[H-i-1];
	}

	for(i = H; i < D; i++)
		P1[i] = P[i];

	putchar('\n');
	mpz_ui_pow_ui(trei, 2, 64);

	for(i = 0; i < H; i++) {
		j = 0;
		while(j < P1[i]) j++;
			
		for(k = j; k >= 1; k--) {
			div1[i][k] = div1[i][k-1];
			sum1[i][k] = sum1[i][k-1];
		}
		
		ll = P1[i];
		j = 0;
		
		for(k = 1+ll; (k < MAX2-2) ; k++) {	
			mpz_set_ui(unu, div1[i][k-1]);
			mpz_mul_ui(unu, unu, div1[i][0]);
			mpz_set_ui(d, sum1[i][k-1]);
			mpz_mul_ui(d, d, div1[i][0]);
			mpz_add_ui(d, d, 1);
			
			if(j && (k < 8+ll) && (mpz_cmp(d, trei) < 0) ) {
				div1[i][k] = mpz_get_ui(unu);
				sum1[i][k] = mpz_get_ui(d);
				++P1[i];
			} else {
				j = 0;
				div1[i][k] = 1667;
				sum1[i][k] = 1667;
			}
		}

		div1[i][0] = 1;
		sum1[i][0] = 1;
		div1[i][MAX2-2] = 1667;
		sum1[i][MAX2-2] = 1667;
		div1[i][MAX2-1] = 1667;
		sum1[i][MAX2-1] = 1667;
	}

	for(i = 0; i < sumcap; i++) {
		mpz_ui_pow_ui(SUMDOI[i], 2, i+1);
		mpz_sub_ui(SUMDOI[i], SUMDOI[i], 1);
		}
}

/*
void UNIFACTSUBM(int sus, gmp_ui *b, gmp_ui *b1, gmp_ui *b2, int320 *C, int256 *J, int D, int E, int H, int K, int256 div[][MAX1], int256 sum[][MAX1], int256 divdiv[][3], int256 divsum[][3], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *P, int *P1, int256 unu, int256 d, int256 trei, int256 *SUMDOI, int sumcap, int inv, int lim) {

	int256 xe, g;
	mpz_inits(xe, g, NULL);
	int f, sb, d1, i = 0, j, k, ll, ind[H1], PP;
	char t, PUT[25];
	fstream &F1;
	DECIDTEXT(PUT, sus);
	puts(PUT);
	F1 = fopen(PUT, "a");
	PP = ftell(F1);
	F1.close();
	F1 = fopen(PUT, "r");
	j = 3;

	while(1) {
	fscanf(F1, "%c", &t);
	if(t == ' ') --j;
	if(!j)	{
		fscanf(F1, "%d", &sb);
		ind[i++] = sb;
		};

	if(t == '\n')
		j = 3;
		
	if(ftell(F1) == PP)
		break;
	}

	F1.close();

	if(inv) {
	 for(i = (H>>1); i; ) {
		j = ind[--i];
		ind[i] = ind[H-i-1];
		ind[H-i-1] = j;
	 }
	}

	printf("RAB %d %d %d %d %d\n", D, E, D+E, H, K);
	d1 = inv? H-1 : 0;

	for(i = 0; i < H; i++) {//H descotfactizat.
	mpz_set_ui(xe, 1);

	for(j = 0; j < ind[i]; j++) {
		mpz_mul_ui(xe, xe, b1[i]);
		mpz_mul_ui(g, xe, b1[i]);
		mpz_divexact_ui(g, g, b1[i]-1);
		
		if(d1 < K) {
			k = inv? K-d1-1 : d1;
			mpz_set(div[k][j], xe);
			mpz_set(sum[k][j], g);
		} else {
			k = inv? H-d1-1 : d1-K;
			div1[k][j] = mpz_get_ui(xe);
			sum1[k][j] = mpz_get_ui(g);
		}
	}

	for(; j < ind[i] + 2; j++) {
		if(d1 < K) {
			k = inv? K-d1-1 : d1;
			mpz_set_ui(div[k][j], lim);
			mpz_set_ui(sum[k][j], lim);
		} else {
			k = inv? H-d1-1 : d1-K;
			div1[k][j] = lim;
			sum1[k][j] = lim;
		}
	}		
		k++;
		d1 += inv? -1 : +1;
	}

	for(i = 0; i < D; i++) {
		b2[i] = 1 + b1[i];
	}

	for(i = 0; i < E; i++) {
		mpz_add_ui(J[i], C[i], 1);
	}

	PUTERI2(PUT, P);
	for(f = H; f < D; f++)
		P[f] = 2;

	printf("%d %d %d %d\n", D, K, H, D-H);

	for(i = 0; i < D-H; i++) {
		mpz_set_ui(divdiv[i][0], 1);
		mpz_set_ui(divsum[i][0], 1);

		mpz_set_ui(divdiv[i][1], b1[i+H]);
		mpz_add_ui(divsum[i][1], divdiv[i][1], 1);
		
		mpz_ui_pow_ui(divdiv[i][2], b1[i+H], 2);
		mpz_mul_ui(divsum[i][2], divsum[i][1], b1[i+H]);
		mpz_add_ui(divsum[i][2], divsum[i][2], 1);
	}

	for(i = 0; i < H; i++)
		b[i] = i < K? mpz_get_ui(div[i][0]) : div1[i-K][0];
		
	for( i = H; i < D; i++)
		b[i] = mpz_get_ui(divdiv[i-H][1]);

	for(i = 0; i < K; i++) {
		P1[i] = P[K-i-1];
	}

	for(i = K; i < H; i++) {	
		P1[i] = P[H+K-i-1];
	}

	for(i = H; i < D; i++)
		P1[i] = P[i];

	putchar('\n');

	for(i = 0; i < K; i++) {
		j = 0;
		while(j < P1[i]) j++;
		
		for(k = j; k >= 1; k--) {
			mpz_set(div[i][k], div[i][k-1]);
			mpz_set(sum[i][k], sum[i][k-1]);
		}
		
		ll = P1[i];
		//j = 1;
		
		for(k = 1+ll; (k < MAX1-2) ; k++) {
			if(k < 8+ll) {
				mpz_mul(div[i][k], div[i][k-1], div[i][0]);
				mpz_mul(sum[i][k], sum[i][k-1], div[i][0]);
				mpz_add_ui(sum[i][k], sum[i][k], 1);
				++P1[i];
			} else {
				//j = 1;
				mpz_set_ui(div[i][k], lim);
				mpz_set_ui(sum[i][k], lim);
			}
		}//EXTINDEREA PUTERILOR:
		
		mpz_set_ui(div[i][0], 1);
		mpz_set_ui(sum[i][0], 1);
		mpz_set_ui(div[i][MAX1-2], lim);
		mpz_set_ui(sum[i][MAX1-2], lim);
		mpz_set_ui(div[i][MAX1-1], lim);
		mpz_set_ui(sum[i][MAX1-1], lim);
	}

	mpz_ui_pow_ui(trei, 2, 64);

	for(i = 0; i < H-K; i++) {
		j = 0;
		while(j < P1[i+K]) j++;

		for(k = j; k >= 1; k--) {
			div1[i][k] = div1[i][k-1];
			sum1[i][k] = sum1[i][k-1];
		}
		
		ll = P1[i+K];
		j = 1;
		
		for(k = ll+1; (k < MAX2-2) ; k++) {	
			mpz_set_ui(unu, div1[i][k-1]);
			mpz_mul_ui(unu, unu, div1[i][0]);
			mpz_set_ui(d, sum1[i][k-1]);
			mpz_mul_ui(d, d, div1[i][0]);
			mpz_add_ui(d, d, 1);
			
			if(j && (k < 8+ll) && (mpz_cmp(d, trei) < 0)) {
				div1[i][k] = mpz_get_ui(unu);
				sum1[i][k] = mpz_get_ui(d);
				++P1[i+K];
			} else {
				j = 0;
				div1[i][k] = lim;
				sum1[i][k] = lim;
			}
		}

		div1[i][0] = 1;
		sum1[i][0] = 1;
		div1[i][MAX2-2] = lim;
		sum1[i][MAX2-2] = lim;
		div1[i][MAX2-1] = lim;
		sum1[i][MAX2-1] = lim;
	}

	for(i = 0; i < sumcap; i++) {	
		mpz_ui_pow_ui(SUMDOI[i], 2, i+1);
		mpz_sub_ui(SUMDOI[i], SUMDOI[i], 1);
		}
}


void UNIFACTUS(int sus, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int D, int &E, int H, int K, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int inv) {
	 int256 xe, g, unu;
	 //mpz_inits(xe, g, unu, NULL);
	 int sb, d, i = 0, j, k, ind[H1], PP, ll, P[D], P1[D];
	 fstream F1, F2;
	 char t, PUT[25];
         DECIDTEXT(PUT, sus);
         puts(PUT);
	 F1 = fopen(PUT, "a");
	 PP = ftell(F1);
	 F1.close();
	 F1 = fopen(PUT, "r");
	 j = 3;

	 while(1) {
		fscanf(F1, "%c", &t);
		if(t == ' ') --j;
		if(!j)	{
			fscanf(F1, "%d", &sb);
			ind[i++] = sb;
			};
		
		if(t == '\n')
			j = 3;
			
		if(ftell(F1) == PP)
			break;
	 }
	 
	 F1.close();
	
	 if(inv) {
	 	 for(i = (H>>1); i; ) {
			j = ind[--i];
			ind[i] = ind[H-i-1];
			ind[H-i-1] = j;
		 }
	 }
	 
	 printf("RAB %d %d %d %d %d\n", D, E, D+E, H, K);
	 F1 = fopen("/INDPUTGEN.TXT", "w");
	 F2 = fopen("/INDSUMGEN.TXT", "w");
      	 d = inv? H-1 : 0;
      	 
	 for(i = 0; i < H; i++) {//H descotfactizat.
		mpz_set_ui(xe, 1);

		for(j = 0; j < ind[i]; j++) {
//			xe *= b[i];
//			g = (xe * b[i]) / (b[i] - 1);
			mpz_mul_ui(xe, xe, b[i]);
			mpz_mul_ui(g, xe, b[i]);
			mpz_divexact_ui(g, g, b[i]-1);
			gmp_fprintf(F1, "%Zd ", xe);
			gmp_fprintf(F2, "%Zd ", g);
			
			if(d < K) {
				k = inv? K-d-1 : d;
				div[k][j] = xe;
				sum[k][j] = g;
				//mpz_set(div[k][j], xe);
				//mpz_set(sum[k][j], g);
			} else {
				k = inv? H-d-1 : d-K;
				div1[k][j] = mpz_get_ui(xe);
				sum1[k][j] = mpz_get_ui(g);
			}
		}
		
		for(; j < ind[i] + 2; j++) {
			if(d < K) {
				k = inv? K-d-1 : d;
				mpz_set_ui(div[k][j], 1667);
				mpz_set_ui(sum[k][j], 1667);
			} else {
				k = inv? H-d-1 : d-K;
				div1[k][j] = 1667;
				sum1[k][j] = 1667;
			}
			
			fprintf(F1, "%d ", 1667);
			fprintf(F2, "%d ", 1667);
		}		
			k++;
			fputc('\n', F1);
			fputc('\n', F2);
			d += inv? -1 : +1;
	 }

	 F1.close();
	 F2.close();
	 
	 for(i = 0; i < D; i++) {
	 	b1[i] = 1 + b[i];
	 }
	 
	 for(i = 0; i < E; i++) {
	 	mpz_add_ui(C1[i], C[i], 1);
	 }
	 
	printf("%d %d %d %d\n", D, K, H, D-H);
	PUTERI2(PUT, P);

	for(i = H; i < D; i++)
		P[i] = 2;

	for(i = 0; i < K; i++) {
		P1[i] = inv? P[K-i-1] : P[i];
	}

	for(i = K; i < H; i++) {	
		P1[i] = inv? P[H+K-i-1] : P[i];
	}

	for(i = H; i < D; i++)
		P1[i] = P[i];
		
	for(i = 0; i < K; i++) {
		j = 0;
		while(j < P1[i]) j++;
		
		for(k = j; k >= 1; k--) {
			mpz_set(div[i][k], div[i][k-1]);
			mpz_set(sum[i][k], sum[i][k-1]);
		}
		
		ll = P1[i];
		
		for(k = 1+ll; (k < MAX1-2) ; k++) {
			if(k < 8+ll) {
				mpz_mul(div[i][k], div[i][k-1], div[i][0]);
				mpz_mul(sum[i][k], sum[i][k-1], div[i][0]);
				mpz_add_ui(sum[i][k], sum[i][k], 1);
				++P1[i];
			} else {
				mpz_set_ui(div[i][k], 1667);
				mpz_set_ui(sum[i][k], 1667);
			}
		}//EXTINDEREA PUTERILOR:
		
		mpz_set_ui(div[i][0], 1);
		mpz_set_ui(sum[i][0], 1);
		mpz_set_ui(div[i][MAX1-2], 1667);
		mpz_set_ui(sum[i][MAX1-2], 1667);
		mpz_set_ui(div[i][MAX1-1], 1667);
		mpz_set_ui(sum[i][MAX1-1], 1667);
	}

	mpz_ui_pow_ui(unu, 2, 64);

	for(i = 0; i < H-K; i++) {
		j = 0;
		while(j < P1[i+K]) j++;
			
		for(k = j; k >= 1; k--) {
			div1[i][k] = div1[i][k-1];
			sum1[i][k] = sum1[i][k-1];
		}

		ll = P1[i+K];
		j = 1;
		
		for(k = 1+ll; (k < MAX2-2) ; k++) {
			mpz_set_ui(xe, div1[i][k-1]);
			mpz_mul_ui(xe, xe, div1[i][0]);
			mpz_set_ui(g, sum1[i][k-1]);
			mpz_mul_ui(g, g, div1[i][0]);
			mpz_add_ui(g, g, 1);

			if(j && (k < 8+ll) && (mpz_cmp(g, unu) < 0) ) {
				div1[i][k] = mpz_get_ui(xe);
				sum1[i][k] = mpz_get_ui(g);
				++P1[i+K];
			} else {
				j = 0;
				div1[i][k] = 1667;
				sum1[i][k] = 1667;
			}
		}

		div1[i][0] = 1;
		sum1[i][0] = 1;
		div1[i][MAX2-2] = 1667;
		sum1[i][MAX2-2] = 1667;
		div1[i][MAX2-1] = 1667;
		sum1[i][MAX2-1] = 1667;
	}

	F1 = fopen("FACTDIV.TXT", "w");
	F2 = fopen("FACTSUM.TXT", "w");

	for(i = 0; i < K; i++) {
		for(j = 0; j < MAX1; j++) {
			gmp_fprintf(F1, "%Zd ", div[i][j]);
			gmp_fprintf(F2, "%Zd ", sum[i][j]);
		}
		fputc('\n', F1);
		fputc('\n', F2);
	}

	for(i = 0; i < H-K; i++) {
		for(j = 0; j < MAX2; j++) {
			gmp_fprintf(F1, "%llu ", div1[i][j]);
			gmp_fprintf(F2, "%llu ", sum1[i][j]);
		}
		fputc('\n', F1);
		fputc('\n', F2);
	}

	F1.close();
	F2.close();
	mpz_clears(xe, g, unu, NULL);
}


void UNIFACTUS2(int sus, gmp_ui *b, int320 *C, int D, int E, int H, int K, int256 div[][MAX1], gmp_ui div1[][MAX2], int inv) {
	 int320 xe, unu;
	//mpz_inits(xe, unu, NULL);
	 int sb, d, i = 0, j, k, ind[H1], PP, ll, P[D], P1[D];
	 fstream &F1;
	 char t, PUT[25];
         DECIDTEXT(PUT, sus);
         puts(PUT);
	 F1 = fopen(PUT, "a");
	 PP = ftell(F1);
	 F1.close();
	 F1 = fopen(PUT, "r");
	 j = 3;

	 while(1) {
		fscanf(F1, "%c", &t);
		if(t == ' ') --j;
		if(!j)	{
			fscanf(F1, "%d", &sb);
			ind[i++] = sb;
			};
		
		if(t == '\n')
			j = 3;
			
		if(ftell(F1) == PP)
			break;
	 }
	 
	 F1.close();
	
	 if(inv) {
	 	 for(i = (H>>1); i; ) {
			j = ind[--i];
			ind[i] = ind[H-i-1];
			ind[H-i-1] = j;
		 }
	 }
	 
	 printf("RAB %d %d %d %d %d\n", D, E, D+E, H, K);
      	 d = inv? H-1 : 0;
      	 
	 for(i = 0; i < H; i++) {//H descotfactizat.
		mpz_set_ui(xe, 1);

		for(j = 0; j < ind[i]; j++) {
			xe *= b[i];
			
			if(d < K) {
				k = inv? K-d-1 : d;
				div[k][j] = xe;
			} else {
				k = inv? H-d-1 : d-K;
			//	div1[k][j] = mpz_get_ui(xe);
				div1[k][j] = xe;				
			}
		}
		
		for(; j < ind[i] + 2; j++) {
			if(d < K) {
				k = inv? K-d-1 : d;
				
				mpz_set_ui(div[k][j], 1667);
			} else {
				k = inv? H-d-1 : d-K;
				div1[k][j] = 1667;
			}
		}
			k++;
			d += inv? -1 : +1;
	 }
	 
	printf("%d %d %d %d\n", D, K, H, D-H);
	PUTERI2(PUT, P);

	for(i = H; i < D; i++)
		P[i] = 2;

	for(i = 0; i < K; i++) {
		P1[i] = inv? P[K-i-1] : P[i];
	}

	for(i = K; i < H; i++) {	
		P1[i] = inv? P[H+K-i-1] : P[i];
	}

	for(i = H; i < D; i++)
		P1[i] = P[i];
		
	for(i = 0; i < K; i++) {
		j = 0;
		while(j < P1[i]) j++;
		
		for(k = j; k >= 1; k--) {
			mpz_set(div[i][k], div[i][k-1]);
		}
		
		ll = P1[i];
		
		for(k = 1+ll; (k < MAX1-2) ; k++) {
			if(k < 8+ll) {
				mpz_mul(div[i][k], div[i][k-1], div[i][0]);
				++P1[i];
			} else {
				mpz_set_ui(div[i][k], 1667);
			}
		}//EXTINDEREA PUTERILOR:
		
		mpz_set_ui(div[i][0], 1);
		mpz_set_ui(div[i][MAX1-2], 1667);
		mpz_set_ui(div[i][MAX1-1], 1667);
	}

	mpz_ui_pow_ui(unu, 2, 64);

	for(i = 0; i < H-K; i++) {
		j = 0;
		while(j < P1[i+K]) j++;
			
		for(k = j; k >= 1; k--) {
			div1[i][k] = div1[i][k-1];
		}

		ll = P1[i+K];
		j = 1;
		
		for(k = 1+ll; (k < MAX2-2) ; k++) {
			mpz_set_ui(xe, div1[i][k-1]);
			mpz_mul_ui(xe, xe, div1[i][0]);

			if(j && (k < 8+ll) && (mpz_cmp(xe, unu) < 0) ) {
				div1[i][k] = mpz_get_ui(xe);
				++P1[i+K];
			} else {
				j = 0;
				div1[i][k] = 1667;
			}
		}

		div1[i][0] = 1;		
		div1[i][MAX2-2] = 1667;		
		div1[i][MAX2-1] = 1667;		
	}

	mpz_clears(xe, unu, NULL);
}*/


void UNIFACTUM(int sus, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int inv) {
	 int256 xe, g, unu;
	 int sb, d, i = 0, j, k, ind[H1], PP, ll, P[D], P1[D];
	 fstream &F1;
	 char t, PUT[25];
         DECIDTEXT(PUT, sus);
         puts(PUT);
	 F1 = fopen(PUT, "a");
	 PP = ftell(F1);
	 F1.close();
	 F1 = fopen(PUT, "r");
	 j = 3;

	 while(1) {
		fscanf(F1, "%c", &t);
		if(t == ' ') --j;
		if(!j)	{
			fscanf(F1, "%d", &sb);
			ind[i++] = sb;
			};
		
		if(t == '\n')
			j = 3;
			
		if(ftell(F1) == PP)
			break;
	 }
	 
	 F1.close();
	
	 if(inv) {
	 	 for(i = (H>>1); i; ) {
			j = ind[--i];
			ind[i] = ind[H-i-1];
			ind[H-i-1] = j;
		 }
	 }
	 
	 printf("RAB %d %d\n", D, H);
      	 d = inv? H-1 : 0;
      	 
	 for(i = 0; i < H; i++) {//H descotfactizat.
		mpz_set_ui(xe, 1);

		for(j = 0; j < ind[i]; j++) {
			mpz_mul_ui(xe, xe, b[i]);
			mpz_mul_ui(g, xe, b[i]);
			mpz_divexact_ui(g, g, b[i]-1);
			
			k = inv? H-d-1 : d;
			div1[k][j] = mpz_get_ui(xe);
			sum1[k][j] = mpz_get_ui(g);
		}
		
		for(; j < ind[i] + 2; j++) {
			k = inv? H-d-1 : d;
			div1[k][j] = 1667;
			sum1[k][j] = 1667;			
		}		
			k++;
			d += inv? -1 : +1;
	 }

	 F1.close();
	 
	 for(i = 0; i < D; i++) {
	 	b1[i] = 1 + b[i];
	 }
	 
	printf("%d %d %d\n", D, H, D-H);
	PUTERI2(PUT, P);

	for(i = H; i < D; i++)
		P[i] = 2;

	for(i = 0; i < H; i++) {	
		P1[i] = inv? P[H-i-1] : P[i];
	}

	for(i = H; i < D; i++)
		P1[i] = P[i];
		
	mpz_ui_pow_ui(unu, 2, 64);

	for(i = 0; i < H; i++) {
		j = 0;
		while(j < P1[i]) j++;
			
		for(k = j; k >= 1; k--) {
			div1[i][k] = div1[i][k-1];
			sum1[i][k] = sum1[i][k-1];
		}

		ll = P1[i];
		j = 1;
		
		for(k = 1+ll; (k < MAX2-2) ; k++) {
			mpz_set_ui(xe, div1[i][k-1]);
			mpz_mul_ui(xe, xe, div1[i][0]);
			mpz_set_ui(g, sum1[i][k-1]);
			mpz_mul_ui(g, g, div1[i][0]);
			mpz_add_ui(g, g, 1);

			if(j && (k < 8+ll) && (mpz_cmp(g, unu) < 0) ) {
				div1[i][k] = mpz_get_ui(xe);
				sum1[i][k] = mpz_get_ui(g);
				++P1[i];
			} else {
				j = 0;
				div1[i][k] = 1667;
				sum1[i][k] = 1667;
			}
		}

		div1[i][0] = 1;
		sum1[i][0] = 1;
		div1[i][MAX2-2] = 1667;
		sum1[i][MAX2-2] = 1667;
		div1[i][MAX2-1] = 1667;
		sum1[i][MAX2-1] = 1667;
	}

	mpz_clears(xe, g, unu, NULL);
}


void UNIFACTO(int sus, int D, int E, int H, int K, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1], int256 unu, int256 d, int256 trei, int inv, gmp_ui lim) {

	int256 xe, g;
	int sb, d1, i = 0, j, k, ll, ind[H1], PP, P[D], P1[D];
	fstream &F1;
	char t, PUT[25];
	
	DECIDTEXT(PUT, sus);
	puts(PUT);
	F1 = fopen(PUT, "a");
	PP = ftell(F1);
	F1.close();
	F1 = fopen(PUT, "r");
	j = 3;

	while(1) {
	fscanf(F1, "%c", &t);
	if(t == ' ') --j;
	if(!j)	{
		fscanf(F1, "%d", &sb);
		ind[i++] = sb;
		};

	if(t == '\n')
		j = 3;
		
	if(ftell(F1) == PP)
		break;
	}

	F1.close();

	if(inv) {
	 for(i = (H>>1); i; ) {
		j = ind[--i];
		ind[i] = ind[H-i-1];
		ind[H-i-1] = j;
		}
	}

	printf("RAB %d %d %d %d %d\n", D, E, D+E, H, K);
	d1 = inv? H-1 : 0;

	for(i = 0; i < H; i++) {//H descotfactizat.
	mpz_set_ui(xe, 1);

	for(j = 0; j < ind[i]; j++) {
		mpz_mul_ui(xe, xe, b[i]);
		mpz_mul_ui(g, xe, b[i]);
		mpz_divexact_ui(g, g, b[i]-1);
		
		if(d1 < K) {
			k = inv? K-d1-1 : d1;
			mpz_set(div[k][j], xe);
			mpz_set(sum[k][j], g);
		} else {
			k = inv? H-d1-1 : d1-K;
			div1[k][j] = mpz_get_ui(xe);
			sum1[k][j] = mpz_get_ui(g);
		}
	}

	for(; j < ind[i] + 2; j++) {
		if(d1 < K) {
			k = inv? K-d1-1 : d1;
			mpz_set_ui(div[k][j], lim);
			mpz_set_ui(sum[k][j], lim);
		} else {
			k = inv? H-d1-1 : d1-K;
			div1[k][j] = lim;
			sum1[k][j] = lim;
		}			
	}		
		k++;
		d1 += inv? -1 : +1;
	}

	for(i = 0; i < D; i++) {
	b1[i] = 1 + b[i];
	}

	for(i = 0; i < E; i++) {
	mpz_add_ui(C1[i], C[i], 1);
	}

	printf("%d %d %d %d %llu\n", D, K, H, D-H, lim);
	PUTERI2(PUT, P);
		
	for(i = 0; i < K; i++) {
		P1[i] = inv? P[K-i-1] : P[i];
	}

	for(i = K; i < H; i++) {
		P1[i] = inv? P[H+K-i-1] : P[i+K];
	}

	for(i = H; i < D; i++)
		P1[i] = P[i];

	putchar('\n');

	for(i = 0; i < K; i++) {
		j = 0;
		while(j < P1[i]) j++;
		
		for(k = j; k >= 1; k--) {
			mpz_set(div[i][k], div[i][k-1]);
			mpz_set(sum[i][k], sum[i][k-1]);
		}
		
		ll = P1[i];
		
		for(k = 1+ll; (k < MAX1-2) ; k++) {
			if(k < 8+ll) {
				mpz_mul(div[i][k], div[i][k-1], div[i][0]);
				mpz_mul(sum[i][k], sum[i][k-1], div[i][0]);
				mpz_add_ui(sum[i][k], sum[i][k], 1);
				++P1[i];
			} else {
				mpz_set_ui(div[i][k], lim);
				mpz_set_ui(sum[i][k], lim);
			}
		}//EXTINDEREA PUTERILOR:
		
		mpz_set_ui(div[i][0], 1);
		mpz_set_ui(sum[i][0], 1);
		mpz_set_ui(div[i][MAX1-2], lim);
		mpz_set_ui(sum[i][MAX1-2], lim);
		mpz_set_ui(div[i][MAX1-1], lim);
		mpz_set_ui(sum[i][MAX1-1], lim);
	}

	mpz_ui_pow_ui(trei, 2, 64);

	for(i = 0; i < H-K; i++) {
		j = 0;
		while(j < P1[i+K]) j++;
			
		for(k = j; k >= 1; k--) {
			div1[i][k] = div1[i][k-1];
			sum1[i][k] = sum1[i][k-1];
		}
		
		ll = P1[i+K];
		j = 1;

		for(k = 1+ll; (k < MAX2-2) ; k++) {	
			mpz_set_ui(unu, div1[i][k-1]);
			mpz_mul_ui(unu, unu, div1[i][0]);
			mpz_set_ui(d, sum1[i][k-1]);
			mpz_mul_ui(d, d, div1[i][0]);
			mpz_add_ui(d, d, 1);
			
			if(j && (k < 8+ll) && (mpz_cmp(d, trei) < 0) ) {
				div1[i][k] = mpz_get_ui(unu);
				sum1[i][k] = mpz_get_ui(d);
				++P1[i+K];
			} else {
				j = 0;
				div1[i][k] = lim;
				sum1[i][k] = lim;
			}
		}

		div1[i][0] = 1;
		sum1[i][0] = 1;
		div1[i][MAX2-2] = lim;
		sum1[i][MAX2-2] = lim;
		div1[i][MAX2-1] = lim;
		sum1[i][MAX2-1] = lim;
		}
}


//U = D, sum-urile dispar la UNIFACTUS.

/*void initmpz(int a, ...) {
	va_list list;
	va_start(list, a);
	for(int i = 0; i < a; i++) {
		//mpz_init2(va_arg(list, int256), 6400);
	}
	va_end(list);
}*/

/*
void mpz_init_va(int256 first, ...) {
	int256 *ptr;
	va_list ap;
	ptr = (int256 *)first;
	va_start(ap, first);
	
	do {
		mpz_init2(*ptr, 6400);
		ptr = va_arg(ap, int256 *);
	} while(ptr != NULL);

	va_end(ap);
}


void PURGANTE(int320 *C, int320 *C1, int &E) {
int E2 = E, f = 0, g, h = 0;

for(; f < E2; f++) {
	g = mpz_scan1(C1[f], 0);
	if(!( (g == 89) || (g == 107) || (g == 107) )) {
		mpz_set(C[h], C[f]);
		mpz_set(C1[h++], C1[f]);	
		}
	else E--;
	}
}*/


#endif
