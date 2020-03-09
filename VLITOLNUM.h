#ifndef _VLITOLNUM_H
#define _VLITOLNUM_H

#include "/GMP64.h"
#include "/VLITOLIL.h"


void ADUNMDIV
(int256 A, int256 SUM, gmp_ui *sumInt, gmp_ui *y, gmp_ui &t, int i, int256 sumDoi, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *b, gmp_ui *b1, int H, int &n, int D, int &Y) {
mpz_set_ui(SUM, 0);
mpz_setbit(SUM, ++i);
mpz_sub_ui(SUM, SUM, 1);
mpz_set(sumDoi, SUM);
i = H;

while(1) {
	if(!i--)
		break;
	
	if(!(A % b[i])) {
		y[Y] = b[i];
		t = 2;
		while(!(A % div1[i][t])) t += 2;
		if((A % div1[i][--t])) t--;
		sumInt[Y] = sum1[i][t];
		SUM *= sumInt[Y++];
		}
	}
n = Y;

if(SUM > A)
	return;	
while(1) {
	if (!(D-- ^ H))
		break;
	if(!(A % b[D])) {
		y[Y++] = b[D];
		SUM *= b1[D];
		if(SUM > A)
			return;
		}
	}
}


void ADUNDIV
(int256 A, int256 SUM, gmp_ui *sumInt, gmp_ui *y, gmp_ui &t, int i, int256 sumDoi, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *b, gmp_ui *b1, int256 *C, int256 *C1, int H, int &n, int D, int &Y, int E) {

mpz_set_ui(SUM, 0);
mpz_setbit(SUM, ++i);
mpz_sub_ui(SUM, SUM, 1);
mpz_set(sumDoi, SUM);
i = H;

while(1) {
	if(!i--)
		break;
	if(!(A % b[i])) {
		y[Y] = b[i];
		t = 2;
		while(!(A % div1[i][t])) t += 2;
		if((A % div1[i][--t])) t--;
		sumInt[Y] = sum1[i][t];
		SUM *= sumInt[Y++];
		}
	}
n = Y;
	
while(1) {
	if (!(D-- ^ H))
		break;
		
	if(!(A % b[D])) {
		y[Y++] = b[D];
		SUM *= b1[D];
		if(SUM > A)
			return;
		}
	}

while(1) {
	if (!E--)
		break;
	if(!(A % C[E])) {
		SUM *= C1[E];
		if(SUM > A)
			return;
		}
	}
}

/*
void ADUNDIVM(
int256 A, int256 SUM, gmp_ui *sumInt, int256 *k, gmp_ui *y, gmp_ui &t, int i, int256 sumDoi, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *b, gmp_ui *b1, int256 *C, int256 *C1, int H, int &h, int D, int &Y, int E, int K, int &s, int256 *sumMpz, int256 e) {

mpz_set_ui(SUM, 0);
mpz_setbit(SUM, ++i);
mpz_sub_ui(SUM, SUM, 1);
mpz_set(sumDoi, SUM);
i = H;

while(1) {
	if (!(i-- ^ K) )
		break;
	t = 1;
	while(mpz_divisible_ui_p(A, div1[i][t])) t += 2;
	if(t ^ 1) {
		if(!mpz_divisible_ui_p(A, div1[i][--t])) t--;
		sumInt[Y] = sum1[i][t];
		mpz_mul_ui(SUM, SUM, sumInt[Y++]);
		}
	}

while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(A, b[K])) {
		t = 2;
		while(mpz_divisible_p(A, div[i][t])) t += 2;
		if(!mpz_divisible_p(A, div[i][--t])) t--;
		mpz_set(sumMpz[s], sum[i][t]);
		mpz_mul(SUM, SUM, sumMpz[s++]);		
		}
	}
h = Y;
	
while(1) {
	if (!(D-- ^ H))
		break;
		if(mpz_divisible_ui_p(A, b[D]))	{
			y[Y++] = b[D];
			mpz_mul_ui(SUM, SUM, b1[D]);
					return;
			}
	}
t = 0;
while(1) {
	if (!E--)
		break;
	if(mpz_divisible_p(A, C[E])) {
		mpz_mul(SUM, C1[E], SUM);
		mpz_set(k[t++], C[E]);
		if(mpz_cmp(SUM, A) == 1)
			return;
		}
	}
}
*/

void ADUNDIVMP(
int256 A, int256 SUM, gmp_ui *sumInt, gmp_ui *y, int i, gmp_ui &sumDoi, int *putImpl, int &j, gmp_ui *b, int d1, int D, int &Y, int t1, gmp_ui *b2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2]) {
mpz_set_ui(SUM, 0);
mpz_setbit(SUM, ++t1);
mpz_sub_ui(SUM, SUM, 1);
sumDoi = (SUM);
i = d1;//H

while(1) {	
	if(!i--)
		break;
	if(mpz_divisible_ui_p(A, b[i])) {
		y[Y] = b[i];
		j = 2;
		while(!(A % div1[i][j])) j += 2;
		if((A % div1[i][--j])) j--;
		sumInt[Y] = div1[i][j];
		SUM *= sumInt[Y];
		putImpl[Y++] = ++j;
		}
	}
	
while(1) {
	if (!(D-- ^ d1))
		break;
		
	if(!(A % b[D]))	{
		y[Y] = b[D];
		sumInt[Y] = b2[D];
		SUM *= sumInt[Y];
		putImpl[Y++] = 1;
		if(SUM > A)
			return;
		}
	}
}


void ADUNDIVP(
int256 A, int256 SUM, gmp_ui *sumInt, gmp_ui *y, int i, int256 sumDoi, int *putImpl, int &j, gmp_ui *b, int d1, int D, int &Y, int t1, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2]) {
mpz_set_ui(SUM, 0);
mpz_setbit(SUM, ++t1);
mpz_sub_ui(SUM, SUM, 1);
sumDoi = SUM;

if( (t1 == 89) || (t1 == 107) || (t1 == 127)) {	
	SUM <<= t1;
	}

i = d1;//H

while(1) {
	if(!i--)
		break;
	
	if(!(A % b[i]))	{
		y[Y] = b[i];		
		j = 2;		
		while(!(A % div1[i][j])) j += 2;
		if((A % div1[i][--j])) j--;
		sumInt[Y] = div1[i][j];
		SUM *= sumInt[Y];
		putImpl[Y++] = ++j;
		}
	}
	
while(1) {
	if (!(D-- ^ d1))
		break;
		
	if(!(A % b[D]))	{
		y[Y] = b[D];
		sumInt[Y] = b1[D];
		SUM *= sumInt[Y];
		putImpl[Y++] = 1;
		if(SUM > A)
			return;
		}
	}
}

