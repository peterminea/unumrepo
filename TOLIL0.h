#ifndef _TOLIL_H
#define _TOLIL_H

//De front 1.
#include "/URC.h"
#include "/TEXTUL.h"
#include "/LITUAN2.h"
#include "/CIF0.h"
#include "/DETRITO.h"
#include "/PRIM.h"

#define U1 7250

//ACTUALIZAREA VECTORILOR DE FACTORI PRIMI:
gmp_ui DETECTNUM(char *TEXT);
void TOLIL(int J, int b1, char *TEXT, mpz_t *a, int B, int G, int &W, gmp_ui *b, mpz_t *C, int *EXP, int &D, int &E, int &L, const char *Z, int a1);
void PUTDOI(mpz_t *a, int B, int G);
void PUTMAX(const char *v, gmp_ui *MX, mpz_t *MXM, int *EXP, int K, int H);
int MAXPUT(int A, int &D, gmp_ui *b, int *EXP, mpz_t h, mpz_t *a, mpz_t *K3, mpz_t *K4, gmp_ui *L3, gmp_ui *L4, int b1, char *v, int H, long PP1, char *Y, mpz_t u, gmp_ui *gmpplus, gmp_ui m2);
void TOL0(gmp_ui *L3, gmp_ui *L4, gmp_ui *b, int *EXP, int H, FILE *F1, int b1, char *v);
void TOL1(mpz_t *K3, mpz_t *K4, gmp_ui *b, int *c, int k, FILE *F1, int b1, char *v);
void TOL2(int e, int f, int &I, gmp_ui *b, mpz_t *a, long PP1, char *Y, mpz_t u);
void TOL3(int &f, int &I, mpz_t *C, mpz_t *a, int b1, char *v, long PP1, char *Y, mpz_t u);
void TOLMARE(gmp_ui *b, mpz_t *C, int D, int E, FILE *F1, const char *Z);
void ARANJTEXT(char *t, const char *t1, const char *u, const char *t2);
void PUTERVEC();
int HPH(int &b1);
int HH(int &b1);

//SORTĂRI:
void QS(mpz_t *a, int b, int e, mpz_t pv);
void SIB(mpz_t *a, int b, int c, mpz_t d);
void QS2(gmp_ui *a, int b, int e);
void QSI(int *a, int b, int e);
void HS(mpz_t *a, mpz_t t, unsigned long D);
void HSS(char A[][DIMM], char *t, unsigned long D);
void HSI(gmp_ui *a, gmp_ui t, unsigned long D);

//CĂUTĂRI BINARE:
int CB(mpz_t *a, mpz_t b, long I, long R);
int CBSTATIC(char A[][DIMM], long jos, long sus, char *t);
int CBPOZ(mpz_t *a, mpz_t b, long I, long R);
int CBPOZI(gmp_ui *a, gmp_ui b, long I, long R);
int CBIN(gmp_ui *a, gmp_ui &b, long I, long R);
int CBINT(int *a, int &b, long I, long R);
int CBINV(gmp_ui *a, gmp_ui b, long I, long R);
int CBDIV(mpz_t f, gmp_ui *M, int I, int R, int &j, int A);
int CBDIVM(mpz_t f, mpz_t *N, int I, int R, int &j, int A);

//GENERARE DE COEFICIENŢI DE LEGĂTURĂ, VECTOR / FIŞIER:
int COEFG(mpz_t A, gmp_ui *b, mpz_t *C, int D, int E, mpz_t L);
int COEFG1(int c, int d, gmp_ui *b, mpz_t *C, int &D, int &E, int l);
int COEF(gmp_ui a, gmp_ui *b, int D);
int COEF1(int c, int d, int e, gmp_ui *b, int &D);
void FFACT(int &W, mpz_t *A1, FILE *f1, mpz_t I, int n);
void FFACT1(int &W, gmp_ui *A1, FILE *f1, int &e, int n);
int VC(mpz_t *a, gmp_ui *d, int g, int n, int D, int s);
int VVC1(mpz_t *a, mpz_t *d, int g, int n, int D, int a1, int b1, int s);
int VC1(mpz_t *a, mpz_t *d, int g, int n, int D, int a1, int b1, int s);
int VV(mpz_t a, mpz_t *b, int c);
int V(mpz_t a, mpz_t *b, int &c, int d);
int V1(gmp_ui a, gmp_ui *b, int c);

//GENERAREA ŞI ORDONAREA VECTORULUI DE FACTORI PRIMI LA CĂUTARE:
void GEN(int L, int W, gmp_ui *b, mpz_t *C, int &D, int &E, const char *Z);
int GENM(gmp_ui *b, const char *Z);
void GENMIN(int b1, gmp_ui *b, int &i, int &j, int inv);
void GENERARE(int b1, gmp_ui *b, mpz_t *C, int &i, int &j, int &J, int &l, int &I, int &V, int k);
void GENERARE2(int b1, gmp_ui *b, mpz_t *C, int &i, int &j, int &J, int &l, int &I, int &V, int inv);
void INV(gmp_ui *b, mpz_t *C, int d1, int D, int E);
void INV2(int i, gmp_ui j, gmp_ui *b, int d1, int D);

//VECTORI DE NUMERE PRIME PENTRU DIVIZORI AI NUMĂRULUI CURENT, LA CĂUTAREA ÎN JOS:
void LOTVEC(mpz_t a,  gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, gmp_ui *y, gmp_ui *y1, mpz_t *z, mpz_t *z1, int D, int E, int d1, int S, int &Y, int &i, int &d2, int &s, int *f2);//D, E, H, S.
void LOTVEC1(mpz_t a, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, int D, int d1, int &Y, int &d2, int i, int *f2);
void LOTVECM(mpz_t a, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, gmp_ui *y, gmp_ui *y1, mpz_t *z, mpz_t *z1, int D, int E, int d1, int f1, int S, int &Y, int &i, int &d2, int &d3, int &S1, int *f2);//D, E, H, K, S.

//VALIDATORI ABUNDENŢIALI ȘI FUNCȚII AUXILIARE:
gmp_ui CMMDC(gmp_ui a, gmp_ui b, gmp_ui c);
gmp_ui CMMDC2(gmp_ui n, gmp_ui a, gmp_ui b, gmp_ui c);
gmp_ui CMMDCA(gmp_ui a, gmp_ui b, gmp_ui c);
int FOND1(gmp_ui j, gmp_ui j1);
int TRAT(gmp_ui j, gmp_ui j1);//NUMSIMPL.
int TRAT1(gmp_ui j, gmp_ui j1, gmp_ui k, gmp_ui k1);
int VALID(mpz_t A, mpz_t f, mpz_t B);
int VALID2(mpz_t A, mpz_t f, mpz_t B, mpz_t e, int &i);
int VALID3(mpz_t A, double &a2, double &a3, double &a4, double &E2);
int VALID4(mpz_t A, mpz_t f, mpz_t B);
void VALIDNOU(mpz_t unu, mpz_t doi, mpz_t nr, mpz_t nm);
int VALIDNOU1(mpz_t unu, mpz_t doi, mpz_t nr, mpz_t nm, gmp_ui &nr1, gmp_ui &nm1);
int VALIDV(mpz_t A, mpz_t f, mpz_t B, mpz_t e, int &i);
void MODPINTSUS(mpz_t unu, mpz_t p, gmp_ui coef, mpz_t doi, gmp_ui j, gmp_ui k, gmp_ui k1, gmp_ui *div, gmp_ui *sum, char *Q, FILE *F2);
void MODPINTJOS(mpz_t unu, mpz_t p, gmp_ui coef, mpz_t doi, gmp_ui j, gmp_ui k, gmp_ui k1, gmp_ui *div, gmp_ui *sum, char *Q, FILE *F2);
void MODPMPZSUSE(mpz_t unu, mpz_t p, gmp_ui coef, mpz_t j, gmp_ui i, gmp_ui j1, gmp_ui k, gmp_ui k1, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2);
void MODPMPZJOSE(mpz_t unu, mpz_t p, gmp_ui coef, mpz_t j, gmp_ui i, gmp_ui j1, gmp_ui k, gmp_ui k1, mpz_t div, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2);
void MODPINTSUS2(mpz_t unu, gmp_ui coef, mpz_t doi, gmp_ui j, gmp_ui k, gmp_ui k1, char *Q, FILE *F2);
void MODPMPZSUSE2(mpz_t unu, gmp_ui coef, mpz_t doi, mpz_t j, gmp_ui k, gmp_ui k1, char *Q, FILE *F2);

//CITIRE DIN FIŞIER ÎN VECTOR:
void CIT(FILE *f1, mpz_t *a, int a1, int b1, int &e, const char *t, gmp_ui L);
void CIT1(FILE *f1, mpz_t *a, int a1, int &e, const char *t, gmp_ui L);
void PARTDEPL(FILE *f1, char *Y, int i);
void CITLIM(FILE *f1, mpz_t *a, int a1, int b1, int &e, const char *t, gmp_ui L, gmp_ui PP, long M, long N);
void CITLIM1(FILE *f1, mpz_t *a, int a1, int &e, const char *t, gmp_ui L, gmp_ui PP, long M, long N);

//CĂUTĂRI NEBINARE:
int PREZ2(gmp_ui a, gmp_ui *b, int c, int d);
int PREZ3(gmp_ui a, gmp_ui *b, int &c, int d);
int PREZI(int a, int *b, int &c, int d);
int PREZM(mpz_t a, mpz_t *b, int c, int d);
int GAS(gmp_ui *y, gmp_ui n, int Y);
int GAS2(gmp_ui *A2, gmp_ui u, int W);
int GAS3(gmp_ui *A2, gmp_ui u, int W, int W1);

//SCRIERE DE NUMERE:
void SCRIE(mpz_t a, char *Y, FILE *f2);
void SCRIE1(char *Y, FILE *f2);
void SCRIE2(mpz_t a, FILE *f2);
void SCRIE3(mpz_t a, char *Y, FILE *f2);

//FACTUS + FRACTUS - factorii primi ai unui număr:
void FACTDIV1(mpz_t a, mpz_t e, mpz_t f, gmp_ui &c, int &d);
void FACTDIV2(mpz_t a, mpz_t h, mpz_t e, mpz_t e1, mpz_t f, int &d);
void FRACTDIV1(mpz_t a, mpz_t b, mpz_t e, mpz_t f, gmp_ui &c, int &d);
void FRACTDIV2(mpz_t a, mpz_t b, mpz_t h, mpz_t e, mpz_t e1, mpz_t f, int &d);

//ALTE FUNCŢII:
void SORT2(char fil[][80], int S);
int NUME(const char *CIT);
void ADTEXT(const char *t1, const char *t2);
void TEXTSAR(char t, char *Q, int jos, int sus, unsigned long &PP, const char *t1, const char *t2);
void FACTORI(gmp_ui *b, int i, int &I, int &J, int &V, int num);
void FACTOR(gmp_ui *b, int &I, int &D);
void MARG1(mpz_t *a, mpz_t d, int &e, int &l, int &I, int &R, int un, int doi);
void MARG2(mpz_t *a, mpz_t d, int &I, int &R, int &l, int &m, int un, int doi);
void INTEROGARE(char &t);
int ZER(FILE *L1, int &d, int &q);
void PUTERE(gmp_ui &a, gmp_ui b, int n);
void PUTEREA(const char *t1, const char *u);
void FACTORMATR(const char *P, const char *t1, const char *u, const char *w, char spec);
int DESC(gmp_ui a, gmp_ui *b1, gmp_ui *A3, int &u1);
void ADPRIM(gmp_ui *bb);
void PRELPRIM(gmp_ui *b, gmp_ui *bb, gmp_ui &n, int &D);
void ARANJFACT(int u, int D, gmp_ui *b, gmp_ui *b1, int &u1, int &f, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int *A4, int e, int H, int I, int r, int disc);
void ARANJFACT2(int u, int D, gmp_ui *b, gmp_ui *b1, int &u1, int &f, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int *A4, int e, int H, int I, int r);
void CF(int t);
int PUTEREA1();
int PUTEREA2(int b1, char *t2, int &S);
void VECUN02();
void *TXT(int sus);
void QPARINT(mpz_t *array, /*mpz_t pivot, */long left, long right, int cutoff);
void QPAR(mpz_t *array, /*mpz_t b,*/ long lenArray);
void SQPARINT(char array[][DIMM], long left, long right, int cutoff);
void SQPAR(char array[][DIMM], long lenArray);
int UNIT(int n);
gmp_ui MEM(void);
gmp_ui LITUAN(mpz_t *a, char *tx);
gmp_ui LITUAN2(FILE *FLIT, long D, char *tx, int min, int max);
gmp_ui LITUAN3(gmp_ui *a, char *tx);
void TRUNC(long PP, char *t2, int c);
void RAT(FILE *f1, int b1, char *Y, char &w1, unsigned long P, unsigned long &PP, unsigned long &PP1, int mod, char p2, int num);
void RAT2(FILE *f1, int b1, char *Y, char &w1, unsigned long P, unsigned long &PP, unsigned long &PP1, int mod, char p1, char p2, char scif2, int num);
int CALCMINMAX(int &min, int &max, FILE *f1, long PP, char *S);
gmp_ui PREGTEXT(FILE *FLIT, gmp_ui n, int dim, gmp_ui D, int min, int max, char *Y, char *tx);
long MANUCE(FILE *f1, char *t2, long PP, char *S, int c, int max, int max2);

//REFORMA PUTERNUM, CU TOT APARATUL DE SUME DE DIVIZORI:
void SUMIMENS(mpz_t A, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t p, mpz_t sumdoi);
void SUMIMENS1(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t sumdoi);
void SUMDIVV(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t sumdoi);
void SUMDIVV1(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t sumdoi, int i);
void NUMESUMPURG(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t sumdoi, int i);
void NUMESUMV(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t sumdoi, int i);
void NSPURG1(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sumdoi, int i);
void NSV1(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sumdoi, int i);
void NUMSUMPURG1(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sumdoi, int i);
void NUMSUMV1(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sumdoi, int i);
void NUMSUMV2(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t sumdoi, int i);
void NUMSUMV3(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t sumdoi, int i);
void SMV(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui e);
void SMV1(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui e, int *f2);
void SUM(mpz_t A, mpz_t B, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t p, mpz_t sumdoi);
void SUM1(mpz_t A, mpz_t B, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t p, mpz_t sumdoi, int *f2);
void SUMADIV2(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, int *f2, mpz_t sumdoi);
void NUMSUMPURG2(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, mpz_t sumdoi);
void NUMSUM2(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, mpz_t sumdoi);
void SUMADIVV3(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], mpz_t sumdoi, int *mem, int *f2, int i);
void SUMADIVV4(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], mpz_t sumdoi, int *mem, int *f2, int i, int i1);
void SUMADIVV5(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], mpz_t sumdoi, int *mem, int *f2, int i, int i1);
void SUMDIVMODMARE(mpz_t p, mpz_t B, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], mpz_t *C, mpz_t *C1, int E, int K, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, mpz_t nm, mpz_t nr, mpz_t q, mpz_t qq, int *mem);
void SUMDIVMOD(mpz_t p, mpz_t B, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], mpz_t *C, mpz_t *C1, int E, int K, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, mpz_t nm, mpz_t nr, mpz_t q, mpz_t qq, int *mem);
void SUMDIVMOD1(mpz_t p, mpz_t B, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], mpz_t *C, mpz_t *C1, int E, int K, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, mpz_t nm, mpz_t nr, mpz_t q, mpz_t qq, int *mem);
void NUMSUMMODPURG(mpz_t p, mpz_t B, mpz_t doi, mpz_t trei, mpz_t d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int K, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, mpz_t nm, mpz_t nr, mpz_t q, mpz_t qq, int *mem);
void NUMSUMMOD(mpz_t p, mpz_t B, mpz_t doi, mpz_t trei, mpz_t d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int K, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, mpz_t nm, mpz_t nr, mpz_t q, mpz_t qq);
void NUMSUMMODPURG1(mpz_t p, mpz_t doi, mpz_t trei, mpz_t d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &j1, gmp_ui &j2, gmp_ui &k, mpz_t nm, mpz_t nr, mpz_t q, mpz_t qq);
void NUMSUMMOD1(mpz_t p, mpz_t doi, mpz_t trei, mpz_t d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &j1, gmp_ui &j2, gmp_ui &k, mpz_t nm, mpz_t nr, mpz_t q, mpz_t qq);
void SMOD(mpz_t p, mpz_t doi, gmp_ui *b, gmp_ui *b1, gmp_ui e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &j1, gmp_ui &j2, gmp_ui &k, gmp_ui &nm, gmp_ui &nr);
void SMOD1(mpz_t p, mpz_t doi, gmp_ui *b, gmp_ui *b1, gmp_ui e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &j1, gmp_ui &j2, gmp_ui &k, int *f2, gmp_ui &nm, gmp_ui &nr);
void ABP(mpz_t A, gmp_ui *b, gmp_ui *b2, mpz_t *C, mpz_t e, mpz_t f, double &a2, double &a3, double &a4, double &E2, int &D, int &E, int d1, FILE *F1, gmp_ui div1[][MAX2], mpz_t div[][MAX1], int *mem, int m);
void ABP1(mpz_t A, gmp_ui *b, gmp_ui *b2, mpz_t *C, mpz_t f, double &a2, double &a3, double &a4, double &E2, int &D, int &E, int d1, FILE *F1, gmp_ui div1[][MAX2], mpz_t p);
void ABP2(mpz_t A, gmp_ui *b, gmp_ui *b2, mpz_t *C, mpz_t e, mpz_t f, gmp_ui &s, double &a2, double &a3, double &a4, double &E2, int &D, int &E, int d1, FILE *F1, gmp_ui div1[][MAX2], mpz_t div[][MAX1], mpz_t p, int *mem, int m, int *f2);
void ABP3(mpz_t A, gmp_ui *b, gmp_ui *b2, mpz_t *C, gmp_ui &s, mpz_t f, double &a2, double &a3, double &a4, double &E2, int &D, int &E, int d1, FILE *F1, gmp_ui div1[][MAX2], mpz_t p, int *f2);

