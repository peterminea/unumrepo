#ifndef _NUM_H
#define _NUM_H

#include <cstring>
#include <math.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "/TOLIL.h"

#define MAX3 20

void VTOL0(gmp_ui *L3, gmp_ui *L4, gmp_ui *b, int *EXP, int H, FILE *F1, int b1, char *v);
void VTOL2(int e, int f, int &I, gmp_ui *b, gmp_ui *a, long PP1, char *Y);
int VALID(long double &SUM, long double &c, long double &I1, double &E);
void LOTVEC(gmp_ui *b, gmp_ui *y, long double &d, int k, int D, int &Y, int &m, int &e);
int VMAXPUT(int A, int &D, gmp_ui *b, int *EXP, gmp_ui *a, gmp_ui *L3, gmp_ui *L4, int b1, char *v, int H, long PP1, char *Y, gmp_ui u, gmp_ui *gmpplus/*, mpz_t *mpzplus*/);
gmp_ui PRELNUMM(long double a, gmp_ui *divdoi, int e);

int GAS(gmp_ui *A2, gmp_ui u, int W, int W1) {
	for(; W > W1;)
		if(u == A2[--W])  {			
			break;
		}
		
return W;
}


void TOL(long double b, double &E, gmp_ui *i, gmp_ui *i1, int m, int n, long double &c, long double &d, long double &I1, gmp_ui &e, gmp_ui &f, int &g, gmp_ui div[][MAX3], gmp_ui &j, gmp_ui *divDoi) {

e = 2;
while(1) {	
	if(fmodl(b, divDoi[e])) break;
	e += 2;
}

if(fmodl(b, divDoi[--e])) e--;
d = 2 - 1.0 / divDoi[e];
e = b / divDoi[e];
j = 1;
g = m;

while(1) {
	if(!g--)
		break;
	if(e % i[g]) continue;
	
	f = 2;
	while(!(e % div[g][f])) f += 2;
	if(e % div[g][--f]) f--;
	j *= div[g][f];	
	d *= (1 + (1 - 1.0/div[g][f]) / i1[g]);
	}

if (j == e)
	goto s1;
g = n;
while(1) {
	if(!(g-- ^ m))
		break;

	if( !(e % i[g]) ) {
		j *= i[g];
		d += d / i[g];//40 += 40/127, (40*127 + 40) / 127. Nu merge cu 128.
		if (j == e) 
			goto s1;
		}
	}

if(j ^ e)
	return;	
s1:
	if(VALID(d, c, I1, E))
		printf("%.0Lf %.3Lf\n", b, --c);
}


void LOT(long double b, double &E, gmp_ui *i, gmp_ui *i1, int m, int n, long double &c, long double &d, long double &I1, gmp_ui &e, gmp_ui &f, int &g, gmp_ui div[][MAX3], gmp_ui *divDoi) {
e = 2;
while(1) {
	if(fmodl(b, divDoi[e])) break;
	e += 2;
}

if(fmodl(b, divDoi[--e]))
	e--;
d = 2 - 1.0 / divDoi[e];
e = b / divDoi[e];
g = m;

while(1) {
	if(!g--)
		break;
	if(e % i[g]) continue;
	
	f = 2;		
	while(!(e % div[g][f])) f += 2;
	if(e % div[g][--f]) f--;
	d *= (1+ (1 - 1.0/div[g][f]) / i1[g]);
	}

g = n;
while(1) {
	if(!(g-- ^ m))
		break;
	if(!(e % i[g])) {
		d += d / i[g];
		}
	}

if(VALID(d, c, I1, E))
	printf("%.0Lf %.3Lf\n", b, --c);
}


void ADDIV(long double &b, long double &d, gmp_ui *i, gmp_ui *i2, gmp_ui div1[][MAX3], int m, int n, int &g, gmp_ui *div, long double *abund, long double &abDoi, gmp_ui &divDoi, gmp_ui *divdoi) {

gmp_ui e = 1, f;
while(1) {
	if(fmodl(b, divdoi[e]))
		break;
	e++;	
	}

d = 2 - 1.0 / divdoi[--e];
abDoi = d;
divDoi = divdoi[e];
e = b / divDoi;
g = m;

while(1) {
	if(!g--)
		break;
	f = 2;
	while(!(e % div1[g][f])) f += 2;
	if(e % div1[g][--f]) f--;
	div[g] = div1[g][f];
	abund[g] = 1 + (1 - 1.0/div[g]) / i2[g];
	d *= abund[g];
	}
g = n;

while(1) {
	if(! (g-- ^ m) )
		break;
	div[g] = i[g];
	abund[g] = 1 + 1.0 / i[g];//i1[g] = 1 + i[g], 1 + 1/127 = 128/127, i1[g] = 128.
	d += d/i[g];
	}
}


int MODIFSUMSUS(long double &SUM, gmp_ui &j, gmp_ui coef, gmp_ui &a, gmp_ui *i, gmp_ui *i1, long double abDoi, gmp_ui &divDoi, gmp_ui *div, long double *abund, int R, int m, int n, gmp_ui *b, gmp_ui *b3, int U, int H, gmp_ui div1[][MAX3], gmp_ui div2[][MAX3], gmp_ui *divdoi) {
while(1) {
	if(!(n-- ^ m))
		break;
	if(!(coef % i[n])) {
		return 0;	
		}
	}

if (coef & 1)
	goto s2;//j = 1.

	while(1) {
		if(coef % divdoi[j])		
			break;
		j++;
	}
	
coef >>= --j;
SUM *= (2 - 1.0/(divDoi<<j) ) / abDoi;
if(coef == 1)
	return 1;
s2:

j = 1;
while(1) {
	if (!m--)
		break;
	if(!(coef % i[m])) {
		a = 2;
		while(!(coef % div1[m][a])) a++;
		j *= div1[m][--a];
		a = div1[m][a];
		SUM *= (1 + (1 - 1.0L/(div[m]*a))  / i1[m]) / abund[m];
		if (coef == j)
			return 1;
		}	
	}
R = H;
coef /= j;
j = 1;

while(1) {
	if( !(H--) || (coef < b[H]))
		break;
	if(!(coef % b[H])) {
		a = 2;
		while(!(coef % div2[H][a])) a++;
		j *= div2[H][--a];
		a = div2[H][a];		
		SUM *= (1 + (1 - 1.0L/a) / b3[H]);
		if(j == coef)
			return 1;
		}
	}

coef /= j;
j = 1;

while(1) {
	if( !(U-- ^ R) || (coef < b[U]))
		break;		
	if(!(coef % b[U])) {
		j *= b[U];
		SUM += SUM / b[U];
		if(j == coef)
			return 1;
		}
	}

return 0;
}


void MODIFSUM(long double &SUM, gmp_ui coef, gmp_ui &a, gmp_ui *i, gmp_ui *i1, long double &abDoi, gmp_ui &divDoi, gmp_ui *div, long double *abund, int m, int n, gmp_ui *divdoi, gmp_ui div1[][MAX3]) {
if (coef & 1)
	goto s2;

while(1) {//a = 1;
	if(coef % divdoi[a]) break;
	a++;
	}

coef >>= --a;
// (2 - 1.0/ (128>>1)) / (255/128) * (divDoi<<a)
SUM *= ((2 - 1.0/(divDoi>>a)) / abDoi);
// 5 - 1/255; 1.5 * 128/255
// x / 255/128 = 254/51
// 5/1 * y = 254/51, y = 254/255
//254/255 = x / 255/128

if (coef == 1)
	return;

s2:
while(1) {
	if (! (n-- ^ m))
		break;
	if (!(coef % i[n])) {
	//	coef /= i[n];		
		SUM /= abund[n];
		//if (coef == 1)
		//	return;
		}
	}

while(1) {
	if (!m--)
		break;
	if(!(coef % i[m])) {
		a = 2;
		while(!(coef % div1[m][a])) a++;
		a = div1[m][--a];
		SUM *= (1.0 + (1 - (1.0L*a)/div[m] ) / i1[m]) / abund[m];
		}
	}
}


int VALID(long double &SUM, long double &c, long double &I1, double &E) {
c = SUM;
SUM *= 10;
	I1=modfl(SUM, &I1);
	if( (I1 < E) || (1-I1 < E) )
		return 1;		
	SUM -= c;
	
	I1=modfl(SUM, &I1);
	if( (I1 < E) || (1-I1 < E) )
		return 1;		
	SUM -= c;

	I1=modfl(SUM, &I1);
	if( (I1 < E) || (1-I1 < E) )
		return 1;		
	SUM -= c;

	I1=modfl(SUM, &I1);
	if( (I1 < E) || (1-I1 < E) )
		return 1;		
	SUM -= c;

	I1=modfl(SUM, &I1);
	if( (I1 < E) || (1-I1 < E) )
		return 1;

return 0;
}


