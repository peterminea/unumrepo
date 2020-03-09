#ifndef _TOLNUM_H
#define _TOLNUM_H

#include "/TOLIL.h"
#include "/Z.h"
#include <omp.h>


void ADUNDIVMP(mpz_t A, mpz_t SUM, gmp_ui *sumInt, gmp_ui *y, int i, gmp_ui sumDoi, int *putImpl, int &j, gmp_ui *b, int d1, int D, int &Y, int t1, int &ssq, gmp_ui *b2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t p) {
mpz_set_ui(SUM, 1);
mpz_tdiv_q_2exp(p, A, t1);
i = d1;//H

while(1) {
	if(!i--)
		break;
	
	if(mpz_divisible_ui_p(p, b[i])) {
		y[Y] = b[i];
		for(j = 2; mpz_divisible_ui_p(p, div1[i][j]); j += 2);
		sumInt[Y] = mpz_divisible_ui_p(p, div1[i][--j])? div1[i][j] : div1[i][--j];
		mpz_mul_ui(SUM, SUM, sumInt[Y]);
		putImpl[Y++] = j;
		}
	}

ssq = Y;
if(mpz_cmp(SUM, p) == 1) {
	mpz_mul_ui(SUM, SUM, sumDoi);
	return;
	}

while(1) {
	if (!(D-- ^ d1))
		break;
		
	if(mpz_divisible_ui_p(p, b[D]))	{
		y[Y] = b[D];
		sumInt[Y] = b2[D];
		mpz_mul_ui(SUM, SUM, sumInt[Y]);
		putImpl[Y++] = 1;
		if(mpz_cmp(SUM, p) == 1) {
			mpz_mul_ui(SUM, SUM, sumDoi);
			return;
			}
		}
	}
}


void ADUNDIVP(mpz_t A, mpz_t SUM, gmp_ui *sumInt, gmp_ui *y, int i, mpz_t sumDoi, int *putImpl, int &j, gmp_ui *b, int d1, int D, int &Y, int t1, int &ssq, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t p) {
mpz_set_ui(SUM, 1);
mpz_tdiv_q_2exp(p, A, t1);

if( (t1 == 89) || (t1 == 107) || (t1 == 127)) {	
	mpz_mul_2exp(SUM, SUM, t1);
	}

i = d1;//H

while(1) {
	if(!i--)
		break;
	if(mpz_divisible_ui_p(p, b[i]))	{
		y[Y] = b[i];
		for(j = 2; mpz_divisible_ui_p(p, div1[i][j]); j += 2);
		sumInt[Y] = mpz_divisible_ui_p(p, div1[i][--j])? div1[i][j] : div1[i][--j];
		mpz_mul_ui(SUM, SUM, sumInt[Y]);
		putImpl[Y++] = j;
		}
	}

ssq = Y;
if(mpz_cmp(SUM, p) == 1) {
	mpz_mul(SUM, SUM, sumDoi);
	return;
	}	

while(1) {
	if (!(D-- ^ d1))
		break;
		
	if(mpz_divisible_ui_p(p, b[D]))	{
		y[Y] = b[D];
		sumInt[Y] = b1[D];
		mpz_mul_ui(SUM, SUM, sumInt[Y]);
		putImpl[Y++] = 1;
		if(mpz_cmp(SUM, p) == 1) {
			mpz_mul(SUM, SUM, sumDoi);
			return;
			}
		}
	}
}


