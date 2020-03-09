#ifndef _BIVDEX_H
#define _BIVDEX_H


void SUMINT(mpz_t p, mpz_t NUM, mpz_t SUM, gmp_ui coef, gmp_ui j, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2) {
	mpz_set(SUM, d);
	while(mpz_divisible_ui_p(p, div1[j])) j += 2;
	mpz_divexact_ui(SUM, SUM, (mpz_divisible_ui_p(p, div1[--j])? sum1[j] : sum1[--j]));
	mpz_mul_ui(SUM, SUM, sum1[++j]);
	mpz_mul_ui(doi, NUM, coef);
	if(VALID4(doi, d1, SUM) == 1) 
		SCRIE(doi, Q, F2);
}


void SUMINT1(mpz_t p, mpz_t NUM, mpz_t SUM, gmp_ui coef, gmp_ui j, gmp_ui j1, mpz_t d, mpz_t d1, mpz_t doi, char *Q, FILE *F2) {//j = sum2, j1 = coef+1.
	mpz_set(SUM, d);
	mpz_divexact_ui(SUM, SUM, j);
	mpz_mul_ui(SUM, SUM, j1);
	mpz_mul_ui(doi, NUM, coef);
	if(VALID4(doi, d1, SUM) == 1)
		SCRIE(doi, Q, F2);
}


void SUMINTJOS(mpz_t p, mpz_t NUM, mpz_t SUM, gmp_ui coef, gmp_ui j, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2) {
	mpz_set(SUM, d);
	while(mpz_divisible_ui_p(p, div1[j])) j += 2;
	mpz_divexact_ui(SUM, SUM, (mpz_divisible_ui_p(p, div1[--j])? sum1[j] : sum1[--j]));
	mpz_mul_ui(SUM, SUM, sum1[--j]);
	mpz_divexact_ui(doi, NUM, coef);
	if(VALID4(doi, d1, SUM) == 1)
		SCRIE(doi, Q, F2);
}


void SUMMPZ(mpz_t p, mpz_t NUM, mpz_t SUM, gmp_ui coef, gmp_ui j, mpz_t d, mpz_t d1, mpz_t doi, mpz_t *div, mpz_t *sum, char *Q, FILE *F2) {
	mpz_set(SUM, d);
	while(mpz_divisible_p(p, div[j])) j += 2;
	mpz_divexact(SUM, SUM, (mpz_divisible_p(p, div[--j])? sum[j] : sum[--j]));
	mpz_mul(SUM, SUM, sum[++j]);
	mpz_mul_ui(doi, NUM, coef);
	if(VALID4(doi, d1, SUM) == 1)
		SCRIE(doi, Q, F2);
}


void SUMMPZJOS(mpz_t p, mpz_t NUM, mpz_t SUM, gmp_ui coef, gmp_ui j, mpz_t d, mpz_t d1, mpz_t doi, mpz_t *div, mpz_t *sum, char *Q, FILE *F2) {
	mpz_set(SUM, d);
	while(mpz_divisible_p(p, div[j])) j += 2;
	mpz_divexact(SUM, SUM, (mpz_divisible_p(p, div[--j])? sum[j] : sum[--j]));
	mpz_mul(SUM, SUM, sum[--j]);
	mpz_divexact_ui(doi, NUM, coef);
	if(VALID4(doi, d1, SUM) == 1)
		SCRIE(doi, Q, F2);
}


void SUMINTM(mpz_t p, mpz_t NUM, mpz_t SUM, gmp_ui coef, gmp_ui j, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2) {//j = mem.
	mpz_set(SUM, d);
	while(!mpz_divisible_ui_p(p, div1[j])) j -= 2;
	mpz_divexact_ui(SUM, SUM, (mpz_divisible_ui_p(p, div1[++j])? sum1[j] : sum1[--j]));
	mpz_mul_ui(SUM, SUM, sum1[++j]);
	mpz_mul_ui(doi, NUM, coef);
	if(VALID4(doi, d1, SUM) == 1) 
		SCRIE(doi, Q, F2);
}