int VCOEF(gmp_ui a, gmp_ui *b, int D) {
gmp_ui c;

while(1) {
	--D;
	while(1) {
		if(a % b[D])
			break;
		a /= b[D];
		}
		
	if( !(a ^ 1) )
		return 1;
	if(!D)
		break;
	}

if(!(a&1)) {
	c = 2;
	while(1) {
		if(c >= a)
			break;
		c <<= 1;
		}
		
	if(! (c ^ a) )
		return 1;
	}

return 0;
}


void INV2(gmp_ui *b, int d1, int D) {
int i;

for(i=(d1>>1); i; ) {
	b[--i] ^= b[d1-i-1];
	b[d1-i-1] ^= b[i];
	b[i] ^= b[d1-i-1];
	}
	
for(i= ((D+d1)>>1); i>d1; ) {
	b[--i] ^= b[D-i-1 + d1];
	b[D-i-1 + d1] ^= b[i];
	b[i] ^= b[D-i-1 + d1];
	}
}


void LOTVEC(gmp_ui *b, gmp_ui *y, gmp_ui *y1, int *a3, long double &d, int k, int D, int &Y, int &m, int &e) {
e = k;
Y = 0;
while(1) {
	if(!e)
		break;
	if(!fmodl(d, b[--e])) {
		y1[Y] = b[e] - 1;
		a3[Y] = e;
		y[Y++] = b[e];
		}
	}
m = Y;
e = D;
while(1) {
	if(!(e^k))
		break;
	if(!fmodl(d, b[--e])) {
		y1[Y] = b[e] - 1;
		a3[Y] = e;
		y[Y++] = b[e];
		}
	}
}


void GEN(const char *t, gmp_ui *b, int U, int &D) {
FILE *FP = fopen(t, "r");

for(int e = 0; e < U; ++e)
	fscanf(FP, "%llu", &b[e]);
fclose(FP);

D = U;
//W=COEF1(72, 1, 256,b);
}


/*
void CIT(FILE *f1, gmp_ui *a, gmp_ui A, gmp_ui Z, gmp_ui d, int &e, const char *t) {
f1=fopen(t, "r");

while(1) {
	fscanf(f1, "%llu", d);
	if( (d > Z) || feof(f1) )
		break;

	if(d > A)
		a[e++] = d;
	}

fclose(f1);
}


int VC(int A, int B, int D1) {//H, Z1, f, I, V1

FILE *FP=fopen("VEC.TXT","w");
H=0;
Z1=pow((double)2, 25);

	while(1) {
	f=A-1;
		while(1) {
		if( !fmodl(a[A], a[f]) ) {
			I=a[A]/a[f];
			if(I>Z1)
				break;

			if( V(I, V1, H) ) {
				fprintf(FP,"%.llu ",I);
				++H;
				
				if(H==D1) {
					fclose(FP);
					return H;
					}
				}
			}

		if( !(f^B) )
			break;
		--f;
		}

	--A;
	if( !(A^B) )
		break;
	}

fclose(FP);
return H;
}
*/

void QS(gmp_ui *a, int b, int e) {
gmp_ui j, pv;
int l, r;

if(e>b+1) {
	pv=a[b];
	l=b+1;
	r=e;

	    while(1) {
		if(l>=r)
			break;
		
		if(a[l]<=pv)
			++l;
		else	{
			//a[--r] ^= a[l];
			//a[l] = a[r] ^ a[l];
			//a[r] ^= a[l];
			j=a[--r];
			a[r]=a[l];
			a[l]=j;	
			}
		} 
	//a[--l] ^= a[b];
	//a[b] = a[l] ^ a[b];
	//a[l] ^= a[b];
	j=a[--l];
	a[l]=a[b];
	a[b]=j;

	QS(a, b, l);
	QS(a, r, e);
	}
}


void COEFGEN(gmp_ui *a, unsigned long g, unsigned long n, unsigned long s, unsigned long D, unsigned long R) {
if(D%R)
	return;
unsigned long e=0, f, i=0;
gmp_ui d[100001];
FILE *H = fopen("VEC.TXT", "w");
R = D/R;
e = 0;

while(1) {
	f = g - s;
	while(1) {
		if( !(a[g] % a[f]) ) {			
			d[e] = a[g] / a[f];
			if(!(++e^R))				
				goto s1;				
			}
		s2:
		if( !(f-- ^ n) )
			break;
		}
	
	if( !(--g ^ n) )
		break;
	}

s1:
QS(d, 0, R);
d[R] = 0;

for(e = 0; e < R; e++)
	if( d[e+1] > d[e] ) {
		fprintf(H, "%llu\n", d[e]);
		++i;
		}
D -= R;
e = 0;

if(!D) {
	fclose(H);
	printf("S-au luat %lu de numere.\n", i);		
	return;
	}
	
goto s2;
}

//În lumea numerelor cu cel mai mare divizor impar mai mic decât 2^64, se cere să se facă, în regim TOL / LOT, suma divizorilor, pentru numărul de plecare, plus CMMDC între ea și număr, plus numărătorul și numitorul abundențial al numărului. Cele două din urmă să se modifice în stil MODPRIM.
//Și chiar să se încerce calculul direct al termenilor abundențiali cu CMMDC-uri, pentru numărul inițial (de păstrat undeva valorile sumelor parțiale, adică ale sumelor individuale de divizori ale puterilor de factori primi din componența numărului de bază). Adică un fel de ADUNMDIV.
//Idee la MODPRIM(SUM): nu cumva ar fi mai eficient ca suma divizorilor numărului inițial să se facă cu ADUNDIVe în loc de SUMADIVe?
//Ca să existe sumInt, sumMpz ale numărului de bază gata pre-calculate, și la modificarea termenilor abundențiali să nu se mai facă cu repetiție SINT, TREISINT, SMPZ, TREISMPZ și restul (cazurile cu mulți factori primi puși la bătaie), ci valorile lor să se ia direct din ce s-a făcut la ADUNDIVe, și de prelucrat mai departe. Dacă sunt mai puțini factori (5, 3), se poate lucra ca până acum.
//Nu trebuie schimbat SUMADIV în ADUNDIV la căutarea în jos. După SUMADIV se poate folosi un nou vector cu sumInt-uri (sau și unul cu mepezetele) numai pentru primele implicate acolo. SINT, SMPZ.
//De fapt, este nepractic să se facă așa la MODPRIM. E eficient cum e implementat acum. La MODPRIMSUM trebuie văzut. Iar la imparii sub 2^64 trebuie adusă noutatea algoritmică.
//Aici: D = 53, H = 11, E nu există. Trebuie o variantă adaptată a lui ADUNMDIV.
//După ADUNMDIV trebuie CMMDC între long double: suma și numărul.


void SCOTFACT(gmp_ui *b, gmp_ui *b1, gmp_ui *b2, gmp_ui *sumInt, int &D, int &H, int I, int L) {//I = 0;
int l = 0;

for(L = 0; L < D; L++)
if(b[L] > 6) {
	sumInt[I] = sumInt[L];
	b1[I] = b1[L];
	b2[I] = b2[L];
	b[I++] = b[L];
	} else {
	l++;
	}

D -= l;
H -= l;
}


long double CMMDC(long double a, long double b, long double c) {//a = 182, b = 65, c = 52; Știm sigur că a nu e mai mic, de fapt mai mare decât b.
while(1) {
  if(c == 0)
	return b;
    a = b;//a e 65, apoi 52
    b = c;//b e 52, apoi 13
    c = fmodl(a, b);//c e 13, apoi 0
  }
 
return 0;
}


gmp_ui CMMDCI(gmp_ui a, gmp_ui b, gmp_ui c) {
while(1) {
  if(!c)
	return b;
    a = b;
    b = c;
    c = a % b;
  }
  
return 0;
}


void LOTULE(long double A, gmp_ui &sumDoi, gmp_ui &SUM, gmp_ui &t, gmp_ui div[][MAX3], gmp_ui sum[][MAX3], gmp_ui *b, gmp_ui *b1, gmp_ui E, int i, int H, int D, gmp_ui &j1, gmp_ui &j2, gmp_ui &nm, gmp_ui &nr, gmp_ui *divDoi, gmp_ui *sumdoi) {

j1 = 2;
while(!fmodl(A, divDoi[j1])) j1 += 2;
if(fmodl(A, divDoi[--j1])) j1--;
SUM = 1;
E = A / divDoi[j1];
sumDoi = sumdoi[j1];
i = H;

while(1) {
	if(!i--)
		break;

	if(!(E % b[i])) {
		t = 2;		
		while(!(E % div[i][t])) t += 2;
		if(E % div[i][--t]) t--;
		SUM *= sum[i][t];
		}
	}

while(1) {
	if (!(D-- ^ H))
		break;
	if(!(E % b[D])) {
		SUM *= b1[D];
		}
	}	

t = (1+sumDoi) >> 1;
j2 = CMMDCI(SUM, E, SUM%E);
if(j2 ^ 1) {SUM /= j2; E /= j2;}
j1 = CMMDCA(SUM, t, SUM % t);
j2 = CMMDCA(sumDoi, E, sumDoi % E);
nm = (t / j1) * (E / j2);
nr = (SUM / j1) * (sumDoi / j2);
if(nm < 11) printf("%.0Lf %llu %llu %.6Lf\n", A, nr, nm, (long double)nr / nm);
}