//ALTE FUNCȚII IMPLICATE LA PUTERNUM:
void INIT(int K, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1]);
void INIT2(int K, mpz_t modpdiv[][MAX2], mpz_t modpsum[][MAX2]);
void DECIDTEXT(char *PUT, int jos);
void PUTERI2(const char *t, int *put);
void UNIFACTMSUB(int sus, gmp_ui *b, gmp_ui *b1, gmp_ui *b2, int D, int H, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t divdiv[][3], mpz_t divsum[][3], int *P, int *P1, mpz_t unu, mpz_t d, mpz_t trei, gmp_ui *SUMDOI, int sumcap, int inv);
void UNIFACTSUB(int sus, gmp_ui *b, gmp_ui *b1, gmp_ui *b2, int D, int H, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t divdiv[][3], mpz_t divsum[][3], int *P, int *P1, mpz_t unu, mpz_t d, mpz_t trei, mpz_t *SUMDOI, int sumcap, int inv);
void UNIFACTSUBM(int sus, gmp_ui *b, gmp_ui *b1, gmp_ui *b2, mpz_t *C, mpz_t *J, int D, int E, int H, int K, mpz_t div[][MAX1], mpz_t sum[][MAX1], mpz_t divdiv[][3], mpz_t divsum[][3], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *P, int *P1, mpz_t unu, mpz_t d, mpz_t trei, mpz_t *SUMDOI, int sumcap, int inv, int lim);
void UNIFACTUS(int sus, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int &E, int H, int K, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *q1, gmp_ui *q0, int inv);
void UNIVEC(int sus, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int &E, int H, int K, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, int inv);
void UNIVEC2(gmp_ui *b, mpz_t *C, mpz_t *C1, int D, int &E, int H, int K, mpz_t div[][MAX1], gmp_ui div1[][MAX2], int *mem, int inv);
void UNIFACTUS1(int sus, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int &E, int H, int K, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int inv);
void UNIFACTUM(int sus, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int inv);
void mpz_init_va(mpz_t first, ...);
void PURGANTE(mpz_t *C, mpz_t *C1, int &E);
void PURGANTE2(mpz_t *C, mpz_t *C1, int &E);

//FUNCȚII LA FILTRARE:
void SMVPAR(mpz_t D, mpz_t d1, mpz_t e1, mpz_t p1, FILE *S2, gmp_ui *b, gmp_ui *b2, int i, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi, char *Y, int X);
void PURG1PAR(mpz_t D, mpz_t d1, mpz_t e1, mpz_t p1, FILE *S2, gmp_ui *b, gmp_ui *b2, int i, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *q1, char *Y, int X);
void SUMVPAR(mpz_t D, mpz_t d1, mpz_t e1, mpz_t p1, FILE *S2, gmp_ui *b, gmp_ui *b2, int i, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *q1, char *Y, int X);
void DIVV1PAR(mpz_t D, mpz_t d1, mpz_t e1, mpz_t p1, FILE *S2, gmp_ui *b, gmp_ui *b2, int i, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *q1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, int J, int  l, char *Y, int X);
void DIVVPAR(mpz_t D, mpz_t d1, mpz_t e1, mpz_t p1, FILE *S2, gmp_ui *b, gmp_ui *b2, int i, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *q1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, int J, int l, char *Y, int X);
void IMENSPAR(mpz_t D, mpz_t d1, mpz_t e1, mpz_t p1, FILE *S2, gmp_ui *b, gmp_ui *b2, int i, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *q1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, int J, int l, char *Y, int X);

//AUXILIARE DE SCANAT BIȚI BINARI:
int mpz_scan12(mpz_t a, gmp_ui *sdoi, mpz_t *sumdoi, int b);
int mpz_scanul(mpz_t a, char *Q, int b);
int gmp_scan1(gmp_ui a, gmp_ui *divdoi, int b);

//PENTRU AJUSTAT FIȘIERELE R ȘI LPKQ:
void TRUNCTEXT(gmp_ui P1, gmp_ui PP1, char *Y, char *SCR, FILE *f1, int mod, int a1, char w1, char cifr, char cifr2);


gmp_ui DETECTNUM(char *TEXT) {
int n = strlen(TEXT) - 1;

if(TEXT[n] == '2') {
	char s[90], ss[300];
	strncpy(s, TEXT, n);
	strcat(s, "C");
	FILE *F = fopen(s, "r");
	fgets(ss, 300, F);
	char *c = NULL;
	
	fgets(ss, 300, F);
	c = strstr(ss, "MODIFSUM");
	fgets(ss, 300, F);
	fgets(ss, 300, F);
	fgets(ss, 300, F);
	puts(ss);
	gmp_ui m1, m2;
	
	n = strlen(ss);//44 49 1 2 1000 1
	char st = ' ', *t;
	int j = 0;
	
	for(int i = 0; i < n; i++)
	if( (ss[i] == st) && (++j == 3) )  {
		m1 = strtoull(ss, &t, 10);
		m1 = strtoull(t, &t, 10);
		m1 = strtoull(t, &t, 10);
		m1 = strtoull(t, &t, 10);
		m2 = strtoull(t, &t, 10);
		if(c != NULL)
			m2 /= 3;
		printf("Limitele: %llu %llu.\n", m1, m2);
		return m2;
		}
	}
	
return 0;
}


void TOLIL(int J, int b1, char *TEXT, mpz_t *a, int B, int G, int &W, gmp_ui *b, mpz_t *C, int *EXP, int &D, int &E, int &L, const char *Z, int a1) {
int i, j, m, n, H;
mpz_t u, u1, K[1800], K3[1800], K4[1800];
FILE *F1, *F2, *f1;
gmp_ui I[U1], I1[U1], X = 0, m2 = DETECTNUM(TEXT), L3[1800], L4[1800];//Alternativ la K3, K4 pentru puteri sub 2^64 de factori primi (<=CF160.TXT).
mpz_inits(u, u1, NULL);

for(i = 0; i < 1800; i++)
	mpz_inits(K[i], K3[i], K4[i], NULL);

char t[75], v[75], Y[1920], t1;
long PP1, PP2;
/*
if(b1 == 0)
	{
	sprintf(t, "PRIME%d.TXT", 2);//PRIME2.TXT
	D = D1910;
	E = 421;
	H = HTOT;
	TOLMARE(b, C, D, E, F1, Z);
	goto s2;
	}
else*/

if(a1 < 0) {
	H = HPH(b1);
	sprintf(t, "PM.TXT");
} else {
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
		PP1 = LUNGHEZ2(v);
		F1 = fopen(v, "r");
		F2 = fopen(t, "w");
		CITR(10000, F2, F1, PP1);
		fclose(F1);
		fclose(F2);
		}
	
	F2 = fopen(t, "r");
	if(n) {		
		PP1 = LUNGHEZ2(t);
		}

	while(1)  {
		gmp_fscanf(F2, "%Zd", u);
		if(ftell(F2) == PP1)
			break;

		if(mpz_cmp_ui(u, X) < 0)
			b[D++] = mpz_get_ui(u);
		else
			mpz_set(C[E++], u);
		}

	fclose(F2);
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

	for(i = 0; i < L; i++) {
		gmp_fscanf(F1, "%Zd", u);
		if(!E || CB(C, u, 0, E))
			mpz_set(K[n++], u);
		}

	L = W - L;
	fclose(F1);

QS2(I, 0, m);
printf("%d %sfactori mici mai rămân cu %d %sfactori mari.\n", m, PREP(m), n, PREP(n));
if(m2 > 1) {
	while(I[m-1] > m2) m--;
}

printf("Noul m este %d.\n", m);

for(j = 0; j < B; j++)
	mpz_tdiv_q_2exp(a[j], a[j], mpz_scan1(a[j], 0));

i = 0;
printf("%d este numărul cu care încep factorii cei mici.\n", D);
PP2 = D;
gmp_ui gmpplus[5000];
mpz_t mpzplus[3200];

for(i = 0; i < 3200; i++) 
	mpz_init_set_ui(mpzplus[i], 0);
	
for( i = 0; i < m; i++)
	gmpplus[i] = 0;

#pragma omp parallel for private(j) schedule(dynamic, 1)
for(i = 0; i < m; i++) {
//while(1) {
	j = B;//printf("%d %d\n", i, m);
	while(1) {
		if(mpz_divisible_ui_p(a[j], I[i])) {
			//b[D++] = I[i];
			gmpplus[i] = I[i];
			break;
			}
		if(!j--)
			break;
		}

	if(i % 500 == 0) printf("%d\n", i);
//	if(!(++i ^ m))
//		break;//Gata D pentru MAXPUT.
	}

for(i = 0; i < m; i++)
if(gmpplus[i]) 
	b[D++] = gmpplus[i];
	
printf("%d: numărul la care vor ajunge factorii cei mici.\n\nCine mai vine: ", D);

for(; PP2 < D; PP2++) {	
	printf("%llu ", b[PP2]);
	}
putchar('\n');

i = 0;
L = W - L;
//Bun pentru FACTORSUBM la numerele de peste 160 de cifre.
if( (m2 < 2) && (b1 > 160) ) {
	printf("Factorii cei mari pornesc cu %d.\n", E);
	PP2 = E;
	#pragma omp parallel for private(j) schedule(dynamic, 1)
	for(i = 0; i < n; i++) {
//	while(1) {
		j = B;
		while(1) {
			if(mpz_divisible_p(a[j], K[i])) {
				//mpz_set(C[E++], K[i]);
				mpz_set(mpzplus[i], K[i]);
				break;
				}
			
			if(!j--)
				break;
			}
		
		if(i % 50 == 0) printf("%d\n", i);
	//	if(!(++i ^ n))
	//		break;
		}
		
	for(i = 0; i < n; i++)
	if(mpz_cmp_ui(mpzplus[i], 0)) mpz_set(C[E++], mpzplus[i]);
	printf("Factorii cei mari sunt acum %d.\n\nCine mai vine la ei: ", E);
	for(; PP2 < E; PP2++) {
		gmp_printf("%Zd ", C[PP2]);
		}

	putchar('\n');
	}

//Dacă nu am folosit coeficienți de legătură peste 2^64 într-o zonă, nu apar factori primi mpz_t noi acolo.
s2:

for(i = 0; i < 1800; i++)
	mpz_clears(K[i], NULL);

if(J)	{
	W = MAXPUT(B, D, b, EXP, u, a, K3, K4, L3, L4, b1, v, H, PP1, Y, u, gmpplus/*, mpzplus*/, m2);//PP1
	TOL2(W, D-W, B, b, a, PP1, Y, u);//PP1
	if(E > 0)
		TOL3(E, B, C, a, b1, v, PP1, Y, u);//De aranjat numele textelor; PP1

	F1 = fopen(t, "w");
	for(i = 0; i < D; i++)
		fprintf(F1, "%llu\n", b[i]);
	for(i = 0; i < E; i++)
		gmp_fprintf(F1, "%Zd\n", C[i]);
	fclose(F1);
	
	F1 = fopen("/CFPAR.TXT", "a");
	fprintf(F1, "%s: %d %d %d %d.\n", t, W, D, E, D+E);
	fclose(F1);
	printf("%d %d %d %d\n", W, D, E, D+E);
	
	char CP[100];
	a1 < 0?
		sprintf(CP, "cp PM.TXT /PM.TXT && cp PUTERIM.TXT /PUTERIM.TXT && cp VPP.TXT /VPP.TXT")
	: (
		b1 <= 52?
		sprintf(CP, "cp CF%d.TXT /CF%d.TXT && cp VP%d.TXT /VP%d.TXT && cp PUTERI%d.TXT /PUTERI%d.TXT", b1, b1, b1, b1, b1, b1)
			: (b1 <= 420?
				sprintf(CP, "cp CF%d.TXT /CF%d.TXT && cp VC%d.TXT /VC%d.TXT && cp VP%d.TXT /VP%d.TXT && cp PUTERI%d.TXT /PUTERI%d.TXT", b1, b1, b1, b1, b1, b1, b1, b1)
				:
				sprintf(CP, "cp P2.TXT /P2.TXT && cp VPTOT.TXT /VPTOT.TXT && cp VCTOT.TXT /VCTOT.TXT && cp PUTERITOT.TXT /PUTERITOT.TXT"))
			);
	system(CP);
	system("g++ -m64 CARONTELE.cc -lgmp -fopenmp -o CARONTELE");
	}

for(i = 0; i < 1800; i++)
	mpz_clears(K3[i], K4[i], NULL);
for(i = 0; i < 3200; i++)
	mpz_clear(mpzplus[i]);	

mpz_clear(u);
}