void ADUNDIVPM(mpz_t A, mpz_t SUM, gmp_ui *sumInt, mpz_t *sumMpz, mpz_t *z, gmp_ui *y, int i, mpz_t sumDoi, int *putImpl, int &j, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int d1, int D, int &Y, int E, int &s, mpz_t *sumIntMpz, int K1, int &u, int *A2, gmp_ui *b0, int K, int D0, int &d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1],int *mem, mpz_t p) {//K1 e K.
mpz_set_ui(SUM, 1);
mpz_tdiv_q_2exp(p, A, i);
i = d1;

while(1) {
	if(!K1--)
		break;
	if(mpz_divisible_ui_p(p, b[--i])) {
		y[Y] = b[i];
		if(mpz_divisible_p(p, div[i][1])) {
			for(j = 2; mpz_divisible_p(p, div[K1][j]); j += 2);//Începe puternumizarea.		
			mpz_set(sumIntMpz[s++], (mpz_divisible_p(p, div[K1][--j])? sum[K1][j] : sum[K1][--j]));
			mpz_mul(SUM, SUM, sum[K1][j]);
			sumInt[Y] = 1;
			goto s1;
		}

		for(j = mem[i]; !mpz_divisible_ui_p(p, div1[i][j]); j -= 2);
		sumInt[Y] = mpz_divisible_ui_p(p, div1[i][++j])? sum1[i][j] : sum1[i][--j];
		mpz_set_ui(sumIntMpz[s++], sumInt[Y]);
		mpz_mul_ui(SUM, SUM, sumInt[Y]);
		s1:
		A2[Y] = GAS3(b0, b[i], d1, d1-K);		
		putImpl[Y++] = j;
		}
	}
while(1) {
	if(!i--)
		break;	
	if(mpz_divisible_ui_p(p, b[i])) {
		y[Y] = b[i], j = mem[i];
		for(; !mpz_divisible_ui_p(p, div1[i][j]); j -= 2);
		sumInt[Y] = (mpz_divisible_ui_p(p, div1[i][++j])? sum1[i][j] : sum1[i][--j]);
		mpz_mul_ui(SUM, SUM, sumInt[Y]);
		A2[Y] = GAS3(b0, b[i], d1-K, 0);		
		putImpl[Y++] = j;
		}
	}

d = Y;
if(mpz_cmp(SUM, p) == 1) {
	mpz_mul(SUM, SUM, sumDoi);
	return;
	}

while(1) {
	if (!(D-- ^ d1))
		break;		
	if(mpz_divisible_ui_p(p, b[D]))	{
		y[Y] = b[D];
		sumInt[Y] = b1[D];
		mpz_mul_ui(SUM, SUM, sumInt[Y]);
		A2[Y] = GAS3(b0, b[D], D, d1);		
		putImpl[Y++] = 1;
		
		if(mpz_cmp(SUM, p) == 1) {
			mpz_mul(SUM, SUM, sumDoi);			
			return;
			}
		}
	}

while(1) {
	if (!E--)
		break;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(SUM, C1[E], SUM);
		mpz_set(z[u], C[E]);
		mpz_set(sumMpz[u++], C1[E]);		
		if(mpz_cmp(SUM, p) == 1) {
			mpz_mul(SUM, SUM, sumDoi);
			return;
			}
		}
	}
}


//Clasa FACTORSUBM:
void PDOIMSUS(mpz_t doi, mpz_t trei, int pDoi, gmp_ui *SUMDOI, int D) {
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_divexact_ui(trei, trei, SUMDOI[D]);
mpz_mul_ui(trei, trei, SUMDOI[D+pDoi]);
}


void PDOIMJOS(mpz_t doi, mpz_t trei, int pDoi, gmp_ui *SUMDOI, int D) {
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_divexact_ui(trei, trei, SUMDOI[D]);
mpz_mul_ui(trei, trei, SUMDOI[D-pDoi]);
}


void PDOISUS(mpz_t doi, mpz_t trei, mpz_t *SUMDOI, int pDoi, int D) {
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_divexact(trei, trei, SUMDOI[D]);
mpz_mul(trei, trei, SUMDOI[D+pDoi]);
}


void PDOIJOS(mpz_t doi, mpz_t trei, mpz_t *SUMDOI, int pDoi, int D) {//doi e numărul, trei e suma.
mpz_set_ui(doi, 0);//printf("VALBO J\n");
mpz_setbit(doi, pDoi);
mpz_divexact(trei, trei, SUMDOI[D]);
mpz_mul(trei, trei, SUMDOI[D-pDoi]);
}


void PDOIMSUS0(mpz_t doi, mpz_t trei, gmp_ui sumDoi, int S, gmp_ui z, int pDoi) {//Pentru numerele sub 10^52, cu dedicație, unde doiarii sunt sub 64 de biți, și puterile de înmulțire să nu-i conducă peste limită.
if(S + pDoi > 63)
	pDoi = 63 - S;
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_divexact_ui(trei, trei, sumDoi);
mpz_mul_ui(trei, trei, (sumDoi << pDoi) + (z<<pDoi) - 1);
}