void TOLULE
(long double A, gmp_ui &sumDoi, gmp_ui &SUM, gmp_ui &t, gmp_ui div[][MAX3], gmp_ui sum[][MAX3], gmp_ui *b, gmp_ui *b1, gmp_ui E, int i, int H, int D, gmp_ui &j1, gmp_ui &j2, gmp_ui &nm, gmp_ui &nr, gmp_ui *divDoi, gmp_ui *sumdoi) {

j1 = 2;
while(!fmodl(A, divDoi[j1])) j1 += 2;
if(fmodl(A, divDoi[--j1])) j1--;
SUM = 1;
E = A / divDoi[j1];
sumDoi = sumdoi[j1];
i = H;

while(1) {
	if(!i--)
		break;
	if(!(E % b[i]))	{
		t = 2;
		while(!(E % div[i][t])) t += 2;
		if(E % div[i][--t]) t--;
		SUM *= sum[i][t];			
		}
	}

if(SUM > E)
	{goto s1;}

while(1) {
	if (!(D-- ^ H))
		break;
	if(!(E % b[D])) {
		SUM *= b1[D];
		if(SUM > E)
			{goto s1;}
		}
	}
	
s1:
t = (1+sumDoi) >> 1;
j2 = CMMDCI(SUM, E, SUM%E);
if(j2 ^ 1) {SUM /= j2; E /= j2;}
j1 = CMMDCA(SUM, t, SUM % t);
j2 = CMMDCA(sumDoi, E, sumDoi % E);
nm = (t / j1) * (E / j2);
nr = (SUM / j1) * (sumDoi / j2);
if(nm < 11) printf("%.0Lf %llu %llu %.6Lf\n", A, nr, nm, (long double)nr / nm);
}


void ADUNDIV
(long double &A, gmp_ui &sumDoi, gmp_ui &SUM, gmp_ui *sumInt, gmp_ui *y, gmp_ui &t, gmp_ui div[][MAX3], gmp_ui sum[][MAX3], gmp_ui *b, gmp_ui *b1, gmp_ui E, int i, int H, int &n, int D, gmp_ui &j1, gmp_ui &j2, int &Y, gmp_ui &nm, gmp_ui &nr, gmp_ui *divDoi, gmp_ui *sumdoi) {

j1 = 2;
while(!fmodl(A, divDoi[j1])) j1 += 2;
if(fmodl(A, divDoi[--j1])) j1--;
SUM = 1;
E = A / divDoi[j1];
sumDoi = sumdoi[j1];
i = H;

while(1) {
	if(!i--)
		break;
	if(!(E % b[i])) {
		y[Y] = b[i];
		t = 2;
		while(!(E % div[i][t])) t += 2;
		if(E % div[i][--t]) t--;
		sumInt[Y] = sum[i][t];		
		SUM *= sumInt[Y++];
		}
	}
n = Y;
if(SUM > E)		
	{goto s1;}

while(1) {
	if (!(D-- ^ H))
		break;
	if(!(E % b[D]))	{
		y[Y++] = b[D];
		SUM *= b1[D];
		if(SUM > E)		
			{goto s1;}
		}
	}
	
s1://208565280: 32, 6517665, 63/32, 15449280/6517665
t = (1+sumDoi)>>1;
j2 = CMMDCI(SUM, E, SUM%E);
if(j2 ^ 1) {SUM /= j2; E /= j2;}//15449280/6517665 a devenit 64/27: SUM = 64, E = 27, sumDoi = 63, t = 32.
//Sau: SUM = 2048, E = 819, sumDoi = 4095, t = 2048.
j1 = CMMDCA(SUM, t, SUM % t);//32
j2 = CMMDCA(sumDoi, E, sumDoi % E);//9
nm = (t / j1) * (E / j2);//1*3
nr = (SUM / j1) * (sumDoi / j2);//2*7
}


int PREZ(gmp_ui a, gmp_ui *b, int c, int d) {
while(1) {
	if( !(c-- ^ d) )
		break;
	if(b[c] == a)
		return 1;
	}
	
return 0;
}