void PUTDOI(mpz_t *a, int B, int G) {
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


void PUTMAX(const char *v, gmp_ui *MX, mpz_t *MXM, int *EXP, int K, int H) {
FILE *F = fopen(v, "r");
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


int MAXPUT(int A, int &D, gmp_ui *b, int *EXP, mpz_t h, mpz_t *a, mpz_t *K3, mpz_t *K4, gmp_ui *L3, gmp_ui *L4, int b1, char *v, int H, long PP1, char *Y, mpz_t u, gmp_ui *gmpplus/*, mpz_t *mpzplus*/, gmp_ui m2) {
gmp_ui i1[U1], j[U1], m, MX[1500];
mpz_t MXM[900];

int e = 0, i = 0, g, k;
FILE *F1;
for(i = 0; i < 900; i++)
	mpz_init(MXM[i]);

b1 < 52?
sprintf(v, "/PUTERIM.TXT") : (
	(b1 ^ 1910)? sprintf(v, "/PUTERI%d.TXT", b1) : sprintf(v, "/PUTERITOT.TXT"));
int K = 0;

if(b1 == 1910)
	K = KTOT + 3;
else if(b1 == 420)
  	K = K420 + 3;
else if(b1 == 240)
	K = K240 + 3;

PUTMAX(v, MX, MXM, EXP, K, H);//Se iau informaţii din fişierul de PUTERI ce corespunde cu b1.
/*mpz_t Z1[100][15];
gmp_ui Z2[5400][MAX2];
mpz_t xe;
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
	
	mpz_set_ui(Z2[i][4], NPS);
}

for(int i = K; i < H; i++) {
	m = MX[i-K];
for(int j = EXP[i]; j < EXP[i] + 2; j++) {
	Z2[i][j-EXP[i]] = m;
	m *= b[e];
	}
	
	Z2[i][[2] = NPS;
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
//for(i = 0; i < K; i++) gmpplus[i] = 0;
if(K) {
	#pragma omp parallel for schedule(dynamic, 1) private(g) shared(e)
	for(e = 0; e < K; e++) {
	//while(1) {
		g = A;
		mpz_t h1;
		mpz_init_set(h1, MXM[e]);
		
		while(1) {
			if(mpz_divisible_p(a[g], h1)) {
				while(1) {
					mpz_mul_ui(h1, h1, i1[e]);					
					if(!mpz_divisible_p(a[g], h1))
						break;
					EXP[e]++;
					}
				mpz_divexact_ui(h1, h1, i1[e]);
				}

			if(! (g--) ) {
				mpz_set(MXM[e], h1);
				break;
				}
			}
		mpz_clear(h1);
		//if(! (++e ^ K) )//K, pe stil vechi H.
		//	break;
		}	
	}
//else//Jos cu else.
#pragma omp parallel for schedule(dynamic, 1) private(m, g) shared(e)
for(e = K; e < H; e++) {
//	while(1) {
		g = A;
		m = MX[e-K];		
		//printf("%d %d\n", e, H);
		while(1) {
			if(mpz_divisible_ui_p(a[g], m)) {
				while(1) {
					m *= i1[e];					
					if(!mpz_divisible_ui_p(a[g], m))
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
			
	//	if(! (++e ^ H) )
	//		break;
		}
i = H;
k = 0;
for(g = H; (g < D); g++) {
	if( ( (m2 > 1) && (b[g] < m2)) || ( (m2 < 2) && (b[g] < 100000000U)) )
		j[k++] = b[g];
}


printf("m2 e %llu.\nDE COMPARAT: %d cu %d. Doar al doilea număr de numere prime va fi parcurs, nu primul.\n\nCine mai vine peste H: ", m2, D-H, k);
int P = k;
gmp_ui gmpplus1[5000], gmpplus2[5000];
for(k = 0; k < 5000; k++) {gmpplus[k] = 0; gmpplus1[k] = 0; gmpplus2[k] = 0;}

#pragma omp parallel for schedule(dynamic, 1) private(m, g) shared(k)
for(k = P-1; k >= 0; k--) {
//while(1) {//Filtrare; de depistat noile puteri multiple care s-ar adăuga la H.
//	if(!k--)
	//	break;
	g = A;
	//int nk = (j[k] < 429496726L);
	m = j[k] * j[k];
//	mpz_set_ui(h, j[k]);
//	mpz_mul_ui(h, h, j[k]);
	//mpz_ui_pow_ui(h, j[k], 2);
	int exp = 2, nimic = 0;
	//gmp_printf("%Zd %llu\n", h, j[k]);

	while(1) {
		if(mpz_divisible_ui_p(a[g], m))
		//if(mpz_divisible_p(a[g], h)) 
			{
			nimic = 1;
			while(1) {
				m *= j[k];
				if(!mpz_divisible_ui_p(a[g], m))
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
				//i1[i] = j[k];				
				//MX[i-K] = m;
				//MX[i-K] = mpz_get_ui(h);
				//EXP[i++] = exp;
				gmpplus[k] = m;
				gmpplus1[k] = exp;
				gmpplus2[k] = j[k];				
				}
			break;
			}
		}
	}

for(k = P - 1; k >= 0; k--) {
	if(gmpplus[k]) {
		MX[i-K] = gmpplus[k];
		EXP[i] = gmpplus1[k];
		i1[i++] = gmpplus2[k];
		printf("%llu ", gmpplus2[k]);
	}
}

P = i - H;
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


b1 < 52?
	sprintf(v, "VPP.TXT")
	: (b1 ^ 1910? sprintf(v, "VP%d.TXT", b1) : sprintf(v, "VPTOT.TXT"));

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
fclose(F1);
if(K) {
	QS(K4, 0, e, h);
	TOL1(K3, K4, b, EXP, H, F1, b1, v);//L3, L4.
	}
else {
	QS2(L4, 0, e);
	TOL0(L3, L4, b, EXP, H, F1, b1, v);
	}
	
for(i = 0; i < 800; i++)
	mpz_clear(MXM[i]);

return H;
}


void TOL0(gmp_ui *L3, gmp_ui *L4, gmp_ui *b, int *EXP, int H, FILE *F1, int b1, char *v) {
int i = H-1, j;//, l = 0;
gmp_ui d[800], e[800];//De aici va lua b factorii rearanjați în ordinea descrescătoare a puterii maxime de apariție.
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

b1 < 52? sprintf(v, "PUTERIM.TXT") : sprintf(v, "PUTERI%d.TXT", b1);
F1 = fopen(v, "w");
for(i = 0; i < H; i++){
	b[i] = d[i];
	fprintf(F1, "%llu la puterea %llu este: %llu.\n", b[i], e[i], L4[H-i-1]);
	}
fclose(F1);
}


void TOL1(mpz_t *K3, mpz_t *K4, gmp_ui *b, int *EXP, int H, FILE *F1, int b1, char *v) {
int i = H-1, j;//, l = 0;
gmp_ui d[800], e[800];

while(1) {
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
fclose(F1);
}


void TOL2(int e, int f, int &I, gmp_ui *b, mpz_t *a, long PP1, char *Y, mpz_t u) {
gmp_ui A[10000], B[10000], c[10000], d[10000];
int i, j, k, l, m, I1;
FILE *F1;
i = 0;
k = 0;
m = e;

#pragma omp parallel for shared(i) private(m, j, k) schedule(dynamic, 1)
for(i = 0; i < f; i++) {
//while(1) {
	j = 0;
	k = I;
	m = i+e;
	while(1) {//Se ia fiecare factor prim şi se trece prin vectorul de numere, ca să se vadă de câte ori apare factorul acolo.		
		if(mpz_divisible_ui_p(a[k], b[m]))
			++j;
		if(! (k--) )
			break;
		}

	A[i] = b[m];//numere prime
	B[i] = j;//de câte ori apar ele
	//if( !(++i ^ f) )
		//break;
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


void TOL3(int &f, int &I, mpz_t *C, mpz_t *a, int b1, char *v, long PP1, char *Y, mpz_t u) {
gmp_ui B[1671], c[1671];
mpz_t A[1671], d[1671];
int i, j, l, I1;
unsigned long k;
FILE *F1;

for(i = 0; i < 1671; i++)
mpz_inits(A[i], d[i], NULL);
i = 0;

#pragma omp parallel for shared(i) private(k, j) schedule(dynamic, 1)
for(i = 0; i < f; i++) {
//while(i < f) {
	j = 0;
	k = I;
	
	while(1) {
		if(mpz_divisible_p(a[k], C[i]))
			++j;
		if(! (k--) )
			break;
		}

	mpz_set(A[i], C[i]);
	B[i] = j;
	}

i = 0;
while(i < f) {
	c[i] = B[i];
	++i;
	}
	
QS2(c, 0, f);
l = 0;

b1 < 52? sprintf(v, "VCP.TXT")
: (b1 ^1910? sprintf(v, "VC%d.TXT", b1) : sprintf(v, "VCTOT.TXT"));

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
				mpz_set(d[l++], A[j]);
				gmp_fprintf(F1, "%Zd\n", A[j]);				
				}
			if(!j)
				break;
			}
	}	
	else {//Nu e consecutivitate în valori egale pentru numerele de apariţii ale factorilor primi.
		while(1) {//Se caută în B numai până la locul unde factorul prim are numărul corespunzător de apariţii, care sigur se găseşte o singură dată.
			if( c[i] == B[--j] ) {
				mpz_set(d[l++], A[j]);
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

fclose(F1);
F1 = fopen(v, "r");

for(i = 0; i < f; i++)
	gmp_fscanf(F1, "%Zd", C[i]);

for(i = 0; i < 1671; i++)
	mpz_clears(A[i], d[i], NULL);
fclose(F1);
}


void TOLMARE(gmp_ui *b, mpz_t *C, int D, int E, FILE *F1, const char *Z) {//Pentru P2

F1 = fopen(Z, "r");
for(int i = 0; i < D; i++)
	fscanf(F1, "%llu", &b[i]);
	
for(int i = 0; i < E; i++)
	gmp_fscanf(F1, "%Zd", C[i]);
	
fclose(F1);
}


void ARANJTEXT(char *t, const char *t1, const char *u, const char *t2) {
strcpy(t, t1);
strcat(t, u);//export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib
strcat(t, t2);
}


void PUTERVEC() {
FILE *F1;
int i, j, k, y, IND[500];
gmp_ui b[5000], ba[5000];
mpz_t C[426], u, u1, D[N1910];

mpz_inits(u, u1, NULL);
for(i = 0; i < 426; i++)
	mpz_init(C[i]);
TOLMARE(b, C, 5394, 426, F1, "/P2.TXT");

F1 = fopen("/P2.TXT", "r");
for(i = 0; i < N1910; i++)
	{
	gmp_fscanf(F1, "%Zd", u);
	mpz_init_set(D[i], u);
	}
fclose(F1);

IND[0] = 534;
F1 = fopen("/INDTOTJ.TXT", "r");

for(i = 1; i < 1+HTOT; i++)
	fscanf(F1, "%d", &IND[i]);
fclose(F1);

ba[0] = 2;
for(i = 1; i < 5141; i++)
		ba[i] = b[i-1];
y = 0;
		
for(k = 0; k < N1910; k++) {
	for(i = 0; i < HTOT; i++) {
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

	for(i = 1+HTOT; i < 1+D1910; i++)
		{
		mpz_set_ui(u1, ba[i] + 1);
		if(mpz_divisible_p(u1, D[k]))
			{
			gmp_printf("%Zd DIN MIJLOCIU\n", D[k]);			
			y++;
			//goto s1;
			}	
		}
		
	for(i = 0; i < 426; i++)
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

for(i = 0; i < N1910; i++)
	{
	mpz_set(u, D[i]);
	mpz_add_ui(u, u, 1);
	if(mpz_divisible_ui_p(u, NPS))
		gmp_printf("%Zd NPS\n", D[i]);	
	}

for(i = 0; i < N1910; i++)
	mpz_clear(D[i]);
for(i = 0; i < 426; i++)
	mpz_clear(C[i]);
}


int HPH(int &b1) {
	if(b1 <= 40) {
	b1 = 40;
	return HP;
	}

return HP;
}


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


void QS(mpz_t *a, int b, int e, mpz_t pv) {
int l, r;
 if(e > b+1)
	{
	mpz_set(pv, a[b]);
	l = b+1;
	r = e;

	while(1)
		{
		if(l>=r)
			break;
		
		if(mpz_cmp(a[l], pv)<=0)
			++l;
		else
			mpz_swap(a[l], a[--r]);		
		}
	
	mpz_swap(a[--l], a[b]);
	QS(a, b, l, pv);
	QS(a, r, e, pv);	
	}
}


void SIB(mpz_t *a, int b, int c, mpz_t d) {
int e = b + 1, f, g, h, i;

while(e < c) {
	mpz_set(d, a[e]);
	f = b;
	g = e - 1;
	
	while(1) {
		if(f > g)
			break;
		
		h = (f + g) >> 1;
		mpz_cmp(a[h], d) > 0?
			g = h-1 : f = h+1;
		}

	for(i = e-1; i>=f; --i)
		mpz_set(a[i+1], a[i]);

	mpz_set(a[f], d);
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


void QSI(int *a, int b, int e) {
int j, pv, l, r;

if(e > b+1) {
	pv = a[b];
	l = b + 1;
	r = e;

	    while(1) {
		if(l >= r)
			break;
		
		if(a[l] <= pv)
			++l;
		else {
			j = a[--r];
			a[r] = a[l];
			a[l] = j;	
			}
		} 

	j = a[--l];
	a[l] = a[b];
	a[b] = j;

	QSI(a, b, l);
	QSI(a, r, e);
	}
}


void HS(mpz_t *a, mpz_t t, unsigned long D) {/*t, variabilă temporară.*/

unsigned long n = D, par = (D>>1), ind, cop; /*Indecşi de heap.*/

while (1) {/*Ciclează până ce vectorul este sortat.*/
	if (par) {
	       	mpz_set(t, a[--par]);/*Prima parte: sortarea heapului. Vechea valoare trece în t.*/
	       	}
	else 	{/*Partea a doua: extragerea elementelor la faţa locului (in-place).*/
	       	 if (!--n) {/*Heapul se micşorează.*/
		      	return; /*Heapul gol = s-a terminat sortarea.*/
		    	}
			
	       	mpz_set(t, a[n]);/*Salvarea vechii poziţii de heap în temporar.*/
		mpz_set(a[n], a[0]);/*Salvarea primei poziţii dincolo de heap.*/
	       	}        
        /*Inserarea: punerea lui t în josul heapului pentru înlocuirea părintelui.*/
        ind = par;/*Se începe la indexul părintelui.*/
        cop = (ind<<1) + 1; /*Se obţine indexul copilului său stâng.*/

        while (cop < n) {
		if ( (cop + 1 < n) && (mpz_cmp(a[cop + 1], a[cop]) > 0) ) {/*Alegerea celui mai mare copil.*/
		    	cop++; /*Copilul din dreapta există şi este mai mare.*/
			}
        
		if (mpz_cmp(a[cop], t) > 0) {/*E cel mai mare copil mai mare decât poziţia din heap (Entry)?*/
		        mpz_set(a[ind], a[cop]); /*Suprascrierea poziţiei din heap cu copilul.*/
		        ind = cop; /*Punerea indexului la copil.*/
		        cop = (ind<<1) + 1; /*Se obţine copilul stâng, şi procesul se reia.*/
		    	}
		else
			{
		        break; /*S-a găsit locul pentru t.*/
			}
        }

        mpz_set(a[ind], t);/*Variabila temporară se memorează în noul loc.*/
    }
}


void HSS(char A[][DIMM], char *t, unsigned long D) {

unsigned long n = D, par = (D>>1), ind, cop;

while (1) {
	if (par) {
	       	strcpy(t, A[--par]);
	       	}
	else 	{
	       	 if (!--n) {
		      	return;
		    	}
			
	       	strcpy(t, A[n]);
		strcpy(A[n], A[0]);
	       	}

        ind = par;
        cop = (ind<<1) + 1;

        while (cop < n)	{
		if ( (cop + 1 < n) && (strcmp(A[cop + 1], A[cop]) > 0) ) {
		    	cop++;
			}

		if (strcmp(A[cop], t) > 0) {
		        strcpy(A[ind], A[cop]);
		        ind = cop;
		        cop = (ind<<1) + 1;
		    	}
		else	{
		        break;
			}
        }

        strcpy(A[ind], t);
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


int CB(mpz_t *a, mpz_t b, long I, long R) {
int m, c;
--R;

while(1)
	{
	if(I > R)
		break;
	m = (I+R) >> 1;
	c = mpz_cmp(a[m], b);
	if(!c)
		return 0;

	c < 0? I = m + 1 : R = m - 1;
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


int CBPOZ(mpz_t *a, mpz_t b, long I, long R) {
int m, c;
--R;

while(1)
	{
	if(I > R)
		break;
	m = (I+R) >> 1;
	c = mpz_cmp(a[m], b);
	if(!c)
		return m;

	c < 0? I = m + 1 : R = m - 1;
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


int CBDIV(mpz_t f, gmp_ui *M, int I, int R, int &j, int A) {
R--;
while(1) {
	if(I>R)
		break;
		
	j = (I+R) >> 1;	
	if(mpz_divisible_ui_p(f, M[j]) == A)
		return A;
		
	A? R = j - 1 : I = j + 1;
	}
	
return 0;
}


int CBDIVM(mpz_t f, mpz_t *N, int I, int R, int &j, int A) {
R--;
while(1) {
	if(I>R)
		break;
	j = (I+R) >> 1;	
	if(mpz_divisible_p(f, N[j]) == A)
		return A;
		
	A? R = j - 1 : I = j + 1;
	}
	
return 0;
}


int COEFG(mpz_t A, gmp_ui *b, mpz_t *C, int D, int E, mpz_t L) {
mpz_set_ui(L, 0);
mpz_setbit(L, mpz_scan1(A, 0));
if(!mpz_cmp(L, A))
	return 1;

while(1) {
	if(!D--)
		break;	
	while(1) {
		if(!mpz_divisible_p(A, L))
			break;
		mpz_mul_ui(L, L, b[D]);
		}
		
		mpz_divexact_ui(L, L, b[D]);
		if(!mpz_cmp(L, A))
			return 1;	
	}

while(1) {
	if(!E--)
		break;
	while(1) {
		if(!mpz_divisible_p(A, L))
			break;
		mpz_mul(L, L, C[E]);
		}

		mpz_divexact(L, L, C[E]);
		if(!mpz_cmp(L, A))
			return 1;
	}

return 0;
}


int COEFG1(int c, int d, gmp_ui *b, mpz_t *C, int &D, int &E, int l) {
FILE *M = fopen("/COEFLEG.TXT", "r");
int i = 0, j = 0;
FILE *Q = fopen("VEC.TXT", "w");
mpz_t C1, B, L;
mpz_inits(C1, B, L, NULL);
mpz_ui_pow_ui(C1, 10, l);

while(1) {
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
FILE *M, *Q;
int i = 0, j = 0;
gmp_ui B;
M = fopen("/COEFLEG.TXT", "r");
Q = fopen("VEC.TXT", "w");

while(1) {
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


void FFACT(int &W, mpz_t *A1, FILE *f1, mpz_t I, int n) {
f1 = fopen("VEC.TXT", "r");

while(1) {
	gmp_fscanf(f1, "%Zd", I);
	if(W <= n)
		mpz_set(A1[n-W], I);

	if(!--W)
		break;
	}

fclose(f1);
W = n;
}


void FFACT1(int &W, gmp_ui *A1, FILE *f1, int &e, int n) {
f1 = fopen("VEC.TXT", "r");

while(1) {
	fscanf(f1, "%d", &e);
	if(W <= n)
		A1[n-W] = e;

	if(!--W)
		break;
	}

fclose(f1);
W = n;
}


int VC(mpz_t *a, gmp_ui *d, mpz_t I, int g, int n, int s, int D, gmp_ui m) {//Coeficienți sub 2^64.
int e = 0, f;
	while(1) {
		f = g-s;
		while(1) {
			if(mpz_divisible_p(a[g], a[f])) {
				mpz_divexact(I, a[g], a[f]);
				if(mpz_cmp_ui(I, m) > 0)
					break;
				if(V1(mpz_get_ui(I), d, e) && !(++e ^ D)) {
					return e;
					}
				}
			if( !(f-- ^ n))
				break;
			}
		if( !(--g ^ n))
			break;
		}

return e;
}


int VVC1(mpz_t *a, mpz_t *d, int g, int n, int D, int a1, int b1, int s) {//Coeficienți de la 2^64 în sus.
int e = 0, f;
mpz_t m, M;
mpz_inits(m, M, NULL);
mpz_ui_pow_ui(m, 10, a1);
mpz_ui_pow_ui(M, 10, b1);
f = g;

#pragma omp parallel num_threads(8)
#pragma omp single nowait
for(g = f; g > n; g--) {
	f = g-s;

	while(1) {
		if(mpz_divisible_p(a[g], a[f])) {
			mpz_divexact(d[e], a[g], a[f]);
			if(mpz_cmp(d[e], m) > 0)
				break;
				
			if(mpz_cmp(d[e], M) > 0) {e += VV(d[e], d, e);}

		if(!(e ^ D)) {//!(x^y), totuna cu x==y.
			g = n+1, f = n;
			break;
				}
			}

		if( !(f-- ^ n) )
			break;
		}
	}

mpz_clears(m, M, NULL);
s1:
return e;
}


int VC1(mpz_t *a, mpz_t *d, mpz_t l, mpz_t M, int g, int n, int s, int D, int a1) {//Coeficienți de la 2^64 în sus.
int e = 0, f;
gmp_ui m = 0;
m--;
mpz_ui_pow_ui(M, 10, a1);

while(1) {
	f = g-s;
	while(1) {
		if(mpz_divisible_p(a[g], a[f])) {
			mpz_divexact(l, a[g], a[f]);
			if(mpz_cmp(l, M) > 0)
				break;
			if(mpz_cmp_ui(l, m) > 0)
				V(l, d, e, e);
		if(!(e ^ D)) {//!(x^y), totuna cu x==y.
			return e;
				}
			}
		if(!(f-- ^ n))
			break;
		}
	if(!(--g ^ n))
		break;
	}

return e;
}


int VV(mpz_t a, mpz_t *b, int c) {

while(1) {
	if(!c--)
		break;
	if(!mpz_cmp(b[c], a))
		return 0;
	}
		
return 1;
}


int V(mpz_t a, mpz_t *b, int &c, int d) {

while(1) {
	if(!d--)
		break;
	if(!mpz_cmp(b[d], a))
		return 0;
	}
		
mpz_set(b[c++], a);
return 1;
}


int V1(gmp_ui a, gmp_ui *b, int c) {
int d = c;

while(1) {
	if(!d)
		break;
	
	if( !(b[--d] ^ a) )
		return 0;
	}
			
b[c] = a;
return 1;
}


void GEN(int L, int W, gmp_ui *b, mpz_t *C, int &D, int &E, const char *Z) {
FILE *f2 = fopen(Z, "r");
int i;

for(i = 0; i < W; i++)
	(i<L)?
		fscanf(f2, "%llu", &b[i]) :  gmp_fscanf(f2, "%Zd", C[i-L]);
fclose(f2);
D = L;
E = W - L;
}


int GENM(gmp_ui *b, const char *Z) {
FILE *f = fopen(Z, "r");
int i = 0;
gmp_ui a = 0;
--a;

mpz_t b1;
mpz_init(b1);

while(1) {
	gmp_fscanf(f, "%Zd", b1);
	if(feof(f))
		break;
		
	if(mpz_cmp_ui(b1, a) < 0)
		b[i++] = mpz_get_ui(b1);
	}

mpz_clear(b1);
fclose(f);
return i;
}


void GENMIN(int b1, gmp_ui *b, int &i, int &j, int inv) {
j = HH(b1);
i = GENM(b, "/CF52.TXT");
if(inv)
	INV2(0, 0, b, j, i);
}


void GENERARE(int b1, gmp_ui *b, mpz_t *C, int &i, int &j, int &J, int &l, int &I, int &V, int k) {
	if(b1 >= 421)
		{
		j = HTOT;
		GEN(DTOT, NTOT, b, C, i, J, "/GIG.TXT");
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


void GENERARE2(int b1, gmp_ui *b, mpz_t *C, int &i, int &j, int &J, int &l, int &I, int &V, int inv) {
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


void INV(gmp_ui *b, mpz_t *C, int d1, int D, int E) {
int i;
gmp_ui j;

for(i = (E>>1); i; ) {
	--i;
	mpz_swap(C[i], C[E-i-1]);
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


gmp_ui CMMDC(gmp_ui a, gmp_ui b, gmp_ui c) {
while(1) {
  if(!c)
	return b;
    a = b;
    b = c;
    c = a % b;
  }
  
return 0;
}


gmp_ui CMMDC2(gmp_ui n, gmp_ui a, gmp_ui b, gmp_ui c) {

if(a < b) {c = b%a; b = a;}
while(1) {
  if(!c)
	return n/b;
    a = b;
    b = c;
    c = a % b;
  }
  
return 0;
}


gmp_ui CMMDCA(gmp_ui a, gmp_ui b, gmp_ui c) {

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

#include "/SUMELE.h"


int FOND1(gmp_ui j, gmp_ui j1) {
return (j1 < (11 * CMMDC(j, j1, j%j1)) );
}


int TRAT(gmp_ui j, gmp_ui j1) {
return (j1 < (PRAG * CMMDC(j, j1, j%j1)) );
}


int TRAT1(gmp_ui j, gmp_ui j1, gmp_ui k, gmp_ui k1) {
if( (j % k == 0) && (j1 % k1 == 0) )	
	return (j1 < 11*k1);

if( (k % j == 0) && (k1 % j1 == 0) )
	return (k1 < 11*j1);	

return 0;
}


int VALID(mpz_t A, mpz_t f, mpz_t B) {
mpz_gcd(f, A, B);
mpz_mul_ui(f, f, 11);
return mpz_cmp(f, A);
}


int VALID2(mpz_t A, mpz_t f, mpz_t B, mpz_t e, double &i) {
mpz_gcd(f, A, B);
mpz_divexact(e, B, f);
mpz_divexact(f, A, f);

if(mpz_cmp_ui(f, 11) < 0) {
	i = (mpz_get_d(e)) / mpz_get_ui(f);
	return 1;
	}
	
return 0;
}


int VALID3(mpz_t A, double &a2, double &a3, double &a4, double &E2) {
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


int VALID4(mpz_t A, mpz_t f, mpz_t B) {
mpz_gcd(f, A, B);
mpz_mul_ui(f, f, PRAG);
return mpz_cmp(f, A);
}


void VALIDNOU(mpz_t unu, mpz_t doi, mpz_t nr, mpz_t nm) {
	mpz_gcd(doi, unu, nm);
	mpz_divexact(nr, nm, doi);
	mpz_divexact(nm, unu, doi);	
}


int VALIDNOU1(mpz_t unu, mpz_t doi, mpz_t nr, mpz_t nm, gmp_ui &nr1, gmp_ui &nm1) {
	mpz_gcd(doi, unu, nr);
	mpz_divexact(nr, nr, doi);
	mpz_divexact(nm, unu, doi);
	nr1 = mpz_get_ui(nr), nm1 = mpz_get_ui(nm);
	return ((nm1) && (nm1 < PRAG));
}


int VALIDV(mpz_t A, mpz_t f, mpz_t B, mpz_t e, int &i) {
mpz_gcd(f, A, B);
mpz_divexact(e, B, f);
mpz_divexact(f, A, f);

if(mpz_cmp_ui(f, 11) < 0) {
	i = (2520 * mpz_get_ui(e)) / mpz_get_ui(f);
	return 1;
	}
	
return 0;
}


void CIT(FILE *f1, mpz_t *a, int a1, int b1, int &e, const char *t) {
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

fclose(f1);
}


void CIT1(FILE *f1, mpz_t *a, int a1, int &e, const char *t) {
gmp_ui PP = LUNGHEZ2(t);
char t1, Y[1920];

f1 = fopen(t, "r");

while(1) {
	fgets(Y, 1920, f1);
	if(strlen(Y) > (a1+1)) {
		mpz_set_str(a[e++], Y, 10);
		}
		
	if(PP == ftell(f1))
		break;
	}

fclose(f1);
}


void PARTDEPL(FILE *f1, char *Y, int i) {
	for(int e = 0; e < i; e++) {
		fgets(Y, 1920, f1);
	}
}


void CITLIM(FILE *f1, mpz_t *a, int a1, int b1, int &e, const char *t, gmp_ui L, gmp_ui PP, long M, long N) {
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

printf("%ld\n", ftell(f1));
fclose(f1);
}


void CITLIM1(FILE *f1, mpz_t *a, int a1, int &e, const char *t, gmp_ui L, gmp_ui PP, long M, long N) {
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
		
	if( (PP <= ftell(f1)) || (e == N))
		break;
	}

printf("%ld\n", ftell(f1));
fclose(f1);
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


int PREZM(mpz_t a, mpz_t *b, int c, int d) {
while(1) {
	if(!(c-- ^ d))
		break;
	if(!mpz_cmp(b[c], a))
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


void SCRIE(mpz_t a, char *Y, FILE *f2) {
mpz_get_str(Y, 10, a);
fputs(Y, f2);
fputc('\n', f2);
}


void SCRIE1(char *Y, FILE *f2) {
fputs(Y, f2);
fputc('\n', f2);
}


void SCRIE2(mpz_t a, FILE *f2) {
gmp_fprintf(f2, "%Zd\n", a);
}


void SCRIE3(mpz_t a, char *Y, FILE *f2) {
mpz_get_str(Y, 10, a);
fprintf(f2, "%s\n", Y);
}


void SCRIE4(mpz_t a, char *Y, FILE *f2) {
gmp_sprintf(Y, "%Zd\n", a);
fputs(Y, f2);
}


void FACTDIV1(mpz_t a, mpz_t e, mpz_t f, gmp_ui &c, int &d) {

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


void FACTDIV2(mpz_t a, mpz_t h, mpz_t e, mpz_t e1, mpz_t f, int &d) {

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


void FRACTDIV1(mpz_t a, mpz_t b, mpz_t e, mpz_t f, gmp_ui &c, int &d) {

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


void FRACTDIV2(mpz_t a, mpz_t b, mpz_t h, mpz_t e, mpz_t e1, mpz_t f, int &d) {

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
}


void SORT2(char fil[][80], int S) {
char tmp[80] = "";
gmp_ui i, j, k[800];

for(i = 0; i < S; i++) {
	k[i] = NUME(fil[i]);
}

QS2(k, 0, S);

for(i = 0; i < S; i++)
	printf("%llu ", k[i]);
putchar('\n');

    for(i = 0; i < S-1; ++i)
        for(j = i+1; j < S ; ++j) {
            if(NUME(fil[j]) == k[i]) {
                strcpy(tmp, fil[j]);
                strcpy(fil[j], fil[i]);
                strcpy(fil[i], tmp);
            }
        }
}


int NUME(const char *CIT) {
int n1 = 0, n2, n3;
while(1 == sscanf(CIT + n1, "%*[^0123456789]%d%n", &n2, &n3)) {
	n1 += n3;
	}

return n2;
}


void ADTEXT(const char *t1, const char *t2) {
FILE *F1 = fopen(t1, "a");
long P = LUNGHEZ2(t2);
FILE *F2 = fopen(t2, "r");
CITR(8230000, F1, F2, P);
fclose(F1);
fclose(F2);
}


void TEXTSAR(char t, char *Q, int jos, int sus, unsigned long &PP, const char *t1, const char *t2) {
FILE *F1, *F2;
long P, P1;
PP = LUNGHEZ2(t1);

F1 = fopen(t1, "r");
P = URC1(F1, jos, Q, t, 500000000L, PP, ':');
fclose(F1);

F1 = fopen(t1, "r");
P1 = URC1(F1, sus, Q, t, 500000000L, PP, ':');
fclose(F1);

PP = P1;
F1 = fopen(t1, "r");
F2 = fopen(t2, "a");

fseek(F1, P, SEEK_CUR);
P1 -= P;

CITR(8230000, F2, F1, P1);
fclose(F1);
fclose(F2);
}


void FACTORI(gmp_ui *b, int i, int &I, int &J, int &V, int num) {

FILE *f1 = fopen("/PA.TXT", "r");
J = 0;

while(1) {
	fscanf(f1, "%d", &I);
	if(feof(f1))
		break;
	J++;
	}

fclose(f1);
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
fclose(f1);
}


void FACTOR(gmp_ui *b, int &I, int &D) {

FILE *f1 = fopen("/PA.TXT", "r");
int i = D;

while(1) {
	fscanf(f1, "%d", &I);
	if(feof(f1))
		break;
	b[D++] = I;			
	}				
		
fclose(f1);
I = i;
}


void MARG1(mpz_t *a, mpz_t d, int &e, int &l, int &I, int &R, int un, int doi) {
mpz_mul_ui(d, a[l], doi);
	while(mpz_cmp(a[R], d) > 0)
		--R;	
mpz_mul_ui(d, a[e], un);
I = R;
	while(mpz_cmp(a[I], d) > 0)
		--I;
}


void MARG2(mpz_t *a, mpz_t d, int &I, int &R, int &l, int &m, int un, int doi) {
mpz_tdiv_q_ui(d, a[l], un);
R = l;
while( (mpz_cmp(a[R], d) > 0) && R)
	--R;		
mpz_tdiv_q_ui(d, a[m], doi);
I = m;
while( (mpz_cmp(a[I], d) > 0) && I)
	--I;
}


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

int ZER(FILE *L1, int &d, int &q) {
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

FILE *L1 = fopen(t1, "r"), *L2 = fopen(u, "w");
mpz_t Q[HTOT], z;
int R[657], d = 0, n = 0, p = 0, q = 1, r = 0, s = 0;
char t;

for(; n < HTOT; n++)
	mpz_init(Q[n]);
mpz_init(z);
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
	
for(p = 0; p < HTOT; p++)
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

FILE *L1 = fopen(s1, "r"), *L2 = fopen(v, "w"), *L3 = fopen(x, "w");
mpz_t Q[HTOT], z;
int R[657], d = 0, n = 0, p = 0, q = 1, r = 0, s = 0;

for(; n < HTOT; n++)
	mpz_init(Q[n]);
mpz_init(z);
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
for(p = 0; p < HTOT; p++)
	mpz_clear(Q[p]);
mpz_clear(z);	
fclose(L1);	
fclose(L2);
fclose(L3);
}


int DESC(gmp_ui a, gmp_ui *b1, gmp_ui *A3, int &u1) {
for(int i = 0; b1[i] <= a; i++)
	if(!(a % b1[i]) && !PREZ2(b1[i], A3, u1, 0)) {
		A3[u1++] = b1[i];
		}
return u1;
}


void ADPRIM(gmp_ui *bb) {
FILE *F = fopen("/GIG.TXT", "r");
for(int i = 0; i < DTOT; i++)
	fscanf(F, "%llu", bb[i]);

fclose(F);
QS2(bb, 0, DTOT);
}


void PRELPRIM(gmp_ui *b, gmp_ui *bb, gmp_ui &n, int &D) {
for(int i = 0; (n ^ 1) && (bb[i] < n); i++) {
	if(!(n % bb[i]) && !PREZ2(bb[i], b, D, 0)) {
		b[D++] = bb[i];
		while(!(n % bb[i])) n /= bb[i];
		}
	}
}


void ARANJMIN(gmp_ui *b, gmp_ui *A2, gmp_ui *A3, int D, int &u1, int &f) {//A2 cu factorii, A3 cu primele.
gmp_ui b1[DTOT], n;
int e, i = 0, j, I, k = 0, l, u;

for(u = 0; u < D; u++)
	b1[u] = b[u];

QS2(b1, 0, D);
//gmp_ui bb[DTOT];
//ADPRIM(bb);
for(u1 = 0; u1 < f; u1++) {
	n = A2[u1];
	while(!(n & 1)) n >>= 1;
	
	for(l = 0; (n ^ 1) && (b1[l] <= n); l++) {
		if(b1[l])
			while(!(n % b1[l])) n /= b1[l];
		}

	if(n == 1)
		A2[k++] = A2[u1];
	else {		
		//PRELPRIM(b, bb, n, D);
		}
	}
f = k;
u1 = 0;
for(I = 0; I < f; I++)
	u1 = DESC(A2[I], b1, A3, u1);

QS2(A3, 0, u1);
}


void ARANJMIN2(gmp_ui *b, gmp_ui *A2, int D, int &f) {//A2 cu factorii, A3 cu primele.
gmp_ui b1[DTOT], n;
int l, u = 0, k = 0;

for(; u < D; u++)
	b1[u] = b[u];
QS2(b1, 0, D);

for(u = 0; u < f; u++) {
	n = A2[u];
	while(!(n & 1)) n >>= 1;
	
	for(l = 0; (n ^ 1) && (b1[l] <= n); l++) {
		if(b1[l])
			while(!(n % b1[l])) n /= b1[l];
		}

	if(n == 1)
		A2[k++] = A2[u];	
	}
f = k;
}


void ARANJFACT(int u, int D, gmp_ui *b, gmp_ui *b1, int &u1, int &f, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int *A4, int e, int H, int I, int r, int disc) {//A2 cu factorii, A3 cu primele.
if(!disc && !r) {
	printf("Interzicem căutatul în jos la MODIFSUM cu străinezi.\n");
	exit(0);
}

for(u = 0; u < D; u++)
	b1[u] = b[u];

QS2(b1, 0, D);
//La complementar disc e 0.
int k = 0, l;
gmp_ui n, bb[DTOT];
//ADPRIM(bb);
printf("Mai jos străinezii numerici:\n");

for(u1 = 0; u1 < f; u1++) {
	n = A2[u1];
	while(!(n & 1)) n >>= 1;
	
	for(l = 0; (n ^ 1) && (b1[l] <= n); l++) {//9*13*149;13*149; 149; 1.
		while(!(n % b1[l])) n /= b1[l];
		}

	if(n == 1)
		A2[k++] = A2[u1];
	else {
		printf("%llu cu %llu. ", A2[u1], n);
		//PRELPRIM(b, bb, n, D);
		}
	}
f = k;
putchar('\n');
u1 = 0;
for(I = 0; I < f; I++)
	u1 = DESC(A2[I], b1, A3, u1);

QS2(A3, 0, u1);
printf("\nf e %d, iar A2 a devenit:\n", f);
for(u = 0; u < f; u++) printf("%llu ", A2[u]);
putchar('\n');

//HVEC
int i = 0, j;
k = 0;

for(e = 0; e < H; e++)
	b1[e] = b[e];
QS2(b1, 0, H);
printf("\nf și u1, %d cu %d. Suntem între vectorii nefiltrați.\n", f, u1);//La căutarea în sus, filtrare clasică - D-H interziși. În jos, să nu se împartă de două ori la un non-H.

for(e = 0; e < u1; e++) {
	printf("%llu ", A3[e]);
	A4[e] = CBIN(b1, A3[e], 0, H);
	}

 
for(e = 0; e < f; e++) {
	for(j = 0; j < u1; j++)
		if(A4[j] && (r? !(A2[e] % A3[j]) : !(A2[e] % A3[j]*A3[j]))) {
			j = -1;
			break;
		}

	if( (disc && j ^ -1) || (!disc && j == -1) )
		A1[i++] = A2[e];
	}


for(e = 0; e < i; e++)
	A2[e] = A1[e];
	
for(e = 0; e < u1; e++)
	if( (disc && !A4[e]) || (!disc && A4[e])) A3[k++] = A3[e];
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


void ARANJFACT2(int u, int D, gmp_ui *b, gmp_ui *b1, int &u1, int &f, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int *A4, int e, int H, int I, int r) {//A2 cu factorii, A3 cu primele.
if(!disc && !r) {
	printf("Interzicem căutatul în jos la MODIFSUM cu străinezi.\n");
	exit(0);
}

for(u = 0; u < D; u++)
	b1[u] = b[u];

QS2(b1, 0, D);
int k = 0, l;
gmp_ui n;
printf("Mai jos străinezii numerici:\n");

for(u1 = 0; u1 < f; u1++) {
	n = A2[u1];
	while(!(n & 1)) n >>= 1;
	
	for(l = 0; (b1[l] <= n) && (n ^ 1); l++) {
		while(!(n % b1[l])) n /= b1[l];
		}

	if(n == 1)
		A2[k++] = A2[u1];
	else
		printf("%llu cu %llu. ", A2[u1], n);
	}
f = k;
putchar('\n');


u1 = 0;
for(I = 0; I < f; I++)
	u1 = DESC(A2[I], b1, A3, u1);

QS2(A3, 0, u1);
printf("\nf e %d, iar A2 a devenit:\n", f);
for(u = 0; u < f; u++) printf("%llu ", A2[u]);
putchar('\n');

//HVEC
int i = 0, j;
k = 0;

for(e = 0; e < H; e++)
	b1[e] = b[e];
QS2(b1, 0, H);
printf("\nf și u1, %d cu %d. Suntem între vectorii nefiltrați.\n", f, u1);//La căutarea în sus, filtrare clasică - D-H interziși. În jos, să nu se împartă de două ori la un non-H.

for(e = 0; e < u1; e++) {
	printf("%llu ", A3[e]);
	A4[e] = CBIN(b1, A3[e], 0, H);
	}

if(!r) {
	for(e = 0; e < f; e++) {
		for(j = 0; j < u1; j++)
			if(A4[j] && !(A2[e] % A3[j]*A3[j])) {
				j = -1;
				break;
			}

		if(j ^ -1)
			A1[i++] = A2[e];
		}
	}
else {
	i = f;/*
	for(e = 0; e < f; e++) {
		for(j = 0; j < u1; j++)
			if(!A4[j]) {
				j = -1;
				break;
			}

		if(j ^ -1)
			A1[i++] = A2[e];
		}
	*/}

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
FILE *H4 = fopen(c1, "r");
mpz_t G1;
mpz_init(G1);
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
FILE *L1 = fopen("/PUTERI.TXT", "r");
mpz_t Q[HTOT];
int n = 0, p = 0;
gmp_ui R = 18446744073709551615U;
char t;

for(; n < HTOT; n++)
	mpz_init(Q[n]);
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

for(p = 0; p < HTOT; p++)
	mpz_clear(Q[p]);
fclose(L1);

return n;
}


int PUTEREA2(int b1, char *t2, int &S) {//De scos și S-ul.
sprintf(t2, "/PUTERIVV%d.TXT", b1);

int n = 0, p = 0, q = LUNGHEZ2(t2);
FILE *L1 = fopen(t2, "r");
mpz_t Q[HTOT];
gmp_ui R = 18446744073709551615U, R1 = 1000000000000000U;
char t;

for(; n < HTOT; n++)
	mpz_init(Q[n]);
n = 0;

while(1) {
	n < 4?
		fscanf(L1, "%c", &t) : gmp_fscanf(L1, "%Zd", Q[p++]);
	if(ftell(L1) == q)
		break;
		
	if(n == 4)
		n = 0;
	if( (t == 's') || (n) )
		n++;
	}

for(n = p-1; n >= 0; --n) {
	int i = mpz_cmp_ui(Q[n], R);
	if( (i < 0) && (mpz_cmp_ui(Q[n], R1) > 0) )
		S++;	
	if (i > 0)
		break;
	}

if(++n) {
	//printf("%d\n", n);
      }

for(p = 0; p < HTOT; p++)
	mpz_clear(Q[p]);
fclose(L1);

return n;
}

void VECUN02() {

mpz_t e, A, unu;
gmp_ui d;
int l;
FILE *F1, *F2;

mpz_inits(e, A, unu, NULL);
F1 = fopen(GIGTEXT, "r");
F2 = fopen("N1.TXT", "w");
l = 0;
mpz_ui_pow_ui(A, 10, 52);
d = 18446744073709551615U;

while(1) {
	gmp_fscanf(F1, "%Zd", e);
	if(mpz_cmp(e, A) > 0)
		break;
		
	mpz_tdiv_q_2exp(unu, e, mpz_scan1(e, 0));
	if(mpz_cmp_ui (unu, d) <= 0)
		{
		gmp_fprintf(F2, "%Zd\n", e);
		++l;
		}
	}

fclose(F1);
fclose(F2);

mpz_clears(e, A, unu, NULL);
printf("%d\n", l);
}

void TXT(int sus, char *TEXT) {
	if(strlen(TEXT) > 8)
		goto s1;

	if(sus < 53)
		strcpy(TEXT, "/run/media/root/6TB/GIG52.TXT");
	else
	if(sus < 81)
		strcpy(TEXT, "/run/media/root/10TB/GIG80.TXT");
	else
	if(sus < 91)
		strcpy(TEXT, "/run/media/root/6TB/GIG90.TXT"); 
	else
	if(sus < 101)
		strcpy(TEXT, "/run/media/root/10TB/GIG100.TXT");
	else
	if(sus < 111)
		strcpy(TEXT, "/run/media/root/10TB/GIG110.TXT");
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


void QPARINT(mpz_t *array, /*mpz_t pivot, */long left, long right, int cutoff) {
	long i = left, j = right;
	mpz_t pivot;
	mpz_init_set(pivot, array[(left + right) >> 1]);
	//mpz_set(pivot, array[(left + right) >> 1]);
	
	{
	  	/* PARTITION PART */
		while (i <= j) {
			while (mpz_cmp(array[i], pivot) < 0)
				i++;
			while (mpz_cmp(array[j], pivot) > 0)
				j--;
			if (i <= j) {
//				mpz_set(tmp, array[i]);
//				array[i] = array[j];
//				array[j] = tmp;
				mpz_swap(array[i++], array[j--]);
				//i++;
				//j--;
			}
		}

	}

	//mpz_clear(pivot);
	if ( ((right-left) < cutoff) ){
		if (left < j){ QPARINT(array, /*pivot, */left, j, cutoff); }			
		if (i < right){ QPARINT(array, /*pivot, */i, right, cutoff); }

	} else {
		#pragma omp task
		{ QPARINT(array, /*pivot, */left, j, cutoff); }
		#pragma omp task 	
		{ QPARINT(array, /*pivot, */i, right, cutoff); }
	}
}


void QPAR(mpz_t *array, /*mpz_t b,*/ long lenArray){
	int cutoff = 1000;
	//double start = omp_get_wtime();

	#pragma omp parallel num_threads(SF)
	{
		#pragma omp single nowait
		{
			QPARINT(array, /*b,*/ 0, lenArray-1, cutoff);	
		}
	}
	
	//double stop = omp_get_wtime();
	//if(stop-start >= 20) printf("Sortarea a ținut vreo %f %ssecunde.\n", (stop - start), PREP((int)(stop - start)));
}


void SQPARINT(char array[][DIMM], long left, long right, int cutoff) {
	long i = left, j = right;
	char pivot[DIMM], tmp[DIMM];
	strcpy(pivot, array[(left + right) >> 1]);
	
	{
	  	/* PARTITION PART */
		while (i <= j) {
			while (strcmp(array[i], pivot) < 0)
				i++;
			while (strcmp(array[j], pivot) > 0)
				j--;
			if (i <= j) {
				strcpy(tmp, array[i]);
				strcpy(array[i++], array[j]);
				strcpy(array[j--], tmp);
			}
		}

	}

	if ( ((right-left) < cutoff) ){
		if (left < j){ SQPARINT(array, left, j, cutoff); }			
		if (i < right){ SQPARINT(array, i, right, cutoff); }

	} else {
		#pragma omp task
		{ SQPARINT(array, left, j, cutoff); }
		#pragma omp task 	
		{ SQPARINT(array, i, right, cutoff); }		
	}
}


void SQPAR(char array[][DIMM], long lenArray) {
	int cutoff = 1000;
	//double start = omp_get_wtime();

	#pragma omp parallel num_threads(SF)
	{
		#pragma omp single nowait
		{
			SQPARINT(array, 0, lenArray-1, cutoff);	
		}
	}
	
	//double stop = omp_get_wtime();
	//if(stop-start >= 20) printf("Sortarea a ținut vreo %f %ssecunde.\n", (stop - start), PREP((int)(stop - start)));
}


int UNIT(int n) {
if(n == 52)
	return n;
if(n == 70)
	return 18;
if(n <= 220)
	return 10;
if(n == 240)
	return 20;
if(n <= 300)
	return 30;
if(n == 500)
	return 200;
if(n == 1000)
	return 500;
if(n == 1910)
	return 910;
return 0;
}


gmp_ui MEM(void) {
 // char *cmd = "/proc/meminfo";//"awk '{ if (NR == 2) { print $4 }}' /proc/meminfo";
 // system("cp /proc/meminfo /memmem");    
  FILE *cmdfile = fopen("/proc/meminfo", "r");
  char result[256];// = { 0 };
  int i = 0;

  while (fgets(result, sizeof(result), cmdfile) != NULL) {
    if(++i == 3) {
	fclose(cmdfile);
    	return 1024*(gmp_ui)NUME(result);
    	}
  }
    
  fclose(cmdfile);
  return 0;
}


gmp_ui LITUAN(mpz_t *a, char *tx) {
	long D = LUNGHEZ2(tx);	
	if( (D < 10) || (D > MEM()) ) {
		printf("Lungimea de belea.\n");
		return 0;
	}
		
	FILE *FLIT = fopen(tx, "r");
	int V = 0;
	char Y[3000];
	//D--;//La gmp_fscanf.
	
	while(1) {
		fgets(Y, 3000, FLIT);
		if(strlen(Y)) {
			mpz_set_str(a[V], Y, 10);
			//gmp_fscanf(FLIT, "%Zd", a[V]);
			if(mpz_cmp_ui(a[V], 0) > 0) ++V;
			}
		if(! (ftell(FLIT) ^ D) ) break;
	}
	
	fclose(FLIT);
	if(V == 1) return 0;
	
	mpz_get_str(Y, 10, a[V-1]);
	if( ((strlen(Y) < 9) && (Y[strlen(Y)-1] == ':')) || ((strlen(Y) > 8) && (Y[strlen(Y)-1] == '9')) || (strlen(Y) > 1910))
		--V;
	else
		mpz_ui_pow_ui(a[V], 10, 1910//NUME(argv[1]) + 1
		);
		
	//mpz_t b;
	//mpz_init(b);	
	//HS(a, b, V);
	QPAR(a, /*b,*/ V);
	//mpz_clear(b);
	printf("%s, %llu. ", tx, D);
	D = 0;
	mpz_get_str(Y, 10, a[0]);
	int n = strlen(Y);
	mpz_get_str(Y, 10, a[1]);
	if(strlen(Y) - n > 5)
		D = 1;
	
	while(!mpz_cmp_ui(a[D], 0))
		++D;
	n = D;
	//omp_set_num_threads(4);
	
	FLIT = fopen(tx, "w");
	//#pragma omp parallel for schedule(dynamic, 1)
	for(D = n; D < V; D++) {
		//#pragma omp critical
		if(mpz_cmp(a[D], a[D+1]) < 0)
			SCRIE(a[D], Y, FLIT);
	}
	
	fclose(FLIT);	
	REN2(tx);
	return LUNGHEZ2(tx);
}


gmp_ui LITUAN2(char A[][DIMM], FILE *FLIT, long D, char *tx, int min, int max) {
	char Y[3000];
	D = LUNGHEZ2(tx);
	if(D < 100) return 0;
	long V = 0;
	gmp_ui prod = N1;
	prod *= DIMM;
	FLIT = fopen(tx, "r");

	while(1) {
		fgets(A[V++], DIMM, FLIT);
		if(!(ftell(FLIT) ^ D)) break;
	}
	
	fclose(FLIT);
	//printf("%llu %ld\n", N1, V);
	printf("%s: %d %selemente, lungimea %llu, %d-%d %scifre. Vectorul: %ld * %ld = %lld (%.2lf GiB). ", tx, V, PREP(V), D, min-1, max-2, PREP(max-2), N1, DIMM, prod, prod / 1073741824.0);
	prod = V;
	prod *= DIMM;
	printf("Ocupat: %ld * %ld = %lld (%.2lf GiB). ", V, DIMM, prod, prod / 1073741824.0);
	
	if( (V == 1) || (N1 <= V) ) {
		printf("\nElemente insuficiente.\n");
		return 0;
	}
	
	D = strlen(A[V-1]);
	if( ((D < 9) && (A[V-1][D-1] == ':')) || ((D > 8) && (A[V-1][D-1] == '9')) || (D > 1911))
		--V;
	else {
		for(int i1 = 0; i1 < max-1; i1++)//1910
			Y[i1] = '9';
	
		Y[max-1] = '\n';
		Y[max] = '\0';
		strcpy(A[V], Y);
		}

	//HSS(A, Y, V);	
	SQPAR(A, V);
//	printf("%s LPGS %d %d\n", A[0], DIMM, max);
	//return 0;
	FLIT = fopen(tx, "w");
	//omp_set_num_threads(4);

	for(int i1 = min; i1 < max; i1++) {
		//#pragma omp parallel for schedule(dynamic, 1)
		for(D = 0; D < V; D++) {
			//#pragma omp critical
			if( (strlen(A[D]) == i1) && (strcmp(A[D], A[D+1]) < 0) ) {
				fputs(A[D], FLIT);				
				}
			//++D;
			}
	}

	fclose(FLIT);
	REN2(tx);
	return LUNGHEZ2(tx);
}


gmp_ui LITUAN3(gmp_ui *a, char *tx) {
	long D = LUNGHEZ2(tx);
	printf("%llu\n", D);
	if( (D < 10) || (D > 300000000000U) ) return 0;	
	int V = 0;
	char *tt, Y[2000];
	FILE *FLIT = fopen(tx, "r");
	
	while(1) {
		fgets(Y, 2000, FLIT);
		if(strlen(Y)) {
			a[V] = strtoul(Y, &tt, 10);
			//fscanf(FLIT, "%llu", &a[V]);
			if(a[V]) ++V;
			}
		if(! (ftell(FLIT) ^ D) ) break;
	}
	
	fclose(FLIT);
	if(V==1) return 0;
	if( ((strlen(Y) < 9) && (Y[strlen(Y)-1] == ':')) || ((strlen(Y) > 8) && (Y[strlen(Y)-1] == '9')) || (strlen(Y) > 1910))
		--V;
		
	a[V] = VERTOITO;
	QS2(a, 0, V);
	D = 0;
	sprintf(Y, "%llu", a[0]);
	int n = strlen(Y);
	sprintf(Y, "%llu", a[1]);
	if(strlen(Y) - n > 5)
		D = 1;
	
	while(!a[D]) ++D;

	FLIT = fopen(tx, "w");
	for(; D < V; D++) {
		if(a[D] < a[D+1])
			fprintf(FLIT, "%llu\n", a[D]);
	}
	
	fclose(FLIT);
	REN2(tx);
	return LUNGHEZ2(tx);
}


void TRUNC(long PP, char *t2, int c) {
	char com[100];
	sprintf(com, "truncate --size=%ld %s", PP - c, t2);
	system(com);
}


void RAT(FILE *f1, int b1, char *Y, char &w1, unsigned long P, unsigned long &PP, unsigned long &PP1, int mod, char p2, int num) {
	PP = ftell(f1);
	PP1 = URC1(f1, b1, Y, w1, 500000000L, P, (mod % 2? ':' : p2) );
	//printf("PP = %lu , PP1 = %lu .\n", PP, PP1);
	fseek(f1, PP, SEEK_SET);
}


void RAT2(FILE *f1, int b1, char *Y, char &w1, unsigned long P, unsigned long &PP, unsigned long &PP1, int mod, char p1, char p2, char scif2, int num) {//p1 3-scif1 9, p2 5-scif2 0. Dar de ce?	
	PP = ftell(f1);
	//if(b1 > 270 && p1 >= '8' && scif2 >= '6') fseek(f1, 309804910351U, SEEK_SET);
	do {
		PP1 = URC2(f1, b1, Y, w1, 500000000L, P, (scif2 == ':'? p2 : p1), scif2); 
		fseek(f1, 500, SEEK_CUR);//Decalaj de siguranţă.
	} while(PP1 < PP);
	
	fseek(f1, PP, SEEK_SET);
	//printf("PP = %lu , PP1 = %lu .\n", PP, PP1);
}


int CALCMINMAX(int &min, int &max, FILE *f1, long PP, char *S) {
	int z;
	do {
		fgets(S, 1920, f1);
		z = strlen(S);
	} while( (z < 2) /*|| (S[0] ^ '0') */);

	long c1 = (PP < 200000? PP : ( PP < 1000000? 200000 : 600000) );

	while(1) {
		fgets(S, 1920, f1);
		if((strlen(S) < z) && (strlen(S) > 1))
			z = strlen(S);
		if(ftell(f1) >= c1)
			break;
		}

	min = z-1;
	fseek(f1, PP - c1, SEEK_SET);
	z = 0;

	while(1) {
		fgets(S, 1920, f1);
		if( (strlen(S) > z) && (1919 > strlen(S)) )
			z = strlen(S);
		if(!(ftell(f1) < PP))//Nu punem ^ pentru că la NUM2 dimensiunea variază şi PP poate să nu se prindă de capătul unui string.
			break;
		}

	max = z-1;

return 0;
}


gmp_ui PREGTEXT(FILE *FLIT, gmp_ui n, int dim, gmp_ui D, int min, int max, char *Y, char *tx) {
	gmp_ui num = n;
	num *= dim;
	if(num > 31000000000U) {
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
	system("rm LITUANULE");
	system("g++ -mavx512f /LITUAN2.cc -lgmp -fopenmp -o /LITUANULE");
	sprintf(Y, "/LITUANULE %s b", tx);
	system(Y);
	num = LUNGHEZ2(tx);

	if(num == D) {//LITUAN2 a eșuat, dimensiunea nu s-a schimbat în sortare.
		return 0;
	}
	REN2(tx);
	return num;
}


long MANUCE(FILE *f1, char *t2, long PP, char *S, int c, int max, int max2) {
	gmp_ui b[D1], b1[D1], div1[H1][MAX2], sum1[H1][MAX2], q0[64];
	mpz_t C[E1], C1[E1], div[H1][MAX1], sum[H1][MAX1], D2, d1, e1, p, q[2580];
	int D, E, H, K, S1, I, L, mem[H1];

	INIT(H1, div, sum);
	for(L = 0; L < E1; L++) {
		mpz_inits(C[L], C1[L], NULL);
	}

	mpz_init_va(D2, d1, e1, p, NULL);
	GENERARE2(1910, b, C, D, H, E, K, I, L, 1);
	//UNIFACTUS(1910, b, b1, C, C1, D, E, H, K, div, sum, div1, sum1, mem, q, q0, 1);
	
	f1 = fopen(t2, "r+");
	fseek(f1, PP - 8000, SEEK_CUR);

	do {
		fgets(S, 1920, f1);
	} while(PP > ftell(f1));

	c = strlen(S);
	
	if(c < max) {
		fseek(f1, PP-c, SEEK_SET);
		TRUNC(PP, t2, c);
	} else if(1==2) {
		if(S[c - 1] != '\n') {
			++c;
			fputc('\n', f1);
			}

		mpz_set_str(D2, S, 10);
		L = mpz_scan1(D2, 0);
		SUMIMENS(D2, e1, C, C1, b, b1, D, E, H, K, S1, L, div1, sum1, div, sum, mem, p, q[L]);
		if( (!( (mpz_cmp(e1, D2) == 1) && (VALID4(D2, d1, e1) == 1) ) ))
			{fseek(f1, -c, SEEK_CUR);}
		}

	mpz_ui_pow_ui(D2, 10, max2);
	mpz_sub_ui(D2, D2, 1);
	if(max2 < 9) {
		mpz_get_str(S, 10, D2);
		c = strlen(S);
		S[c-1] = ':';
		S[c++] = '\n';
		S[c] = '\0';
		fputs(S, f1);
	}
	else
		SCRIE(D2, S, f1);

	PP = ftell(f1) - strlen(S);
	fclose(f1);
	
	mpz_clears(D2, d1, e1, p, NULL);
	for(L = 0; L < E1; L++) {
		//mpz_clears(C[L], C1[L], NULL);
	}

	return PP;
}


//Maximum 81 (3), ajunge la 729 (5).
//Nu 243? Atunci 81.
//E cu 3, merge de la 9.
void INIT(int K, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1]) {
	for(int i = 0; i < K; i++)
	for(int j = 0; j < MAX1; j++)
		mpz_inits(modpdiv[i][j], modpsum[i][j], NULL);
}


void INIT2(int K, mpz_t modpdiv[][MAX2], mpz_t modpsum[][MAX2]) {
	for(int i = 0; i < K; i++)
	for(int j = 0; j < MAX2; j++)
		mpz_inits(modpdiv[i][j], modpsum[i][j], NULL);
}


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


void DECIDTEXT2(char *PUT, int sus) {
	if(sus <= 52) {
		sprintf(PUT, "/PUTERIV52.TXT");
	} else
	if(sus <= 70) {
		sprintf(PUT, "/PUTERIV70.TXT");
	} else
	if(sus <= 80) {
		sprintf(PUT, "/PUTERIV80.TXT");
	} else
	if(sus <= 90) {
		sprintf(PUT, "/PUTERIV90.TXT");
	} else
	if(sus <= 100) {
		sprintf(PUT, "/PUTERIV100.TXT");
	} else
	if(sus <= 110) {
		sprintf(PUT, "/PUTERIV110.TXT");
	} else
	if(sus <= 120) {
		sprintf(PUT, "/PUTERIV120.TXT");
	} else
	if(sus <= 130) {
		sprintf(PUT, "/PUTERIV130.TXT");
	} else
	if(sus <= 140) {
		sprintf(PUT, "/PUTERIV140.TXT");
	} else
	if(sus <= 150) {
		sprintf(PUT, "/PUTERIV150.TXT");
	} else
	if(sus <= 160) {		
		sprintf(PUT, "/PUTERIV160.TXT");
	} else
	if(sus <= 180) {		
		sprintf(PUT, "/PUTERIV180.TXT");
	} else
	if(sus <= 200) {		
		sprintf(PUT, "/PUTERIV200.TXT");
	} else
	if(sus <= 240) {
		sprintf(PUT, "/PUTERIV240.TXT");
	} else
	if(sus <= 420) {
		sprintf(PUT, "/PUTERIV420.TXT");
	} else
	if(sus <= 1910) {
		sprintf(PUT, "/PUTERIV1910.TXT");
	}
}


void PUTERI2(const char *t, int *put) {
	FILE *F = fopen(t, "r");
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


void UNIFACTMSUB(int sus, gmp_ui *b, gmp_ui *b1, gmp_ui *b2, int D, int H, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t divdiv[][3], mpz_t divsum[][3], int *P, int *P1, mpz_t unu, mpz_t d, mpz_t trei, gmp_ui *SUMDOI, int sumcap, int inv) {
	mpz_t xe, g;
	mpz_inits(xe, g, NULL);
	int f, sb, d1, i = 0, j, k, ll, ind[H1], PP;
	char t, PUT[90];
	//DECIDTEXT(PUT, sus);
	DECIDTEXT2(PUT, sus);
	//puts(PUT);
	PP = LUNGHEZ2(PUT);
	FILE *F1 = fopen(PUT, "r");
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

	fclose(F1);

	if(inv) {
	 for(i = (H>>1); i; ) {
		j = ind[--i];
		ind[i] = ind[H-i-1];
		ind[H-i-1] = j;
	 }
	}

	//printf("%d %d\n", D, H);
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
			
			if(j && (k < 10+ll) && (mpz_cmp(d, trei) < 0) ) {
				div1[i][k] = mpz_get_ui(unu);
				sum1[i][k] = mpz_get_ui(d);
			} else {
				j = 0;
				div1[i][k] = NPS;
				sum1[i][k] = NPS;
			}
		}

		div1[i][0] = 1;
		sum1[i][0] = 1;
		div1[i][MAX2-2] = NPS;
		sum1[i][MAX2-2] = NPS;
		div1[i][MAX2-1] = NPS;
		sum1[i][MAX2-1] = NPS;
	}
	
	for(i = 0; i < H; i++) 
	for(j = 0; j < MAX2; j++)
	if(div1[i][j] == NPS) {P1[i] = --j; break;}

	for(i = 0; i < sumcap; i++) {
		SUMDOI[i] = (2U << i) - 1;
	}
}


void UNIFACTSUB(int sus, gmp_ui *b, gmp_ui *b1, gmp_ui *b2, int D, int H, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t divdiv[][3], mpz_t divsum[][3], int *P, int *P1, mpz_t unu, mpz_t d, mpz_t trei, mpz_t *SUMDOI, int sumcap, int inv) {
	mpz_t xe, g;
	mpz_inits(xe, g, NULL);
	int f, sb, d1, i = 0, j, k, ll, ind[H1], PP;
	char t, PUT[80];
	DECIDTEXT(PUT, sus);
	//DECIDTEXT2(PUT, sus);
	//puts(PUT);
	PP = LUNGHEZ2(PUT);
	FILE *F1 = fopen(PUT, "r");
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

	fclose(F1);

	if(inv) {
	 for(i = (H>>1); i; ) {
		j = ind[--i];
		ind[i] = ind[H-i-1];
		ind[H-i-1] = j;
	 }
	}

	//printf("%d %d\n", D, H);	 
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
			
			if(j && (k < 10+ll) && (mpz_cmp(d, trei) < 0) ) {
				div1[i][k] = mpz_get_ui(unu);
				sum1[i][k] = mpz_get_ui(d);
			} else {
				j = 0;
				div1[i][k] = NPS;
				sum1[i][k] = NPS;
			}
		}

		div1[i][0] = 1;
		sum1[i][0] = 1;
		div1[i][MAX2-2] = NPS;
		sum1[i][MAX2-2] = NPS;
		div1[i][MAX2-1] = NPS;
		sum1[i][MAX2-1] = NPS;
	}
	
	for(i = 0; i < H; i++) 
	for(j = 0; j < MAX2; j++)
	if(div1[i][j] == NPS) {P1[i] = --j; break;}

	for(i = 0; i < sumcap; i++) {
		mpz_ui_pow_ui(SUMDOI[i], 2, i+1);
		mpz_sub_ui(SUMDOI[i], SUMDOI[i], 1);
		}
}


void UNIFACTSUBM(int sus, gmp_ui *b, gmp_ui *b1, gmp_ui *b2, mpz_t *C, mpz_t *J, int D, int E, int H, int K, mpz_t div[][MAX1], mpz_t sum[][MAX1], mpz_t divdiv[][3], mpz_t divsum[][3], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *P, int *P1, mpz_t unu, mpz_t d, mpz_t trei, mpz_t *SUMDOI, int sumcap, int inv, int lim) {
	mpz_t xe, g;
	mpz_inits(xe, g, NULL);
	int log, f, sb, d1, i = 0, j, k, ll, ind[2580], PP;
	char t, PUT[80];
	FILE *F1, *F2;
	DECIDTEXT(PUT, sus);
	//puts(PUT);
	PP = LUNGHEZ2(PUT);
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

	fclose(F1);

	if(inv) {
	 for(i = (H>>1); i; ) {
		j = ind[--i];
		ind[i] = ind[H-i-1];
		ind[H-i-1] = j;
	 }
	}

	printf("%d %d %d %d %d %d %d\n", inv, D, E, D+E, H, K, D-H);
	d1 = inv? H-1 : 0;
	mpz_ui_pow_ui(unu, 2, 64);	

	for(i = 0; i < D; i++) {
		b2[i] = 1 + b1[i];
	}

	for(i = 0; i < E; i++) {
		mpz_add_ui(J[i], C[i], 1);
	}

	PUTERI2(PUT, P);
	for(f = H; f < D; f++)
		P[f] = 2;

	for(i = 0; i < D-H; i++) {
		mpz_set_ui(divdiv[i][0], 1);
		mpz_set_ui(divsum[i][0], 1);
		mpz_set_ui(divdiv[i][1], b1[i+H]);
		mpz_add_ui(divsum[i][1], divdiv[i][1], 1);		
		mpz_ui_pow_ui(divdiv[i][2], b1[i+H], 2);
		mpz_mul_ui(divsum[i][2], divsum[i][1], b1[i+H]);
		mpz_add_ui(divsum[i][2], divsum[i][2], 1);
	}
	/*
	 for(i = H-K; i < H; i++) {
		P1[i] = inv? P[H-i-1] : P[i];
	 }

	 for(i = 0; i < H-K; i++) {	
		P1[i] = inv? P[H-K-i-1] : P[i];
	 }*/

	for(i = H; i < D; i++)
		P1[i] = P[i];

	putchar('\n');
	d1 = inv? H-1 : 0;

	 for(i = 0; i < H; i++) {//H descotfactizat.
		mpz_set_ui(xe, 1);

		for(j = 1; j < MAX1; j++) {
			mpz_mul_ui(xe, xe, b1[i]);
			mpz_mul_ui(g, xe, b1[i]);
			mpz_divexact_ui(g, g, b1[i]-1);
			log = (mpz_cmp(g, unu) < 0);
			
			if(j < 10+ind[i]) {//k = inv? K-d-1 : d;//H-d-1 pentru punerea la sfârșit a div-urilor.
				k = inv? H-d1-1 : d1;
				if(j == 1) {
					div1[k][0] = sum1[k][0] = 1; 
					mpz_set_ui(div[k][0], 1); mpz_set_ui(sum[k][0], 1);
					}
				if(log) {
					div1[k][j] = mpz_get_ui(xe);
					sum1[k][j] = mpz_get_ui(g);
				} else {
					if(j < MAX2) div1[k][j] = sum1[k][j] = lim;					
				}
				if(d1 < K) {
					j < MAX1-2? mpz_set(div[k][j], xe) : mpz_set_ui(div[k][j], lim);
					j < MAX1-2? mpz_set(sum[k][j], g) : mpz_set_ui(sum[k][j], lim);							
					}
				else {
					if(j < MAX2-2) {
						mpz_set(div[k][j], xe);
						mpz_set(sum[k][j], g);
					} else if(j < MAX2) {
						mpz_set_ui(div[k][j], lim);
						mpz_set_ui(sum[k][j], lim);
					}
				}
			} else 	if(j < MAX2) {
				if(d1 >= K) {
					div1[k][j] = sum1[k][j] = lim;
					mpz_set_ui(div[k][j], lim);
					mpz_set_ui(sum[k][j], lim);
				} else {
					div1[k][j] = sum1[k][j] = lim;
					mpz_set_ui(div[k][j], lim);
					mpz_set_ui(sum[k][j], lim);
					}
			} else	if((j < MAX1) /*&& (d < K)*/) {
				mpz_set_ui(div[k][j], lim);
				mpz_set_ui(sum[k][j], lim);
			}
		}
			k++;
			d1 += inv? -1 : +1;
	 }

//FALX 2
	for(i = 0; i < H; i++) {
		b[i] = mpz_get_ui(div[i][1]);
		//printf("%llu ", div1[i][1]);
		}
		
	for( i = H; i < D; i++)
		b[i] = mpz_get_ui(divdiv[i-H][1]);
putchar('\n');

	for(i = 0; i < sumcap; i++) {
		mpz_ui_pow_ui(SUMDOI[i], 2, i+1);
		mpz_sub_ui(SUMDOI[i], SUMDOI[i], 1);
		}

	for(i = 0; i < H; i++) {
		for(j = 0; j < MAX2; j++) {
			div1[i][j] = mpz_cmp(unu, sum[i][j]) > 0? mpz_get_ui(div[i][j]) : lim;
			sum1[i][j] = mpz_cmp(unu, sum[i][j]) > 0? mpz_get_ui(sum[i][j]) : lim;
		}

		for(j = MAX2-1; /*(mpz_cmp(sum[i][j], trei) > 0) || */(sum1[i][j] == lim); j--);
		mem[i] = j;
	}
	
	for(i = 0; i < H-K; i++) 
	for(j = 0; j < MAX2; j++)
	if(div1[i][j] == lim) {P1[i] = (--j); break;}	
	for(i = H-K; i < H; i++) 
	for(j = 0; j < MAX1; j++)
	if(!mpz_cmp_ui(div[i][j], lim)) {P1[i] = (--j); break;}

	F1 = fopen("FACTDIV.TXT", "w");
	F2 = fopen("FACTSUM.TXT", "w");

	for(i = 0; i < H; i++) {
		for(j = 0; j < MAX1; j++) {
			gmp_fprintf(F1, "%Zd ", div[i][j]);
			gmp_fprintf(F2, "%Zd ", sum[i][j]);
		}

		fputc('\n', F1);
		fputc('\n', F2);
	}

	for(i = 0; i < H; i++) {
		for(j = 0; j < MAX2; j++) {
			gmp_fprintf(F1, "%llu ", div1[i][j]);
			gmp_fprintf(F2, "%llu ", sum1[i][j]);
		}
		
		fprintf(F1, "MEM e %d, cu P %d.\n", mem[i], P1[i]);
		fprintf(F2, "MEM e %d.\n", mem[i]);
	}

	fclose(F1);
	fclose(F2);
	
}

void UNIFACTUS(int sus, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int &E, int H, int K, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *q1, gmp_ui *q0, int inv) {
	 mpz_t xe, g, unu;
	 mpz_inits(xe, g, unu, NULL);
	 int sb, d, i = 0, j, k, jj, jk, dec, ind[576], PP, ll, P[D], P1[D], log;
	 FILE *F1, *F2;
	 char t, PUT[90];
         DECIDTEXT2(PUT, sus);
         //puts(PUT);
         PP = LUNGHEZ2(PUT);
	 F1 = fopen(PUT, "r");
	 j = 3;
//La sus sub 210 sau chiar 220 (unde nu-i K), nu populăm div şi sum, că nu-i nevoie de puterile alea mari pe-acolo. Economie la memorie.
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
	 
	 fclose(F1);
	
	 if(inv) {
	 	 for(i = (H>>1); i; ) {
			j = ind[--i];
			ind[i] = ind[H-i-1];
			ind[H-i-1] = j;
		 }
	 }
	 
	 //printf("%d %d %d %d %d %d ", D, E, D+E, H, K, D-H);
	 mpz_ui_pow_ui(unu, 2, 64);
	 
	 for(i = 0; i < D; i++) {
	 	b1[i] = 1 + b[i];
	 }
	 
	 for(i = 0; i < E; i++) {
	 	mpz_add_ui(C1[i], C[i], 1);
	 }
	 
	for(int ll = 0; ll < 2580; ll++) {
 		mpz_init(q1[ll]);
	 	mpz_ui_pow_ui(q1[ll], 2, ll+1);
 		mpz_sub_ui(q1[ll], q1[ll], 1);
 		if(ll < 64) q0[ll] = mpz_get_ui(q1[ll]);
	}	 
	
	 d = inv? H-1 : 0;
	 for(i = 0; i < H; i++) {//H descotfactizat.
		mpz_set_ui(xe, 1);		
		for(jj = 1, jk = 0, j = 1; jj < MAX1; j++) {
			mpz_mul_ui(xe, xe, b[i]);
			mpz_mul_ui(g, xe, b[i]);
			mpz_divexact_ui(g, g, b[i]-1);
			log = (mpz_cmp(g, unu) < 0);
			jk += !log;
			k = inv? H-d-1 : d;
			dec = inv? k - (H-K) : k;
			
			if(j < 10+ind[i]) {
				if(j == 1) {
					div1[k][0] = sum1[k][0] = 1; 
					if(d < K) { mpz_set_ui(div[dec][0], b[i]); mpz_set_ui(sum[dec][0], b[i] + 1); }//Sau 1.
					}

				if(log) {
					div1[k][j] = mpz_get_ui(xe);
					sum1[k][j] = mpz_get_ui(g);
				} else {
					if(j < MAX2) div1[k][j] = sum1[k][j] = jk < 3? NPS : 1;
					if(d < K) {
						jj < MAX1-2? mpz_set(div[dec][jj], xe) : mpz_set_ui(div[dec][jj], NPS);
						jj < MAX1-2? mpz_set(sum[dec][jj], g) : mpz_set_ui(sum[dec][jj], NPS);							
						}
				}
			} else if(j < MAX2) {
				div1[k][j] = sum1[k][j] = jk < 3? NPS : 1;
				if(!log && d < K) {//Înseamnă că sigur avem K, din moment ce d, nul ori pozitiv fiind, poate fi mai mic decât K.
					mpz_set_ui(div[dec][jj], j < 12+ind[i]? NPS : 1);
					mpz_set_ui(sum[dec][jj], j < 12+ind[i]? NPS : 1);
				}
			} else if(!log && (jj < MAX1) && (d < K)) {
				mpz_set_ui(div[dec][jj], 1);
				mpz_set_ui(sum[dec][jj], 1);
			}
			
			if(!log) jj++;
		}
			d += inv? -1 : +1;
	 }

if(K)	
	for(i = 0; i < H; i++) {//Mem se justifică atunci când sunt şi div şi sum, adică la K.
		for(j = MAX2-1; sum1[i][j] == 1 || sum1[i][j] == NPS ; j--);
		mem[i] = j;		
	}

	F1 = fopen("FACTDIV.TXT", "w");
	F2 = fopen("FACTSUM.TXT", "w");
if(K)
	for(i = 0; i < K; i++) {
		for(j = 0; j < MAX1; j++) {
			gmp_fprintf(F1, "%Zd ", div[i][j]);
			gmp_fprintf(F2, "%Zd ", sum[i][j]);
		}

		fputc('\n', F1);
		fputc('\n', F2);
	}

	for(i = 0; i < H; i++) {
		for(j = 0; j < MAX2; j++) {
			gmp_fprintf(F1, "%llu ", div1[i][j]);
			gmp_fprintf(F2, "%llu ", sum1[i][j]);
		}
		
		if(K) {
			fprintf(F1, "MEM e %d.\n", mem[i]);
			fprintf(F2, "MEM e %d.\n", mem[i]);
			}
	}

	fclose(F1);
	fclose(F2);
	mpz_clears(xe, g, unu, NULL);
}


void UNIVEC(int sus, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int &E, int H, int K, int S, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, int inv) {
	 mpz_t xe, g, unu;
	 mpz_inits(xe, g, unu, NULL);
	 int sb, d, i = 0, j, k, jj, jk, dec, ind[576], PP, ll, log;
	 FILE *F1, *F2;
	 char t, PUT[25];
	 sprintf(PUT, "PUTERIVV%d.TXT", sus);
	 PP = LUNGHEZ2(PUT);
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
	 
	 fclose(F1);
	
	 if(inv) {
	 	 for(i = (H>>1); i; ) {
			j = ind[--i];
			ind[i] = ind[H-i-1];
			ind[H-i-1] = j;
		 }
	 }
	 
	 printf("%d %d %d %d, K e %d, S %d, %d.\n", D, E, D+E, H, K, S, D-H);
	 mpz_ui_pow_ui(unu, 2, 64);
	 
	 for(i = 0; i < D; i++) {
	 	b1[i] = 1 + b[i];
	 }
	 
	 for(i = 0; i < E; i++) {
	 	mpz_add_ui(C1[i], C[i], 1);
	 }
	 
 	 for(ll = 0; ll < 2580; ll++) {
	 	mpz_init(sumdoi[ll]);
	 	mpz_ui_pow_ui(sumdoi[ll], 2, ll+1);
	 	mpz_sub_ui(sumdoi[ll], sumdoi[ll], 1);
	 }	 

	 d = inv? H-1 : 0;
	 for(i = 0; i < H; i++) {//H descotfactizat.
		mpz_set_ui(xe, 1);		
		for(jj = 1, jk = 0, j = 1; jj < MAX1; j++) {
			mpz_mul_ui(xe, xe, b[i]);
			mpz_mul_ui(g, xe, b[i]);
			mpz_divexact_ui(g, g, b[i]-1);
			log = (mpz_cmp(g, unu) < 0);
			jk += !log;
			k = inv? H-d-1 : d;
			dec = inv? k - (H-K) : k;

			if(j < 10+ind[i]) {
				if(j == 1) {
					div1[k][0] = sum1[k][0] = 1; 
					if(d < K) { mpz_set_ui(div[dec][0], b[i]); mpz_set_ui(sum[dec][0], b[i] + 1); }//Sau 1.
					}

				if(log) {
					div1[k][j] = mpz_get_ui(xe);
					sum1[k][j] = mpz_get_ui(g);
				} else {
					if(j < MAX2) div1[k][j] = sum1[k][j] = jk < 3? NPS : 1;
					if(d < K) {
						jj < MAX1-2? mpz_set(div[dec][jj], xe) : mpz_set_ui(div[dec][jj], NPS);
						jj < MAX1-2? mpz_set(sum[dec][jj], g) : mpz_set_ui(sum[dec][jj], NPS);							
						}
				}
			} else if(j < MAX2) {
				div1[k][j] = sum1[k][j] = (j < 12+ind[i]) && (jk < 3)? NPS : 1;
				if(!log && d < K) {
					mpz_set_ui(div[dec][jj], j < 12+ind[i]? NPS : 1);
					mpz_set_ui(sum[dec][jj], j < 12+ind[i]? NPS : 1);
				}
			} else if(!log && (jj < MAX1) && (d < K)) {
				mpz_set_ui(div[dec][jj], j < 12+ind[i]? NPS : 1);
				mpz_set_ui(sum[dec][jj], j < 12+ind[i]? NPS : 1);
			}
			
			if(!log) jj++;
		}
			d += inv? -1 : +1;
	 }

	for(i = 0; i < H; i++) {
		for(j = MAX2-1; sum1[i][j] == NPS || sum1[i][j] <= 1; j--);
		mem[i] = j;
	}
	
	mpz_clears(xe, g, unu, NULL);	
}


void UNIVEC2(gmp_ui *b, mpz_t *C, mpz_t *C1, int D, int &E, int H, int K, mpz_t div[][MAX1], gmp_ui div1[][MAX2], int *mem, int inv) {
	 mpz_t xe, unu;
	 mpz_inits(xe, unu, NULL);
	 int sb, d, i = 0, j, k, ind[576], PP, ll, P[D], P1[D], log;
	 char t, PUT[15] = "PUTERI.TXT";
	 PP = LUNGHEZ2(PUT);
	 FILE *F1 = fopen(PUT, "r");
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
	 
	 fclose(F1);
	
	 if(inv) {
	 	 for(i = (H>>1); i; ) {
			j = ind[--i];
			ind[i] = ind[H-i-1];
			ind[H-i-1] = j;
		 }
	 }
	 
	 printf("%d %d %d %d %d %d\n", D, E, D+E, H, K, D-H);
	 F1 = fopen("/INDPUTGEN.TXT", "w");	
      	 d = inv? H-1 : 0;
	 mpz_ui_pow_ui(unu, 2, 64);	
	 
	 for(i = 0; i < E; i++) {
	 	mpz_add_ui(C1[i], C[i], 1);
	 }

	 for(i = 0; i < H; i++) {//H descotfactizat.
		mpz_set_ui(xe, 1);

		for(j = 1; j < MAX1; j++) {
			mpz_mul_ui(xe, xe, b[i]);			
			log = (mpz_cmp(xe, unu) < 0);
			
			if(j < 12+ind[i]) {//k = inv? K-d-1 : d;//H-d-1 pentru punerea la sfârșit a div-urilor.
				k = inv? H-d-1 : d;
				if(j == 1) {
					div1[k][0] = 1; 
					mpz_set_ui(div[k][0], 1);
					}
				if(log) {
					div1[k][j] = mpz_get_ui(xe);					
				} else {
					if(j < MAX2) div1[k][j] = NPS;					
				}
				if(d < K) {
					j < MAX1-2? mpz_set(div[k][j], xe) : mpz_set_ui(div[k][j], NPS);											
					}
				else {
					if(j < MAX2-2) {
						mpz_set(div[k][j], xe);						
					} else if(j < MAX2) {
						mpz_set_ui(div[k][j], NPS);	
					}
				}
			} else 	if(j < MAX2) {
				if(d >= K) {
					div1[k][j] = NPS;
					mpz_set_ui(div[k][j], NPS);
				} else {
					div1[k][j] = NPS;
					}
			} else	if((j < MAX1) && (d < K)) {
				mpz_set_ui(div[k][j], NPS);
			}
		}
			k++;

			d += inv? -1 : +1;
	 }
	
	for(i = 0; i < H; i++) {
		for(j = MAX2-1; div1[i][j] == NPS; j--);
		mem[i] = j;
	}
	mpz_clears(xe, unu, NULL);	
}


void UNIFACTUS1(int sus, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int &E, int H, int K, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int inv) {
	 mpz_t xe, g, unu;
	 mpz_inits(xe, g, unu, NULL);
	 int log, sb, d, i = 0, j, k, ind[576], PP, ll, P[D], P1[D];
	 char t, PUT[90];
         DECIDTEXT(PUT, sus);
         puts(PUT);
         PP = LUNGHEZ2(PUT);
	 FILE *F1 = fopen(PUT, "r");
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
	 
	 fclose(F1);
	
	 if(inv) {
	 	 for(i = (H>>1); i; ) {
			j = ind[--i];
			ind[i] = ind[H-i-1];
			ind[H-i-1] = j;
		 }
	 }
	 
	 printf("RAB %d %d %d %d %d\n", D, E, D+E, H, K);
      	 d = inv? H-1 : 0;
	 mpz_ui_pow_ui(unu, 2, 64);
      	 
	 for(i = 0; i < H; i++) {//H descotfactizat.
		mpz_set_ui(xe, 1);

		for(j = 0; j < ind[i]; j++) {
			mpz_mul_ui(xe, xe, b[i]);
			mpz_mul_ui(g, xe, b[i]);
			mpz_divexact_ui(g, g, b[i]-1);
			
			if(d < K) {
				k = inv? K-d-1 : d;
				mpz_set(div[k][j], xe);
				mpz_set(sum[k][j], g);
			} else {
				k = inv? H-d-1 : d-K;
				div1[k][j] = mpz_cmp(g, unu) < 0? mpz_get_ui(xe) : NPS;
				sum1[k][j] = mpz_cmp(g, unu) < 0? mpz_get_ui(g) : NPS;
			}
		}		
			k++;
			d += inv? -1 : +1;
	 }
 
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
			if(k < 10+ll) {
				mpz_mul(div[i][k], div[i][k-1], div[i][0]);
				mpz_mul(sum[i][k], sum[i][k-1], div[i][0]);
				mpz_add_ui(sum[i][k], sum[i][k], 1);
				++P1[i];
			} else {
				mpz_set_ui(div[i][k], NPS);
				mpz_set_ui(sum[i][k], NPS);
			}
		}//EXTINDEREA PUTERILOR:
		
		mpz_set_ui(div[i][0], 1);
		mpz_set_ui(sum[i][0], 1);
		mpz_set_ui(div[i][MAX1-2], NPS);
		mpz_set_ui(sum[i][MAX1-2], NPS);
		mpz_set_ui(div[i][MAX1-1], NPS);
		mpz_set_ui(sum[i][MAX1-1], NPS);
	}

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
			log = (mpz_cmp(g, unu) < 0) && (div1[i][ll] ^ NPS);

			if(j && (k < 10+ll) && log) {
				div1[i][k] = mpz_get_ui(xe);
				sum1[i][k] = mpz_get_ui(g);
				++P1[i+K];
			} else {
				j = 0;
				div1[i][k] = NPS;
				sum1[i][k] = NPS;
			}
		}

		div1[i][0] = 1;
		sum1[i][0] = 1;
		div1[i][MAX2-2] = NPS;
		sum1[i][MAX2-2] = NPS;
		div1[i][MAX2-1] = NPS;
		sum1[i][MAX2-1] = NPS;
	}
	mpz_clears(xe, g, unu, NULL);	
}


void UNIFACTUM(int sus, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int inv) {
	 mpz_t xe, g, unu;
	 mpz_inits(xe, g, unu, NULL);
	 int sb, d, i = 0, j, k, ind[H1], PP, ll, P[D], P1[D];
	 char t, PUT[60];
         DECIDTEXT(PUT, sus);
         puts(PUT);
         PP = LUNGHEZ2(PUT);
	 FILE *F1 = fopen(PUT, "r");
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
	 
	 fclose(F1);
	
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
			div1[k][j] = NPS;
			sum1[k][j] = NPS;			
		}		
			k++;
			d += inv? -1 : +1;
	 }

	 fclose(F1);
	 
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
				div1[i][k] = NPS;
				sum1[i][k] = NPS;
			}
		}

		div1[i][0] = 1;
		sum1[i][0] = 1;
		div1[i][MAX2-2] = NPS;
		sum1[i][MAX2-2] = NPS;
		div1[i][MAX2-1] = NPS;
		sum1[i][MAX2-1] = NPS;
	}

	mpz_clears(xe, g, unu, NULL);
}


//U = D, sum-urile dispar la UNIFACTUS.

/*void initmpz(int a, ...) {
	va_list list;
	va_start(list, a);
	for(int i = 0; i < a; i++) {
		//mpz_init2(va_arg(list, mpz_t), 6400);
	}
	va_end(list);
}*/


void mpz_init_va(mpz_t first, ...) {
	mpz_t *ptr;
	va_list ap;
	ptr = (mpz_t *)first;
	va_start(ap, first);
	
	do {
		mpz_init2(*ptr, 6400);
		ptr = va_arg(ap, mpz_t *);
	} while(ptr != NULL);

	va_end(ap);
}


void PURGANTE(mpz_t *C, mpz_t *C1, int &E) {
int E2 = E, f = 0, g, h = 0;

for(; f < E2; f++) {
	g = mpz_scan1(C1[f], 0);
	if(!( (g == 89) || (g == 107) || (g == 127) )) {
		mpz_set(C[h], C[f]);
		mpz_set(C1[h++], C1[f]);
		}
	else E--;
	}
}


void PURGANTE2(mpz_t *C, mpz_t *C1, int &E) {
int E2 = E, f = 0, g, h = 0;

for(; f < E2; f++) {
	g = mpz_scan1(C1[f], 0);
	if(!( (g == 89) || (g == 107))) {
		mpz_set(C[h], C[f]);
		mpz_set(C1[h++], C1[f]);
		}
	else E--;
	}
}

/*
void SMVPAR(mpz_t D, mpz_t d1, mpz_t e1, mpz_t p1, FILE *S2, gmp_ui *b, gmp_ui *b2, int i, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi, char *Y, int X) {	
	mpz_tdiv_q_2exp(p1, D, X);
	SMV(p1, e1, b, b2, i, j, X, div1, sum1, sumdoi[X]);
	if( (mpz_cmp(e1, D) == 1) && (VALID(D, d1, e1) == 1) )
		#pragma omp critical
		{SCRIE(D, Y, S2);}
}


void PURG1PAR(mpz_t D, mpz_t d1, mpz_t e1, mpz_t p1, FILE *S2, gmp_ui *b, gmp_ui *b2, int i, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *q1, char *Y, int X) {
	mpz_tdiv_q_2exp(p1, D, X);
	NSPURG1(p1, e1, b, b2, i, j, X, div1, sum1, q1[X], 0);
	if( (mpz_cmp(e1, D) == 1) && (VALID(D, d1, e1) == 1) )
		#pragma omp critical
		{SCRIE(D, Y, S2);}
}


void SUMVPAR(mpz_t D, mpz_t d1, mpz_t e1, mpz_t p1, FILE *S2, gmp_ui *b, gmp_ui *b2, int i, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *q1, char *Y, int X) {
	mpz_tdiv_q_2exp(p1, D, X);
	NSV1(p1, e1, b, b2, i, j, X, div1, sum1, q1[X], 0);
	if( (mpz_cmp(e1, D) == 1) && (VALID(D, d1, e1) == 1) )
		#pragma omp critical
		{SCRIE(D, Y, S2);}
}


void DIVV1PAR(mpz_t D, mpz_t d1, mpz_t e1, mpz_t p1, FILE *S2, gmp_ui *b, gmp_ui *b2, int i, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *q1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, int J, int  l, char *Y, int X) {	
	mpz_tdiv_q_2exp(p1, D, X);
	SUMDIVV1(p1, e1, C, C1, b, b2, i, J, j, l, X, div1, sum1, div, sum, mem, q1[X], 0);
	if( (mpz_cmp(e1, D) == 1) && (VALID(D, d1, e1) == 1) )
		#pragma omp critical
		{SCRIE(D, Y, S2);}
}


void DIVVPAR(mpz_t D, mpz_t d1, mpz_t e1, mpz_t p1, FILE *S2, gmp_ui *b, gmp_ui *b2, int i, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *q1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, int J, int l, char *Y, int X) {
	mpz_tdiv_q_2exp(p1, D, X);
	SUMDIVV(p1, e1, C, C1, b, b2, i, J, j, l, X, div1, sum1, div, sum, mem, q1[X]);
	if( (mpz_cmp(e1, D) == 1) && (VALID(D, d1, e1) == 1) )
		#pragma omp critical
		{SCRIE(D, Y, S2);}
}


void IMENSPAR(mpz_t D, mpz_t d1, mpz_t e1, mpz_t p1, FILE *S2, gmp_ui *b, gmp_ui *b2, int i, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *q1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, int J, int l, char *Y, int X) {
	mpz_tdiv_q_2exp(p1, D, X);
	SUMIMENS(D, e1, C, C1, b, b2, i, J, j, l, X, div1, sum1, div, sum, mem, p1, q1[X]);
	if( (mpz_cmp(e1, D) == 1) && (VALID(D, d1, e1) == 1) )
		#pragma omp critical
		{SCRIE(D, Y, S2);}
}*/


int mpz_scan12(mpz_t a, gmp_ui *sdoi, mpz_t *sumdoi, int b) {//b = 63.
	if(mpz_divisible_p(a, sumdoi[++b])) {
		for(; mpz_divisible_p(a, sumdoi[b]); b += 2);
		return mpz_divisible_p(a, sumdoi[--b])? b : --b;
	}
	
	for(--b; !mpz_divisible_ui_p(a, sdoi[b]); --b);
	return b;
}


int mpz_scanul(mpz_t a, char *Q, int b) {
	mpz_get_str(Q, 10, a);
	for(int i = strlen(Q) - 1; !Q[i]; i--, b++);
	return b;
}


int gmp_scan1(gmp_ui a, gmp_ui *divdoi, int b) {//b = 0;
	while(!(a % divdoi[++b]));
	return --b;
}


void TRUNCTEXT(gmp_ui P1, gmp_ui PP1, char *Y, char *SCR, FILE *f1, int mod, int a1, char w1, char cifr, char cifr2) {
	if(P1 = LUNGHEZ2(SCR)) {
		f1 = fopen(SCR, "r");
		PP1 = mod ^ 4? URC1(f1, a1+2, Y, w1, P1/1000, P1, cifr) : URC2(f1, a1+2, Y, w1, P1/1000, P1, cifr, cifr2);
		fclose(f1);
		
		if(P1 ^ PP1) {
			sprintf(Y, "truncate --size=%llu %s", PP1, SCR);
			system(Y);
		}
	}
}


#endif