/*
void ADUNDIVPM(
int256 A, int256 SUM, gmp_ui *sumInt, int256 *sumMpz, int256 *z, gmp_ui *y, int i, int256 sumDoi, int *putImpl, int &j, gmp_ui *b, gmp_ui *b1, int256 *C, int256 *C1, int d1, int D, int &Y, int E, int &s, int256 *sumIntMpz, int K1, int &u, int *A2, gmp_ui *b0, int K, int D0, int &d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1]) {//K1 e K.

mpz_set_ui(SUM, 0);
mpz_setbit(SUM, ++i);
mpz_sub_ui(SUM, SUM, 1);
mpz_set(sumDoi, SUM);
i = d1;

while(1)	{
		if(!K1--)
			break;
		if(!mpz_divisible_ui_p(A, b[--i]))
			continue;
		j = 2;
		while(mpz_divisible_p(A, div[K1][j])) j += 2;//Începe puternumizarea.
		if(!mpz_divisible_p(A, div[K1][--j])) j--;
		y[Y] = b[i];
		mpz_set(sumIntMpz[s++], sum[K1][j]);
		mpz_mul(SUM, SUM, sum[K1][j]);
		sumInt[Y] = 0;
		A2[Y] = GAS3(b0, b[i], K, 0);
		putImpl[Y++] = j;	
		}
while(1) {
	if(!i--)
		break;
	
	if(mpz_divisible_ui_p(A, b[i]))	{
		y[Y] = b[i];
		j = 2;
		while(mpz_divisible_ui_p(A, div1[i][j])) j += 2;
		if(!mpz_divisible_ui_p(A, div1[i][--j])) j--;
		
		sumInt[Y] = sum1[i][j];
		mpz_mul_ui(SUM, SUM, sumInt[Y]);
		A2[Y] = GAS3(b0, b[i], d1, K);
		putImpl[Y++] = j;
		}
	}
d = Y;
while(1) {
	if (!(D-- ^ d1))
		break;
		
	if(mpz_divisible_ui_p(A, b[D]))	{
		y[Y] = b[D];
		sumInt[Y] = b1[D];
		mpz_mul_ui(SUM, SUM, sumInt[Y]);
		A2[Y] = GAS3(b0, b[D], D0, d1);
		putImpl[Y++] = 1;
		if(mpz_cmp(SUM, A) == 1)
			return;
		}
	}

while(1){
	if (!E--)
		break;
	if(mpz_divisible_p(A, C[E])) {
		mpz_set(z[u], C[E]);
		mpz_set(sumMpz[u++], C1[E]);
		mpz_mul(SUM, C1[E], SUM);		
		if(mpz_cmp(SUM, A) == 1)
			return;
		}
	}
}
*/

void DOISUS(gmp_ui &coef, int256 SUM, int256 sumDoi, gmp_ui a, gmp_ui j, gmp_ui *divdoi) {//a = 1, j = 1
while(!(coef % (divdoi[a]))) a++;
coef >>= --a;
SUM /= sumDoi;
SUM *= (sumDoi<<a + (j<<a) - 1);
}


void DOIJOS(gmp_ui &coef, int256 SUM, int256 sumDoi, gmp_ui j, gmp_ui *divdoi) {//j = 1
while(!(coef % (divdoi[j]))) j++;
coef >>= --j;
SUM /= sumDoi;
SUM *= (sumDoi >> j);
}


gmp_ui MODSUMSUS
(int256 unu, gmp_ui *y, int Y, int256 SUM2, gmp_ui *sumInt, gmp_ui coef, gmp_ui &a, gmp_ui &b, int n, int256 sumDoi, int256 divDoi, gmp_ui *b1, gmp_ui *b2, int U, int H, int I, gmp_ui *divdoi, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui divnum2[][MAX2], gmp_ui sumnum2[][MAX2]) {

while(1) {
	if(!(Y-- ^ n))
		break;
	if(!(coef % y[Y]))
		return 0;
	}
//gmp_printf("ALPARO MORENTIS %llu %Zd\n", coef, SUM2);
if(!(coef & 1)) {
	DOISUS(coef, SUM2, sumDoi, divDoi, a = 1, b = 1, divdoi);
	if(!(coef ^ 1))
		return 1;
	}
//gmp_printf("SCHISMA SEDE %llu %d %Zd\n", coef, n, SUM2);
a = 1;
while(1) {
	if (!n--)
		break;
		
	if(coef % y[n])
		continue;
	b = 2;
	while(!(coef % divnum1[n][b])) b++;
	a *= divnum1[n][--b];
	SUM2 /= sumInt[n];
	SUM2 *= (sumInt[n] * divnum1[n][b] + sumnum1[n][b-1]);
//De la 13 la 121, iar b e 27>9. 351/3 + 4;	
//De la 13 la 40, b = 9>3; 117/3 + 1.
//De la 4 la 40, b = 27>9; 108/3 + 4.
//De la 13 la 364, iar b = 81>27; 1053/3 + 13.	
//Zicem: a=9, sumInt[Y]=4, divInt[Y]=3, noul sumInt=40, y[Y]=3.
	if(a == coef)
		return 1;
	}
//gmp_printf("ERETICII MISERICORDIAM %llu %d %d %llu %Zd\n", coef, I, H, divnum2[I-1][2], SUM2);
coef /= a;
b = 1;
while(1) {
	if(!I--)
		break;

	if(coef % b1[I])
		continue;
	//printf("ZED %llu %llu\n", b1[I], divnum2[I][1]);
	a = 2;
	while(!(coef % divnum2[I][a])) a++;
	SUM2 *= sumnum2[I][--a];
	b *= divnum2[I][a];
	if(!(b ^ coef))
		return 1;
	}
//gmp_printf("AGUANO TRITOLO %llu %d %llu %Zd\n", coef, U, b1[0], SUM2);

//for(int q = 0; q < U; q++) printf("%llu ", b1[q]);

while(1) {
	if(!(U-- ^ H) || (coef < b1[U]))
		break;
	
	if(! (coef % b1[U]) ) {
	//printf("%llu %llu CARDUSIO\n", b1[U], b2[U]);
		SUM2 *= b2[U];//b2 = 1 + b1.
		b *= b1[U];
		//gmp_printf("NARSETE TATA EIF AS-RARIF %llu %d %llu %Zd\n", coef, U, b1[0], SUM2);
		if(!(b ^ coef))
			return 1;
		}
	}
//gmp_printf("\nURS BULA-BULA %llu %d %llu %Zd\n", coef, U, b1[0], SUM2);
return 0;
}