void SUMINTJOSM(mpz_t p, mpz_t NUM, mpz_t SUM, gmp_ui coef, gmp_ui j, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2) {//j = mem.
	mpz_set(SUM, d);
	while(!mpz_divisible_ui_p(p, div1[j])) j -= 2;
	mpz_divexact_ui(SUM, SUM, (mpz_divisible_ui_p(p, div1[++j])? sum1[j] : sum1[--j]));
	mpz_mul_ui(SUM, SUM, sum1[--j]);
	mpz_divexact_ui(doi, NUM, coef);
	if(VALID4(doi, d1, SUM) == 1)
		SCRIE(doi, Q, F2);
}


void SUMMPZE(mpz_t p, mpz_t NUM, mpz_t SUM, gmp_ui coef, gmp_ui j, mpz_t d, mpz_t d1, mpz_t doi, mpz_t *div, mpz_t *sum, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2) {//j = mem.
	mpz_set(SUM, d);
	mpz_mul_ui(doi, NUM, coef);
	
	if(mpz_divisible_p(p, div[j])) {
		while(mpz_divisible_p(p, div[j])) j += 2;
		mpz_divexact(SUM, SUM, (mpz_divisible_p(p, div[--j])? sum[j] : sum[--j]));
		mpz_mul(SUM, SUM, sum[++j]);		
		goto n1;
	}
	
	for(--j; !mpz_divisible_ui_p(p, div1[j]); j--);
	mpz_divexact_ui(SUM, SUM, sum1[j++]);
	mpz_mul_ui(SUM, SUM, sum1[j]);
	
	n1:
	if(VALID4(doi, d1, SUM) == 1)
		SCRIE(doi, Q, F2);
	
}


void SUMMPZJOSE(mpz_t p, mpz_t NUM, mpz_t SUM, gmp_ui coef, gmp_ui j, mpz_t d, mpz_t d1, mpz_t doi, mpz_t *div, mpz_t *sum, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2) {//j = mem.
	mpz_set(SUM, d);
	mpz_divexact_ui(doi, NUM, coef);
	
	if(mpz_divisible_p(p, div[++j])) {
		while(mpz_divisible_p(p, div[j])) j += 2;
		mpz_divexact(SUM, SUM, (mpz_divisible_p(p, div[--j])? sum[j] : sum[--j]));
		mpz_mul(SUM, SUM, sum[--j]);
		goto n1;
	}
	
	for(--j; !mpz_divisible_ui_p(p, div1[j]); j--);
	mpz_divexact_ui(SUM, SUM, sum1[j--]);
	mpz_mul_ui(SUM, SUM, sum1[j]);
	
	n1:
	if(VALID4(doi, d1, SUM) == 1)
		SCRIE(doi, Q, F2);
}


//MODPRIM:
int SUSMODPRIM4BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
				if(!u) {
					SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
					u = 1;
					}
				
				MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
				//MODPINTESUS1(unu, p, A2[W], d, doi, d1, 0, 2, j1, j2, div1[j], sum1[j], divd[j], sumd[j], Q, F2);
			}
	}
return 1;
}


