#ifndef _ZU_H
#define _ZU_H

#include "/TOLVECUN.h"
#define PRAGW 1
#define TMODP 4
#define TMODF 4

//MODSPRIMICE:
//MODPRIM:
int USUSMODPRIM4BIF3(int W,  int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui *modpdiv1, gmp_ui *modpsum1, int modpmem) {

		if(mpz_divisible_ui_p(unu, A2)) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				
			
			MODPINTSUS(unu, p, A2, doi, 2, j1, j2, modpdiv1, modpsum1, Q, F2);
			
		}
return 1;
}


void USUSMODPRIM4BIF4(int W0,  int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t *modpdiv, mpz_t *modpsum, gmp_ui *modpdiv1, gmp_ui *modpsum1, int modpmem) {
if(!h ) {
	if(mpz_divisible_ui_p(unu, A20)) {
		mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
		SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
		if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
		MODPMPZSUSE(unu, p, A20, d, modpmem, 0, j1, j2, modpdiv1, modpsum1, Q, F2);	
		}	
	} else if(mpz_divisible_ui_p(p, A20)) {
		MODPMPZSUSE(unu, p, A20, d, modpmem, 0, j1, j2, modpdiv1, modpsum1, Q, F2);
		}
}



int USUSMODPRIM5BIF3(int W,  int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K,  char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui *modpdiv1, gmp_ui *modpsum1, int modpmem) {

		if(mpz_divisible_ui_p(unu, A2)) {

				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				
				
			
			MODPINTSUS(unu, p, A2, doi, 2, j1, j2, modpdiv1, modpsum1, Q, F2);
			}
		
	return 1;
}


void USUSMODPRIM5BIF4(int W0,  int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t *modpdiv, mpz_t *modpsum, gmp_ui *modpdiv1, gmp_ui *modpsum1, int modpmem) {
if(!h ) {
	if(mpz_divisible_ui_p(unu, A20)) {
		mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
		SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
		if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
		MODPMPZSUSE(unu, p, A20, d, modpmem, 0, j1, j2, modpdiv1, modpsum1, Q, F2);	
		}	
	} else if(mpz_divisible_ui_p(p, A20)) {
		MODPMPZSUSE(unu, p, A20, d, modpmem, 0, j1, j2, modpdiv1, modpsum1, Q, F2);
		}
}


int USUSMODPRIM6BIF3(int W,  int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K,  char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui *modpdiv1, gmp_ui *modpsum1, int modpmem) {

		if(mpz_divisible_ui_p(unu, A2)) {

				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;

			
			MODPINTSUS(unu, p, A2, doi, 2, j1, j2, modpdiv1, modpsum1, Q, F2);
			}
		
	return 1;
}


void USUSMODPRIM6BIF4(int W0,  int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t *modpdiv, mpz_t *modpsum, gmp_ui *modpdiv1, gmp_ui *modpsum1, int modpmem) {
if(!h ) {
	if(mpz_divisible_ui_p(unu, A20)) {
		mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
		SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
		if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
		MODPMPZSUSE(unu, p, A20, d, modpmem, 0, j1, j2, modpdiv1, modpsum1, Q, F2);	
		}	
	} else if(mpz_divisible_ui_p(p, A20)) {
		MODPMPZSUSE(unu, p, A20, d, modpmem, 0, j1, j2, modpdiv1, modpsum1, Q, F2);
		}
}


int USUSMODPRIM7BIF3(int W,  int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui *modpdiv1, gmp_ui *modpsum1, int modpmem) {

		if(mpz_divisible_ui_p(unu, A2)) {

				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				
				
			
			MODPINTSUS(unu, p, A2, doi, 2, j1, j2, modpdiv1, modpsum1, Q, F2);
			
	}
return 1;
}


void USUSMODPRIM7BIF4(int W0,  int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t *modpdiv, mpz_t *modpsum, gmp_ui *modpdiv1, gmp_ui *modpsum1, int modpmem) {
if(!h ) {
	if(mpz_divisible_ui_p(unu, A20)) {
		mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
		NUMESUMV(p, d, b, b1, D, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
		if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
		MODPMPZSUSE(unu, p, A20, d, modpmem, 0, j1, j2, modpdiv1, modpsum1, Q, F2);	
		}	
	} else if(mpz_divisible_ui_p(p, A20)) {
		MODPMPZSUSE(unu, p, A20, d, modpmem, 0, j1, j2, modpdiv1, modpsum1, Q, F2);
		}
}



int UJOSMODPRIM4BIF3(int W,  int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui *modpdiv1, gmp_ui *modpsum1, int modpmem) {
if(mpz_divisible_ui_p(unu, AP)) {
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
		if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;				
		
	
	MODPINTJOS(unu, p, A2, doi, 3, j1, j2, modpdiv1, modpsum1, Q, F2);	
	}

return 1;
}


void UJOSMODPRIM4BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K,  char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t *modpdiv, mpz_t *modpsum, gmp_ui *modpdiv1, gmp_ui *modpsum1, int modpmem) {
if(mpz_divisible_ui_p(unu, AP0)) {
	if(!h) {
		mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
		SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
		if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;	
	}
	
	MODPMPZJOSE(unu, p, A20, d, modpmem, 0, j1, j2, modpdiv[1], modpdiv1, modpsum1, Q, F2);			
	}
}



int UJOSMODPRIM5BIF3(int W,   int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui *modpdiv1, gmp_ui *modpsum1, int modpmem) {

if(mpz_divisible_ui_p(unu, AP)) {
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
		if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
	
	MODPINTJOS(unu, p, A2, doi, 3, j1, j2, modpdiv1, modpsum1, Q, F2);	
	}
	
return 1;
}


void UJOSMODPRIM5BIF4(int W0,   int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t *modpdiv, mpz_t *modpsum, gmp_ui *modpdiv1, gmp_ui *modpsum1, int modpmem) {

if(mpz_divisible_ui_p(unu, AP0)) {
	if(!h) {
		mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
		SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
		if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;	
	}
	
	MODPMPZJOSE(unu, p, A20, d, modpmem, 0, j1, j2, modpdiv[1], modpdiv1, modpsum1, Q, F2);			
	}
}



int UJOSMODPRIM6BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui *modpdiv1, gmp_ui *modpsum1, int modpmem) {
if(mpz_divisible_ui_p(unu, AP)) {
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem,  q[u]);
		if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;				
		
	
	MODPINTJOS(unu, p, A2, doi, 3, j1, j2, modpdiv1, modpsum1, Q, F2);	
	}

return 1;
}


void UJOSMODPRIM6BIF4(int W0,   int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t *modpdiv, mpz_t *modpsum, gmp_ui *modpdiv1, gmp_ui *modpsum1, int modpmem) {

if(mpz_divisible_ui_p(unu, AP0)) {
	if(!h) {
		mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
		SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
		if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;	
	}
	
	MODPMPZJOSE(unu, p, A20, d, modpmem, 0, j1, j2, modpdiv[1], modpdiv1, modpsum1, Q, F2);			
	}
}



int UJOSMODPRIM7BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui *modpdiv1, gmp_ui *modpsum1, int modpmem) {
if(mpz_divisible_ui_p(unu, AP)) {
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[j], 0);
		if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;				
		
	
	MODPINTJOS(unu, p, A2, doi, 3, j1, j2, modpdiv1, modpsum1, Q, F2);	
	}

return 1;
}


void UJOSMODPRIM7BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t *modpdiv, mpz_t *modpsum, gmp_ui *modpdiv1, gmp_ui *modpsum1, int modpmem) {
if(mpz_divisible_ui_p(unu, AP0)) {
	if(!h) {
		mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
		NUMESUMV(p, d, b, b1, D, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
		if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;	
	}
	
	MODPMPZJOSE(unu, p, A20, d, modpmem, 0, j1, j2, modpdiv[1], modpdiv1, modpsum1, Q, F2);			
	}
}


//MODPRIMULE:
int USUSMODPRIMULE4BIF3(int W, int M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;							
			MODPINTSUS2(unu, A2, doi, sum2, j1, j2, Q, F2);
			}		
return 0;//1 ori zero.
}


void USUSMODPRIMULE4BIF4(int W0, int M0, int M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));			
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZSUSE(unu, p, A20, d, mem[M1], 0, j1, j2, div1[M1], sum1[M1], Q, F2);
			}
	}
else {
		 if(mpz_divisible_ui_p(p, A20)) {			
			MODPMPZSUSE(unu, p, A20, d, mem[M1], 0, j1, j2, div1[M1], sum1[M1], Q, F2);			
			}
	}
}



int USUSMODPRIMULE5BIF3(int W, int M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;				
			MODPINTSUS2(unu, A2, doi, sum2, j1, j2, Q, F2);			
		}
	return 0;//1 ori zero.
}


void USUSMODPRIMULE5BIF4(int W0, int M0, int M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZSUSE(unu, p, A20, d, mem[M1], 0, j1, j2, div1[M1], sum1[M1], Q, F2);
			}
	}
else {
		 if(mpz_divisible_ui_p(p, A20)) {
			MODPMPZSUSE(unu, p, A20, d, mem[M1], 0, j1, j2, div1[M1], sum1[M1], Q, F2);			
			}
	}
}


int USUSMODPRIMULE6BIF3(int W, int M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;		
			MODPINTSUS2(unu, A2, doi, sum2, j1, j2, Q, F2);
			}
	return 0;//1 ori zero.
}


void USUSMODPRIMULE6BIF4(int W0, int M0, int M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZSUSE(unu, p, A20, d, mem[M1], 0, j1, j2, div1[M1], sum1[M1], Q, F2);
			}
	}
else {
		 if(mpz_divisible_ui_p(p, A20)) {
			MODPMPZSUSE(unu, p, A20, d, mem[M1], 0, j1, j2, div1[M1], sum1[M1], Q, F2);			
			}
	}
}




int USUSMODPRIMULE7BIF3(int W, int M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui sum2, int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;			
			MODPINTSUS2(unu, A2, doi, sum2, j1, j2, Q, F2);
	}
return 0;//1 ori zero.
}


void USUSMODPRIMULE7BIF4(int W0, int M0, int M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui sum2, int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			NUMESUMV(p, d, b, b1, D, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZSUSE(unu, p, A20, d, mem[M1], 0, j1, j2, div1[M1], sum1[M1], Q, F2);
			}
	}
else {
		 if(mpz_divisible_ui_p(p, A20)) {
			MODPMPZSUSE(unu, p, A20, d, mem[M1], 0, j1, j2, div1[M1], sum1[M1], Q, F2);			
			}
	}
}


void USUSMODSPRIMULE4BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);		
			SUMINT1(p, unu, trei, A2, 1+A2, sum2, d, d1, doi, Q, F2);
		}
}