void MODSUM1
(gmp_ui *y, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int Y, int256 SUM2, gmp_ui *sumInt, gmp_ui coef, gmp_ui &a, gmp_ui a1, int h, int &d, int256 sumDoi, int256 divDoi, gmp_ui *divdoi) {

if(!(coef & 1)) {
	DOIJOS(coef, SUM2, sumDoi, divDoi, a = 1, divdoi);
	}

while(1) {
	if (!h--)
		break;
	if(coef % y[h])
		continue;
	a = 2;
	while(!(coef % divnum1[h][a])) a++;//coef % 81 = 0, a-- = 4.
	a--;
	a1 = 1;
	while(sumnum1[h][a1] ^ sumInt[h]) a1++;//1093, a1 = 6.
	SUM2 /= sumInt[h];
	SUM2 *= sumnum1[h][a1-a];//13.
	}

while(1) {
	if(!(Y-- ^ d))
		break;
	if(!(coef % y[Y])) {
		//coef /= y[Y];
		SUM2 /= sumInt[Y];
		}
	}
}

/*
gmp_ui MODSUMSUSM
(int256 unu, gmp_ui *y, int Y, int256 SUM2, gmp_ui *sumInt, gmp_ui coef, gmp_ui &a, gmp_ui &b, int256 *sumMpz, int256 divDoi, int s, int h, int256 sumDoi, gmp_ui *b1, gmp_ui *b2, int U, int H, int I, int256 pa, gmp_ui *divdoi, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui divnum2[][MAX2], gmp_ui sumnum2[][MAX2], gmp_ui divnum3[][40], gmp_ui sumnum3[][40], gmp_ui divnum4[][40], gmp_ui sumnum4[][40], int K) {

while(1) {
	if(!(Y-- ^ h))
		break;
	if(!(coef % y[Y]))
		return 0;
	}

if(!(coef & 1)) {
	DOISUS(coef, SUM2, sumDoi, divDoi, a = 1, b = 1, divdoi);
	if(!(coef ^ 1))
		return 1;
	}	
a = 1;

while(1) {
	if(!s--)
		break;
	if(coef % y[--h])
		continue;
	b = 2;
	while(!(coef % divnum3[h][b])) b++;
	mpz_divexact(SUM2, SUM2, sumMpz[s]);
	mpz_mul_ui(divDoi, sumMpz[s], divnum3[h][--b]);
	a *= (divnum3[h][b]);
	mpz_add_ui(divDoi, divDoi, sumnum3[h][--b]);
	mpz_mul(SUM2, divDoi, SUM2);
	}

while(1) {
	if (!(h--))
		break;		
	if(coef % y[h])
		continue;
	b = 2;
	while(!(coef % divnum1[h][b])) b++;
	mpz_divexact_ui(SUM2, SUM2, sumInt[h]);
	a *= divnum1[h][--b];
	mpz_mul_ui(SUM2, SUM2, divnum1[h][b]*sumInt[h] + sumnum1[h][b-1]);
	}
	
coef /= a;
b = 1;

while(1) {//I spre K, apoi de la K la 0.
	if(!(I ^ K) || (coef < b1[I]))
		break;
	if(coef % b1[I])
		continue;
	a = 2;
	while(!(coef % divnum2[I][a])) a++;
	b *= divnum2[I][--a];
	mpz_mul_ui(SUM2, SUM2, sumnum2[I][a]);

	if (!(b ^ coef))
		return 1;	
	}
	
while(1) {
	if(!(I--) || (coef < b1[I]))
		break;
	if(coef % b1[I])
		continue;
	a = 2;
	while(!(coef % divnum4[I][a])) a++;
	b *= divnum4[I][--a];
	mpz_mul_ui(SUM2, SUM2, sumnum4[I][a]);

	if (!(b ^ coef))
		return 1;	
	}	

while(1) {
	if(!(U-- ^ H) || (coef < b1[U]))
		break;
		
	if(! (coef % b1[U]) ) {	
		mpz_mul_ui(SUM2, SUM2, b2[U]);
		b *= b1[U];		
		if(!(b ^ coef))
			return 1;
		}
	}
	
return 0;
}


void MODSUMM(gmp_ui *y, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui divnum3[][40], gmp_ui sumnum3[][40], int Y, int256 SUM2, gmp_ui *sumInt, gmp_ui coef, gmp_ui &a, gmp_ui a1, int h, int &d, int256 *sumMpz, int256 sumDoi, int256 divDoi, int s, gmp_ui *divdoi) {

if(!(coef & 1))	{
	DOIJOS(coef, SUM2, sumDoi, divDoi, a = 1, divdoi);
	}	
d = h;
while(1) {
	if(!s--)
		break;
	if(coef % y[--h])
		continue;	
	a = 2;
	while(!(coef % (divnum3[h][a]))) a++;
	mpz_divexact(SUM2, SUM2, sumMpz[s]);
	mpz_divexact_ui(divDoi, sumMpz[s], divnum3[h][--a]);
	mpz_mul(SUM2, divDoi, SUM2);
	}

while(1) {
	if (!(h--))
		break;
	if(coef % y[h])
		continue;		
	a = 2;
	while(!(coef % divnum1[h][a])) a++;
	a--;
	a1 = 1;
	while(sumInt[h] ^ sumnum1[h][a1]) a1++;
	mpz_divexact_ui(SUM2, SUM2, sumInt[h]);
	mpz_mul_ui(SUM2, SUM2, sumnum1[h][a1-a]);
	}

while(1) {
	if(!(Y-- ^ d))
		break;
	if(!(coef % y[Y]))
		mpz_divexact_ui(SUM2, SUM2, sumInt[Y]);
	}
}*/


void PDOIMSUS(int256 doi, int256 trei, gmp_ui sumDoi, int pDoi, gmp_ui *SUMDOI, int D) {
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_divexact_ui(trei, trei, sumDoi);
mpz_mul_ui(trei, trei, SUMDOI[D+pDoi]);
}


void PDOIMJOS(int256 doi, int256 trei, gmp_ui sumDoi, int pDoi, gmp_ui *SUMDOI, int D) {
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_divexact_ui(trei, trei, sumDoi);
mpz_mul_ui(trei, trei, SUMDOI[D-pDoi]);
}