void PDOIMJOS0(mpz_t doi, mpz_t trei, gmp_ui sumDoi, int pDoi) {
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_divexact_ui(trei, trei, sumDoi);
mpz_mul_ui(trei, trei, (sumDoi >> pDoi));
}


void PMDOISUS(mpz_t doi, mpz_t trei, gmp_ui sumDoi, mpz_t e1, gmp_ui z, int pDoi) {//Pentru numerele unde doiarii sunt sub 64 de biți, în special cele sub 10^52, și puterile de înmulțire pot duce peste limită.
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_divexact_ui(trei, trei, sumDoi);
mpz_set_ui(e1, sumDoi);
mpz_mul_2exp(e1, e1, pDoi);
mpz_add_ui(e1, e1, (z<<pDoi) - 1);
mpz_mul(trei, trei, e1);
}


void DIVSUBST(mpz_t doi, mpz_t trei, gmp_ui div, gmp_ui SUM) {//Împărțire la factorii primi non-K, non-H, care au suma sub 2^64.
mpz_mul_ui(doi, doi, div);
mpz_divexact_ui(trei, trei, SUM);
}

//FACTOR STRĂIN:
void MULSUBST(mpz_t doi, mpz_t trei, gmp_ui div1, gmp_ui sum1) {//Factorul nu este al numărului. Înmulțire cu putere sub 2^64.
mpz_mul_ui(doi, doi, div1);
mpz_mul_ui(trei, trei, sum1);
}


void MPZMULSUBST(mpz_t doi, mpz_t trei, mpz_t div, mpz_t sum) {//Înmulțire cu o putere primă peste 2^64, când factorul nu este al numărului (nu prea are rost).
mpz_mul(doi, doi, div);
mpz_mul(trei, trei, sum);
}


void MPZMULSUBSTE(mpz_t doi, mpz_t trei, mpz_t div, mpz_t sum) {//Înmulțire cu o putere primă peste 2^64, când factorul nu este al numărului (nu prea are rost).
mpz_mul(doi, doi, div);
mpz_mul(trei, trei, sum);
}


void MPZMULSUBST1(mpz_t doi, mpz_t trei, gmp_ui div1, gmp_ui sum1, gmp_ui sum) {//Factorul este al numărului, înmulțire cu o putere primă sub 2^64, care duce suma peste 2^64. Pentru factorii primi cu sume gmp_ui.
mpz_mul_ui(doi, doi, div1);
mpz_divexact_ui(trei, trei, sum);
mpz_mul_ui(trei, trei, sum1);
}

void MPZMULSUBST2(mpz_t doi, mpz_t trei, mpz_t divdiv, mpz_t divsum, gmp_ui sum) {//Factorul este al numărului, înmulțire cu o putere primă peste 2^64, care duce suma peste 2^64. Pentru factorii primi cu sume gmp_ui.
mpz_mul(doi, doi, divdiv);
mpz_divexact_ui(trei, trei, sum);
mpz_mul(trei, trei, divsum);
}


//FACTORSUBM
void MPZMULSUBSTM(mpz_t doi, mpz_t trei, mpz_t mul, mpz_t mul2) {//Factorii primi mpz_t, înmulțire. Nu se pun la înmulțire factorii care sunt deja ai numărului, pentru că puterile lor trebuie să fie 1.
mpz_mul(doi, doi, mul);
mpz_mul(trei, trei, mul2);
}


void MPZDIVSUBSTM(mpz_t doi, mpz_t trei, mpz_t div, mpz_t div2) {//Tot ei, împărțire.
mpz_mul(doi, doi, div);
mpz_divexact(trei, trei, div2);
}


void MPZDIVSUBST(mpz_t doi, mpz_t trei, gmp_ui div1, gmp_ui sum1, mpz_t sum) {//Pentru factorii primi K, la împărțire, admițând că puterea de substituire va fi sub 2^64.
mpz_mul_ui(doi, doi, div1);
mpz_divexact(trei, trei, sum);
mpz_mul_ui(trei, trei, sum1);
}