void HS(gmp_ui *a, gmp_ui t, unsigned long D) {/*t, variabilă temporară.*/

unsigned long n = D, par = (D>>1), ind, cop; /*Indecşi de heap.*/

while (1)/*Ciclează până ce vectorul este sortat.*/
	{
	if (par > 0)
	       	{
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

        while (cop < n)
		{
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


void MODIFDOISUS(gmp_ui &coef, gmp_ui &j, gmp_ui j1, gmp_ui j2, gmp_ui j3, gmp_ui &nr, gmp_ui &nm, gmp_ui *divDoi) {//j = 1, j1 = 2, j2 = mpz_scan1(unu, 0), j3 = 1
while(1) {
	if(coef % divDoi[j])
		break;
	j++;
	}
--j;
coef >>= j;

j1 = (j2<<j);
j2 = j1 + (j3 << j) - 1;
j3 = CMMDCI(j2, j1, j2%j1);
if(j3 ^ 1) {j1 /= j3; j2 /= j3;}
j = CMMDCA(j2, nm, j2%nm);
j3 = CMMDCA(j1, nr, j1%nr);
nm = (j1 / j3) * (nm / j);
nr = (nr / j3) * (j2 / j);
}


void MODIFDOIJOS(gmp_ui &coef, gmp_ui &a, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &nr, gmp_ui &nm, gmp_ui *divDoi) {//a = 1, j2 = 1
while(1) {
	if(coef % divDoi[a])
		break;
	++a;		
	}

coef >>= --a;
j2 = 1 + j - (j2 << a);
j1 = CMMDCI(j, j2, j%j2);
if(j1 ^ 1) {j /= j1; j2 /= j1;}
a = CMMDCA(j, nr, j%nr);
j1 = CMMDCA(j2, nm, j2 % nm);
nm = (nm / j1) * (j / a);
nr = (j2 / j1) * (nr / a);
}


int MODIFSUS
(gmp_ui *sumInt, gmp_ui *i1, gmp_ui coef, int Y, int n, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui div1[][MAX3], gmp_ui sum1[][MAX3], gmp_ui div2[][MAX3], gmp_ui sum2[][MAX3], int a, gmp_ui k, gmp_ui *b2, gmp_ui *b3, int f, int e, gmp_ui c, gmp_ui &nr, gmp_ui &nm) {

while(1) {
	if(!(Y-- ^ n))
		break;
	if(!(coef % i1[Y])) {
		return 0;
		/*c *= i1[Y];
		j1 = i1[Y] * sumInt[Y];
		j2 = j1 + 1;		
		j = CMMDCA(j1, nr, j1 % nr);
		k = CMMDCA(nm, j2, nm % j2);
		nm = (j1 / j) * (nm / k);
		nr = (nr / j) * (j2 / k);
		if(!(c ^ coef)) return 1;*/
		}
	}

while(1) {
	if(!(n--))
		break;
	if(!(coef % i1[n])) {//Divizori ai numărului.
		j = 2;		
		while(!(coef % div1[n][j])) j += 2;
		if(coef % div1[n][--j]) j--;
		c *= div1[n][j];
		
		j1 = div1[n][j] * sumInt[n];
		j2 = j1 + sum1[n][--j];
		j = CMMDCI(j2, j1, j2 % j1);
		if(j ^ 1) {j2 /= j; j1 /= j;}
		j = CMMDCA(j1, nr, j1 % nr);
		k = CMMDCA(nm, j2, nm % j2);
		nm = (j1 / j) * (nm / k);
		nr = (nr / j) * (j2 / k);
		if(!(c ^ coef)) return 1;
		}
	}
	
if(c ^ 1) {
	coef /= c;
	c = 1;
	}
a = e;

while(1) {
	if(!(e--) || (coef < b2[e]))
		break;
	if(!(coef % b2[e])) {//Nu sunt divizori ai numărului.
		j = 2;
		while(!(coef % div2[e][j])) j += 2;
		if(coef % div2[e][--j]) j--;
		
		c *= div2[e][j];
		j2 = sum2[e][j];
		j = div2[e][j];
		j1 = CMMDCA(j, nr, j % nr);
		k = CMMDCA(nm, j2, nm % j2);
		nm = (j / j1) * (nm / k);
		nr = (nr / j1) * (j2 / k);
		if(!(c ^ coef)) return 1;
		}
	}

while(1) {
	if(!(f-- ^ a) || (coef < b2[f]))
		break;
	if(!(coef % b2[f])) {
		c *= b2[f];
		j = b2[f];
		j2 = b3[f];//j + 1;
		j1 = CMMDCA(j, nr, j % nr);
		k = CMMDCA(nm, j2, nm % j2);
		nm = (j / j1) * (nm / k);
		nr = (nr / j1) * (j2 / k);
		if(!(c ^ coef)) return 1;
		}
	}		

return 0;
}


int DOIMODIFSUS
(gmp_ui *sumInt, gmp_ui *i1, gmp_ui coef, int Y, int n, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui sumdoi, gmp_ui div1[][MAX3], gmp_ui sum1[][MAX3], gmp_ui div2[][MAX3], gmp_ui sum2[][MAX3], gmp_ui *divdoi, int a, gmp_ui k, gmp_ui *b2, gmp_ui *b3, int f, int e, gmp_ui &nr, gmp_ui &nm) {

if(!(coef & 1))	{
	MODIFDOISUS(coef, k = 0, j1 = 2, sumdoi, j = 1, nr, nm, divdoi);//j2 = sumdoi.	
	if(!(coef ^ 1))
		{ return 1;}
	}

return MODIFSUS(sumInt, i1, coef, Y, n, j, j1, j2, div1, sum1, div2, sum2, a = n, k, b2, b3, f, e, 1U, nr, nm);
}


void TREIMODIFJOS(gmp_ui coef, gmp_ui *trei, gmp_ui sumInt3, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui k, gmp_ui &nr, gmp_ui &nm) {//j = 2.
	if(coef % 3) return;
	while(!(coef % trei[j])) j+=2;
	if(coef % trei[--j]) j--;
	j1 = sumInt3;
	j2 = j1 - ((trei[j]) >> 1);
	j = CMMDCI(j1, j2, j1 % j2);
	if(j ^ 1) {j1 /= j; j2 /= j;}
	j = CMMDCA(nr, j1, nr % j1);
	k = CMMDCA(nm, j2, nm % j2);
	nm = (j1 / j) * (nm / k);
	nr = (nr / j) * (j2 / k);
}


void CINCIMODIFJOS(gmp_ui coef, gmp_ui *cinci, gmp_ui sumInt5, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui k, gmp_ui &nr, gmp_ui &nm) {
	if(coef % 5) return;
	while(!(coef % cinci[j])) j+=2;
	if(coef % cinci[--j]) j--;
	j1 = sumInt5;
	j2 = j1 - ((cinci[j]) >> 2);
	j = CMMDCI(j1, j2, j1 % j2);
	if(j ^ 1) {j1 /= j; j2 /= j;}
	j = CMMDCA(nr, j1, nr % j1);
	k = CMMDCA(nm, j2, nm % j2);
	nm = (j1 / j) * (nm / k);
	nr = (nr / j) * (j2 / k);
}


void MODIFJOS(gmp_ui *sumInt, gmp_ui *i1, gmp_ui *i2, gmp_ui *i4, gmp_ui coef, int Y, int n, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui sumdoi, gmp_ui div1[][MAX3], int a, gmp_ui k, gmp_ui &nr, gmp_ui &nm, gmp_ui *trei, gmp_ui *cinci, gmp_ui sumInt3, gmp_ui sumInt5) {//Jos c.

TREIMODIFJOS(coef, trei, sumInt3, 2, j1, j2, k, nr, nm);
CINCIMODIFJOS(coef, cinci, sumInt5, 2, j1, j2, k, nr, nm);

while(1) {
	if(!(n--))
		break;
	if(!(coef % i1[n])) {//Divizori ai numărului.
		j = 2;		
		while(!(coef % div1[n][j])) j+=2;
		if(coef % div1[n][--j]) j--;
		//c *= j;		
		j1 = sumInt[n];		
		j2 = j1 - div1[n][j] / (i4[n]);
		j = CMMDCI(j1, j2, j1 % j2);
		if(j ^ 1) {j1 /= j; j2 /= j;}
		j = CMMDCA(nr, j1, nr % j1);
		k = CMMDCA(nm, j2, nm % j2);
		nm = (j1 / j) * (nm / k);
		nr = (nr / j) * (j2 / k);
		//if(!(c ^ coef)) return 1;
		}
	}

while(1) {
	if(!(Y-- ^ a))
		break;
	if(!(coef % i1[Y])) {
		//c *= i1[Y];
		j1 = i2[Y];//i1[Y] + 1;// * sumInt[Y];
		j2 = i1[Y];		
		j = CMMDCA(j1, nr, j1 % nr);
		k = CMMDCA(nm, j2, nm % j2);
		nm = (j1 / j) * (nm / k);
		nr = (nr / j) * (j2 / k);
		//if(!(c ^ coef)) return 1;
		}
	}
}


void DOIMODIFJOS(gmp_ui *sumInt, gmp_ui *i1, gmp_ui *i2, gmp_ui *i4, gmp_ui coef, int Y, int n, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, int a, gmp_ui sumdoi, gmp_ui div1[][MAX3], gmp_ui *divdoi, gmp_ui &k, gmp_ui &nr, gmp_ui &nm, gmp_ui *trei, gmp_ui *cinci, gmp_ui sumInt3, gmp_ui sumInt5) {
if(!(coef & 1))
	{
	MODIFDOIJOS(coef, j = 0, sumdoi, j1, k = 1, nr, nm, divdoi);
	if(!(coef ^ 1))
		return;
	}

MODIFJOS(sumInt, i1, i2, i4, coef, Y, n, j, j1, j2, sumdoi, div1, a = n, k, nr, nm, trei, cinci, sumInt3, sumInt5);
}


void SMOD(long double A, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div[][MAX3], gmp_ui sum[][MAX3], gmp_ui &j1, gmp_ui &j2, gmp_ui &j3, gmp_ui &k, gmp_ui &nm, gmp_ui &nr, gmp_ui k1, gmp_ui *divDoi, gmp_ui *sumDoi) {//d = 0, e = 2
//Alternativ la LOT, LOTULE.
nr = 2;

while(1) {
	if(fmod(A, divDoi[nr])) break;
	nr += 2;
}

if(fmod(A, divDoi[--nr])) nr--;
nm = divDoi[nr];
nr = sumDoi[nr];
j3 = A / nm;
d = d1;

while(1) {
	if(!d--)
		break;
		
	if(!(j3 % b[d])) {
		e = 2;		
		while(!(j3 % div[d][e])) e += 2;
		if(j3 % div[d][--e]) e--;
		k = div[d][e];
		k1 *= k;
		e = sum[d][e];	
		j1 = CMMDCA(nm, e, nm%e);
		j2 = CMMDCA(nr, k, nr%k);
		nm = (nm / j1) * (k / j2);
		nr = (nr / j2) * (e / j1);
		}
	}
	
if(!(k1 ^ j3)) goto s1;
while(1) {
	if(!(D-- ^ d1))
		break;

	if(!(j3 % b[D])) {
		e = b1[D];//1 + b[D];
		k1 *= e;
		j1 = CMMDCA(nm, e, nm%e);
		j2 = CMMDCA(nr, b[D], nr%b[D]);
		nm = (nm / j1) * (b[D] / j2);
		nr = (nr / j2) * (e / j1);
		if(!(k1 ^ j3)) goto s1;
		}
	}
s1:
if(nm < 11) printf("%.0Lf %.3Lf\n", A, (long double)nr/nm);
}


void PUTERI0(const char *t, int *put) {
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


void UNIFACTOR(const char *Z, const char *PUT, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui div1[][MAX3], gmp_ui sum1[][MAX3], gmp_ui *SUMDOI, gmp_ui *DIVDOI, int sumcap, int inv) {	
	int i, jj = 1, sb, d1, j, k, ll, ind[H], PP, P[60], P1[60];
	mpz_t xe, g, d, unu, trei;
	char t;	
	gmp_ui pisoie = (gmp_ui)(1U-2U);
	FILE *F1 = fopen(Z, "r");
	
	for(i = 0; i < D; i++)
		fscanf(F1, "%llu", &b[i]);
	fclose(F1);
	
	i = 0;	
	mpz_inits(xe, g, d, unu, trei, NULL);
	F1 = fopen(PUT, "a");
	PP = ftell(F1);
	fclose(F1);
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

	printf("RAB %d %d\n", D, H);	 
	d1 = inv? H-1 : 0;

	for(i = 0; i < H; i++) {//H descotfactizat.
		mpz_set_ui(xe, 1);

		for(j = 0; j < ind[i]; j++) {
			mpz_mul_ui(xe, xe, b[i]);
			mpz_mul_ui(g, xe, b[i]);
			mpz_divexact_ui(g, g, b[i]-1);
			k = inv? H-d1-1 : d1;
			div1[k][j] = mpz_get_ui(xe);
			sum1[k][j] = mpz_get_ui(g);
		}

		for(; j < ind[i] + 2; j++) {
			k = inv? H-d1-1 : d1;
			div1[k][j] = (gmp_ui)(1-2);
			sum1[k][j] = (gmp_ui)(1-2);
			}		
		k++;			
		d1 += inv? -1 : +1;
	}

	for(i = 0; i < D; i++) {
		b1[i] = 1 + b[i];
	}	

	printf("%d %d %d\n", D, H, D-H);	
	PUTERI0(PUT, P);
	
	for(i = H; i < D; i++)
		P[i] = 2;

	for(i = 0; i < H; i++)
		b[i] = div1[i][0];

	for(i = 0; i < H; i++) {	
		P1[i] = inv? P[H-i-1] : P[i];
	}

	//for(i = H; i < D; i++)
	//	P1[i] = P[i];

	mpz_ui_pow_ui(trei, 2, 64);
	for(i = 0; i < H; i++) {
		j = 0;
		while(j < P1[i]) j++;
		for(k = j; k >= 1; k--) {
			div1[i][k] = div1[i][k-1];
			sum1[i][k] = sum1[i][k-1];
		}

		ll = P1[i];
		//j = 0;

		for(k = 1+ll; (k < MAX3-2) ; k++) {
			mpz_set_ui(unu, div1[i][k-1]);
			mpz_mul_ui(unu, unu, div1[i][0]);
			mpz_set_ui(d, sum1[i][k-1]);
			mpz_mul_ui(d, d, div1[i][0]);
			mpz_add_ui(d, d, 1);

			if(j && (k < 6+ll) && (mpz_cmp(d, trei) < 0) ) {
				div1[i][k] = mpz_get_ui(unu);
				sum1[i][k] = mpz_get_ui(d);
				++P1[i];
			} else {
				j = 0;
				div1[i][k] = pisoie;
				sum1[i][k] = pisoie;
			}
		}

		div1[i][0] = 1;
		sum1[i][0] = 1;
		div1[i][MAX3-2] = pisoie;
		sum1[i][MAX3-2] = pisoie;
		div1[i][MAX3-1] = pisoie;
		sum1[i][MAX3-1] = pisoie;
	}

	for(i = 0; i < sumcap; i++) {
		DIVDOI[i] = jj << i;
		SUMDOI[i] = 2 * DIVDOI[i] - 1;
	}

	DIVDOI[sumcap] = pisoie;
	SUMDOI[sumcap] = pisoie;
	DIVDOI[sumcap+1] = pisoie;
	SUMDOI[sumcap+1] = pisoie;
}


void VUNIFACTUS(int sus, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *q, gmp_ui *qq, int inv) {
	 mpz_t xe, g, unu;
	 mpz_inits(xe, g, unu, NULL);
	 int sb, d, i = 0, j, k, ind[576], PP, ll, P[D], P1[D], log;
	 FILE *F1, *F2;
	 char t, PUT[90];
	 strcpy(PUT, "/PUTERIM.TXT");
	 //strcpy(PUT, "/PUTERIVM.TXT");
   	 puts(PUT);	 
	 F1 = fopen(PUT, "a");
	 PP = ftell(F1);
	 fclose(F1);
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
	 
	 printf("RAB %d %d %d\n", D, H, D-H);
	
	 for(i = 0; i < D; i++) {
	 	b1[i] = 1 + b[i];
	 }
	 
	for(int ll = 0; ll < 64; ll++) {
		qq[ll] = 1;
		qq[ll] <<= ll;
		q[ll] = (qq[ll] << 1) - 1;
	}
	 
	 d = inv? H-1 : 0;
	 mpz_ui_pow_ui(unu, 2, 64);

	 for(i = 0; i < H; i++) {//H descotfactizat.
		mpz_set_ui(xe, 1);

		for(j = 1; j < MAX2; j++) {
			mpz_mul_ui(xe, xe, b[i]);
			mpz_mul_ui(g, xe, b[i]);
			mpz_divexact_ui(g, g, b[i]-1);
			log = (mpz_cmp(g, unu) < 0);
			
			if(j < 12+ind[i]) {//k = inv? K-d-1 : d;//H-d-1 pentru punerea la sfârșit a div-urilor.
				k = inv? H-d-1 : d;
				if(j == 1) {
					div1[k][0] = sum1[k][0] = 1; 
					}
				if(log) {
					div1[k][j] = mpz_get_ui(xe);
					sum1[k][j] = mpz_get_ui(g);
				} else {
					if(j < MAX2) div1[k][j] = sum1[k][j] = NPS;					
				}
			} else if(j < MAX2) {
				div1[k][j] = sum1[k][j] = NPS;
			}
		}
			k++;
			d += inv? -1 : +1;
	 }
		
	for(i = 0; i < H; i++) {
		for(j = MAX2-1; sum1[i][j] == NPS; j--);
		mem[i] = j;
	}

	F1 = fopen("FACTDIV.TXT", "w");
	F2 = fopen("FACTSUM.TXT", "w");

	for(i = 0; i < H; i++) {
		for(j = 0; j < MAX2; j++) {
			gmp_fprintf(F1, "%llu ", div1[i][j]);
			gmp_fprintf(F2, "%llu ", sum1[i][j]);
		}
		
		fprintf(F1, "MEM e %d.\n", mem[i]);
		fprintf(F2, "MEM e %d.\n", mem[i]);
	}

	fclose(F1);
	fclose(F2);
	mpz_clears(xe, g, unu, NULL);	
}


void VECUNNUM1(gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui *y2, gmp_ui *divInt, long double *sumInt, gmp_ui *divdoi, gmp_ui div1[][MAX3], gmp_ui div[][MAX3], long double &unu, long double &trei, long double &d, long double &d1, long double &g, double &E2, long double &I1, gmp_ui j, gmp_ui j1, gmp_ui E, gmp_ui *A2, int W, int L, int Y, int U, int H, int R, int &f, int &e, int h, int *a3, FILE *f1, FILE *F2) {
	while(1) {
		fscanf(f1, "%Lf", &unu);
		if (feof(f1))
			break;
		f = W;
		LOTVEC(b, y, y1, a3, unu, L, U, Y, H, h);//Valabile pentru MODIFSUMSUS, jos cu SUMCONT.

		for(j = 0; j < H; j++) {
			y2[j] = y1[j] - 1;
			j1 = a3[j];
			memcpy(div1[j], div[j1], sizeof(div[j1]));
		}
		
		ADDIV(unu, d, y, y2, div, H, Y, h, divInt, sumInt, d1, E, divdoi);
		
		while(1) {
			if(!f--)
				break;
			trei = d;
			if(MODIFSUMSUS(trei, j, A2[f], j1, y, y1, d1, E, divInt, sumInt, R, H, Y, b, b1, U, L, div1, div, divdoi) && VALID(trei, g, I1, E2))
				fprintf(F2, "%.0Lf\n", unu * A2[f]);
			}

		if (!(++e % 75000))
			printf("%d\n", e);	
	}
}


void VECUNNUM2(gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui *y2, gmp_ui *divInt, long double *sumInt, gmp_ui *divdoi, gmp_ui div1[][MAX3], gmp_ui div[][MAX3], long double &unu, long double &trei, long double &d, long double &d1, long double &g, double &E2, long double &I1, gmp_ui j, gmp_ui j1, gmp_ui E, gmp_ui *A2, int W, int L, int Y, int U, int H, int R, int &f, int &e, int h, int *a3, FILE *f1, FILE *F2) {
	while(1) {
		fscanf(f1, "%Lf", &unu);
		if (feof(f1))
			break;
		f = W;
		LOTVEC(b, y, y1, a3, unu, L, U, Y, H, h);

		for(j = 0; j < H; j++) {
			y2[j] = y1[j] - 1;
			j1 = a3[j];
			memcpy(div1[j], div[j1], sizeof(div[j1]));
		}
		
		ADDIV(unu, d, y, y2, div, H, Y, h, divInt, sumInt, d1, E, divdoi);
		
		while(1) {
			if(!fmodl(unu, A2[--f])) {
				trei = d;
				MODIFSUM(trei, A2[f], j1, y, y1, d1, E, divInt, sumInt, H, Y, divdoi, div1);
				if(VALID(trei, g, I1, E2))
					fprintf(F2, "%.0Lf\n", unu/A2[f]);
				}
			if(!f)
				break;
			}

		if (!(++e % 75000))
			printf("%d\n", e);	
	}
}


void POLOZKI(int *g, gmp_ui div1[][42], gmp_ui prag, const int N4, gmp_ui *divdoi) {
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
		l *= g[i];
	}

	mpz_set_ui(e, l);
	mpz_set_ui(f, l + l / (g[i] - 1));

	for(j = k; (j < 42); j++) {
		if(mpz_cmp(f, d) > 0) {
			break;
		}

		div1[i][j] = mpz_get_ui(e);		
		mpz_mul_ui(e, e, g[i]);
		mpz_mul_ui(f, f, g[i]);
		mpz_add_ui(f, f, 1);
	}
	
	k = j-1;

	for(; j < 42; j++) {
		div1[i][j] = prag;
		}
	}

mpz_clears(d, e, f, NULL);

l = 1;
for(int i = 0; i < 60; i++) {
	divdoi[i] = l;
	l <<= 1;
	}
	
for(int i = 60; i < 62; i++)
	divdoi[i] = prag;
}


void REF(gmp_ui *a, gmp_ui &e) {
	QS2(a, 0, e);
	int e1 = 1, i;
	for(i = 1; i < e; i++)
	if(a[i] ^ a[i-1])
		a[e1++] = a[i];

	printf("Vechiul e era %llu și cel nou este %llu.\n", e, e1);
	e = e1;
}


void CITLIMS(FILE *f1, gmp_ui *a, int a1, int b1, gmp_ui &e, const char *t, gmp_ui L, gmp_ui PP, long M, long N, gmp_ui *divdoi) {
f1 = fopen(t, "r");
char t1, *t2, Y[60];

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
		a[e++] = PRELNUMM(strtold(Y, &t2), divdoi, 0);
		}
	}

REF(a, e);
printf("%ld\n", ftell(f1));	
fclose(f1);
}


void CITLIMS1(FILE *f1, gmp_ui *a, int a1, gmp_ui &e, const char *t, gmp_ui L, gmp_ui PP, long M, long N, gmp_ui *divdoi) {
f1 = fopen(t, "r");
char t1, *t2, Y[60];
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
		a[e++] = PRELNUMM(strtold(Y, &t2), divdoi, 0);
		}
		
	if( (PP <= ftell(f1)) || (e == N))
		break;
	}