void PDOISUS(int256 doi, int256 trei, int256 sumDoi, int256 *SUMDOI, int pDoi, int D) {
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_divexact(trei, trei, sumDoi);
mpz_mul(trei, trei, SUMDOI[D+pDoi]);
}


void PDOIJOS(int256 doi, int256 trei, int256 sumDoi, int256 *SUMDOI, int pDoi, int D) {//doi e numărul, trei e suma.
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_divexact(trei, trei, sumDoi);
mpz_mul(trei, trei, SUMDOI[D-pDoi]);
}


void PDOIMSUS0(int256 doi, int256 trei, gmp_ui sumDoi, int S, gmp_ui z, int pDoi) {//Pentru numerele sub 10^52, cu dedicație, unde doiarii sunt sub 64 de biți, și puterile de înmulțire să nu-i conducă peste limită.

if(S + pDoi > 63)
	pDoi = 63 - S;
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_divexact_ui(trei, trei, sumDoi);
mpz_mul_ui(trei, trei, (sumDoi << pDoi) + (z<<pDoi) - 1);
}


void PDOIMJOS0(int256 doi, int256 trei, gmp_ui sumDoi, int pDoi) {
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_divexact_ui(trei, trei, sumDoi);
mpz_mul_ui(trei, trei, (sumDoi >> pDoi));
}


void PMDOISUS(int256 doi, int256 trei, gmp_ui sumDoi, int256 e1, gmp_ui z, int pDoi) {//Pentru numerele unde doiarii sunt sub 64 de biți, în special cele sub 10^52, și puterile de înmulțire pot duce peste limită.

mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_divexact_ui(trei, trei, sumDoi);
mpz_set_ui(e1, sumDoi);
mpz_mul_2exp(e1, e1, pDoi);
mpz_add_ui(e1, e1, (z<<pDoi) - 1);
mpz_mul(trei, trei, e1);
}


void DIVSUBST(int256 doi, int256 trei, gmp_ui div, gmp_ui SUM) {//Împărțire la factorii primi non-K, non-H, care au suma sub 2^64.
doi *= div;
trei /= SUM;
}


void MULSUBST(int256 doi, int256 trei, gmp_ui *div1, gmp_ui *sum1, int put) {//Factorul nu este al numărului. Înmulțire cu putere sub 2^64.
doi *= div1[put];
trei *= sum1[put];
}


void MPZMULSUBST(int256 doi, int256 trei, int256 *div, int256 *sum, int put) {//Înmulțire cu o putere primă peste 2^64, când factorul nu este al numărului (nu prea are rost).
mpz_mul(doi, doi, div[put]);
mpz_mul(trei, trei, sum[put]);
}


void MPZMULSUBST1(int256 doi, int256 trei, gmp_ui *div1, gmp_ui *sum1, int put, int putImpl, gmp_ui sum) {//Factorul este al numărului, înmulțire cu o putere primă sub 2^64, care duce suma peste 2^64. Pentru factorii primi cu sume gmp_ui.
//if(lim <= put+putImpl) return;
doi *= div1[put];
trei /= sum;
trei *= sum1[putImpl+put];
}

void MPZMULSUBST2(int256 doi, int256 trei, int256 *divdiv, int256 *divsum, int put, int putImpl, gmp_ui sum) {//Factorul este al numărului, înmulțire cu o putere primă peste 2^64, care duce suma peste 2^64. Pentru factorii primi cu sume gmp_ui.
//if(lim <= put+putImpl) return;
mpz_mul(doi, doi, divdiv[put]);
mpz_divexact_ui(trei, trei, sum);
mpz_mul(trei, trei, divsum[putImpl+put]);
}


//FACTORSUBM
void MPZMULSUBSTM(int256 doi, int256 trei, int256 mul, int256 mul2) {//Factorii primi int256, înmulțire. Nu se pun la înmulțire factorii care sunt deja ai numărului, pentru că puterile lor trebuie să fie 1.
mpz_mul(doi, doi, mul);
mpz_mul(trei, trei, mul2);
}


void MPZDIVSUBSTM(int256 doi, int256 trei, int256 div, int256 div2) {//Tot ei, împărțire.
mpz_mul(doi, doi, div);
mpz_divexact(trei, trei, div2);
}


void MPZDIVSUBST(int256 doi, int256 trei, gmp_ui *div1, gmp_ui *sum1, int put, int putImpl, int256 sum) {//Pentru factorii primi K, la împărțire, admițând că puterea de substituire va fi sub 2^64.
mpz_mul_ui(doi, doi, div1[put]);
mpz_divexact(trei, trei, sum);
mpz_mul_ui(trei, trei, sum1[putImpl-put]);
}


void MPZDIVSUBST2(int256 doi, int256 trei, gmp_ui *div1, gmp_ui *sum1, int put, int putImpl, gmp_ui sum) {
doi *= div1[put];
trei /= sum;
trei *= sum1[putImpl-put];
}


void MPZMDIVSUBST(int256 doi, int256 trei, int256 *div, int256 *sum, int put, int putImpl, int256 SUM) {//Pentru factorii primi K, la împărțire, admițând că puterea de substituire va fi peste 2^64.
//if(putImpl < put) return;
mpz_mul(doi, doi, div[put]);
mpz_divexact(trei, trei, SUM);
mpz_mul(trei, trei, sum[putImpl-put]);
}


void MPZMMULSUBST1(int256 doi, int256 trei, int put, int256 *div, int256 *sum, int putImpl, int256 SUM) {//Tot K, la înmulțire, când factorul este al numărului, iar puterea și suma trec de 2^64. Din oficiu, suma trece de 2^64, așa sunt factorii primi K, sumele lor sunt peste 64 de biți binari.
//if(lim <= put+putImpl) return;
mpz_mul(doi, doi, div[put]);
mpz_divexact(trei, trei, SUM);
mpz_mul(trei, trei, sum[putImpl+put]);
}


void QSI(int *a, int b, int e) {
int j, pv, l, r;

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
			j=a[--r];//a[--l] ^= a[b];
			a[r]=a[l];//a[b] ^= a[l];
			a[l]=j;//a[l] ^= a[b];
			}
		} 

	j=a[--l];//a[--l] ^= a[b];
	a[l]=a[b];//a[b] ^= a[l];
	a[b]=j;//a[l] ^= a[b];

	QSI(a, b, l);
	QSI(a, r, e);
	}
}


int PREZ(gmp_ui a, gmp_ui *b, int c) {
while(1) {
	if(!c--)
		break;
	if(b[c] == a)
		return 1;
	}
	
return 0;
}