void USUSMODSPRIMULE4BIF4(int M0, int M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			SUMMPZE(p, unu, trei, A20, mem[M1], d, d1, doi, div1[M1], sum1[M1], Q, F2);
		}
}



void USUSMODSPRIMULE5BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);			
			SUMINT1(p, unu, trei, A2, 1+A2, sum2, d, d1, doi, Q, F2);
			}
}


void USUSMODSPRIMULE5BIF4(int M0, int M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			SUMMPZE(p, unu, trei, A20, mem[M1], d, d1, doi, div1[M1], sum1[M1], Q, F2);
		}
}




void USUSMODSPRIMULE6BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);			
			SUMINT1(p, unu, trei, A2, 1+A2, sum2, d, d1, doi, Q, F2);
		}
}


void USUSMODSPRIMULE6BIF4(int M0, int M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {

		if(mpz_divisible_ui_p(unu, A20)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			SUMMPZE(p, unu, trei, A20, mem[M1], d, d1, doi, div1[M1], sum1[M1], Q, F2);
		}
}



void USUSMODSPRIMULE7BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui sum2, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
			SUMINT1(p, unu, trei, A2, 1+A2, sum2, d, d1, doi, Q, F2);
			}
}


void USUSMODSPRIMULE7BIF4(int M0, int M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui sum2, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			SUMMPZE(p, unu, trei, A20, mem[M1], d, d1, doi, div1[M1], sum1[M1], Q, F2);
		}
}

//UMODSPRIM 4-7:


void USUSMODSPRIME4BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);				
			SUMINT(p, unu, trei, A2, 2, d, d1, doi, div1[M], sum1[M], Q, F2);
			}		
}


void USUSMODSPRIME4BIF4(int M0, int M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			SUMMPZE(p, unu, trei, A20, mem[M1], d, d1, doi, div1[M1], sum1[M1], Q, F2);
		}
}



void USUSMODSPRIME5BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	if(mpz_divisible_ui_p(unu, A2)) {
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);		
		SUMINT(p, unu, trei, A2, 2, d, d1, doi, div1[M], sum1[M], Q, F2);
		}
}


void USUSMODSPRIME5BIF4(int M0, int M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			SUMMPZE(p, unu, trei, A20, mem[M1], d, d1, doi, div1[M1], sum1[M1], Q, F2);
		}
}


void USUSMODSPRIME6BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);				
			SUMINT(p, unu, trei, A2, 2, d, d1, doi, div1[M], sum1[M], Q, F2);
		}
}


void USUSMODSPRIME6BIF4(int M0, int M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			SUMMPZE(p, unu, trei, A20, mem[M1], d, d1, doi, div1[M1], sum1[M1], Q, F2);

		}
}


void USUSMODSPRIME7BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
			SUMINT(p, unu, trei, A2, 2, d, d1, doi, div1[M], sum1[M], Q, F2);
			}
}


void USUSMODSPRIME7BIF4(int M0, int M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			SUMMPZE(p, unu, trei, A20, mem[M1], d, d1, doi, div1[M1], sum1[M1], Q, F2);
		}
}


void UJOSMODSPRIME4BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, AP)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
			SUMINTJOS(p, unu, trei, A2, 3, d, d1, doi, div1[M], sum1[M], Q, F2);			
		}
}


void UJOSMODSPRIME4BIF4(int M0, int M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, AP0)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			SUMMPZJOSE(p, unu, trei, A20, mem[M1], d, d1, doi, div[M0][1], div1[M1], sum1[M1], Q, F2);
			}
}


void UJOSMODSPRIME5BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, AP)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
			SUMINTJOS(p, unu, trei, A2, 3, d, d1, doi, div1[M], sum1[M], Q, F2);			
		}
}


void UJOSMODSPRIME5BIF4(int M0, int M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, AP0)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			SUMMPZJOSE(p, unu, trei, A20, mem[M1], d, d1, doi, div[M0][1], div1[M1], sum1[M1], Q, F2);
			}		
}



void UJOSMODSPRIME6BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, AP)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
			SUMINTJOS(p, unu, trei, A2, 3, d, d1, doi, div1[M], sum1[M], Q, F2);
			}		
}

void UJOSMODSPRIME6BIF4(int M0, int M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, AP0)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			SUMMPZJOSE(p, unu, trei, A20, mem[M1], d, d1, doi, div[M0][1], div1[M1], sum1[M1], Q, F2);
			}		
}




void UJOSMODSPRIME7BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, AP)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);				
			SUMINTJOS(p, unu, trei, A2, 3, d, d1, doi, div1[M], sum1[M], Q, F2);			
		}
}


void UJOSMODSPRIME7BIF4(int M0, int M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, AP0)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);				
				}

			SUMMPZJOSE(p, unu, trei, A20, mem[M1], d, d1, doi, div[M0][1], div1[M1], sum1[M1], Q, F2);
			}
}