void MPZDIVSUBST2(mpz_t doi, mpz_t trei, gmp_ui div1, gmp_ui sum1, gmp_ui sum) {//return;
mpz_mul_ui(doi, doi, div1);
mpz_divexact_ui(trei, trei, sum);
mpz_mul_ui(trei, trei, sum1);
}


void MPZMDIVSUBST(mpz_t doi, mpz_t trei, mpz_t div, mpz_t sum, mpz_t SUM) {//Pentru factorii primi K, la împărțire, admițând că puterea de substituire va fi peste 2^64.
mpz_mul(doi, doi, div);
mpz_divexact(trei, trei, SUM);
mpz_mul(trei, trei, sum);
}


void MPZ2MDIVSUBST(mpz_t doi, mpz_t trei, gmp_ui div, gmp_ui sum, mpz_t SUM) {
mpz_mul_ui(doi, doi, div);
mpz_divexact(trei, trei, SUM);
mpz_mul_ui(trei, trei, sum);
}


void MPZ3MDIVSUBST(mpz_t doi, mpz_t trei, mpz_t div, gmp_ui sum, mpz_t SUM) {
mpz_mul(doi, doi, div);
mpz_divexact(trei, trei, SUM);
mpz_mul_ui(trei, trei, sum);
}


void MPZ4MDIVSUBST(mpz_t doi, mpz_t trei, gmp_ui div, mpz_t sum, mpz_t SUM) {
mpz_mul_ui(doi, doi, div);
mpz_divexact(trei, trei, SUM);
mpz_mul(trei, trei, sum);
}


void MPZMMULSUBST1(mpz_t doi, mpz_t trei, mpz_t div, mpz_t sum, mpz_t SUM) {//Tot K, la înmulțire, când factorul este al numărului, iar puterea și suma trec de 2^64. Din oficiu, suma trece de 2^64, așa sunt factorii primi K, sumele lor sunt peste 64 de biți binari.
mpz_divexact(trei, trei, SUM);
mpz_mul(doi, doi, div);
mpz_mul(trei, trei, sum);
}


void MPZ2MMULSUBST1(mpz_t doi, mpz_t trei, mpz_t div, mpz_t sum, gmp_ui SUM) {
mpz_divexact_ui(trei, trei, SUM);
mpz_mul(doi, doi, div);
mpz_mul(trei, trei, sum);
}


void MPZ3MMULSUBST1(mpz_t doi, mpz_t trei, gmp_ui div, mpz_t sum, mpz_t SUM) {
mpz_divexact(trei, trei, SUM);
mpz_mul_ui(doi, doi, div);
mpz_mul(trei, trei, sum);
}


void MPZ4MMULSUBST1(mpz_t doi, mpz_t trei, gmp_ui div, mpz_t sum, gmp_ui SUM) {
mpz_divexact_ui(trei, trei, SUM);
mpz_mul_ui(doi, doi, div);
mpz_mul(trei, trei, sum);
}


/*
void MPZMMULSUBST1MEM1(mpz_t doi, mpz_t trei, int put, mpz_t *div, mpz_t *sum, gmp_ui *div1, gmp_ui *sum1, int mem, int putImpl, mpz_t SUM) {
//if(lim <= put+putImpl) return;

mpz_divexact(trei, trei, SUM);
if(put+putImpl > mem) {
	mpz_mul(doi, doi, div[put]);
	mpz_mul(trei, trei, sum[putImpl+put]);
	return;
	}
mpz_mul_ui(doi, doi, div1[put]);
mpz_mul_ui(trei, trei, sum1[putImpl+put]);
}*/


int PREZ(gmp_ui a, gmp_ui *b, int c) {
while(1) {
	if(!c--)
		break;
	if(b[c] == a)
		return 1;
	}
	
return 0;
}