void PTMINDOISUS(int256 ab, int256 sm, gmp_ui sumDoi, int pDoi, int S, int256 e1, gmp_ui &sum, gmp_ui &abund, int p, int256 doi) {//VECUN MINIM
//Bune pentru FACTMSUB.
if(pDoi + S > 63)
	pDoi = 63 - S;

mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
sumDoi <<= pDoi;
abund *= sumDoi;
sum *= (sumDoi + (p<<pDoi) - 1);
sumDoi = CMMDC(sum, abund, sum%abund);

if(sumDoi ^ 1)
	{
	sum /= sumDoi;
	abund /= sumDoi;
	}

mpz_set_ui(ab, abund);
mpz_set_ui(sm, sum);
}


void PTMINDOIJOS(int256 ab, int256 sm, gmp_ui sumDoi, int pDoi, int256 e1, gmp_ui &sum, gmp_ui &abund, int p, int256 doi) {//VECUN MINIM
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
abund *= sumDoi;
sum *= (sumDoi - (p<<pDoi) + 1);//abund = nm, sum = nr.
sumDoi = CMMDC(sum, abund, sum%abund);

if(sumDoi ^ 1)
	{
	sum /= sumDoi;
	abund /= sumDoi;
	}

mpz_set_ui(ab, abund);
mpz_set_ui(sm, sum);
}

//Cele două de dedesubt nu sunt în redundanţă.
void PTMDOISUS(int256 ab, int256 sm, gmp_ui sumDoi, int pDoi, int256 e1, /*gmp_ui &sum, gmp_ui &abund,*/ int p, int256 doi) {//VECUN MINIM
//Înmulţire cu putere de 2, când de sub 2^64 se trece peste, cu termenii abundenţei.

mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_set_ui(e1, sumDoi);
mpz_mul_2exp(e1, e1, pDoi);
mpz_mul(ab, ab, e1);//1*2040
mpz_add_ui(e1, e1, (p<<pDoi) - 1);
mpz_mul(sm, sm, e1);//5*2047
mpz_gcd(e1, sm, ab);

if(mpz_cmp_ui(e1, 1))
	{
	mpz_divexact(sm, sm, e1);
	mpz_divexact(ab, ab, e1);
	}
}


void PTMDOIJOS(int256 ab, int256 sm, gmp_ui sumDoi, int pDoi, int256 e1, int p, int256 doi) {//VECUN MINIM
//Împărţire cu putere de 2, când s-ar trece cu termenii abundenţei de sub 2^64 mai sus.

mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_mul_ui(ab, ab, sumDoi);
mpz_mul_ui(sm, sm, sumDoi - (p<<pDoi) + 1);
mpz_gcd(e1, sm, ab);

if(mpz_cmp_ui(e1, 1)) {
	mpz_divexact(sm, sm, e1);
	mpz_divexact(ab, ab, e1);	
	}
}


void PTDOIMSUS(int256 ab, int256 sm, gmp_ui sumDoi, int pDoi, int256 e1, int p, int S, gmp_ui *SUMDOI, int256 doi) {
sumDoi = SUMDOI[S + pDoi];
p <<= pDoi;
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_mul_ui(ab, ab, sumDoi-p-1);
mpz_mul_ui(sm, sm, sumDoi);
mpz_gcd(e1, sm, ab);

if(mpz_cmp_ui(e1, 1)) {
	mpz_divexact(sm, sm, e1);
	mpz_divexact(ab, ab, e1);
	}
}


void PTDOIMJOS(int256 ab, int256 sm, gmp_ui sumDoi, int pDoi, int256 e1, int p, int S, gmp_ui *SUMDOI, int256 doi) {
sumDoi = SUMDOI[S + pDoi];
p <<= pDoi;
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_mul_ui(ab, ab, sumDoi);
mpz_mul_ui(sm, sm, sumDoi-p-1);
mpz_gcd(e1, sm, ab);

if(mpz_cmp_ui(e1, 1)) {
	mpz_divexact(sm, sm, e1);
	mpz_divexact(ab, ab, e1);	
	}
}


void PTDOISUS(int256 ab, int256 sm, int256 sumDoi, int pDoi, int256 e1, int p, int256 doi) {//Pentru marile doiuri, cu salt mare.
mpz_mul_2exp(sumDoi, sumDoi, pDoi);
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_mul(ab, ab, sumDoi);
mpz_add_ui(e1, sumDoi, (p<<pDoi) - 1);
mpz_mul(sm, sm, e1);
mpz_gcd(e1, sm, ab);

if(mpz_cmp_ui(e1, 1)) {
	mpz_divexact(sm, sm, e1);
	mpz_divexact(ab, ab, e1);
	}
}


void PTDOIJOS(int256 ab, int256 sm, int256 sumDoi, int pDoi, int256 e1, int p, int256 doi) {
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_mul(ab, ab, sumDoi);
mpz_sub_ui(e1, sumDoi, (p<<pDoi) - 1);
mpz_mul(sm, sm, e1);
mpz_gcd(e1, sm, ab);

if(mpz_cmp_ui(e1, 1)) {
	mpz_divexact(sm, sm, e1);
	mpz_divexact(ab, ab, e1);	
	}
}


//FACTSUB
//Funcţiile de mai jos sunt de uz restrâns, de folosit la numerele mai mici (ca GIG52), dar şi acolo cu destulă limită.
void PTMULSUBST(int256 doi, gmp_ui *div1, gmp_ui *sum1, int put, gmp_ui &sum, gmp_ui &abund) {//Factorul nu este al numărului. Înmulţire.

mpz_mul_ui(doi, doi, div1[put]);
sum *= div1[put];
abund *= sum1[put];
put = CMMDC(sum, abund, sum%abund);

if(put ^ 1) {
	sum /= put;
	abund /= put;
	}
}


void PTMULSUBST1(int256 doi, gmp_ui *div1, gmp_ui *sum1, int put, gmp_ui sum, gmp_ui &SUM1, gmp_ui &abund, gmp_ui p) {//Factorul este al numărului. Înmulţire.

mpz_mul_ui(doi, doi, div1[put]);
p = div1[put] * sum;//sum = 121, a = 81, mulPrim = 3, 121*81 + 40.
abund *= p;
SUM1 *= (p + sum1[put-1]);
sum *= (p + sum1[put-1]);
p = CMMDC(SUM1, abund, SUM1%abund);

if(p ^ 1) {
	abund /= p;
	SUM1 /= p;
	}
}