//MODPRIM:
void USUSMODPRIM1(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, gmp_ui *q, gmp_ui *modpdiv1, gmp_ui *modpsum1) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		
			if(mpz_divisible_ui_p(unu, A2)) {	
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					SMV(p, d, b, b1, D, H, u, div1, sum1, q[u]);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;				

				MODPINTSUS(unu, p, A2, doi, 2, j1, j2, modpdiv1, modpsum1, Q, F2);
				}			

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void USUSMODPRIM2(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q, gmp_ui *modpdiv1, gmp_ui *modpsum1) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		
			if(mpz_divisible_ui_p(unu, A2)) {		
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMPURG1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;				

				MODPINTSUS(unu, p, A2, doi, 2, j1, j2, modpdiv1, modpsum1, Q, F2);				
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODPRIM3(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q, gmp_ui *modpdiv1, gmp_ui *modpsum1) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		
			if(mpz_divisible_ui_p(unu, A2)) {				
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;				

				MODPINTSUS(unu, p, A2, doi, 2, j1, j2, modpdiv1, modpsum1, Q, F2);
			}
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODPRIM4(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, mpz_t *modpdiv, mpz_t *modpsum, gmp_ui *modpdiv1, gmp_ui *modpsum1, gmp_ui *modpdiv2, gmp_ui *modpsum2, int modpmem1, int modpmem2) {
	//PURGANTE(C, C1, E);

	while(1) {
		mpz_set_str(unu, Q, 10);
		if(USUSMODPRIM4BIF3(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q, modpdiv1, modpsum1, modpmem1))
			USUSMODPRIM4BIF4(W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void USUSMODPRIM5(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, mpz_t *modpdiv, mpz_t *modpsum, gmp_ui *modpdiv1, gmp_ui *modpsum1, gmp_ui *modpdiv2, gmp_ui *modpsum2, int modpmem1, int modpmem2) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(USUSMODPRIM5BIF3(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q, modpdiv1, modpsum1, modpmem1))
			USUSMODPRIM5BIF4(W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODPRIM6(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, mpz_t *modpdiv, mpz_t *modpsum, gmp_ui *modpdiv1, gmp_ui *modpsum1, gmp_ui *modpdiv2, gmp_ui *modpsum2, int modpmem1, int modpmem2) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(USUSMODPRIM6BIF3(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q, modpdiv1, modpsum1, modpmem1))
			USUSMODPRIM6BIF4(W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODPRIM7(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, mpz_t *modpdiv, mpz_t *modpsum, gmp_ui *modpdiv1, gmp_ui *modpsum1, gmp_ui *modpdiv2, gmp_ui *modpsum2, int modpmem1, int modpmem2) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(USUSMODPRIM7BIF3(W, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, H, K, Q, F2, 0, j1, j2, p, q, modpdiv1, modpsum1, modpmem1))
			USUSMODPRIM7BIF4(W0, -1, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, H, K, Q, F2, 0, j1, j2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODPRIM8(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q, gmp_ui *modpdiv1, gmp_ui *modpsum1) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		
			if(mpz_divisible_ui_p(unu, A2)) {		
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, u, div1, sum1, q[u], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;				

				MODPINTSUS(unu, p, A2, doi, 2, j1, j2, modpdiv1, modpsum1, Q, F2);
				
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODPRIM1(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, gmp_ui *q, gmp_ui *modpdiv1, gmp_ui *modpsum1) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		
		if(mpz_divisible_ui_p(unu, AP)) {				
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SMV(p, d, b, b1, D, H, u, div1, sum1, q[u]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;				
				MODPINTJOS(unu, p, A2, doi, 3, j1, j2, modpdiv1, modpsum1, Q, F2);
			
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODPRIM2(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q, gmp_ui *modpdiv1, gmp_ui *modpsum1) {

	while(1) {
		mpz_set_str(unu, Q, 10);
		
			if(mpz_divisible_ui_p(unu, AP)) {	
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMPURG1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					}					

				MODPINTJOS(unu, p, A2, doi, 3, j1, j2, modpdiv1, modpsum1, Q, F2);				
		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODPRIM3(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q, gmp_ui *modpdiv1, gmp_ui *modpsum1) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		
			if(mpz_divisible_ui_p(unu, AP)) {
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;										

				MODPINTJOS(unu, p, A2, doi, 3, j1, j2, modpdiv1, modpsum1, Q, F2);
				
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}



void UJOSMODPRIM4(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, gmp_ui AP, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, mpz_t *modpdiv, mpz_t *modpsum, gmp_ui *modpdiv1, gmp_ui *modpsum1, gmp_ui *modpdiv2, gmp_ui *modpsum2, int modpmem1, int modpmem2) {
	//PURGANTE(C, C1, E);
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(UJOSMODPRIM4BIF3(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q, modpdiv1, modpsum1, modpmem1))
			UJOSMODPRIM4BIF4(W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UJOSMODPRIM5(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, gmp_ui AP, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, mpz_t *modpdiv, mpz_t *modpsum, gmp_ui *modpdiv1, gmp_ui *modpsum1, gmp_ui *modpdiv2, gmp_ui *modpsum2, int modpmem1, int modpmem2) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(UJOSMODPRIM5BIF3(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q, modpdiv1, modpsum1, modpmem1))
			UJOSMODPRIM5BIF4(W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UJOSMODPRIM6(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, gmp_ui AP, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, mpz_t *modpdiv, mpz_t *modpsum, gmp_ui *modpdiv1, gmp_ui *modpsum1, gmp_ui *modpdiv2, gmp_ui *modpsum2, int modpmem1, int modpmem2) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(UJOSMODPRIM6BIF3(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q, modpdiv1, modpsum1, modpmem1))
			UJOSMODPRIM6BIF4(W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UJOSMODPRIM7(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, gmp_ui AP, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, mpz_t *modpdiv, mpz_t *modpsum, gmp_ui *modpdiv1, gmp_ui *modpsum1, gmp_ui *modpdiv2, gmp_ui *modpsum2, int modpmem1, int modpmem2) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(UJOSMODPRIM7BIF3(W, h = 0, b, b1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, H, K, Q, F2, 0, j1, j2, p, q, modpdiv1, modpsum1, modpmem1))
			UJOSMODPRIM7BIF4(W0, -1, b, b1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, H, K, Q, F2, 0, j1, j2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UJOSMODPRIM8(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q, gmp_ui *modpdiv1, gmp_ui *modpsum1) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		
			if(mpz_divisible_ui_p(unu, AP)) {
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, u, div1, sum1, q[u], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
									

				MODPINTJOS(unu, p, A2, doi, 3, j1, j2, modpdiv1, modpsum1, Q, F2);
				}
		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}



void UMODPRIM(char *Q, long PP2, FILE *f1, int W, int f, int W0, int f0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, gmp_ui AP, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, mpz_t p, mpz_t *q, gmp_ui *q0, int &sus, mpz_t *modpdiv, mpz_t *modpsum, gmp_ui *modpdiv1, gmp_ui *modpsum1, gmp_ui *modpdiv2, gmp_ui *modpsum2, int modpmem1, int modpmem2, int dir) {
	if(dir) {
		sus < 55? USUSMODPRIM1(Q, PP2, f1, W, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, F2, 0, 0, 0, p, q0, modpdiv1, modpsum1) 
		: sus < 73? USUSMODPRIM2(Q, PP2, f1, W, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, F2, 0, 0, 0, p, q, modpdiv1, modpsum1) 
			: sus < 213? USUSMODPRIM3(Q, PP2, f1, W, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, F2, 0, 0, 0, p, q, modpdiv1, modpsum1)
			: sus < 223? USUSMODPRIM8(Q, PP2, f1, W, f, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div1, sum1, D, E, H, F2, 0, 0, 0, p, q, modpdiv1, modpsum1) 
				: sus < 243? USUSMODPRIM4(Q, PP2, f1, W, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, F2, 0, 0, 0, 0, p, q, modpdiv, modpsum, modpdiv1, modpsum1, modpdiv2, modpsum2, modpmem1, modpmem2) 
					: sus < 503? USUSMODPRIM5(Q, PP2, f1, W, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, F2, 0, 0, 0, 0, p, q, modpdiv, modpsum, modpdiv1, modpsum1, modpdiv2, modpsum2, modpmem1, modpmem2)
					: USUSMODPRIM6(Q, PP2, f1, W, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, F2, 0, 0, 0, 0, p, q, modpdiv, modpsum, modpdiv1, modpsum1, modpdiv2, modpsum2, modpmem1, modpmem2);
		} else {
		sus < 55? UJOSMODPRIM1(Q, PP2, f1, W, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, F2, 0, 0, 0, p, q0, modpdiv1, modpsum1) 
		: sus < 73? UJOSMODPRIM2(Q, PP2, f1, W, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, F2, 0, 0, 0, p, q, modpdiv1, modpsum1) 
			: sus < 213? UJOSMODPRIM3(Q, PP2, f1, W, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, F2, 0, 0, 0, p, q, modpdiv1, modpsum1)
			: sus < 223? UJOSMODPRIM8(Q, PP2, f1, W, f, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, E, H, F2, 0, 0, 0, p, q, modpdiv1, modpsum1) 
				: sus < 243? UJOSMODPRIM4(Q, PP2, f1, W, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, AP, AP0, div, sum, div1, sum1, mem, D, E, H, K, F2, 0, 0, 0, 0, p, q, modpdiv, modpsum, modpdiv1, modpsum1, modpdiv2, modpsum2, modpmem1, modpmem2) 
					: sus < 503? UJOSMODPRIM5(Q, PP2, f1, W, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, AP, AP0, div, sum, div1, sum1, mem, D, E, H, K, F2, 0, 0, 0, 0, p, q, modpdiv, modpsum, modpdiv1, modpsum1, modpdiv2, modpsum2, modpmem1, modpmem2)
					: UJOSMODPRIM6(Q, PP2, f1, W, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, AP, AP0, div, sum, div1, sum1, mem, D, E, H, K, F2, 0, 0, 0, 0, p, q, modpdiv, modpsum, modpdiv1, modpsum1, modpdiv2, modpsum2, modpmem1, modpmem2);
		}
}


//MODPRIM non-H:
void USUSMODPRIMULE1(char *Q, long PP2, FILE *f1, int M, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui sum2, int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, gmp_ui *q) {
/*
char t[8][1920];
int i = 1, i1 = 1, i2;
strcpy(t[0], Q);

while(i1) {
	while(i < TMODP) {
		fgets(t[i++], 1920, f1);
		if(!(ftell(f1) ^ PP2)) {
			i1 = 0;
			break;
			}
		}
	
	#pragma omp parallel for schedule(dynamic, 1)
	for(i2 = 0; i2 < i; i2++) {//8 = i
		mpz_set_str(unu, t[i2], 10);
		
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		#pragma omp single nowait
		
			if(mpz_divisible_ui_p(p, A2)) {				
				SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;				
				//#pragma omp critical
				MODPINTSUS2(unu, A2, doi, sum2, j1, j2, Q, F2);
				}
		}

	i = 0;	
	}

return;*/

	while(1) {
		mpz_set_str(unu, Q, 10);
			if(mpz_divisible_ui_p(unu, A2)) {				
				mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
				SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) continue;			
				MODPINTSUS2(unu, A2, doi, sum2, j1, j2, Q, F2);				
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void USUSMODPRIMULE2(char *Q, long PP2, FILE *f1, int M, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui sum2, int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {

/*
char t[8][1920];
int i = 1, i1 = 1, i2;
strcpy(t[0], Q);

while(i1) {
	while(i < TMODP) {
		fgets(t[i++], 1920, f1);
		if(!(ftell(f1) ^ PP2)) {
			i1 = 0;
			break;
			}
		}
	
	#pragma omp parallel for schedule(dynamic, 1)
	for(i2 = 0; i2 < i; i2++) {//8 = i
		mpz_set_str(unu, t[i2], 10);
		
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		
			if(mpz_divisible_ui_p(p, A2)) {
				
					NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					
				}
				
				MODPINTSUS(unu, p, A2, doi, 2, j1, j2, div1[M], sum1[M], Q, F2);
				}
			}
		}

	i = 0;
	
	}

return;
*/
	while(1) {
		mpz_set_str(unu, Q, 10);
			if(mpz_divisible_ui_p(unu, A2)) {				
				mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
				NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) continue;			
				MODPINTSUS2(unu, A2, doi, sum2, j1, j2, Q, F2);				
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void USUSMODPRIMULE3(char *Q, long PP2, FILE *f1, int M, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui sum2, int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
/*
char t[8][1920];
int i = 1, i1 = 1, i2;
strcpy(t[0], Q);
printf("LATTENGITTER\n");

while(i1) {
	while(i < TMODP) {
		fgets(t[i++], 1920, f1);
		if(!(ftell(f1) ^ PP2)) {
			i1 = 0;
			break;
			}
		}
	
	#pragma omp parallel for private(f) schedule(dynamic, 1)
	for(i2 = 0; i2 < i; i2++) {//8 = i
		mpz_set_str(unu, t[i2], 10);
		
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		//#pragma omp single nowait
		
				gmp_printf("%d %llu %Zd\n", f, A2, p);
			//if(1==2)
			if(mpz_divisible_ui_p(p, A2)) {
				//#pragma omp single nowait
				//if(1==2)
				
					NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					
				}
				
				MODPINTSUS2(unu, A2, doi, sum2, j1, j2, Q, F2);
				}
			}
		}

	i = 0;
	
	}

return;*/
	while(1) {
		mpz_set_str(unu, Q, 10);
			if(mpz_divisible_ui_p(unu, A2)) {				
				mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));				
				NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) continue;			
				MODPINTSUS2(unu, A2, doi, sum2, j1, j2, Q, F2);				
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void USUSMODPRIMULE4(char *Q, long PP2, FILE *f1, int W, int M, int M0, int M1, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui sum2, int *mem, int D, int E, int H, int K, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
	//PURGANTE(C, C1, E);
	/*
	
char t[8][1920];
int i = 1, i1 = 1, i2;
strcpy(t[0], Q);

while(i1) {
	while(i < TMODP) {
		fgets(t[i++], 1920, f1);
		if(!(ftell(f1) ^ PP2)) {
			i1 = 0;
			break;
			}
		}
	
	#pragma omp parallel for schedule(dynamic, 1)
	for(i2 = 0; i2 < i; i2++) {//8 = i
		mpz_set_str(unu, t[i2], 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(USUSMODPRIMULE4BIF1(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, sum2, mem, D, E, H, K, Q, F2, 0, j1, j2, g, p, q[g]))
			USUSMODPRIMULE4BIF2(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, sum2, mem, D, E, H, K, Q, F2, 0, j1, j2, g, p, q[g], h);
		}

	i = 0;
	
	}

return;*/

	while(1) {
		mpz_set_str(unu, Q, 10);
		if(USUSMODPRIMULE4BIF3(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, sum2, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q))
			USUSMODPRIMULE4BIF4(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, sum2, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void USUSMODPRIMULE5(char *Q, long PP2, FILE *f1, int W, int M, int M0, int M1, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui sum2, int *mem, int D, int E, int H, int K, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
/*

char t[8][1920];
int i = 1, i1 = 1, i2;
strcpy(t[0], Q);

while(i1) {
	while(i < TMODP) {
		fgets(t[i++], 1920, f1);
		if(!(ftell(f1) ^ PP2)) {
			i1 = 0;
			break;
			}
		}
	
	#pragma omp parallel for schedule(dynamic, 1)
	for(i2 = 0; i2 < i; i2++) {//8 = i
		mpz_set_str(unu, t[i2], 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(USUSMODPRIMULE5BIF1(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, sum2, mem, D, E, H, K, Q, F2, 0, j1, j2, g, p, q[g]))
			USUSMODPRIMULE5BIF2(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, sum2, mem, D, E, H, K, Q, F2, 0, j1, j2, g, p, q[g], h);
		}

	i = 0;
	
	}

return;*/

	while(1) {
		mpz_set_str(unu, Q, 10);
		if(USUSMODPRIMULE5BIF3(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, sum2, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q))
			USUSMODPRIMULE5BIF4(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, sum2, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODPRIMULE6(char *Q, long PP2, FILE *f1, int W, int M, int M0, int M1, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui sum2, int *mem, int D, int E, int H, int K, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
/*
char t[8][1920];
int i = 1, i1 = 1, i2;
strcpy(t[0], Q);

while(i1) {
	while(i < TMODP) {
		fgets(t[i++], 1920, f1);
		if(!(ftell(f1) ^ PP2)) {
			i1 = 0;
			break;
			}
		}
	
	#pragma omp parallel for schedule(dynamic, 1)
	for(i2 = 0; i2 < i; i2++) {//8 = i
		mpz_set_str(unu, t[i2], 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(USUSMODPRIMULE6BIF1(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, sum2, mem, D, E, H, K, Q, F2, 0, j1, j2, g, p, q[g]))
			USUSMODPRIMULE6BIF2(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, sum2, mem, D, E, H, K, Q, F2, 0, j1, j2, g, p, q[g], h);
		}

	i = 0;
	
	}

return;*/

	while(1) {
		mpz_set_str(unu, Q, 10);
		if(USUSMODPRIMULE6BIF3(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, sum2, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q))
			USUSMODPRIMULE6BIF4(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, sum2, mem, D, E, H, K, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODPRIMULE7(char *Q, long PP2, FILE *f1, int W, int M, int M0, int M1, int W0, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui sum2, int *mem, int D, int H, int K, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
/*
char t[8][1920];
int i = 1, i1 = 1, i2;
strcpy(t[0], Q);

while(i1) {
	while(i < TMODP) {
		fgets(t[i++], 1920, f1);
		if(!(ftell(f1) ^ PP2)) {
			i1 = 0;
			break;
			}
		}
	
	#pragma omp parallel for schedule(dynamic, 1)
	for(i2 = 0; i2 < i; i2++) {//8 = i
		mpz_set_str(unu, t[i2], 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(USUSMODPRIMULE7BIF1(W, M, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, sum2, mem, D, H, K, Q, F2, 0, j1, j2, g, p, q[g]))
			USUSMODPRIMULE7BIF2(W0, M0, M1, -1, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, sum2, mem, D, H, K, Q, F2, 0, j1, j2, g, p, q[g], h);
		}

	i = 0;
	
	}

return;*/

	while(1) {
		mpz_set_str(unu, Q, 10);
		if(USUSMODPRIMULE7BIF3(W, M, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, sum2, mem, D, H, K, Q, F2, 0, j1, j2, p, q))
			USUSMODPRIMULE7BIF4(W0, M0, M1, -1, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, sum2, mem, D, H, K, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODPRIMULE8(char *Q, long PP2, FILE *f1, int M, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui sum2, int D, int E, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
/*
char t[8][1920];
int i = 1, i1 = 1, i2;
strcpy(t[0], Q);
printf("LATTENGITTER\n");

while(i1) {
	while(i < TMODP) {
		fgets(t[i++], 1920, f1);
		if(!(ftell(f1) ^ PP2)) {
			i1 = 0;
			break;
			}
		}
	
	#pragma omp parallel for private(f) schedule(dynamic, 1)
	for(i2 = 0; i2 < i; i2++) {//8 = i
		mpz_set_str(unu, t[i2], 10);
		
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		//#pragma omp single nowait
		
				gmp_printf("%d %llu %Zd\n", f, A2, p);
			//if(1==2)
			if(mpz_divisible_ui_p(p, A2)) {
				//#pragma omp single nowait
				//if(1==2)
				
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, g, div1, sum1, q[g], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					
				}
				
				MODPINTSUS2(unu, A2, doi, sum2, j1, j2, Q, F2);
				}
			}
		}

	i = 0;	
	}

return;*/

while(1) {
		mpz_set_str(unu, Q, 10);
			if(mpz_divisible_ui_p(unu, A2)) {				
				mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));				
				NUMSUMV2(p, d, C, C1, b, b1, D, E, H, g, div1, sum1, q[g], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) continue;			
				MODPINTSUS2(unu, A2, doi, sum2, j1, j2, Q, F2);				
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UMODPRIMULE(char *Q, long PP2, FILE *f1, int W, int M, int M0, int M1, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, gmp_ui AP, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui sum2, int D, int E, int H, int K, FILE *F2, mpz_t p, mpz_t *q, gmp_ui *q0, int &sus, int dir) {
	if(dir) {
		sus < 55? USUSMODPRIMULE1(Q, PP2, f1, M, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, sum2, D, H, F2, 0, 0, 0, 0, p, q0) 
		: sus < 73? USUSMODPRIMULE2(Q, PP2, f1, M, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, sum2, D, H, F2, 0, 0, 0, 0, p, q) 
			: sus < 213? USUSMODPRIMULE3(Q, PP2, f1, M, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, sum2, D, H, F2, 0, 0, 0, 0, p, q)
			: sus < 223? USUSMODPRIMULE8(Q, PP2, f1, M, b, b1, C, C1, unu, doi, trei, d, d1, A2, div1, sum1, sum2, D, E, H, F2, 0, 0, 0, 0, p, q) 
				: sus < 243? USUSMODPRIMULE4(Q, PP2, f1, W, M, M0, M1, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, sum2, mem, D, E, H, K, F2, 0, 0, 0, 0, p, q) 
					: sus < 503? USUSMODPRIMULE5(Q, PP2, f1, W, M, M0, M1, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, sum2, mem, D, E, H, K, F2, 0, 0, 0, 0, p, q)
					: USUSMODPRIMULE6(Q, PP2, f1, W, M, M0, M1, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, sum2, mem, D, E, H, K, F2, 0, 0, 0, 0, p, q);
		}
}


//MODSPRIM:
void USUSMODSPRIME1(int M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int j, FILE *F2, int g, mpz_t p, gmp_ui *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
			if(mpz_divisible_ui_p(unu, A2)) {									
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
				SUMINT(p, unu, trei, A2, 2, d, d1, doi, div1[M], sum1[M], Q, F2);				
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODSPRIME2(int M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int j, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		
			if(mpz_divisible_ui_p(unu, A2)) {				
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);				
				SUMINT(p, unu, trei, A2, 2, d, d1, doi, div1[M], sum1[M], Q, F2);				
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODSPRIME3(int M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int j, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);	

			if(mpz_divisible_ui_p(unu, A2)) {			
				mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
				NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);			
				SUMINT(p, unu, trei, A2, 2, d, d1, doi, div1[M], sum1[M], Q, F2);
				}
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODSPRIME4(int M, int M0, int M1, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, int g, int h, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		USUSMODSPRIME4BIF3(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, 0, Q, F2, p, q);
		USUSMODSPRIME4BIF4(M0, M1, W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void USUSMODSPRIME5(int M, int M0, int M1, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, int g, int h, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		USUSMODSPRIME5BIF3(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, 0, Q, F2, p, q);
		USUSMODSPRIME5BIF4(M0, M1, W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void USUSMODSPRIME6(int M, int M0, int M1, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, int g, int h, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		USUSMODSPRIME6BIF3(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, 0, Q, F2, p, q);
		USUSMODSPRIME6BIF4(M0, M1, W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void USUSMODSPRIME7(int M, int M0, int M1, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, FILE *F2, int g, int h, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		USUSMODSPRIME7BIF3(M, W, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, H, K, 0, Q, F2, p, q);
		USUSMODSPRIME7BIF4(M0, M1, W0, 0, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, H, K, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void USUSMODSPRIME8(int M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int j, FILE *F2, int g, mpz_t p, mpz_t *q) {
while(1) {
		mpz_set_str(unu, Q, 10);		
		
			if(mpz_divisible_ui_p(unu, A2)) {				
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, g, div1, sum1, q[g], 0);			
				SUMINT(p, unu, trei, A2, 2, d, d1, doi, div1[M], sum1[M], Q, F2);
				}
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODSPRIME1(int M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int j, FILE *F2, int g, mpz_t p, gmp_ui *q) {
while(1) {
		mpz_set_str(unu, Q, 10);
			if(mpz_divisible_ui_p(unu, AP)) {			
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);													
				
				SUMINTJOS(p, unu, trei, A2, 3, d, d1, doi, div1[M], sum1[M], Q, F2);
				}			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UJOSMODSPRIME2(int M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int j, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

			if(mpz_divisible_ui_p(unu, AP)) {				
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
				SUMINTJOS(p, unu, trei, A2, 3, d, d1, doi, div1[M], sum1[M], Q, F2);				
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UJOSMODSPRIME3(int M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int j, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

			if(mpz_divisible_ui_p(unu, AP)) {				
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
				SUMINTJOS(p, unu, trei, A2, 3, d, d1, doi, div1[M], sum1[M], Q, F2);
				}
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UJOSMODSPRIME4(int M, int M0, int M1, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, int g, int h, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		UJOSMODSPRIME4BIF3(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, 0, Q, F2, p, q);
		UJOSMODSPRIME4BIF4(M0, M1, W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UJOSMODSPRIME5(int M, int M0, int M1, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, int g, int h, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		UJOSMODSPRIME5BIF3(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, 0, Q, F2, p, q);
		UJOSMODSPRIME5BIF4(M0, M1, W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UJOSMODSPRIME6(int M, int M0, int M1, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, int g, int h, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		UJOSMODSPRIME6BIF3(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, 0, Q, F2, p, q);
		UJOSMODSPRIME6BIF4(M0, M1, W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UJOSMODSPRIME7(int M, int M0, int M1, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, int g, int h, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		UJOSMODSPRIME7BIF3(M, W, h = 0, b, b1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, H, K, 0, Q, F2, p, q);
		UJOSMODSPRIME7BIF4(M0, M1, W0, 0, b, b1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, H, K, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UJOSMODSPRIME8(int M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int j, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		
			if(mpz_divisible_ui_p(unu, AP)) {				
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, g, div1, sum1, q[g], 0);				
				SUMINTJOS(p, unu, trei, A2, 3, d, d1, doi, div1[M], sum1[M], Q, F2);
				}
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


//MODSPRIME:
void MODSPRIME(char *Q, long PP2, FILE *f1, int W, int f, int M, int M0, int M1, int W0, int f0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, int &sus, int dir, mpz_t p, mpz_t *q, gmp_ui *q0) {
	if(dir) {
		sus < 55? USUSMODSPRIME1(M, Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, 0, F2, 0, p, q0) 
		: sus < 73? USUSMODSPRIME2(M, Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, 0, F2, 0, p, q) 
			: sus < 213? USUSMODSPRIME3(M, Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, 0, F2, 0, p, q)
			: sus < 223? USUSMODSPRIME8(M, Q, PP2, f1, W = f, f, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div1, sum1, D, E, H, 0, F2, 0, p, q) 
				: sus < 243? USUSMODSPRIME4(M, M0, M1, Q, PP2, f1, W = f, W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, F2, 0, 0, p, q) 
					: sus < 503? USUSMODSPRIME5(M, M0, M1, Q, PP2, f1, W = f, W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, F2, 0, 0, p, q)
					: USUSMODSPRIME6(M, M0, M1, Q, PP2, f1, W = f, W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, F2, 0, 0, p, q);
		} else {
		sus < 55? UJOSMODSPRIME1(M, Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, 0, F2, 0, p, q0) 
		: sus < 73? UJOSMODSPRIME2(M, Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, 0, F2, 0, p, q) 
			: sus < 213? UJOSMODSPRIME3(M, Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, 0, F2, 0, p, q)
			: sus < 223? UJOSMODSPRIME8(M, Q, PP2, f1, W = f, f, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, E, H, 0, F2, 0, p, q) 
				: sus < 243? UJOSMODSPRIME4(M, M0, M1, Q, PP2, f1, W = f, W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, F2, 0, 0, p, q) 
					: sus < 503? UJOSMODSPRIME5(M, M0, M1, Q, PP2, f1, W = f, W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, F2, 0, 0, p, q) : UJOSMODSPRIME6(M, M0, M1, Q, PP2, f1, W = f, W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, F2, 0, 0, p, q);
		}
}


void USUSMODSPRIMULE1(int M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int j, FILE *F2, gmp_ui sum2, int g, mpz_t p, gmp_ui *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

			if(mpz_divisible_ui_p(unu, A2)) {									
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
				SUMINT1(p, unu, trei, A2, 1+A2, sum2, d, d1, doi, Q, F2);				
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODSPRIMULE2(int M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int j, FILE *F2, gmp_ui sum2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
	
			if(mpz_divisible_ui_p(unu, A2)) {				
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
				SUMINT1(p, unu, trei, A2, 1+A2, sum2, d, d1, doi, Q, F2);
				
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODSPRIMULE3(int M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int j, FILE *F2, gmp_ui sum2, int g, mpz_t p, mpz_t *q) {

	while(1) {
		mpz_set_str(unu, Q, 10);

			if(mpz_divisible_ui_p(unu, A2)) {				
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);				
				SUMINT1(p, unu, trei, A2, 1+A2, sum2, d, d1, doi, Q, F2);				
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODSPRIMULE4(int M, int M0, int M1, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, gmp_ui sum2, int g, int h, mpz_t p, mpz_t *q) {
//PURGANTE(C, C1, E);
	while(1) {
		mpz_set_str(unu, Q, 10);
		USUSMODSPRIMULE4BIF3(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, sum2, D, E, H, K, 0, Q, F2, p, q);
		//USUSMODSPRIMULE4BIF4(M0, M1, W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void USUSMODSPRIMULE5(int M, int M0, int M1, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, gmp_ui sum2, int g, int h, mpz_t p, mpz_t *q) {

	while(1) {
		mpz_set_str(unu, Q, 10);
		USUSMODSPRIMULE5BIF3(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, sum2, D, E, H, K, 0, Q, F2, p, q);
		//USUSMODSPRIME5BIF4(M0, M1, W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void USUSMODSPRIMULE6(int M, int M0, int M1, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, gmp_ui sum2, int g, int h, mpz_t p, mpz_t *q) {

	while(1) {
		mpz_set_str(unu, Q, 10);
		USUSMODSPRIMULE6BIF3(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, sum2, D, E, H, K, 0, Q, F2, p, q);
		//USUSMODSPRIMULE6BIF4(M0, M1, W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void USUSMODSPRIMULE7(int M, int M0, int M1, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, FILE *F2, gmp_ui sum2, int g, int h, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		USUSMODSPRIMULE7BIF3(M, W, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, sum2, D, H, K, 0, Q, F2, p, q);
		//USUSMODSPRIMULE7BIF4(M0, M1, W0, 0, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, H, K, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void USUSMODSPRIMULE8(int M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int j, FILE *F2, gmp_ui sum2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

			if(mpz_divisible_ui_p(unu, A2)) {				
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, g, div1, sum1, q[g], 0);
				SUMINT1(p, unu, trei, A2, 1+A2, sum2, d, d1, doi, Q, F2);
				
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void MODSPRIMULE(char *Q, long PP2, FILE *f1, int W, int f, int M, int M0, int M1, int W0, int f0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui sum2, int D, int E, int H, int K, FILE *F2, int &sus, int dir, mpz_t p, mpz_t *q, gmp_ui *q0) {
	if(dir) {
		sus < 55? USUSMODSPRIMULE1(M, Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, 0, F2, sum2, 0, p, q0) 
		: sus < 73? USUSMODSPRIMULE2(M, Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, 0, F2, sum2, 0, p, q) 
			: sus < 213? USUSMODSPRIMULE3(M, Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, 0, F2, sum2, 0, p, q)
			: sus < 223? USUSMODSPRIMULE8(M, Q, PP2, f1, W = f, f, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div1, sum1, D, E, H, 0, F2, sum2, 0, p, q) 
				: sus < 243? USUSMODSPRIMULE4(M, M0, M1, Q, PP2, f1, W = f, W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, F2, sum2, 0, 0, p, q) 
					: sus < 503? USUSMODSPRIMULE5(M, M0, M1, Q, PP2, f1, W = f, W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, F2, sum2, 0, 0, p, q)
					: USUSMODSPRIMULE6(M, M0, M1, Q, PP2, f1, W = f, W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, F2, sum2, 0, 0, p, q);
		}
}


void UNUMERICULSUS1(char *Q, long PP2, int W, FILE *f1, int f, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui divInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, mpz_t p, gmp_ui *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);	
	mpz_mul_ui(doi, unu, divInt);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
	
		if(!(VALID(doi, d1, d) ^ 1)) {
			SCRIE(doi, Q, F2);
			}	

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UNUMERICULSUS2(char *Q, long PP2, int W, FILE *f1, int f, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui divInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	
	mpz_mul_ui(doi, unu, divInt);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
	if(!(VALID(doi, d1, d) ^ 1)) {
		SCRIE(doi, Q, F2);
		}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UNUMERICULSUS3(char *Q, long PP2, int W, FILE *f1, int f, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui divInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	
	mpz_mul_ui(doi, unu, divInt);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
	if(!(VALID(doi, d1, d) ^ 1)) {
		SCRIE(doi, Q, F2);
		}	
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UNUMERICULSUS4(char *Q, long PP2, int W, FILE *f1, int f, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui divInt, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, mpz_t p, mpz_t *q, int g) {

//PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_mul_ui(doi, unu, divInt);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q[g], 0);
	if(!(VALID(doi, d1, d) ^ 1)) {
		SCRIE(doi, Q, F2);
		}
		
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UNUMERICULSUS5(char *Q, long PP2, int W, FILE *f1, int f, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui divInt, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, mpz_t p, mpz_t *q, int g) {

while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_mul_ui(doi, unu, divInt);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q[g]);
	if(!(VALID(doi, d1, d) ^ 1)) {
		SCRIE(doi, Q, F2);
		}
		

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UNUMERICULSUS6(char *Q, long PP2, int W, FILE *f1, int f, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui divInt, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, mpz_t p, mpz_t *q, int g) {

while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_mul_ui(doi, unu, divInt);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q[g]);
	if(!(VALID(doi, d1, d) ^ 1)) {
		SCRIE(doi, Q, F2);
		}
		

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UNUMERICULSUS7(char *Q, long PP2, int W, FILE *f1, int f, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui divInt, gmp_ui *b, gmp_ui *b1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	
		mpz_mul_ui(doi, unu, divInt);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q[g], 0);
		if(!(VALID(doi, d1, d) ^ 1)) {
			SCRIE(doi, Q, F2);
		}
	
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UNUMERICULJOS1(char *Q, long PP2, int W, FILE *f1, int f, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui divInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, mpz_t p, gmp_ui *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);

		if(mpz_divisible_ui_p(unu, divInt)) {
			mpz_divexact_ui(doi, unu, divInt);
			mpz_tdiv_q_2exp(p, doi, g = mpz_scan1(doi, 0));
			SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
			if(!(VALID(doi, d1, d) ^ 1)) {
				SCRIE(doi, Q, F2);
				}
			}	
		
		
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UNUMERICULJOS2(char *Q, long PP2, int W, FILE *f1, int f, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui divInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);

		if(mpz_divisible_ui_p(unu, divInt)) {
			mpz_divexact_ui(doi, unu, divInt);
			mpz_tdiv_q_2exp(p, doi, g = mpz_scan1(doi, 0));
			NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
			if(!(VALID(doi, d1, d) ^ 1)) {
				SCRIE(doi, Q, F2);
				}
			}				
		
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UNUMERICULJOS3(char *Q, long PP2, int W, FILE *f1, int f, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui divInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);

		if(mpz_divisible_ui_p(unu, divInt)) {
			mpz_divexact_ui(doi, unu, divInt);
			mpz_tdiv_q_2exp(p, doi, g = mpz_scan1(doi, 0));
			NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
			if(!(VALID(doi, d1, d) ^ 1)) {
				SCRIE(doi, Q, F2);
				}						
		}
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UNUMERICULJOS4(char *Q, long PP2, int W, FILE *f1, int f, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui divInt, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, mpz_t p, mpz_t *q, int g) {
	//PURGANTE(C, C1, E);
	while(1) {
		mpz_set_str(unu, Q, 10);
			if(mpz_divisible_ui_p(unu, divInt)) {
				mpz_divexact_ui(doi, unu, divInt);
				mpz_tdiv_q_2exp(p, doi, g = mpz_scan1(doi, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q[g], 0);
				if(!(VALID(doi, d1, d) ^ 1)) {
					SCRIE(doi, Q, F2);
					}
				}				
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UNUMERICULJOS5(char *Q, long PP2, int W, FILE *f1, int f, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui divInt, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);

		if(mpz_divisible_ui_p(unu, divInt)) {
			mpz_divexact_ui(doi, unu, divInt);
			mpz_tdiv_q_2exp(p, doi, g = mpz_scan1(doi, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q[g]);
			if(!(VALID(doi, d1, d) ^ 1)) {
				SCRIE(doi, Q, F2);
				}
			}				
		
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UNUMERICULJOS6(char *Q, long PP2, int W, FILE *f1, int f, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui divInt, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);

		if(mpz_divisible_ui_p(unu, divInt)) {
			mpz_divexact_ui(doi, unu, divInt);
			mpz_tdiv_q_2exp(p, doi, g = mpz_scan1(doi, 0));
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q[g]);
			if(!(VALID(doi, d1, d) ^ 1)) {
				SCRIE(doi, Q, F2);
				}
			}				
		
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UNUMERICULJOS7(char *Q, long PP2, int W, FILE *f1, int f, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui divInt, gmp_ui *b, gmp_ui *b1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
		if(mpz_divisible_ui_p(unu, divInt)) {
			mpz_divexact_ui(doi, unu, divInt);
			mpz_tdiv_q_2exp(p, doi, g = mpz_scan1(doi, 0));
			NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q[g], 0);
			if(!(VALID(doi, d1, d) ^ 1)) {
				SCRIE(doi, Q, F2);
				}
			}				
		
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UNUMERICUL(char *Q, long PP2, int W, FILE *f1, int f, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui divInt, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, FILE *F2, int &sus, mpz_t p, mpz_t *q, gmp_ui *q0, int dir) {
	if(dir) {
		sus < 55? UNUMERICULSUS1(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, b, b1, div1, sum1, D, H, F2, p, q0, 0) 
		: sus < 73? UNUMERICULSUS2(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, b, b1, div1, sum1, D, H, F2, p, q, 0) 
		: sus < 213? UNUMERICULSUS3(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, b, b1, div1, sum1, D, H, F2, p, q, 0) 
			: sus < 243? UNUMERICULSUS4(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, b, b1, C, C1, div, sum, div1, sum1, mem, D, E, H, K, F2, p, q, 0) 
				: sus < 503? UNUMERICULSUS5(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, b, b1, C, C1, div, sum, div1, sum1, mem, D, E, H, K, F2, p, q, 0)
					: UNUMERICULSUS6(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, b, b1, C, C1, div, sum, div1, sum1, mem, D, E, H, K, F2, p, q, 0);
		} else {
		sus < 55? UNUMERICULJOS1(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, b, b1, div1, sum1, D, H, F2, p, q0, 0) 
		: sus < 73? UNUMERICULJOS2(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, b, b1, div1, sum1, D, H, F2, p, q, 0) 
		: sus < 213? UNUMERICULJOS3(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, b, b1, div1, sum1, D, H, F2, p, q, 0) 
			: sus < 243? UNUMERICULJOS4(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, b, b1, C, C1, div, sum, div1, sum1, mem, D, E, H, K, F2, p, q, 0) 
				: sus < 503? UNUMERICULJOS5(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, b, b1, C, C1, div, sum, div1, sum1, mem, D, E, H, K, F2, p, q, 0)
					: UNUMERICULJOS6(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, b, b1, C, C1, div, sum, div1, sum1, mem, D, E, H, K, F2, p, q, 0);
	}
}


//SUMM:
void USUMMSUS(char *Q, long PP2, FILE * f1, int t, int u, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, gmp_ui j1, gmp_ui k, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, gmp_ui &s, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &nm, gmp_ui &nr, mpz_t p, gmp_ui *q, gmp_ui *qq, int *f2) {
while(1) {
	mpz_set_str(unu, Q, 10);	
	mpz_mul_ui(doi, unu, A2);
	mpz_tdiv_q_2exp(p, doi, t = mpz_scan1(unu, 0));
	SMOD(p, d1, b, b1, 0, D, H, t, div1, sum1, j, j1, k, nm = qq[t], nr = q[t]);
	if(nm < PRAG)
		SCRIE(doi, Q, F2);

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUMMJOS(char *Q, long PP2, FILE * f1, int t, int u, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, gmp_ui j1, gmp_ui k, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, gmp_ui &s, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &nm, gmp_ui &nr, mpz_t p, gmp_ui *q, gmp_ui *qq, int *f2) {
while(1) {
	mpz_set_str(unu, Q, 10);	
	
	if(mpz_divisible_ui_p(unu, A2)) {		
		LOTVEC1(unu, y, Y, b, b1, y1, D, H, h, s, f2);
		mpz_divexact_ui(doi, unu, A2);
		mpz_tdiv_q_2exp(p, doi, t = mpz_scan1(unu, 0));
		SMOD1(p, d1, y, y1, 0, Y, h, t, div1, sum1, j, j1, k, f2, nm = qq[t], nr = q[t]);
		if(nm < PRAG)
			SCRIE(doi, Q, F2);
			}
		
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUMM(char *Q, long PP2, FILE * f1, int t, int u, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, gmp_ui j1, gmp_ui k, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, gmp_ui &s, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &nm, gmp_ui &nr, int *f2, mpz_t p, gmp_ui *q, gmp_ui *qq, int dir) {
	if(dir) {
		USUMMSUS(Q, PP2, f1, mpz_scan1(unu, 0), u, d, d1, unu, doi, A2, b, b1, D, H, j, j1, k, R, Y, y, y1, h, s, F2, div1, sum1, nm, nr, p, q, qq, f2); 
		} else {
		USUMMJOS(Q, PP2, f1, mpz_scan1(unu, 0), u, d, d1, unu, doi, A2, b, b1, D, H, j, j1, k, R, Y, y, y1, h, s, F2, div1, sum1, nm, nr, p, q, qq, f2);
	}
}


//SUMRED:
//VECUN:


void UVECUN1(int &e, int &l, long W, long f, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t *A1, mpz_t *a, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b2, int D, int E, int Y, int m, FILE *F1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t p, mpz_t *q, int g, char *Q) {
	while(l ^ e) {
			f = W;
			mpz_set(d, a[l--]);
			while(1) {
				if(!f)
					break;
				mpz_mul(d1, d, A1[--f]);
				mpz_tdiv_q_2exp(p, d1, g = mpz_scan1(d1, 0));
				SUMDIVV(p, doi, C, C1, b, b2, D, E, Y, m, g, div1, sum1, div, sum, mem, q[g]);
				if(VALID(d1, unu, doi) == 1)
					SCRIE(d1, Q, F1);
				}
			}
}


void UVECUN2(int &e, int &l, long W, long f, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t *A1, mpz_t *a, gmp_ui *b, gmp_ui *b2, int D, int Y, FILE *F1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t p, mpz_t *q, int g, char *Q) {
	while(l ^ e) {
		f = W;
		mpz_set(d, a[l--]);
			while(1) {
			if(!f)
				break;
			mpz_mul(d1, d, A1[--f]);
			mpz_tdiv_q_2exp(p, d1, g = mpz_scan1(d1, 0));
			NUMSUMV1(p, doi, b, b2, D, Y, g, div1, sum1, q[g], 0);
			if(VALID(d1, unu, doi) == 1)
				SCRIE(d1, Q, F1);
			}
		}
}


void UVECUN3(long W, long V, long f, int &i, int &l, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t *a, mpz_t *A1, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, int *f2, int D, int E, int &H, int &m, int n, int &s, int Y, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F1, mpz_t p, mpz_t *q, int g, char *Q) {
	for(; l > H; l--) {
		f = V;		
		LOTVECM(a[l], y, z, Y, b, C, b2, C1, y1, z3, D, E, W, i, m, n, s, f2);

		while(1) {
			if(!f--)
				break;			
			if(mpz_divisible_p(a[l], A1[f])) {
				mpz_divexact(d1, a[l], A1[f]);
				mpz_tdiv_q_2exp(p, d1, g = mpz_scan1(d1, 0));
				SUMADIV2(p, doi, z, z3, y, y1, Y, s, i, n, g, div1, sum1, div, sum, mem, f2, q[g], 0);
				if(VALID(d1, unu, doi) == 1)
					SCRIE(d1, Q, F1);
				}
			}			
		}
}


void UVECUN4(int &W, long V, long f, int &i, int &l, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t *a, mpz_t *A1, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, int *f2, int D, int E, int &H, int &s, int Y, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F1, mpz_t p, mpz_t *q, int g, char *Q) {
	for(; l > H; l--) {
		f = V;		
		LOTVEC(a[l], y, z, Y, b, C, b2, C1, y1, z3, D, E, W, i, s, f2);

		while(1) {
			if(!f--)
				break;
			if(mpz_divisible_p(a[l], A1[f])) {
				mpz_divexact(d1, a[l], A1[f]);				
				mpz_tdiv_q_2exp(p, d1, g = mpz_scan1(d1, 0));
				NUMSUM2(p, doi, y, y1, Y, i, g, div1, sum1, f2, q[g]);
				if(VALID(d1, unu, doi) == 1)
					SCRIE(d1, Q, F1);
				}
			}
		}
}


void UVECUN(int dir, int V, int f, int W, int L, int i, int l, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t I, mpz_t *a, mpz_t *A1, int b1, int e, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, int *c, int *f2, int D, int E, int H, int m, int n, int s, int Y, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F1, FILE *f1, char *t, mpz_t p, mpz_t *q, char *Q) {
if(dir) {
	W = 5820;
	L = 5394;
	TOLVECUN(1, a, b1, e-1, 0, W, b, C, c, D, E, L, "/P2.TXT");
	m = PUTEREA2(b1, t);
	n = m;
	s = e;
	INV(b, C, W, D, E);
	UNIVEC(b1, b, b2, C, C1, D, E, W, m, div, sum, div1, sum1, mem, q, 1);	
	Y = W;
	l = s - 1;
	e = l;
	if(b1 == 1910) {
		BAZ(l, D+E, f, d, d1, unu, doi, A1, C, C1, b, b2, D, E, Y, m, F1, div1, sum1, div, sum, mem, q, a, 6261, c, W, e+1);
		exit(0);
		}

	printf("%d\n", W = VC1(a, A1, l, 0, 144000, 32, 0, 1));

	while(1) {
		e -= 800;
		printf("%d\n", l);
		n? UVECUN1(e, l, W, f, d, d1, unu, doi, A1, a, C, C1, b, b2, D, E, Y, m, F1, div1, sum1, div, sum, mem, p, q, 0, Q) 
			: UVECUN2(e, l, W, f, d, d1, unu, doi, A1, a, b, b2, D, Y, F1, div1, sum1, p, q, 0, Q);
		if(e < 1800)
			break;
		}

	fclose(F1);
	for(i = 0; i < 400000; i++)
		mpz_clear(A1[i]);
	} else {
		l = e - 1;
		H = l;
		printf("%d\n", V = VC1(a, A1, l, 0, 400000, 42, 0, 1));

		while(H > 1800) {
			if(l > 10000)
				H = 10000;
			else
				H -= 1000;
			W = 5820;
			L = 5394;
			TOLVECUN(1, a, b1, l, H, W, b, C, c, D, E, L, "/P2.TXT");
			m = PUTEREA2(b1, t);
			L = D1 + E1;
			printf("%d %d %llu ", l, L, div1[0][1]);
			UNIVEC(b1, b, b2, C, C1, D, E, W, m, div, sum, div1, sum1, mem, q, 0);			
			
			m? UVECUN3(W, V, f, i, l, d1, unu, doi, a, A1, b, b2, y, y1, C, C1, z, z3, f2, D, E, H, m, n, s, Y, div, sum, div1, sum1, mem, F1, p, q, 0, Q)
				: UVECUN4(W, V, f, i, l, d1, unu, doi, a, A1, b, b2, y, y1, C, C1, z, z3, f2, D, E, H, s, Y, div1, sum1, F1, p, q, 0, Q);
		}
	}
}


//VECUNA:
void UVECUNA1(int D, int E, int H, int Y, int R, int b1, int e, int f, int l, int m, mpz_t *a, mpz_t *A1, gmp_ui *b, gmp_ui *b2, mpz_t *C, mpz_t unu, mpz_t doi, mpz_t d1, double a2, double a3, double a4, double E2, mpz_t div[][MAX1], gmp_ui div1[][MAX2], mpz_t p, int *mem, FILE *F1, int jos, int cant) {
while(1) {
	e -= 1000;
	printf("%d\n", l);
	if(e < jos)
		break;

	for(; l > e; l--) {
		f = cant;		

		while(1) {
			if(!f)
				break;
			mpz_mul(d1, a[l], A1[--f]);
			ABP(d1, b, b2, C, unu, doi, a2, a3, a4, E2, D, E, Y, F1, div1, div, p, mem, m);					
			}
		}
	}
}


void UVECUNA2(int D, int E, int H, int Y, int R, int b1, int e, int f, int l, mpz_t *a, mpz_t *A1, gmp_ui *b, gmp_ui *b2, mpz_t *C, mpz_t unu, mpz_t doi, mpz_t d1, double a2, double a3, double a4, double E2, gmp_ui div1[][MAX2], mpz_t p, int *mem, FILE *F1, int jos, int cant) {
while(1) {
	e -= 1000;
	printf("%d\n", l);
	if(e < jos)
		break;

	for(; l > e; l--) {
		f = cant;

		while(1) {
			if(!f)
				break;
			mpz_mul(d1, a[l], A1[--f]);					
			ABP1(d1, b, b2, C, doi, a2, a3, a4, E2, D, E, Y, F1, div1, p);
			}
		}
	}
}


void UVECUNA3(int L, int U, int W, int D, int E, int H, int Y, int R, int b1, int e, int f, int i, int l, int m, int n, int *c, int *f2, mpz_t *a, mpz_t *A1, gmp_ui s, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, mpz_t unu, mpz_t doi, mpz_t d1, double a2, double a3, double a4, double E2, mpz_t div[][MAX1], gmp_ui div1[][MAX2], mpz_t p, int *mem, FILE *F1, int cant) {
while(H) {
	l > 8000? H = 8000 : H -= 2000;
	W = N1910;
	L = U;
	TOLVECUN(0, a, b1, l, H, W, b, C, c, D, E, L, "/P2.TXT");
	m = PUTEREA1();
	UNIVEC2(b, C, C1, W, D, E, m, div, div1, mem, 0);
	printf("%d %d\n", l, D+E);

	for(;l > H; --l) {
		f = cant;
		LOTVECM(a[l], y, z, Y, b, C, b2, C1, y1, z3, D, E, W, i, R, m, n, f2);					
		
		while(1) {
			if(!f--)
				break;
			if(mpz_divisible_p(a[l], A1[f])) {
				mpz_divexact(d1, a[l], A1[f]);
				ABP2(d1, y, y1, z, unu, doi, s, a2, a3, a4, E2, Y, R, i, F1, div1, div, p, mem, n, f2);
				}
			}
		}
	}
}


void UVECUNA4(int L, int U, int W, int D, int E, int H, int Y, int R, int b1, int e, int f, int i, int l, int m, int *c, int *f2, mpz_t *a, mpz_t *A1, gmp_ui s, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, mpz_t unu, mpz_t doi, mpz_t d1, double a2, double a3, double a4, double E2, mpz_t div[][MAX1], gmp_ui div1[][MAX2], mpz_t p, int *mem, FILE *F1, int cant) {
while(H) {
	l > 8000? H = 8000 : H -= 2000;
	W = N1910;
	L = U;
	TOLVECUN(0, a, b1, l, H, W, b, C, c, D, E, L, "/P2.TXT");
	m = PUTEREA1();	
	UNIVEC2(b, C, C1, W, D, E, m, div, div1, mem, 0);
	printf("%d %d\n", l, D+E);

	for(;l > H; --l) {
		f = cant;
		LOTVEC(a[l], y, z, Y, b, C, b2, C1, y1, z3, D, E, W, i, R, f2);
		
		while(1) {
			if(!f--)
				break;
			if(mpz_divisible_p(a[l], A1[f])) {
				mpz_divexact(d1, a[l], A1[f]);
				ABP3(d1, y, y1, z, s, doi, a2, a3, a4, E2, Y, R, i, F1, div1, p, f2);
				}
			}		
		}
	}
}


void UVECUNA(int L, int U, int W, int D, int E, int H, int N, int Y, int R, int b1, int e, int f, int i, int l, int m, int n, int *c, int *f2, mpz_t *a, mpz_t *A1, gmp_ui s, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, mpz_t xe, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t I, double a2, double a3, double a4, double E2, mpz_t div[][MAX1], gmp_ui div1[][MAX2], mpz_t p, int *mem, FILE *F1, FILE *f1) {
if(L) {
	W = N1910;
	//GEN(U, W, b, C, D, E, "/P2.TXT");
	L = U;
	TOLVECUN(1, a, b1, N-1, 0, W, b, C, c, D, E, L, "/P2.TXT");
	m = PUTEREA1();//Va fi K.
	Y = m;
	INV(b, C, W, D, E);
	UNIVEC2(b, C, C1, W, D, E, m, div, div1, mem, 1);

	for(i = 0; i < D; i++)
			b2[i] = b[i] - 1;

	printf("Puteri de sus pentru ABP: %d.\n", m);
	W = VC1(a, A1, N-1, 0, 2000, 12, 0, 1);
	//W = COEFG1(444000, 5, b, C, D, E, 7);
	printf("%d %d %d %d\n", W, D, E, Y);
	FACT(W, A1, f1, I, 2000);
	l = N-1;
	e = l;
	
	b1 > 100? UVECUNA1(D, E, H, Y, R, b1, e, f, l, m, a, A1, b, b2, C, unu, doi, d1, a2, a3, a4, E2, div, div1, p, mem, F1, 5000, 2000) 
		: UVECUNA2(D, E, H, Y, R, b1, e, f, l, a, A1, b, b2, C, unu, doi, d1, a2, a3, a4, E2, div1, p, mem, F1, 5000, 2000);
	} else {
	l = N-1;
	H = l;
	for(i = 0; i < 16; i++)
		mpz_init(z[i]);
	W = VC1(a, A1, N-1, 0, 8000, 25, 0, 1);
	printf("%d\n", W);
	FACT(W, A1, f1, I, 8000);
	
	b1 > 100? UVECUNA3(L, U, W, D, E, H, Y, R, b1, e, f, i, l, m, n, c, f2, a, A1, s, b, b2, y, y1, C, C1, z, z3, unu, doi, d1, a2, a3, a4, E2, div, div1, p, mem, F1, 8000) 
		: UVECUNA4(L, U, W, D, E, H, Y, R, b1, e, f, i, l, m, c, f2, a, A1, s, b, b2, y, y1, C, C1, z, z3, unu, doi, d1, a2, a3, a4, E2, div, div1, p, mem, F1, 8000);
	}
}

//NUMSUM:
void UNUMSUM0(int dir, int f, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, gmp_ui j, int D, int H, int R, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], char *Q, FILE *F2, gmp_ui A2, gmp_ui *y, gmp_ui *y1, int Y, int &h, int *f2, mpz_t p, mpz_t *q) {
	if(dir) {		
			mpz_mul_ui(doi, unu, A2);
			mpz_tdiv_q_2exp(p, doi, u = mpz_scan1(unu, 0));
			NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
			if(
			VALID4(doi, d1, d)
			//VALID(doi, d1, d)
			 == 1)
				SCRIE(doi, Q, F2);			
	} else {
		if(mpz_divisible_ui_p(unu, A2)) {
			LOTVEC1(unu, y, Y, b, b1, y1, D, H, h, u, f2);
			mpz_divexact_ui(doi, unu, A2);
			mpz_tdiv_q_2exp(p, doi, u = mpz_scan1(unu, 0));
			NUMSUM2(p, d, y, y1, Y, h, u, div1, sum1, f2, q[u]);
			if(
			VALID4(doi, d1, d) == 1
			//VALID(doi, d1, d) == 1
			)
				SCRIE(doi, Q, F2);
			}
	}
}


//DRUSOJURA:
void USUSDRUSOJURA1(char *Q, long PP2, FILE *f1, int s, mpz_t unu, mpz_t doi, gmp_ui divInt, gmp_ui sumInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, FILE *F2, mpz_t p, gmp_ui *q, gmp_ui *qq) {

while(1) {
	mpz_set_str(unu, Q, 10);	
			
		if(!mpz_divisible_ui_p(unu, divInt)) {
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				SMOD(p, doi, b, b1, j, D, H, s, div1, sum1, e, j1, j2, nm = qq[s], nr = q[s]);
				//nr = mpz_get_ui(nr1);
				//nm = mpz_get_ui(nm1);
			if(TRAT(nr * sumInt, nm * divInt)) {
				mpz_mul_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);		
			}
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSDRUSOJURA2(char *Q, long PP2, FILE *f1, int s, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui divInt, gmp_ui sumInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq) {//q cu nr, qq cu nm.
while(1) {
	mpz_set_str(unu, Q, 10);
		
		if(!mpz_divisible_ui_p(unu, divInt)) {			
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				NUMSUMMODPURG1(p, d, d1, Z, b, b1, e, D, H, s, div1, sum1, j, j1, j2, nm1, nr1, q[s], qq[s]);
				nr = mpz_get_ui(nr1);
				nm = mpz_get_ui(nm1);
			
			if(TRAT(nr * sumInt, nm * divInt)) {
				mpz_mul_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);		
			}
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSDRUSOJURA3(char *Q, long PP2, FILE *f1, int s, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui divInt, gmp_ui sumInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq) {//q cu nr, qq cu nm.
while(1) {
	mpz_set_str(unu, Q, 10);
		
		if(!mpz_divisible_ui_p(unu, divInt)) {			
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				NUMSUMMOD1(p, d, d1, Z, b, b1, e, D, H, s, div1, sum1, j, j1, j2, nm1, nr1, q[s], qq[s]);
				nr = mpz_get_ui(nr1);
				nm = mpz_get_ui(nm1);
			
			if(TRAT(nr * sumInt, nm * divInt)) {
				mpz_mul_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);		
			}
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSDRUSOJURA4(char *Q, long PP2, FILE *f1, int s, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui divInt, gmp_ui sumInt, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {

//PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);	
			
	if(!mpz_divisible_ui_p(unu, divInt)) {
			mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
			SUMDIVMOD1(p, doi, trei, d, d1, Z, b, b1, e, D, H, s, div1, sum1, div, sum, C, C1, E, K, j, j1, j2, nm1, nr1, q[s], qq[s], mem);
			nr = mpz_get_ui(nr1);
			nm = mpz_get_ui(nm1);
		
		if(TRAT(nr * sumInt, nm * divInt)) {
			mpz_mul_ui(doi, unu, divInt);
			SCRIE(doi, Q, F2);		
		}
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSDRUSOJURA5(char *Q, long PP2, FILE *f1, int s, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui divInt, gmp_ui sumInt, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {
while(1) {
	mpz_set_str(unu, Q, 10);
			
	if(!mpz_divisible_ui_p(unu, divInt)) {
			mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
			SUMDIVMOD(p, doi, trei, d, d1, Z, b, b1, e, D, H, s, div1, sum1, div, sum, C, C1, E, K, j, j1, j2, nm1, nr1, q[s], qq[s], mem);
			nr = mpz_get_ui(nr1);
			nm = mpz_get_ui(nm1);
		
		if(TRAT(nr * sumInt, nm * divInt)) {
			mpz_mul_ui(doi, unu, divInt);
			SCRIE(doi, Q, F2);		
		}
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSDRUSOJURA6(char *Q, long PP2, FILE *f1, int s, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui divInt, gmp_ui sumInt, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {
while(1) {
	mpz_set_str(unu, Q, 10);	
			
	if(!mpz_divisible_ui_p(unu, divInt)) {		
			mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
			SUMDIVMODMARE(p, doi, trei, d, d1, Z, b, b1, e, D, H, s, div1, sum1, div, sum, C, C1, E, K, j, j1, j2, nm1, nr1, q[s], qq[s], mem);
			nr = mpz_get_ui(nr1);
			nm = mpz_get_ui(nm1);
		
		if(TRAT(nr * sumInt, nm * divInt)) {
			mpz_mul_ui(doi, unu, divInt);
			SCRIE(doi, Q, F2);
		}
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSDRUSOJURA7(char *Q, long PP2, FILE *f1, int s, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui divInt, gmp_ui sumInt, gmp_ui *b, gmp_ui *b1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {
while(1) {
	mpz_set_str(unu, Q, 10);
				
	if(!mpz_divisible_ui_p(unu, divInt)) {		
			mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
			NUMSUMMOD(p, doi, d, d1, Z, b, b1, e, D, H, s, div1, sum1, div, sum, K, j, j1, j2, nm1, nr1, q[s], qq[s], mem);
			nr = mpz_get_ui(nr1);
			nm = mpz_get_ui(nm1);
		
		if(TRAT(nr * sumInt, nm * divInt)) {
			mpz_mul_ui(doi, unu, divInt);
			SCRIE(doi, Q, F2);		
		}
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSDRUSOJURA1(char *Q, long PP2, FILE *f1, int s, mpz_t unu, mpz_t doi, gmp_ui divInt, gmp_ui sumInt, gmp_ui M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, FILE *F2, mpz_t p, gmp_ui *q, gmp_ui *qq) {
while(1) {
	mpz_set_str(unu, Q, 10);
				
	if( (!mpz_divisible_ui_p(unu, M)) && (mpz_divisible_ui_p(unu, divInt)) ) {			
			mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
			SMOD(p, doi, b, b1, j, D, H, s, div1, sum1, e, j1, j2, nm = qq[s], nr = q[s]);			
		
		if(TRAT(nm * sumInt, nr * divInt)) {
			mpz_divexact_ui(doi, unu, divInt);								
			SCRIE(doi, Q, F2);
			}
		}
		
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSDRUSOJURA2(char *Q, long PP2, FILE *f1, int s, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui divInt, gmp_ui sumInt, gmp_ui M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq) {
while(1) {
	mpz_set_str(unu, Q, 10);
				
		if( (!mpz_divisible_ui_p(unu, M)) && (mpz_divisible_ui_p(unu, divInt)) ) {			
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				NUMSUMMODPURG1(p, d, d1, Z, b, b1, e, D, H, s, div1, sum1, j, j1, j2, nm1, nr1, q[s], qq[s]);
				nr = mpz_get_ui(nr1);
				nm = mpz_get_ui(nm1);
				
			if(TRAT(nm * sumInt, nr * divInt)) {
				mpz_divexact_ui(doi, unu, divInt);								
				SCRIE(doi, Q, F2);
				}
			}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSDRUSOJURA3(char *Q, long PP2, FILE *f1, int s, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui divInt, gmp_ui sumInt, gmp_ui M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq) {
while(1) {
	mpz_set_str(unu, Q, 10);
			
	if( (!mpz_divisible_ui_p(unu, M)) && (mpz_divisible_ui_p(unu, divInt)) ) {			
			mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
			NUMSUMMOD1(p, d, d1, Z, b, b1, e, D, H, s, div1, sum1, j, j1, j2, nm1, nr1, q[s], qq[s]);
			nr = mpz_get_ui(nr1);
			nm = mpz_get_ui(nm1);
			
		if(TRAT(nm * sumInt, nr * divInt)) {
			mpz_divexact_ui(doi, unu, divInt);
			SCRIE(doi, Q, F2);
			}
		}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSDRUSOJURA4(char *Q, long PP2, FILE *f1, int s, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui divInt, gmp_ui sumInt, gmp_ui M, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {

//PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
			
	if( (!mpz_divisible_ui_p(unu, M)) && (mpz_divisible_ui_p(unu, divInt)) ) {		
			mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
			SUMDIVMOD1(p, doi, trei, d, d1, Z, b, b1, e, D, H, s, div1, sum1, div, sum, C, C1, E, K, j, j1, j2, nm1, nr1, q[s], qq[s], mem);
			nr = mpz_get_ui(nr1);
			nm = mpz_get_ui(nm1);
			
		if(TRAT(nm * sumInt, nr * divInt)) {
			mpz_divexact_ui(doi, unu, divInt);
			SCRIE(doi, Q, F2);
			}
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSDRUSOJURA5(char *Q, long PP2, FILE *f1, int s, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui divInt, gmp_ui sumInt, gmp_ui M, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {
while(1) {
	mpz_set_str(unu, Q, 10);
	
	if( (!mpz_divisible_ui_p(unu, M)) && (mpz_divisible_ui_p(unu, divInt)) ) {			
		mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
		SUMDIVMOD(p, doi, trei, d, d1, Z, b, b1, e, D, H, s, div1, sum1, div, sum, C, C1, E, K, j, j1, j2, nm1, nr1, q[s], qq[s], mem);
		nr = mpz_get_ui(nr1);
		nm = mpz_get_ui(nm1);
			
		if(TRAT(nm * sumInt, nr * divInt)) {
			mpz_divexact_ui(doi, unu, divInt);
			SCRIE(doi, Q, F2);
			}
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSDRUSOJURA6(char *Q, long PP2, FILE *f1, int s, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui divInt, gmp_ui sumInt, gmp_ui M, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {
while(1) {
	mpz_set_str(unu, Q, 10);
			
	if( (!mpz_divisible_ui_p(unu, M)) && (mpz_divisible_ui_p(unu, divInt)) ) {			
		mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
		SUMDIVMODMARE(p, doi, trei, d, d1, Z, b, b1, e, D, H, s, div1, sum1, div, sum, C, C1, E, K, j, j1, j2, nm1, nr1, q[s], qq[s], mem);
		nr = mpz_get_ui(nr1);
		nm = mpz_get_ui(nm1);
			
		if(TRAT(nm * sumInt, nr * divInt)) {
			mpz_divexact_ui(doi, unu, divInt);
			SCRIE(doi, Q, F2);				
			}
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSDRUSOJURA7(char *Q, long PP2, FILE *f1, int s, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui divInt, gmp_ui sumInt, gmp_ui M, gmp_ui *b, gmp_ui *b1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {
while(1) {
	mpz_set_str(unu, Q, 10);
			
	if( (!mpz_divisible_ui_p(unu, M)) && (mpz_divisible_ui_p(unu, divInt)) ) {
		mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
		NUMSUMMOD(p, doi, d, d1, Z, b, b1, e, D, H, s, div1, sum1, div, sum, K, j, j1, j2, nm1, nr1, q[s], qq[s], mem);
		nr = mpz_get_ui(nr1);
		nm = mpz_get_ui(nm1);
			
		if(TRAT(nm * sumInt, nr * divInt)) {
			mpz_divexact_ui(doi, unu, divInt);
			SCRIE(doi, Q, F2);
			}
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UDRUSOJURA(char *Q, long PP2, FILE *f1, int dir, int s, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui divInt, gmp_ui sumInt, gmp_ui M, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *J, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int sus, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, int *mem, mpz_t p, mpz_t *q, mpz_t *qq, gmp_ui *q0, gmp_ui *q1) {
	if(dir) {
		sus < 55? USUSDRUSOJURA1(Q, PP2, f1, s, unu, doi, divInt, sumInt, b, b1, div1, sum1, D, H, 0, 0, 0, 0, nm, nr, F2, p, q0, q1) 
		: sus < 73? USUSDRUSOJURA2(Q, PP2, f1, s, unu, doi, d, d1, Z, divInt, sumInt, b, b1, div1, sum1, D, H, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq)
			: sus < 213? USUSDRUSOJURA3(Q, PP2, f1, s, unu, doi, d, d1, Z, divInt, sumInt, b, b1, div1, sum1, D, H, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq)
				: sus < 243? USUSDRUSOJURA4(Q, PP2, f1, s, unu, doi, trei, d, d1, Z, divInt, sumInt, b, b1, C, J, div, sum, div1, sum1, D, E, H, K, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq, mem) 
					: sus < 503? USUSDRUSOJURA5(Q, PP2, f1, s, unu, doi, trei, d, d1, Z, divInt, sumInt, b, b1, C, J, div, sum, div1, sum1, D, E, H, K, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq, mem) 
	: USUSDRUSOJURA6(Q, PP2, f1, s, unu, doi, trei, d, d1, Z, divInt, sumInt, b, b1, C, J, div, sum, div1, sum1, D, E, H, K, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq, mem);
		} else {
		sus < 55? UJOSDRUSOJURA1(Q, PP2, f1, s, unu, doi, divInt, sumInt, M, b, b1, div1, sum1, D, H, 0, 0, 0, 0, nm, nr, F2, p, q0, q1)
		: sus < 73? UJOSDRUSOJURA2(Q, PP2, f1, s, unu, doi, d, d1, Z, divInt, sumInt, M, b, b1, div1, sum1, D, H, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq) 
			: sus < 213? UJOSDRUSOJURA3(Q, PP2, f1, s, unu, doi, d, d1, Z, divInt, sumInt, M, b, b1, div1, sum1, D, H, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq) 
				: sus < 243? UJOSDRUSOJURA4(Q, PP2, f1, s, unu, doi, trei, d, d1, Z, divInt, sumInt, M, b, b1, C, J, div, sum, div1, sum1, D, E, H, K, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq, mem) 
					: sus < 503? UJOSDRUSOJURA5(Q, PP2, f1, s, unu, doi, trei, d, d1, Z, divInt, sumInt, M, b, b1, C, J, div, sum, div1, sum1, D, E, H, K, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq, mem) 
	: UJOSDRUSOJURA6(Q, PP2, f1, s, unu, doi, trei, d, d1, Z, divInt, sumInt, M, b, b1, C, J, div, sum, div1, sum1, D, E, H, K, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq, mem);
		}
}


#endif