void PTMINDOISUS(mpz_t ab, mpz_t sm, gmp_ui sumDoi, int pDoi, int S,  gmp_ui &sum, gmp_ui &abund, int p, mpz_t doi) {//VECUN MINIM
//Bune pentru FACTMSUB.
if(pDoi + S > 63)
	pDoi = 63 - S;

mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
sumDoi <<= pDoi;
abund *= sumDoi;
sum *= (sumDoi + (p<<pDoi) - 1);
mpz_set_ui(ab, abund);
mpz_set_ui(sm, sum);
}


void PTMINDOIJOS(mpz_t ab, mpz_t sm, gmp_ui sumDoi, int pDoi,  gmp_ui &sum, gmp_ui &abund, int p, mpz_t doi) {//VECUN MINIM
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
abund *= sumDoi;
sum *= (sumDoi - (p<<pDoi) + 1);//abund = nm, sum = nr.
mpz_set_ui(ab, abund);
mpz_set_ui(sm, sum);
}

//Cele două de dedesubt nu sunt în redundanţă.
void PTMDOISUS(mpz_t ab, mpz_t sm, gmp_ui sumDoi, int pDoi, /*gmp_ui &sum, gmp_ui &abund,*/ int p, mpz_t e1, mpz_t doi) {//VECUN MINIM
//Înmulţire cu putere de 2, când de sub 2^64 se trece peste, cu termenii abundenţei.
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_set_ui(e1, sumDoi);
mpz_mul_2exp(e1, e1, pDoi);
mpz_mul(ab, ab, e1);//1*2040
mpz_add_ui(e1, e1, (p<<pDoi) - 1);
mpz_mul(sm, sm, e1);//5*2047
}


void PTMDOIJOS(mpz_t ab, mpz_t sm, gmp_ui sumDoi, int pDoi, int p, mpz_t doi) {//VECUN MINIM
//Împărţire cu putere de 2, când s-ar trece cu termenii abundenţei de sub 2^64 mai sus.
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_mul_ui(ab, ab, sumDoi);
mpz_mul_ui(sm, sm, sumDoi - (p<<pDoi) + 1);
}


void PTDOIMSUS(mpz_t ab, mpz_t sm, gmp_ui sumDoi, int pDoi,  gmp_ui p, int S, gmp_ui *SUMDOI, mpz_t doi) {
sumDoi = SUMDOI[S + pDoi];
p <<= pDoi;
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_mul_ui(ab, ab, sumDoi-p-1);
mpz_mul_ui(sm, sm, sumDoi);
}


void PTDOIMJOS(mpz_t ab, mpz_t sm, gmp_ui sumDoi, int pDoi,  gmp_ui p, int S, gmp_ui *SUMDOI, mpz_t doi) {
//sumDoi = SUMDOI[S];
p <<= pDoi;
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_mul_ui(ab, ab, sumDoi);
mpz_mul_ui(sm, sm, sumDoi-p-1);
}


void PTDOISUS(mpz_t ab, mpz_t sm, mpz_t sumdoi, int pDoi, gmp_ui p, int S, mpz_t *SUMDOI, mpz_t e1, mpz_t doi) {//Pentru marile doiuri, cu salt mare.
//mpz_mul_2exp(sumdoi, sumDoi, pDoi);
mpz_set(sumdoi, SUMDOI[S + pDoi]);
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_mul(sm, sm, sumdoi);
mpz_sub_ui(e1, sumdoi, (p<<pDoi) - 1);
mpz_mul(ab, ab, e1);
}


void PTDOIJOS(mpz_t ab, mpz_t sm, mpz_t sumDoi, int pDoi, gmp_ui p, mpz_t e1, mpz_t doi) {
mpz_set_ui(doi, 0);
mpz_setbit(doi, pDoi);
mpz_mul(ab, ab, sumDoi);
mpz_sub_ui(e1, sumDoi, (p<<pDoi) - 1);
mpz_mul(sm, sm, e1);
}


//FACTSUB
//Funcţiile de mai jos sunt de uz restrâns, de folosit la numerele mai mici (ca GIG52), dar şi acolo cu destulă limită.
void PTMULSUBST(mpz_t doi, gmp_ui *div1, gmp_ui *sum1, int put, gmp_ui &sum, gmp_ui &abund) {//Factorul nu este al numărului. Înmulţire.
mpz_mul_ui(doi, doi, div1[put]);
sum *= div1[put];
abund *= sum1[put];
}