void PTDIVSUBST0(int256 doi, gmp_ui *div1, gmp_ui *sum1, int put, gmp_ui SUM, gmp_ui &SUM1, gmp_ui &abund, int256 ab, int256 sm) {//Împărţire.

mpz_mul_ui(doi, doi, div1[put]);
SUM1 *= (SUM - sum1[put-1]);
abund *= SUM;
SUM = CMMDC(SUM1, abund, SUM1 % abund);

if(SUM ^ 1) {
	SUM1 /= SUM;
	abund /= SUM;
	}
	
mpz_set_ui(sm, SUM1);
mpz_set_ui(ab, abund);
}


//FACTSUBM


void PTMPZDIVSUBST1(int256 ab, int256 sm, gmp_ui *div1, gmp_ui *sum1, int put, gmp_ui &sum, int256 e1, int256 doi) {//Pentru factorii primi gmp_ui (cei care nu au sume mepezetele), la împărțire, admițând că puterea de substituire va fi sub 2^64. Fireşte că va fi aşa, puterea fiind maxim suma, care este sub 2^64.

mpz_mul_ui(doi, doi, div1[put]);
mpz_mul_ui(ab, ab, sum);
mpz_mul_ui(sm, sm, sum - sum1[put-1]);
mpz_gcd(e1, sm, ab);

if(mpz_cmp_ui(e1, 1)) {
	mpz_divexact(sm, sm, e1);
	mpz_divexact(ab, ab, e1);
	}
}


void PTDIVSUBST(int256 ab, int256 sm, gmp_ui div, int256 e1, int256 doi) {//Împărțire la factorii primi non-K, non-H, care au suma sub 2^64.
mpz_mul_ui(doi, doi, div);
mpz_mul_ui(sm, sm, div++);
mpz_mul_ui(ab, ab, div);
mpz_gcd(e1, sm, ab);

if(mpz_cmp_ui(e1, 1)) {
	mpz_divexact(sm, sm, e1);
	mpz_divexact(ab, ab, e1);
	}
}


//doi = prodnum sau catnum.
void PTMPZMDIVSUBST(int256 ab, int256 sm, int256 *div, int256 *sum, int put, int256 SUM, int256 e1, int256 doi) {//Pentru factorii primi K, la împărțire, admițând că puterea de substituire va fi peste 2^64.

mpz_mul(doi, doi, div[put]);
mpz_mul(ab, ab, SUM);
mpz_sub(e1, SUM, sum[put-1]);
mpz_mul(sm, sm, e1);
mpz_gcd(e1, sm, ab);

if(mpz_cmp_ui(e1, 1)) {
	mpz_divexact(sm, sm, e1);
	mpz_divexact(ab, ab, e1);
	}
}


void PTMPZDIVSUBST(int256 ab, int256 sm, int256 a, gmp_ui *div1, gmp_ui *sum1, int put, int256 sum, int256 doi) {//Pentru factorii primi K, la împărțire, admițând că puterea de substituire va fi sub 2^64.

mpz_mul_ui(doi, doi, div1[put]);
mpz_mul(ab, ab, sum);
mpz_sub_ui(a, sum, sum1[put-1]);
mpz_mul(sm, sm, a);
mpz_gcd(a, sm, ab);

if(mpz_cmp_ui(a, 1)) {
	mpz_divexact(sm, sm, a);
	mpz_divexact(ab, ab, a);
	}
}


void PTMPZMULSUBST(int256 ab, int256 sm, int256 *div, int256 *sum, int put, int256 e, int256 doi) {//Înmulțire cu o putere primă peste 2^64, când factorul nu este al numărului.

mpz_mul(doi, doi, div[put]);
mpz_mul(ab, ab, div[put]);
mpz_mul(sm, sm, sum[put]);
mpz_gcd(e, sm, ab);

if(mpz_cmp_ui(e, 1)) {
	mpz_divexact(sm, sm, e);
	mpz_divexact(ab, ab, e);
	}
}


void PTMPZMMULSUBST(int256 ab, int256 sm, gmp_ui *div1, gmp_ui *sum1, int put, int256 e, int256 doi) {//Înmulțire cu o putere primă sub 2^64, când factorul nu este al numărului.

mpz_mul_ui(doi, doi, div1[put]);
mpz_mul_ui(ab, ab, div1[put]);
mpz_mul_ui(sm, sm, sum1[put]);
mpz_gcd(e, sm, ab);

if(mpz_cmp_ui(e, 1)) {
	mpz_divexact(sm, sm, e);
	mpz_divexact(ab, ab, e);
	}
}


void PTMPZMULSUBST1(int256 ab, int256 sm, int256 e1, gmp_ui *div, gmp_ui *sum, int put, gmp_ui SUM, int256 doi) {//Factorul este al numărului, înmulțire cu o putere primă care poate duce suma peste 2^64. Puterea de substituire e sub 2^64, dar foarte probabil ca termenii să treacă de 2^64.

mpz_mul_ui(doi, doi, div[put]);
mpz_set_ui(e1, SUM);
mpz_mul_ui(e1, e1, div[put]);
mpz_mul(ab, ab, e1);
mpz_add_ui(e1, e1, sum[put-1]);
mpz_mul(sm, sm, e1);
mpz_gcd(e1, sm, ab);

if(mpz_cmp_ui(e1, 1)) {
	mpz_divexact(sm, sm, e1);
	mpz_divexact(ab, ab, e1);
	}
}


void PTMPZMULSUBST2(int256 ab, int256 sm, int256 e1, int256 *divdiv, int256 *divsum, int put, gmp_ui SUM, int256 doi) {//Factorul este al numărului, înmulțire cu o putere primă peste 2^64, care duce suma peste 2^64. Pentru factorii primi cu sume gmp_ui.

mpz_mul(doi, doi, divdiv[put]);
mpz_mul_ui(e1, divdiv[put], SUM);
mpz_mul(ab, ab, e1);
mpz_add(e1, e1, divsum[put-1]);
mpz_mul(sm, sm, e1);
mpz_gcd(e1, sm, ab);

if(mpz_cmp_ui(e1, 1)) {
	mpz_divexact(sm, sm, e1);
	mpz_divexact(ab, ab, e1);
	}
}


void PTMPZMULSUBSTM1(int256 ab, int256 sm, int256 e1, gmp_ui *div1, gmp_ui *sum1, int put, gmp_ui sum, int256 doi) {//Factorul este al numărului, înmulțire cu o putere primă care să nu ducă suma peste 2^64.

mpz_mul_ui(doi, doi, div1[put]);
sum *= div1[put];
mpz_mul_ui(ab, ab, sum);
mpz_mul_ui(sm, sm, sum + sum1[put-1]);
mpz_gcd(e1, sm, ab);

if(mpz_cmp_ui(e1, 1)) {
	mpz_divexact(sm, sm, e1);
	mpz_divexact(ab, ab, e1);
	}
}