void SUSMODPRIM4BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, modpmem[u], 0, j1, j2, modpdiv[u], modpsum[u], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {//gmp_printf("VIADALTE %d W0 %llu %d %Zd %Zd %llu %llu\n", W0, A20[W0-1], modpmem[W0-1], modpdiv[W0-1][1], modpsum[W0-1][1], modpdiv1[W0-1][1], modpsum1[W0-1][1]);return;
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			MODPMPZSUSE(unu, p, A20[W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int SUSMODPRIM4BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
			
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
return 1;
}


void SUSMODPRIM4BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, modpmem[u], 0, j1, j2, modpdiv[u], modpsum[u], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			
			MODPMPZSUSE(unu, p, A20[W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int SUSMODPRIM5BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
while(1) {
	if(!W--) break;
	if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
						
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
		}
	}
return 1;
}


void SUSMODPRIM5BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, modpmem[u], 0, j1, j2, modpdiv[u], modpsum[u], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			
			MODPMPZSUSE(unu, p, A20[W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int SUSMODPRIM5BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
	return 1;
}


void SUSMODPRIM5BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
		
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, modpmem[u], 0, j1, j2, modpdiv[u], modpsum[u], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			
			MODPMPZSUSE(unu, p, A20[W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int SUSMODPRIM6BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
while(1) {
	if(!W--) break;
	if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
						
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
		}
	}
return 1;
}


void SUSMODPRIM6BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, modpmem[u], 0, j1, j2, modpdiv[u], modpsum[u], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			
			MODPMPZSUSE(unu, p, A20[W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int SUSMODPRIM6BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
	return 1;
}


void SUSMODPRIM6BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			j = mpz_scan1(unu, 0);
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
		
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, modpmem[u], 0, j1, j2, modpdiv[u], modpsum[u], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			
			MODPMPZSUSE(unu, p, A20[W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int SUSMODPRIM7BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
				if(!u) {
					NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
					u = 1;
					}
				
				MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
return 1;
}


void SUSMODPRIM7BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, modpmem[u], 0, j1, j2, modpdiv[u], modpsum[u], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
						
			MODPMPZSUSE(unu, p, A20[W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int SUSMODPRIM7BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
			}
	}
return 1;
}


void SUSMODPRIM7BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			NUMESUMV(p, d, b, b1, D, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			
			//MODPMPZSUS(unu, p, A20[u=W0], d, doi, d1, j1, j2, div[j], sum[j], Q, F2);
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		
//		MODPMPZSUS(unu, p, A20[u], d, doi, d1, j1, j2, div[j], sum[j], Q, F2);
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, modpmem[u], 0, j1, j2, modpdiv[u], modpsum[u], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			MODPMPZSUSE(unu, p, A20[W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int JOSMODPRIM4BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
				
			
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
			}
	}
return 1;
}


void JOSMODPRIM4BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			
			MODPMPZJOSE(unu, p, A20[u=W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		
		MODPMPZJOSE(unu, p, A20[u], d, doi, d1, modpmem[u], 0, j1, j2, modpdiv[u], modpsum[u], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			
			MODPMPZJOSE(unu, p, A20[W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int JOSMODPRIM4BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--)
			break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
								
			
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);	
			}
	}
return 1;
}


void JOSMODPRIM4BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			
			MODPMPZJOSE(unu, p, A20[u=W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}

	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		
		MODPMPZJOSE(unu, p, A20[u], d, doi, d1, modpmem[u], 0, j1, j2, modpdiv[u], modpsum[u], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			
			MODPMPZJOSE(unu, p, A20[W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int JOSMODPRIM5BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
				
			
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
			}
	}
return 1;
}


void JOSMODPRIM5BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {	
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			
			MODPMPZJOSE(unu, p, A20[u=W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		
		MODPMPZJOSE(unu, p, A20[u], d, doi, d1, modpmem[u], 0, j1, j2, modpdiv[u], modpsum[u], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			
			MODPMPZJOSE(unu, p, A20[W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int JOSMODPRIM5BIF3(int W,  int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--)
			break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);	
			}
	}
return 1;
}


void JOSMODPRIM5BIF4(int W0,  int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			
			MODPMPZJOSE(unu, p, A20[u=W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
				
		MODPMPZJOSE(unu, p, A20[u], d, doi, d1, modpmem[u], 0, j1, j2, modpdiv[u], modpsum[u], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			
			MODPMPZJOSE(unu, p, A20[W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int JOSMODPRIM6BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
				
			
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
			}
	}
return 1;
}


void JOSMODPRIM6BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			
			MODPMPZJOSE(unu, p, A20[u=W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		
		MODPMPZJOSE(unu, p, A20[u], d, doi, d1, modpmem[u], 0, j1, j2, modpdiv[u], modpsum[u], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			
			MODPMPZJOSE(unu, p, A20[W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int JOSMODPRIM6BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--)
			break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);	
			}
	}
return 1;
}


void JOSMODPRIM6BIF4(int W0,  int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			
			MODPMPZJOSE(unu, p, A20[u=W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
				
		MODPMPZJOSE(unu, p, A20[u], d, doi, d1, modpmem[u], 0, j1, j2, modpdiv[u], modpsum[u], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			
			MODPMPZJOSE(unu, p, A20[W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int JOSMODPRIM7BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
				
			
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
			}
	}
return 1;
}


void JOSMODPRIM7BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			
			//MODPMPZJOS(unu, p, A20[W0], d, doi, d1, j1, j2, div[j], sum[j], Q, F2);
			//MODPMPZJOSU2(unu, p, A20[u=W0], d, doi, d1, 3, 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);//Nu 3, ci mem[j].
			MODPMPZJOSE(unu, p, A20[u=W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		
		MODPMPZJOSE(unu, p, A20[u], d, doi, d1, modpmem[u], 0, j1, j2, modpdiv[u], modpsum[u], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			
			MODPMPZJOSE(unu, p, A20[W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int JOSMODPRIM7BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--)
			break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);	
			}
	}
return 1;
}


void JOSMODPRIM7BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			NUMESUMV(p, d, b, b1, D, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZJOSE(unu, p, A20[u=W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {		
		MODPMPZJOSE(unu, p, A20[u], d, doi, d1, modpmem[u], 0, j1, j2, modpdiv[u], modpsum[u], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			MODPMPZJOSE(unu, p, A20[W0], d, doi, d1, modpmem[W0], 0, j1, j2, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


//MODPRIME:
int SUSMODPRIME4BIF1(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
				if(!u) {
					SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
					u = 1;
					}
				j = M[W];
				MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);				
			}
	}
return 1;
}


void SUSMODPRIME4BIF2(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, mem[M1[u]], 0, j1, j2, div[M0[u]], sum[M0[u]], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			MODPMPZSUSE(unu, p, A20[W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int SUSMODPRIME4BIF3(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
			j = M[W];
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
			}
		}
return 1;
}


void SUSMODPRIME4BIF4(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, mem[M1[u]], 0, j1, j2, div[M0[u]], sum[M0[u]], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			MODPMPZSUSE(unu, p, A20[W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int SUSMODPRIME5BIF1(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
while(1) {
	if(!W--) break;
	if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
			j = M[W];			
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
		}
	}
return 1;
}


void SUSMODPRIME5BIF2(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, mem[M1[u]], 0, j1, j2, div[M0[u]], sum[M0[u]], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			MODPMPZSUSE(unu, p, A20[W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int SUSMODPRIME5BIF3(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			j = M[W];
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
			}
		}
	return 1;
}


void SUSMODPRIME5BIF4(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
		
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, mem[M1[u]], 0, j1, j2, div[M0[u]], sum[M0[u]], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			MODPMPZSUSE(unu, p, A20[W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int SUSMODPRIME6BIF1(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
while(1) {
	if(!W--) break;
	if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
			j = M[W];			
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
		}
	}
return 1;
}


void SUSMODPRIME6BIF2(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, mem[M1[u]], 0, j1, j2, div[M0[u]], sum[M0[u]], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			MODPMPZSUSE(unu, p, A20[W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int SUSMODPRIME6BIF3(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			j = M[W];
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
			}
		}
	return 1;
}


void SUSMODPRIME6BIF4(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
		
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, mem[M1[u]], 0, j1, j2, div[M0[u]], sum[M0[u]], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			MODPMPZSUSE(unu, p, A20[W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int SUSMODPRIME7BIF1(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
				if(!u) {
					NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
					u = 1;
					}
				j = M[W];
				MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
			}
		}
return 1;
}


void SUSMODPRIME7BIF2(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			j = M0[W0];// mem[j], nu 2.
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, mem[M1[u]], 0, j1, j2, div[M0[u]], sum[M0[u]], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			j = M0[W0];			
			MODPMPZSUSE(unu, p, A20[W0], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
	}
}


int SUSMODPRIME7BIF3(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			j = M[W];
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
			}
	}
return 1;
}


void SUSMODPRIME7BIF4(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			NUMESUMV(p, d, b, b1, D, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;	
			j = M0[W0];
			//MODPMPZSUS(unu, p, A20[u=W0], d, doi, d1, j1, j2, div[j], sum[j], Q, F2);
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, mem[M1[u]], 0, j1, j2, div[M0[u]], sum[M0[u]], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			MODPMPZSUSE(unu, p, A20[W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int JOSMODPRIME4BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;//PACERACERA
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
				
			j = M[W];
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
			}
	}
return 1;
}


void JOSMODPRIME4BIF2(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZJOSE(unu, p, A20[u=W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		MODPMPZJOSE(unu, p, A20[u], d, doi, d1, mem[M1[u]], 0, j1, j2, div[M0[u]], sum[M0[u]], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {//jj = M1[W0];//M1 e M minus H-K.
			j = M0[W0];
			MODPMPZJOSE(unu, p, A20[W0], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
	}
}


int JOSMODPRIME4BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--)
			break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
								
			j = M[W];
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);	
			}
	}
return 1;
}


void JOSMODPRIME4BIF4(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZJOSE(unu, p, A20[u=W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}

	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		MODPMPZJOSE(unu, p, A20[u], d, doi, d1, mem[M1[u]], 0, j1, j2, div[M0[u]], sum[M0[u]], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			MODPMPZJOSE(unu, p, A20[W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int JOSMODPRIME5BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
				
			j = M[W];
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
			}
	}
return 1;
}


void JOSMODPRIME5BIF2(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {	
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZJOSE(unu, p, A20[u=W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		MODPMPZJOSE(unu, p, A20[u], d, doi, d1, mem[M1[u]], 0, j1, j2, div[M0[u]], sum[M0[u]], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			MODPMPZJOSE(unu, p, A20[W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int JOSMODPRIME5BIF3(int *M, int W,  int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--)
			break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			j = M[W];
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);	
			}
	}
return 1;
}


void JOSMODPRIME5BIF4(int *M0, int *M1, int W0,  int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZJOSE(unu, p, A20[u=W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		j = M0[u];		
		MODPMPZJOSE(unu, p, A20[u], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			MODPMPZJOSE(unu, p, A20[W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int JOSMODPRIME6BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
				
			j = M[W];
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
			}
	}
return 1;
}


void JOSMODPRIME6BIF2(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {	
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZJOSE(unu, p, A20[u=W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		MODPMPZJOSE(unu, p, A20[u], d, doi, d1, mem[M1[u]], 0, j1, j2, div[M0[u]], sum[M0[u]], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			MODPMPZJOSE(unu, p, A20[W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int JOSMODPRIME6BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--)
			break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			j = M[W];
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);	
			}
	}
return 1;
}


void JOSMODPRIME6BIF4(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZJOSE(unu, p, A20[u=W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		j = M0[u];		
		MODPMPZJOSE(unu, p, A20[u], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			MODPMPZJOSE(unu, p, A20[W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int JOSMODPRIME7BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
				
			j = M[W];
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
			}
	}
return 1;
}


void JOSMODPRIME7BIF2(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZJOSE(unu, p, A20[u=W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		MODPMPZJOSE(unu, p, A20[u], d, doi, d1, mem[M1[u]], 0, j1, j2, div[M0[u]], sum[M0[u]], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			MODPMPZJOSE(unu, p, A20[W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int JOSMODPRIME7BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--)
			break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}

			j = M[W];
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);	
			}
	}
return 1;
}


void JOSMODPRIME7BIF4(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			NUMESUMV(p, d, b, b1, D, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZJOSE(unu, p, A20[u=W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		MODPMPZJOSE(unu, p, A20[u], d, doi, d1, mem[M1[u]], 0, j1, j2, div[M0[u]], sum[M0[u]], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			j = M0[W0];
			MODPMPZJOSE(unu, p, A20[W0], d, doi, d1, mem[M1[W0]], 0, j1, j2, div[M0[W0]], sum[M0[W0]], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


//MODSPRIM:
void SUSMODSPRIM4BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void SUSMODSPRIM4BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			if(!u && !h) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			//Nu 2, ci mem[j].
			SUMMPZE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void SUSMODSPRIM4BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void SUSMODSPRIM4BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			
			SUMMPZE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void SUSMODSPRIM5BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
				
			
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void SUSMODSPRIM5BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			if(!u && !h) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
				
			
			SUMMPZE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void SUSMODSPRIM5BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void SUSMODSPRIM5BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			
			SUMMPZE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void SUSMODSPRIM6BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
				//SUMINTM cu mem[j] în loc de 2.
			
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void SUSMODSPRIM6BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			if(!u && !h) {
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
				
			
			SUMMPZE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void SUSMODSPRIM6BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void SUSMODSPRIM6BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			
			SUMMPZE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void SUSMODSPRIM7BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void SUSMODSPRIM7BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			if(!u && !h) {
				NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			
			SUMMPZE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void SUSMODSPRIM7BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);				
				}
				
			
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void SUSMODSPRIM7BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			
			SUMMPZE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void JOSMODSPRIM4BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void JOSMODSPRIM4BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			if(!u && !h) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			//Nu 3, ci mem[j].
			SUMMPZJOSE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void JOSMODSPRIM4BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void JOSMODSPRIM4BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			
			SUMMPZJOSE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void JOSMODSPRIM5BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
				
			
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void JOSMODSPRIM5BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			if(!u && !h) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}

			
			SUMMPZJOSE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void JOSMODSPRIM5BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
			
			
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void JOSMODSPRIM5BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			
			SUMMPZJOSE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void JOSMODSPRIM6BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}

			
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void JOSMODSPRIM6BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			if(!u && !h) {
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
				
			
			SUMMPZJOSE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void JOSMODSPRIM6BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
			
			
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}

void JOSMODSPRIM6BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			
			SUMMPZJOSE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void JOSMODSPRIM7BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void JOSMODSPRIM7BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			if(!u && !h) {
				NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}				
			
			SUMMPZJOSE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void JOSMODSPRIM7BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void JOSMODSPRIM7BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);				
				}
			
			SUMMPZJOSE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0], modpsum[W0], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


//MODSPRIME:
void SUSMODSPRIME4BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			j = M[W];
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME4BIF2(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			if(!u && !h) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			j = M0[W0];//Nu 2, ci mem[j].
			SUMMPZE(p, unu, trei, A20[W0], mem[j], d, d1, doi, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME4BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			j = M[W];
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME4BIF4(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			j = M0[W0];
			SUMMPZE(p, unu, trei, A20[W0], mem[j], d, d1, doi, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME5BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
				
			j = M[W];
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME5BIF2(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			if(!u && !h) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
				
			j = M0[W0];
			SUMMPZE(p, unu, trei, A20[W0], mem[j], d, d1, doi, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME5BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			j = M[W];
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME5BIF4(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			j = M0[W0];
			SUMMPZE(p, unu, trei, A20[W0], mem[j], d, d1, doi, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME6BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
				//SUMINTM cu mem[j] în loc de 2.
			j = M[W];
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME6BIF2(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			if(!u && !h) {
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
				
			j = M0[W0];
			SUMMPZE(p, unu, trei, A20[W0], mem[j], d, d1, doi, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME6BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			j = M[W];
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME6BIF4(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			j = M0[W0];
			SUMMPZE(p, unu, trei, A20[W0], mem[j], d, d1, doi, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME7BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			j = M[W];
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME7BIF2(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			if(!u && !h) {
				NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			j = M0[W0];
			SUMMPZE(p, unu, trei, A20[W0], mem[j], d, d1, doi, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME7BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);				
				}
				
			j = M[W];
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME7BIF4(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			j = M0[W0];
			SUMMPZE(p, unu, trei, A20[W0], mem[j], d, d1, doi, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME4BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			j = M[W];
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME4BIF2(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			if(!u && !h) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			j = M0[W0];//Nu 3, ci mem[j].
			SUMMPZJOSE(p, unu, trei, A20[W0], mem[j], d, d1, doi, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME4BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			j = M[W];
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME4BIF4(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			j = M0[W0];
			SUMMPZJOSE(p, unu, trei, A20[W0], mem[j], d, d1, doi, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME5BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
				
			j = M[W];
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME5BIF2(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			if(!u && !h) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}

			j = M0[W0];
			SUMMPZJOSE(p, unu, trei, A20[W0], mem[j], d, d1, doi, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME5BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
			
			j = M[W];
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME5BIF4(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			j = M0[W0];
			SUMMPZJOSE(p, unu, trei, A20[W0], mem[j], d, d1, doi, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME6BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}

			j = M[W];
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME6BIF2(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			if(!u && !h) {
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
				
			j = M0[W0];
			SUMMPZJOSE(p, unu, trei, A20[W0], mem[j], d, d1, doi, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME6BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
			
			j = M[W];
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}

void JOSMODSPRIME6BIF4(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			j = M0[W0];
			SUMMPZJOSE(p, unu, trei, A20[W0], mem[j], d, d1, doi, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME7BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			j = M[W];
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME7BIF2(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			if(!u && !h) {
				NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			j = M0[W0];
			SUMMPZJOSE(p, unu, trei, A20[W0], mem[j], d, d1, doi, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME7BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			j = M[W];
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME7BIF4(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);				
				}

			j = M0[W0];
			SUMMPZJOSE(p, unu, trei, A20[W0], mem[j], d, d1, doi, div[j], sum[j], div1[j], sum1[j], Q, F2);
			}
		}
}


#endif