void PTMULSUBST1(mpz_t doi, gmp_ui *div1, gmp_ui *sum1, int put, gmp_ui sum, gmp_ui &SUM1, gmp_ui &abund, gmp_ui p) {//Factorul este al numărului. Înmulţire.
mpz_mul_ui(doi, doi, div1[put]);
p = div1[put] * sum;//sum = 121, a = 81, mulPrim = 3, 121*81 + 40.
abund *= p;
SUM1 *= (p + sum1[put-1]);
sum *= (p + sum1[put-1]);
}


void PTDIVSUBST0(mpz_t doi, gmp_ui *div1, gmp_ui *sum1, int put, gmp_ui SUM, gmp_ui &SUM1, gmp_ui &abund, mpz_t ab, mpz_t sm) {//Împărţire.
mpz_mul_ui(doi, doi, div1[put]);
SUM1 *= (SUM - sum1[put-1]);
abund *= SUM;
mpz_set_ui(sm, SUM1);
mpz_set_ui(ab, abund);
}


//FACTSUBM
void PTMPZDIVSUBST1(mpz_t ab, mpz_t sm, gmp_ui *div1, gmp_ui *sum1, int put, gmp_ui &sum,  mpz_t doi) {//Pentru factorii primi gmp_ui (cei care nu au sume mepezetele), la împărțire, admițând că puterea de substituire va fi sub 2^64. Fireşte că va fi aşa, puterea fiind maxim suma, care este sub 2^64.
mpz_mul_ui(doi, doi, div1[put]);
mpz_mul_ui(ab, ab, sum);
mpz_mul_ui(sm, sm, sum - sum1[put-1]);
}


void PTDIVSUBST(mpz_t ab, mpz_t sm, gmp_ui div,  mpz_t doi) {//Împărțire la factorii primi non-K, non-H, care au suma sub 2^64.
mpz_mul_ui(doi, doi, div);
mpz_mul_ui(sm, sm, div++);
mpz_mul_ui(ab, ab, div);
}


//doi = prodnum sau catnum.
void PTMPZMDIVSUBST(mpz_t ab, mpz_t sm, mpz_t *div, mpz_t *sum, int put, mpz_t SUM, mpz_t e1, mpz_t doi) {//Pentru factorii primi K, la împărțire, admițând că puterea de substituire va fi peste 2^64.
mpz_mul(doi, doi, div[put]);
mpz_mul(ab, ab, SUM);
mpz_sub(e1, SUM, sum[put-1]);
mpz_mul(sm, sm, e1);
}


void PTMPZDIVSUBST(mpz_t ab, mpz_t sm, mpz_t a, gmp_ui *div1, gmp_ui *sum1, int put, mpz_t sum, mpz_t doi) {//Pentru factorii primi K, la împărțire, admițând că puterea de substituire va fi sub 2^64.
mpz_mul_ui(doi, doi, div1[put]);
mpz_mul(ab, ab, sum);
mpz_sub_ui(a, sum, sum1[put-1]);
mpz_mul(sm, sm, a);
}


void PTMPZMULSUBST(mpz_t ab, mpz_t sm, mpz_t *div, mpz_t *sum, int put, mpz_t doi) {//Înmulțire cu o putere primă peste 2^64, când factorul nu este al numărului.
mpz_mul(doi, doi, div[put]);
mpz_mul(ab, ab, div[put]);
mpz_mul(sm, sm, sum[put]);
}


void PTMPZMMULSUBST(mpz_t ab, mpz_t sm, gmp_ui *div1, gmp_ui *sum1, int put, mpz_t doi) {//Înmulțire cu o putere primă sub 2^64, când factorul nu este al numărului.
mpz_mul_ui(doi, doi, div1[put]);
mpz_mul_ui(ab, ab, div1[put]);
mpz_mul_ui(sm, sm, sum1[put]);
}