void PTMPZMMULSUBST1(int256 ab, int256 sm, int256 *div, int256 *sum, int put, int256 SUM, int256 e1, int256 doi) {//Factorii primi K, la înmulțire, când factorul este al numărului, iar puterea și suma trec de 2^64. Suma trece din oficiu de 2^64.

mpz_mul(doi, doi, div[put]);
mpz_mul(e1, div[put], SUM);
mpz_mul(ab, ab, e1);
mpz_add(e1, sum[put-1], e1);
mpz_mul(sm, sm, e1);
mpz_gcd(e1, sm, ab);

if(mpz_cmp_ui(e1, 1)) {
	mpz_divexact(sm, sm, e1);
	mpz_divexact(ab, ab, e1);
	}
}


void PTMPZMULMSUBST1(int256 ab, int256 sm, int256 *div, int256 *sum, int put, int256 SUM, int256 e1, int256 doi) {//Tot K, la înmulțire, când factorul este al numărului, iar puterea este sub 2^64. Suma trece din oficiu de 2^64.

mpz_mul(doi, doi, div[put]);
mpz_mul(e1, SUM, div[put]);
mpz_mul(ab, ab, e1);
mpz_add(e1, e1, sum[put-1]);
mpz_mul(sm, sm, e1);
mpz_gcd(e1, sm, ab);

if(mpz_cmp_ui(e1, 1)) {
	mpz_divexact(sm, sm, e1);
	mpz_divexact(ab, ab, e1);
	}
}


void PTMPZMULSUBSTM(int256 ab, int256 sm, int256 mul, int256 mul1, int256 e1, int256 doi) {//Factorii primi int256, înmulțire. Nu se pun la înmulțire factorii care sunt deja ai numărului, pentru că puterile lor trebuie să fie 1.

mpz_mul(doi, doi, mul);
mpz_mul(ab, ab, mul);
mpz_mul(sm, sm, mul1);//mul1 = mul+1 din celălalt vector int256.
mpz_gcd(e1, sm, ab);

if(mpz_cmp_ui(e1, 1)) {
	mpz_divexact(sm, sm, e1);
	mpz_divexact(ab, ab, e1);
	}
}


void PTMPZDIVSUBSTM(int256 ab, int256 sm, int256 div, int256 div1, int256 e1, int256 doi) {//Tot ei, împărțire.
mpz_mul(doi, doi, div);
mpz_mul(sm, sm, div);
mpz_mul(ab, ab, div1);
mpz_gcd(e1, sm, ab);

if(mpz_cmp_ui(e1, 1)) {
	mpz_divexact(sm, sm, e1);
	mpz_divexact(ab, ab, e1);	
	}
}

/*
void TOLNUM1(int256 a, int256 un, int256 doi, int256 tr, int256 pa, int256 g, int256 sumDoi, int256 divDoi, int256 *j, int256 *j1, int256 div[][MAX1], int256 sum[][MAX1], int256 *sumMpz, double &z, gmp_ui &g1, gmp_ui g2, gmp_ui g3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumInt, gmp_ui *c, gmp_ui *c1, gmp_ui *c2, gmp_ui *c3, gmp_ui *d, gmp_ui *divdoi1, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui divnum2[][MAX2], gmp_ui sumnum2[][MAX2], gmp_ui divnum3[][40], gmp_ui sumnum3[][40], gmp_ui divnum4[][40], gmp_ui sumnum4[][40], int e, int E, int n, int u, int h, int i, int f, int r, int s, int m) {

if(VALID2(a, doi, un, g, z))
	gmp_printf("%Zd %.6lf\n", a, z);
g1 = 1;

while(1) {//g1 != 0
	mpz_set(tr, un);
	if(MODSUMSUSM(a, d, e, tr, sumInt, ++g1, g2, g3, sumMpz, divDoi, s, n, sumDoi, c, c1, f, r, r, pa, divdoi1, divnum1, sumnum1, divnum2, sumnum2, divnum3, sumnum3, divnum4, sumnum4, m))	{
		g = a*g1;	
		if(VALID2(g, doi, tr, pa, z))
			gmp_printf("%Zd %.6lf\n", g, --z);//return 0;
		}
	}

while(1) {
	g += a;
	SUMADIV(g, doi, j, j1, c2, c3, e, E, h, i, mpz_scan1(g, 0), div1, sum1, div, sum);
	if(VALID2(g, un, doi, tr, z))
		gmp_printf("%Zd %.6lf\n", g, --z);
	}
}


void TOLNUM2(int256 a, int256 un, int256 doi, int256 tr, int256 pa, int256 g, int256 sumDoi, int256 divDoi, int256 *j, int256 *j1, int256 div[][MAX1], int256 sum[][MAX1], double &z, gmp_ui &g1, gmp_ui g2, gmp_ui g3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumInt, gmp_ui *c, gmp_ui *c1, gmp_ui *c2, gmp_ui *c3, gmp_ui *d, gmp_ui *divdoi1, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui divnum2[][MAX2], gmp_ui sumnum2[][MAX2], int e, int E, int n, int u, int h, int i, int f, int r) {

if(VALID2(a, doi, un, g, z))
	gmp_printf("%Zd %.6lf\n", a, --z);
g1 = 1;

while(1) {//g1 != 0
	tr = un;
	if(MODSUMSUS(a, d, e, tr, sumInt, ++g1, g2, g3, n, sumDoi, divDoi, c, c1, f, r, r, divdoi1, divnum1, sumnum1, divnum2, sumnum2)) {
		g = a*g1;		
		if(VALID2(g, doi, tr, pa, z))
			gmp_printf("%Zd %.6lf\n", g, --z);
		}
	}

while(1) {
	g += a;
	SUMADIV(g, doi, j, j1, c2, c3, e, E, h, i, mpz_scan1(g, 0), div1, sum1, div, sum);
	if(VALID2(g, un, doi, tr, z))
		gmp_printf("%Zd %.6lf\n", g, --z);
	}
}


void TOLNUM3(int256 a, int256 un, int256 doi, int256 tr, int256 pa, int256 g, int256 sumDoi, int256 divDoi, int256 *j, int256 *j1, int256 *k, int256 *k1, int256 div[][MAX1], int256 sum[][MAX1], int256 *sumMpz, double &z, gmp_ui &g1, gmp_ui g2, gmp_ui g3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumInt, gmp_ui *c, gmp_ui *c1, gmp_ui *c2, gmp_ui *c3, gmp_ui *d, gmp_ui *d1, gmp_ui *divdoi1, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui divnum3[][40], gmp_ui sumnum3[][40], int e, int n, int u, int h, int i, int f, int r, int r1, int s, int m) {

g1 = 0;
while(1) {
if(!(a % ++g1)) {
	tr = un;
	pa = a/g1;
	MODSUMM(d, divnum1, sumnum1, divnum3, sumnum3, e, tr, sumInt, g1, g2, 0, n, n, sumMpz, sumDoi, divDoi, s, divdoi1);
	if(VALID2(pa, doi, tr, g, z) )
		gmp_printf("%Zd %.6lf\n", pa, --z);
	}
//if (!g1)
//	break;//Nu ajunge la 18446744073709551616.
}

mpz_ui_pow_ui(g, 2, 64);

while(1) {
	if(!(a % g)) {
		pa = a/g;
		SUMADIV(pa, doi, k, k1, d, d1, e, r1, r, m, mpz_scan1(g, 0), div1, sum1, div, sum);
		if(VALID2(pa, un, doi, tr, z))
			gmp_printf("%Zd %.6lf\n", pa, --z);
		}
	g += 1;
	}
}


void TOLNUM4(int256 a, int256 un, int256 doi, int256 tr, int256 pa, int256 g, int256 sumDoi, int256 divDoi, int256 *j, int256 *j1, int256 *k, int256 *k1, int256 div[][MAX1], int256 sum[][MAX1], double &z, gmp_ui &g1, gmp_ui g2, gmp_ui g3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumInt, gmp_ui *c, gmp_ui *c1, gmp_ui *c2, gmp_ui *c3, gmp_ui *d, gmp_ui *d1, gmp_ui *divdoi1, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int e, int n, int u, int h, int i, int f, int r, int r1, int m) {

g1 = 0;
while(1) {
if(!(a % ++g1)) {
	tr = un;
	MODSUM1(d, divnum1, sumnum1, e, tr, sumInt, g1, g2, 0, n, n, sumDoi, divDoi, divdoi1);
	pa = a/g1;
	if(VALID2(pa, doi, tr, g, z) )
		gmp_printf("%Zd %.6lf\n", pa, --z);
	}
//if (!g1)
//	break;//Nu ajunge la 18446744073709551616.
}

mpz_ui_pow_ui(g, 2, 64);

while(1) {
	if(!(a % g)) {
		pa = a/g;
		SUMADIV(pa, doi, k, k1, d, d1, e, r1, r, m, mpz_scan1(g, 0), div1, sum1, div, sum);
		if(VALID2(pa, un, doi, tr, z))
			gmp_printf("%Zd %.6lf\n", pa, --z);
		}
	g += 1;
	}
}*/