REF(a, e);
printf("%ld\n", ftell(f1));
fclose(f1);
}


//TOLIL SPECIAL:
void TOLILE(int J, int b1, gmp_ui *a, int B, int G, int &W, gmp_ui *b, int *EXP, int &D, int &E, int &L, const char *Z, int a1) {
	int i, j, m, n, H;
	FILE *F1, *F2, *f1;
	gmp_ui u, I[U1], I1[U1], X = 0, L3[1800], L4[1800];//Alternativ la K3, K4 pentru puteri sub 2^64 de factori primi (<=CF160.TXT).
	char t[75], v[75], Y[1920], t1;
	long PP1, PP2;
	
	H = HPH(b1);
	sprintf(t, "PM.TXT");	
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
		fclose(F1);
		fclose(F2);
		}
	
	F2 = fopen(t, "r");
	if(n) {
		fseek(F2, 0L, SEEK_END);
		PP1 = ftell(F2);
		rewind(F2);
		}

	while(1)  {
		fscanf(F2, "%llu", &b[D++]);
		if(ftell(F2) == PP1)
			break;
		}

	fclose(F2);
	printf("E = %d.\n", E);
	for(i = 0; i < D; i++)
		bb[i] = b[i];

	QS2(bb, 0, D);
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
	fclose(F1);