void PTMPZMULSUBST1(mpz_t ab, mpz_t sm, mpz_t e1, gmp_ui *div, gmp_ui *sum, int put, gmp_ui SUM, mpz_t e1, mpz_t doi) {//Factorul este al numărului, înmulțire cu o putere primă care poate duce suma peste 2^64. Puterea de substituire e sub 2^64, dar foarte probabil ca termenii să treacă de 2^64.
mpz_mul_ui(doi, doi, div[put]);
mpz_set_ui(e1, SUM);
mpz_mul_ui(e1, e1, div[put]);
mpz_mul(ab, ab, e1);
mpz_add_ui(e1, e1, sum[put-1]);
mpz_mul(sm, sm, e1);
}


void PTMPZMULSUBST2(mpz_t ab, mpz_t sm, mpz_t e1, mpz_t *divdiv, mpz_t *divsum, int put, mpz_t e1, gmp_ui SUM, mpz_t doi) {//Factorul este al numărului, înmulțire cu o putere primă peste 2^64, care duce suma peste 2^64. Pentru factorii primi cu sume gmp_ui.
mpz_mul(doi, doi, divdiv[put]);
mpz_mul_ui(e1, divdiv[put], SUM);
mpz_mul(ab, ab, e1);
mpz_add(e1, e1, divsum[put-1]);
mpz_mul(sm, sm, e1);
}


void PTMPZMULSUBSTM1(mpz_t ab, mpz_t sm,  gmp_ui *div1, gmp_ui *sum1, int put, gmp_ui sum, mpz_t doi) {//Factorul este al numărului, înmulțire cu o putere primă care să nu ducă suma peste 2^64.
mpz_mul_ui(doi, doi, div1[put]);
sum *= div1[put];
mpz_mul_ui(ab, ab, sum);
mpz_mul_ui(sm, sm, sum + sum1[put-1]);
}


void PTMPZMMULSUBST1(mpz_t ab, mpz_t sm, mpz_t *div, mpz_t *sum, int put, mpz_t SUM, mpz_t e1, mpz_t doi) {//Factorii primi K, la înmulțire, când factorul este al numărului, iar puterea și suma trec de 2^64. Suma trece din oficiu de 2^64.
mpz_mul(doi, doi, div[put]);
mpz_mul(e1, div[put], SUM);
mpz_mul(ab, ab, e1);
mpz_add(e1, sum[put-1], e1);
mpz_mul(sm, sm, e1);
}


void PTMPZ2MMULSUBST1(mpz_t ab, mpz_t sm, mpz_t *div, mpz_t *sum, int put, gmp_ui SUM, mpz_t e1, mpz_t doi) {
mpz_mul(doi, doi, div[put]);
mpz_mul_ui(e1, div[put], SUM);
mpz_mul(ab, ab, e1);
mpz_add(e1, sum[put-1], e1);
mpz_mul(sm, sm, e1);
}


void PTMPZMULMSUBST1(mpz_t ab, mpz_t sm, mpz_t *div, mpz_t *sum, int put, mpz_t SUM, mpz_t e1, mpz_t doi) {//Tot K, la înmulțire, când factorul este al numărului, iar puterea este sub 2^64. Suma trece din oficiu de 2^64.
mpz_mul(doi, doi, div[put]);
mpz_mul(e1, SUM, div[put]);
mpz_mul(ab, ab, e1);
mpz_add(e1, e1, sum[put-1]);
mpz_mul(sm, sm, e1);
}


void PTMPZMULSUBSTM(mpz_t ab, mpz_t sm, mpz_t mul, mpz_t mul1, mpz_t doi) {//Factorii primi mpz_t, înmulțire. Nu se pun la înmulțire factorii care sunt deja ai numărului, pentru că puterile lor trebuie să fie 1.
mpz_mul(doi, doi, mul);
mpz_mul(ab, ab, mul);
mpz_mul(sm, sm, mul1);//mul1 = mul+1 din celălalt vector mpz_t.
}


void PTMPZDIVSUBSTM(mpz_t ab, mpz_t sm, mpz_t div, mpz_t div1, mpz_t doi) {//Tot ei, împărțire.
mpz_mul(doi, doi, div);
mpz_mul(sm, sm, div);
mpz_mul(ab, ab, div1);
}


#endif