void DEPL(fstream &f1, char &t1, gmp_ui a) {

fseek(f1, a, SEEK_CUR);
do	{
	fscanf(f1, "%c", &t1);
	}
while(t1 != '\n');
}


void DEPL1(fstream &f1, char &t1, gmp_ui a, char *Y) {//Mai departe.

fseek(f1, a, SEEK_CUR);
a = f1.tellg();
fgets(Y, 1920, f1);
fgets(Y, 1920, f1);
a = f1.tellg() - a;
fseek(f1, -a, SEEK_CUR);
}


void DEPLMIN(fstream &f1, char &t1, gmp_ui a, char *Y) {//Înapoi.

fseek(f1, -a, SEEK_CUR);
fgets(Y, 1920, f1);
}


void SUS(fstream &f1, char &w, gmp_ui Q1, char *Q, int a1, gmp_ui PP, char pcif) {
fgets(Q, 1920, f1);
fseek(f1, -strlen(Q), SEEK_CUR);

if(strlen(Q) == a1 && ( (pcif == ':') || (Q[0] > pcif) ) )  {
	//if(pcif ^ ':') {fgets(Q, 1920, f1); fgets(Q, 1920, f1);}
	w = 's';
	return;
}

gmp_ui prag = PP - Q1;

if(pcif == ':') {
	while(1) {
		DEPL1(f1, w, Q1, Q);

		if( (strlen(Q) >= a1) || (f1.tellg() > prag) ) {
			DEPLMIN(f1, w, Q1, Q);
			break;
			}
		}

	while( (strlen(Q) < a1) && (PP > f1.tellg()) ) {
		fgets(Q, 1920, f1);
		}

	if( (strlen(Q) == a1))
		fseek(f1, -strlen(Q), SEEK_CUR);
} else {
	while(1) {
		DEPL1(f1, w, Q1, Q);
		if( ( (strlen(Q) == a1) && (Q[0] >= pcif)) 
			|| (a1 < strlen(Q))
			|| (f1.tellg() > prag) ) {
				DEPLMIN(f1, w, Q1, Q);
				break;
			}
		}

	if( (a1 < strlen(Q)) && (f1.tellg() == strlen(Q)) ) {
		fseek(f1, -strlen(Q), SEEK_CUR);
	}
	else
	while( !( ( (strlen(Q) == a1) && (Q[0] >= pcif) ) || (strlen(Q) > a1) ) && (PP > f1.tellg()) ) {
		fgets(Q, 1920, f1);
		}

	if( ( (strlen(Q) == a1) && (Q[0] == pcif) )) {
		fseek(f1, -strlen(Q), SEEK_CUR);}
	}
}


gmp_ui URC1(fstream &F1, int a1, char *Q, char &t, gmp_ui pas, gmp_ui PP, char pcif) {
SUS(F1, t, pas, Q, a1, PP, pcif);

if(!( (strlen(Q) == a1) && (pcif == ':'? 1==1 : Q[0] == pcif))) {
	if(PP ^ F1.tellg() && (t != 's'))
		fseek(F1, -strlen(Q), SEEK_CUR);

	if(strlen(Q) ^ a1) {
		printf("Rezultat 0.\n");
		t = 'n';
		}
	}

return ftell(F1);
}


gmp_ui URC(fstream &F1, int a1, char *Q, char &t, gmp_ui pas, gmp_ui PP, char pcif) {
SUS(F1, t, pas, Q, a1, PP, pcif);

if(( (strlen(Q) == a1) && (pcif == ':'? 1==1 : Q[0] == pcif)))	{
	t = 'c';
	} else {
	fseek(F1, -strlen(Q), SEEK_CUR);
	}

printf("%lu\n", ftell(F1));	
return ftell(F1);
}


#endif