QS2(I, 0, m);
printf("%d %d\n", m, n);
i = 0;
printf("%d este numărul cu care încep factorii cei mici.\n", D);
PP2 = D;

gmp_ui gmpplus[5000];
for( i = 0; i < m; i++) gmpplus[i] = 0;

#pragma omp parallel for private(j) schedule(dynamic, 1)
for(i = 0; i < m; i++) {
//while(1) {
	j = B;//printf("%d %d\n", i, m);
	while(1) {
		if(!(a[j] % I[i])) {
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

//Dacă nu am folosit coeficienți de legătură peste 2^64 într-o zonă, nu apar factori primi mpz_t noi acolo.
s2:

if(J)	{
	W = VMAXPUT(B, D, b, EXP, a, L3, L4, b1, v, H, PP1, Y, 0, gmpplus/*, mpzplus*/);//PP1
	VTOL2(W, D-W, B, b, a, PP1, Y);//PP1
	F1 = fopen(t, "w");
	for(i = 0; i < D; i++)
		fprintf(F1, "%llu\n", b[i]);
	fclose(F1);
	
	F1 = fopen("/CFPAR.TXT", "a");
	fprintf(F1, "%s: %d %d %d %d.\n", t, W, D, E, D+E);
	fclose(F1);
	printf("%d %d %d %d\n", W, D, E, D+E);
	char CP[100];
	sprintf(CP, "cp PM.TXT /PM.TXT && cp PUTERIM.TXT /PUTERIM.TXT && cp VPP.TXT /VPP.TXT");
	system(CP);
	system("g++ -m64 FLEGETONTE.cc -lgmp -fopenmp -o FLEGETONTE");
	}
}


void VPUTMAX(const char *v, gmp_ui *MX, int *EXP, int H) {
FILE *F = fopen(v, "r");
char t;
int i = 0, j;


while(1) {
	fscanf(F, "%c", &t);

	if(t == ':') {
		fscanf(F, "%llu", &MX[i]);
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


int VMAXPUT(int A, int &D, gmp_ui *b, int *EXP, gmp_ui *a, gmp_ui *L3, gmp_ui *L4, int b1, char *v, int H, long PP1, char *Y, gmp_ui u, gmp_ui *gmpplus/*, mpz_t *mpzplus*/) {
gmp_ui i1[U1], j[U1], m, MX[1500];

int e = 0, i = 0, g, k;
FILE *F1;
sprintf(v, "/PUTERIM.TXT");
VPUTMAX(v, MX, EXP, H);//Se iau informaţii din fişierul de PUTERI ce corespunde cu b1.
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
	


for(int i = 0; i < H; i++) {
	m = MX[i];
for(int j = EXP[i]; j < EXP[i] + 2; j++) {
	Z2[i][j-EXP[i]] = m;
	m *= b[e];
	}
	
	Z2[i][[2] = 2087;
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

#pragma omp parallel for schedule(dynamic, 1) private(m, g) shared(e)
for(e = 0; e < H; e++) {
//	while(1) {
		g = A;
		m = MX[e];
		//printf("%d %d\n", e, H);
		while(1) {
			if(!(a[g] %m)) {
				while(1) {
					m *= i1[e];					
					if((a[g] % m))
						break;
					EXP[e]++;
					}			
				m /= i1[e];
				}
				
			if(! (g--) ) {
				MX[e] = m;
				break;
				}
			}
			
	//	if(! (++e ^ H) )
	//		break;
		}
i = H;
k = 0;
for(g = H; (g < D); g++) {
	if(b[g] < 100000000U)
		j[k++] = b[g];
}
		
printf("DE COMPARAT: %d cu %d. Doar al doilea număr de numere prime va fi parcurs, nu primul.\n\nCine mai vine peste H: ", D-H, k);
int P = k;
gmp_ui gmpplus1[5000], gmpplus2[5000];
for(k = 0; k < 5000; k++) {gmpplus[k] = 0; gmpplus1[k] = 0; gmpplus2[k] = 0;}

#pragma omp parallel for schedule(dynamic, 1) private(m, g) shared(k)
for(k = P-1; k >= 0; k--) {
//while(1) {//Filtrare; de depistat noile puteri multiple care s-ar adăuga la H.
//	if(!k--)
	//	break;
	//printf("%d\n", k);
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
		MX[i] = gmpplus[k];
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


sprintf(v, "VPP.TXT");
QS2(i1, 0, H);
F1 = fopen(v, "w");

for(e = 0; e < H; e++) {
	fprintf(F1, "%llu\n", i1[e]);
	L4[e] = MX[e];
	L3[e] = L4[e];
	}

fclose(F1);
QS2(L4, 0, e);
VTOL0(L3, L4, b, EXP, H, F1, b1, v);
return H;
}


void VTOL0(gmp_ui *L3, gmp_ui *L4, gmp_ui *b, int *EXP, int H, FILE *F1, int b1, char *v) {
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
sprintf(v, "PUTERIM.TXT");
F1 = fopen(v, "w");
for(i = 0; i < H; i++){
	b[i] = d[i];
	fprintf(F1, "%llu la puterea %llu este: %llu.\n", b[i], e[i], L4[H-i-1]);
	}
fclose(F1);
}


void VTOL2(int e, int f, int &I, gmp_ui *b, gmp_ui *a, long PP1, char *Y) {
gmp_ui A[10000], B[10000], c[10000], d[10000];
int i, j, k, l, m, I1;
FILE *F1;
i = 0;
k = 0;
m = e;
//Dacă e este 0, se regrupează factorii primi prezenți la puteri peste 1, dar în funcție de mărimea descrescătoare a puterilor lor (de pildă 3 la 80, 7 la 45, 5 la 40...)
//Dacă e nu mai este 0, cealaltă regrupare, valabilă din luna decembrie 2010.
//Puterile sunt în vectorul c1 (el e c), se calculează și se sortează: trebuie un vector nou, mpz_t, de dimensiune >= HTOT.
#pragma omp parallel for shared(i) private(m, j, k) schedule(dynamic, 1)
for(i = 0; i < f; i++) {
//while(1) {
	j = 0;
	k = I;
	m = i+e;
//	printf("%d %d\n", i, f);
	while(1) {//Se ia fiecare factor prim şi se trece prin vectorul de numere, ca să se vadă de câte ori apare factorul acolo.		
		if(!(a[k] % b[m]))
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
	//printf("%llu ", A[i]);
	c[i] = B[i];
	++i;
	}
putchar('\n');
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



int CBD(long double *a, long double &b, long I, long R) {
int m;
--R;

while(1) 	{
	if(I > R)
		break;
	m = (I+R) >> 1;
	if(a[m] == b)
		return 0;

	a[m] < b? I = m + 1 : R = m - 1;
	}

return 1;
}


void HSD(long double *a, long double t, unsigned long D) {
unsigned long n = D, par = (D>>1), ind, cop;

while (1) {
	if (par > 0) {
	       	t = a[--par];
	       	}
	else 	{
	       	 if (!--n) {
		      	return;
		    	}

		t = a[n];
		a[n] = a[0];
	       	}        

        ind = par;
        cop = (ind<<1) + 1;

        while (cop < n) {
		if ( (cop + 1 < n) && (a[cop+1] > a[cop]) ) {
		    	cop++;
			}
        
		if (a[cop] > t) {		    
		        a[ind] = a[cop];
		        ind = cop;
		        cop = (ind<<1) + 1;
		    	}
		else {
		        break;
			}
        }

        a[ind] = t;
    }
}


void MICVERIFSUM(gmp_ui A, gmp_ui B, int i, gmp_ui *div, gmp_ui *sum) {
	while(!(A % div[i])) i += 2;
	if((A % div[--i])) i--;
	B *= sum[i];
}


void MICVERIFSUM2(gmp_ui A, mpz_t B, int i, gmp_ui *div, gmp_ui *sum) {
	while(!(A % div[i])) i += 2;
	if((A % div[--i])) i--;
	mpz_mul_ui(B, B, sum[i]);
}

//3, 7, 31, 127, 8191, 131071, 524287, 2147483647, 2305843009213693951.
void MICSUM(gmp_ui A, gmp_ui B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui e) {//e = sumdoiul, d = exponentul puterii de doi. Sumadiv pentru numerele sub miliardul de miliarde.	
	B = 1;//SUMDOI[e];
	d = H;//125
	
	while(1) {
		if(!d--)
			break;
		if(!(A % b[d])) {
			MICVERIFSUM(A, B, 2, div1[d], sum1[d]);
			}
		}

	if(B > A) {
		B *= e;
		return;
	}

	while(1) {
		if(!(D-- ^ H))
			break;
		if(!(A % b[D]))	{
			B *= b1[D];
			
			if(B > A) {
				B *= e;
				return;
				}
			}
		}
}



//La numerele mai mari, se poate înmulți mepezeteaua B cu dublul particulei n1, minus 1. A e p, A0 e puterea de 2.
void MICSUM2(gmp_ui A, gmp_ui A0, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *DIVDOI, gmp_ui *SUMDOI, gmp_ui e) {//A e imparul, A0 puterea de doi. Sumadiv pentru numerele peste miliardul de miliarde.
	mpz_set_ui(B, 1);
	
	d = H;//125
	while(1) {
		if(!d--)
			break;
		if(!(A % b[d])) {
			MICVERIFSUM2(A, B, 2, div1[d], sum1[d]);
			}
		}

	if(!(mpz_cmp_ui(B, A) ^ 1)) {
		mpz_mul_ui(B, B, (A0<<1) - 1);
		return;
		}

	while(1) {
		if(!(D-- ^ H))
			break;
		if(!(A % b[D]))	{
			mpz_mul_ui(B, B, b1[D]);
			if(!(mpz_cmp_ui(B, A) ^1)) {
				mpz_mul_ui(B, B, (A0<<1) - 1);
				return;
				}
			}
		}
}


void MICVALIDN(gmp_ui A, gmp_ui &f, gmp_ui B, gmp_ui &trei) {//A e numărul, b e suma, numere minore, CMMDC între număr și sumă.
f = CMMDC(B, A, B%A);
trei = B/f;//13
f = A/f;//5
//return (f && f < PRAG);
}


int MICVALIDN1(gmp_ui A, gmp_ui &f, gmp_ui B, gmp_ui &trei) {
f = CMMDC(B, A, B%A);
trei = B/f;//13
f = A/f;//5
return (f && f < PRAG);
}


void MICVALIDN2(mpz_t u, gmp_ui &f, mpz_t B, gmp_ui &trei, mpz_t d, mpz_t d1) {//u e numărul, b e suma, numere majore, CMMDC între număr și sumă.
mpz_gcd(d, u, B);
mpz_divexact(d1, B, d);
mpz_divexact(d, u, d);
f = mpz_get_ui(d);//5
trei = mpz_get_ui(d1);//13
//return (f && f < PRAG);
}


int MICVALID(gmp_ui A, gmp_ui B) {//Fondul 1 pentru numerele minore.
return 11 * CMMDC(B, A, B%A) > A;
}


int MICVALID4(gmp_ui A, gmp_ui B) {//Fondul 2 pentru numerele minore.
return PRAG * CMMDC(B, A, B%A) > A;
}


int MICVALID40(gmp_ui A, mpz_t f, gmp_ui B) {
mpz_set_ui(f, CMMDC(B, A, B%A));
mpz_mul_ui(f, f, PRAG);
return mpz_cmp_ui(f, A);
}


//La cele majore nu avem încotro, va trebui mers cu VALID() și VALID4() de sus.

void MICSINT(gmp_ui &j, gmp_ui NUM, gmp_ui *div, gmp_ui *sum, int z1) {
	while(!(NUM % div[z1])) z1 += 2;
	if((NUM % div[--z1])) z1--;
	j = sum[z1];
}


void MICMODPINTSUS(gmp_ui unu, gmp_ui p, gmp_ui coef, gmp_ui j, gmp_ui k, gmp_ui k1, gmp_ui *div, gmp_ui *sum, char *Q, FILE *F2) {
	while(!(p % div[j])) j += 2;
	j = (p % div[--j])? sum[j] : sum[++j];
	
	if(CMMDC2(j-1, j-1, k, (j-1)%k) * CMMDC2(k1, k1, j, k1%j) < PRAG) {
		fprintf(F2, "%.0Lf\n", (long double)unu * coef);
	}
}


void MICMODPINTJOS(gmp_ui unu, gmp_ui p, gmp_ui coef, gmp_ui j, gmp_ui k, gmp_ui k1, gmp_ui *div, gmp_ui *sum, char *Q, FILE *F2) {//k = numărătorul, k1 numitorul abundențial. j = 3.
	while(!(p % div[j])) j += 2;
	j = (!(p % div[--j])? sum[j] : sum[--j]);
	
	if(CMMDC2(j, j, k, j%k) * CMMDC2(k1, k1, j-1, k1%(j-1)) < PRAG) {
		fprintf(F2, "%llu\n", unu / coef);
	}
}


void VMODPINTSUS(mpz_t unu, gmp_ui p, gmp_ui coef, mpz_t doi, mpz_t trei, gmp_ui j, gmp_ui k, gmp_ui k1, gmp_ui *div, gmp_ui *sum, char *Q, FILE *F2) {
	while(!(p % div[j])) j += 2;
	j = (p % div[--j])? sum[j] : sum[++j];
	
	if(CMMDC2(j-1, j-1, k, (j-1)%k) * CMMDC2(k1, k1, j, k1%j) < PRAG) {
		mpz_mul_ui(doi, unu, coef);
		SCRIE(doi, Q, F2);
	}
}


void VMODPINTJOS(long double a, gmp_ui p, gmp_ui coef, gmp_ui j, gmp_ui k, gmp_ui k1, gmp_ui *div, gmp_ui *sum, char *Q, FILE *F2) {//k = numărătorul, k1 numitorul abundențial. j = 3.
	while(!(p % div[j])) j += 2;
	j = (!(p % div[--j])? sum[j] : sum[--j]);
	
	if(CMMDC2(j, j, k, j%k) * CMMDC2(k1, k1, j-1, k1%(j-1)) < PRAG) {
		fprintf(F2, "%.0Lf\n", a / coef);
	}
}


void MICGEN(int L, int W, gmp_ui *b, int &D, const char *Z) {
FILE *f2 = fopen(Z, "r");
int i;

for(i = 0; i < W; i++)
	fscanf(f2, "%llu", &b[i]);
	
fclose(f2);
D = L;
}


void MICGENERARE(int b1, gmp_ui *b, int &i, int &j) {
	MICGEN(DP, NP, b, i, "/PM.TXT");//CFM.TXT cu DM și NM.
	INV2(0, 0, b, j = HP, i);
}


int ui_scan1(gmp_ui a, gmp_ui *divdoi, int b) {//b = 0;
	while(!(a % divdoi[++b]));
	return --b;
}


int ld_scan1(long double a, gmp_ui *divdoi, int b) {
	while(!fmodl(a, divdoi[++b]));
	return --b;
}


gmp_ui PRELNUM(char *Y, char *t, long double a, gmp_ui *divDoi, int e) {//e = 1.
	a = strtold(Y, &t);
	while(!fmodl(a, divDoi[e++]));
	return a / divDoi[--e];
}


gmp_ui PRELNUMM(long double a, gmp_ui *divdoi, int e) {
	while(fmodl(a, divdoi[e++]));
	return a / divdoi[--e];
}


int NUMPREL(char *Y, long double &W, char *t, gmp_ui &n2, gmp_ui *divDoi, int a) {//La căutare. Numere de minim 19 cifre. Particulele n1 și n2 vor fi folosite la sumadivare, dar W va păstra numărul de bază pentru mai departe.
W = strtold(Y, &t);
while(!fmodl(W, divDoi[++a]));
n2 = W / divDoi[--a];
return a;
}


int NUMPREL0(char *Y, char *t, mpz_t u, gmp_ui &n2, gmp_ui *divDoi, int a) {
mpz_set_str(u, Y, 10);
n2 = strtold(Y, &t) / divDoi[a = mpz_scan1(u, 0)];
return a;
}


void VSCRIE(gmp_ui a, char *Y, FILE *f2) {
sprintf(Y, "%llu\n", a);
fputs(Y, f2);
}


void VVERIFSUM(gmp_ui A, gmp_ui &B, int i, gmp_ui *div1, gmp_ui *sum1) {
	while(!(A % div1[i])) i += 2;
	B *= !(A % div1[--i])? sum1[i] : sum1[--i];
}


void VVERIFSUM1(gmp_ui A, mpz_t B, int i, gmp_ui *div1, gmp_ui *sum1) {
	while(!(A % div1[i])) i += 2;
	mpz_mul_ui(B, B, (!(A % div1[--i])? sum1[i] : sum1[--i]));	
}


void VSMV(gmp_ui p, gmp_ui &B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui e) {//e = qq[g]. Maxim 18 cifre, nota bene.
B = 1;
d = H;

while(1) {
	if(!d--)
		break;
	if(!(p % b[d])) {
		VVERIFSUM(p, B, 2, div1[d], sum1[d]);
		}
	}

if(B > p) {
	B *= e;
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(!(p % b[D]))	{
		B *= b1[D];
		if(B > p) {
			B *= e;
			return;
			}
		}
	}
}


void VSME(gmp_ui p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui e) {//e = sumdoi[mpz_scan1(unu, 0)]. p (fără &) e A / divdoi de indexul ăla.
mpz_set_ui(B, 1);
d = H;
	
while(1) {
	if(!d--)
		break;
	if(!(p % b[d])) {
		VVERIFSUM1(p, B, 2, div1[d], sum1[d]);
		}
	}

if(!(mpz_cmp_ui(B, p) ^ 1)) {
	mpz_mul_ui(B, B, e);
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(!(p % b[D]))	{
		mpz_mul_ui(B, B, b1[D]);
		if(!(mpz_cmp_ui(B, p) ^ 1)) {
			mpz_mul_ui(B, B, e);
			return;
			}
		}
	}
}


void VSUMINT(gmp_ui p, gmp_ui NUM, gmp_ui SUM, gmp_ui coef, gmp_ui j, gmp_ui d, gmp_ui doi, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2) {
	SUM = d;
	while(!(p % div1[j])) j += 2;
	SUM /= !(p % div1[--j])? sum1[j] : sum1[--j];
	SUM *= sum1[++j];
	doi = NUM * coef;
	if(MICVALID4(doi, SUM) == 1)
		fprintf(F2, "%llu\n", doi);
}


void VSUMINTJOS(gmp_ui p, gmp_ui NUM, gmp_ui SUM, gmp_ui coef, gmp_ui j, gmp_ui d, gmp_ui doi, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2) {
	SUM = d;
	while(!(p % div1[j])) j += 2;
	SUM /= !(p % div1[--j])? sum1[j] : sum1[--j];
	SUM *= sum1[--j];
	doi = NUM / coef;	
	if(MICVALID4(doi, SUM) == 1)
		fprintf(F2, "%llu\n", doi);
}


void VSUMINT1(gmp_ui p, mpz_t NUM, mpz_t SUM, gmp_ui coef, gmp_ui j, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2) {
	mpz_set(SUM, d);
	while(!(p % div1[j])) j += 2;
	mpz_divexact_ui(SUM, SUM, !(p % div1[--j])? sum1[j] : sum1[--j]);
	mpz_mul_ui(SUM, SUM, sum1[++j]);
	mpz_mul_ui(doi, NUM, coef);
	if(VALID4(doi, d1, SUM) == 1) {
		SCRIE(doi, Q, F2);
	}
}


void VSUMINTJOS1(gmp_ui p, mpz_t NUM, mpz_t SUM, gmp_ui coef, gmp_ui j, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2) {
	mpz_set(SUM, d);
	while(!(p % div1[j])) j += 2;
	mpz_divexact_ui(SUM, SUM, !(p % div1[--j])? sum1[j] : sum1[--j]);
	mpz_mul_ui(SUM, SUM, sum1[--j]);
	mpz_divexact_ui(doi, NUM, coef);
	if(VALID4(doi, d1, SUM) == 1)
		SCRIE(doi, Q, F2);
}


void VSMOD(gmp_ui p, gmp_ui doi, gmp_ui *b, gmp_ui *b1, gmp_ui e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &j1, gmp_ui &j2, gmp_ui &k, gmp_ui &nm, gmp_ui &nr) {
d = d1;
doi = 1;

while(1) {
	if(!d--)
		break;	
	if(!(p % b[d]))	{
		for(e = 2; !(p % div1[d][e]); e += 2);
		k = !(p % div1[d][--e])? div1[d][e] : div1[d][--e];
		e = sum1[d][e];
		doi *= k;
		j1 = CMMDCA(nm, e, nm%e);
		j2 = CMMDCA(nr, k, nr%k);
		nm = (nm / j1) * (k / j2);
		nr = (nr / j2) * (e / j1);
		}
	}

if(doi == p)
	return;

while(1) {
	if(!(D-- ^ d1))
		break;
	if(!(p % b[D]))	{	
		e = b1[D];
		doi *= b[D];
		j1 = CMMDCA(nm, e, nm%e);
		j2 = CMMDCA(nr, b[D], nr%b[D]);
		nm = (nm / j1) * (b[D] / j2);
		nr = (nr / j2) * (e / j1);		
		if(doi == p)
			return;
		}
	}
}


void HSS2(char A[][DIMM], char *t, unsigned long C, unsigned long D) {//C poate fi sau nu 0.

unsigned long n = D, par = C + ((D-C)>>1), ind, cop;

while (1) {
	if (par ^ C) {
	       	strcpy(t, A[--par]);
	       	}
	else 	{
	       	 if (!(--n ^ C)) {
		      	return;
		    	}
			
	       	strcpy(t, A[n]);
		strcpy(A[n], A[C]);
	       	}

        ind = par;
        cop = C + ((ind-C)<<1) + 1;

        while (cop < n)	{
		if ( (cop + 1 < n) && (strcmp(A[cop + 1], A[cop]) > 0) ) {
		    	cop++;
			}

		if (strcmp(A[cop], t) > 0) {
		        strcpy(A[ind], A[cop]);
		        ind = cop;
		        cop = C + ((ind-C)<<1) + 1;
		    	}
		else	{
		        break;
			}
        }

        strcpy(A[ind], t);
    }
}


#endif
