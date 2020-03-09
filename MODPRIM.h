#define PRAGW 1


int SUSMODPRIM6BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
				if(!u) {
					SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
					u = 1;
					}
				
				MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
			}
	}
return 1;
}


void SUSMODPRIM6BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			
			MODPMPZSUSE(unu, p, A20[u=W0], d, modpmem[W0], 0, j1, j2, modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {		
		MODPMPZSUSE(unu, p, A20[u], d, modpmem[u], 0, j1, j2, modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			MODPMPZSUSE(unu, p, A20[W0], d, modpmem[W0], 0, j1, j2, modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int SUSMODPRIM6BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
			
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
return 1;
}


void SUSMODPRIM6BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			
			MODPMPZSUSE(unu, p, A20[u=W0], d, modpmem[W0], 0, j1, j2, modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {		
		MODPMPZSUSE(unu, p, A20[u], d, modpmem[u], 0, j1, j2, modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			MODPMPZSUSE(unu, p, A20[W0], d, modpmem[W0], 0, j1, j2, modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int SUSMODPRIM7BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
while(1) {
	if(!W--) break;
	if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
						
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
		}
	}
return 1;
}


void SUSMODPRIM7BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			
			MODPMPZSUSE(unu, p, A20[u=W0], d, modpmem[W0], 0, j1, j2, modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {		
		MODPMPZSUSE(unu, p, A20[u], d, modpmem[u], 0, j1, j2, modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			MODPMPZSUSE(unu, p, A20[W0], d, modpmem[W0], 0, j1, j2, modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int SUSMODPRIM7BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}				
			
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
	return 1;
}


void SUSMODPRIM7BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			
			MODPMPZSUSE(unu, p, A20[u=W0], d, modpmem[W0], 0, j1, j2, modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
		
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {		
		MODPMPZSUSE(unu, p, A20[u], d, modpmem[u], 0, j1, j2, modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			MODPMPZSUSE(unu, p, A20[W0], d, modpmem[W0], 0, j1, j2, modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int SUSMODPRIM8BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
				if(!u) {
					SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
					u = 1;
					}
				
				MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
return 1;
}


void SUSMODPRIM8BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZSUSE(unu, p, A20[u=W0], d, modpmem[W0], 0, j1, j2, modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {		
		MODPMPZSUSE(unu, p, A20[u], d, modpmem[u], 0, j1, j2, modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			MODPMPZSUSE(unu, p, A20[W0], d, modpmem[W0], 0, j1, j2, modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int SUSMODPRIM8BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
			
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
			}
	}
return 1;
}


void SUSMODPRIM8BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUM7(p, d, b, b1, D, H, K, S, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZSUSE(unu, p, A20[u=W0], d, modpmem[W0], 0, j1, j2, modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {		
		MODPMPZSUSE(unu, p, A20[u], d, modpmem[u], 0, j1, j2, modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			MODPMPZSUSE(unu, p, A20[W0], d, modpmem[W0], 0, j1, j2, modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int JOSMODPRIM6BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
			
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
			}
	}
return 1;
}


void JOSMODPRIM6BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZJOSE(unu, p, A20[u=W0], d, modpmem[W0], 0, j1, j2, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {		
		MODPMPZJOSE(unu, p, A20[u], d, modpmem[W0], 0, j1, j2, modpdiv[u][1], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			MODPMPZJOSE(unu, p, A20[W0], d, modpmem[W0], 0, j1, j2, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int JOSMODPRIM6BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--)
			break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
			
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);	
			}
	}
return 1;
}


void JOSMODPRIM6BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZJOSE(unu, p, A20[u=W0], d, modpmem[W0], 0, j1, j2, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}

	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {		
		MODPMPZJOSE(unu, p, A20[u], d, modpmem[W0], 0, j1, j2, modpdiv[u][1], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			MODPMPZJOSE(unu, p, A20[W0], d, modpmem[W0], 0, j1, j2, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int JOSMODPRIM7BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
				
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
			}
	}
return 1;
}


void JOSMODPRIM7BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {	
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZJOSE(unu, p, A20[u=W0], d, modpmem[W0], 0, j1, j2, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {		
		MODPMPZJOSE(unu, p, A20[u], d, modpmem[W0], 0, j1, j2, modpdiv[u][1], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			MODPMPZJOSE(unu, p, A20[W0], d, modpmem[W0], 0, j1, j2, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int JOSMODPRIM7BIF3(int W,  int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--)
			break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
			
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);	
			}
	}
return 1;
}


void JOSMODPRIM7BIF4(int W0,  int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZJOSE(unu, p, A20[u=W0], d, modpmem[W0], 0, j1, j2, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {				
		MODPMPZJOSE(unu, p, A20[u], d, modpmem[W0], 0, j1, j2, modpdiv[u][1], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			MODPMPZJOSE(unu, p, A20[W0], d, modpmem[W0], 0, j1, j2, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int JOSMODPRIM8BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
				
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);
			}
	}
return 1;
}


void JOSMODPRIM8BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZJOSE(unu, p, A20[u=W0], d, modpmem[W0], 0, j1, j2, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {		
		MODPMPZJOSE(unu, p, A20[u], d, modpmem[W0], 0, j1, j2, modpdiv[u][1], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			MODPMPZJOSE(unu, p, A20[W0], d, modpmem[W0], 0, j1, j2, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


int JOSMODPRIM8BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--)
			break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, modpdiv1[W], modpsum1[W], Q, F2);	
			}
	}
return 1;
}


void JOSMODPRIM8BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUM7(p, d, b, b1, D, H, K, S, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZJOSE(unu, p, A20[u=W0], d, modpmem[W0], 0, j1, j2, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {		
		MODPMPZJOSE(unu, p, A20[u], d, modpmem[W0], 0, j1, j2, modpdiv[u][1], modpdiv1[u], modpsum1[u], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			MODPMPZJOSE(unu, p, A20[W0], d, modpmem[W0], 0, j1, j2, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
	}
}


void SUSMODPRIM1(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, gmp_ui *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {

if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!--f)
				break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}

				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;

		while(1) {
			if(!--f)
				break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					SMV(p, d, b, b1, D, H, u, div1, sum1, q[u]);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
				}

				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void SUSMODPRIM2(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!--f)
				break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}

				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;

		while(1) {
			if(!--f)
				break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMPURG1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
				}

				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODPRIM3(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!--f)
				break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}

				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;

		while(1) {
			if(!--f)
				break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
				}

				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODPRIM4(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!--f)
				break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					NUMSUMV3(p, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}

				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;

		while(1) {
			if(!--f)
				break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMV3(p, d, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
				}

				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODPRIM5(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!--f)
				break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}

				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;

		while(1) {
			if(!--f)
				break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
				}

				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODPRIM6(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], gmp_ui modpdiv2[][MAX2], gmp_ui modpsum2[][MAX2], int *modpmem1, int *modpmem2) {
	//PURGANTE(C, C1, E);
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(SUSMODPRIM6BIF1(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], modpdiv1, modpsum1, modpmem1))
			SUSMODPRIM6BIF2(W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(SUSMODPRIM6BIF3(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, modpdiv1, modpsum1, modpmem1))
			SUSMODPRIM6BIF4(W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void SUSMODPRIM7(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], gmp_ui modpdiv2[][MAX2], gmp_ui modpsum2[][MAX2], int *modpmem1, int *modpmem2) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(SUSMODPRIM7BIF1(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], modpdiv1, modpsum1, modpmem1))
			SUSMODPRIM7BIF2(W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(SUSMODPRIM7BIF3(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, modpdiv1, modpsum1, modpmem1))
			SUSMODPRIM7BIF4(W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODPRIM8(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], gmp_ui modpdiv2[][MAX2], gmp_ui modpsum2[][MAX2], int *modpmem1, int *modpmem2) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(SUSMODPRIM8BIF1(W, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], modpdiv1, modpsum1, modpmem1))
			SUSMODPRIM8BIF2(W0, -1, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(SUSMODPRIM8BIF3(W, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, p, q, modpdiv1, modpsum1, modpmem1))
			SUSMODPRIM8BIF4(W0, -1, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODPRIM1(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, gmp_ui *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
		if(!f--) break;
		if(mpz_divisible_ui_p(unu, AP[f])) {
			if(!u) {
				SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
				u = 1;
				}				

				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
			}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		
		while(1) {
		if(!f--) break;
		if(mpz_divisible_ui_p(unu, AP[f])) {
			if(!u) {				
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SMV(p, d, b, b1, D, H, u, div1, sum1, q[u]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
				}

				
				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
			}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODPRIM2(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(p, AP[f])) {
				if(!u) {
					NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
					}

				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;

		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(unu, AP[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMPURG1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					}					

				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODPRIM3(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(p, AP[f])) {
				if(!u) {
					NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
					}

				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;

		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(unu, AP[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					}					

				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODPRIM4(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(p, AP[f])) {
				if(!u) {
					NUMSUMV3(p, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
					}

				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;

		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(unu, AP[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMV3(p, d, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					}					

				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODPRIM5(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(p, AP[f])) {
				if(!u) {
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
					}

				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;

		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(unu, AP[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					}					

				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, modpdiv1[f], modpsum1[f], Q, F2);
				}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODPRIM6(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, gmp_ui *AP, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], gmp_ui modpdiv2[][MAX2], gmp_ui modpsum2[][MAX2], int *modpmem1, int *modpmem2) {
	//PURGANTE(C, C1, E);
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(JOSMODPRIM6BIF1(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], modpdiv1, modpsum1, modpmem1))
			JOSMODPRIM6BIF2(W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(JOSMODPRIM6BIF3(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, modpdiv1, modpsum1, modpmem1))
			JOSMODPRIM6BIF4(W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODPRIM7(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, gmp_ui *AP, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], gmp_ui modpdiv2[][MAX2], gmp_ui modpsum2[][MAX2], int *modpmem1, int *modpmem2) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(JOSMODPRIM7BIF1(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], modpdiv1, modpsum1, modpmem1))
			JOSMODPRIM7BIF2(W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(JOSMODPRIM7BIF3(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, modpdiv1, modpsum1, modpmem1))
			JOSMODPRIM7BIF4(W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODPRIM8(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, gmp_ui *AP, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], gmp_ui modpdiv2[][MAX2], gmp_ui modpsum2[][MAX2], int *modpmem1, int *modpmem2) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(JOSMODPRIM8BIF1(W, h = 0, b, b1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], modpdiv1, modpsum1, modpmem1))
			JOSMODPRIM8BIF2(W0, -1, b, b1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(JOSMODPRIM8BIF3(W, h = 0, b, b1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, p, q, modpdiv1, modpsum1, modpmem1))
			JOSMODPRIM8BIF4(W0, -1, b, b1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void MODPRIM(char *Q, long PP2, FILE *f1, int W, int f, int W0, int f0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, gmp_ui *AP, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, mpz_t p, mpz_t *q, gmp_ui *q0, int &sus, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], gmp_ui modpdiv2[][MAX2], gmp_ui modpsum2[][MAX2], int *modpmem1, int *modpmem2, int dir) {
	if(dir) {
		sus < 55? SUSMODPRIM1(Q, PP2, f1, W, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, F2, 0, 0, 0, p, q0, modpdiv1, modpsum1) 
		: sus < 73? SUSMODPRIM2(Q, PP2, f1, W, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, F2, 0, 0, 0, p, q, modpdiv1, modpsum1) 
			: sus < 163? SUSMODPRIM3(Q, PP2, f1, W, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, F2, 0, 0, 0, p, q, modpdiv1, modpsum1)
			: sus < 213? SUSMODPRIM4(Q, PP2, f1, W, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, mem, D, H, S, F2, 0, 0, 0, p, q, modpdiv1, modpsum1) 
			: sus < 223? SUSMODPRIM5(Q, PP2, f1, W, f, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div1, sum1, mem, D, E, H, S, F2, 0, 0, 0, p, q, modpdiv1, modpsum1) 
				: sus < 243? SUSMODPRIM6(Q, PP2, f1, W, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, 0, 0, p, q, modpdiv, modpsum, modpdiv1, modpsum1, modpdiv2, modpsum2, modpmem1, modpmem2) 
					: SUSMODPRIM7(Q, PP2, f1, W, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, 0, 0, p, q, modpdiv, modpsum, modpdiv1, modpsum1, modpdiv2, modpsum2, modpmem1, modpmem2);
		} else {
		sus < 55? JOSMODPRIM1(Q, PP2, f1, W, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, F2, 0, 0, 0, p, q0, modpdiv1, modpsum1) 
		: sus < 73? JOSMODPRIM2(Q, PP2, f1, W, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, F2, 0, 0, 0, p, q, modpdiv1, modpsum1) 
			: sus < 163? JOSMODPRIM3(Q, PP2, f1, W, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, F2, 0, 0, 0, p, q, modpdiv1, modpsum1)
			: sus < 213? JOSMODPRIM4(Q, PP2, f1, W, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, mem, D, H, S, F2, 0, 0, 0, p, q, modpdiv1, modpsum1)
			: sus < 223? JOSMODPRIM5(Q, PP2, f1, W, f, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div1, sum1, mem, D, E, H, S, F2, 0, 0, 0, p, q, modpdiv1, modpsum1) 
				: sus < 243? JOSMODPRIM6(Q, PP2, f1, W, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, AP, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, 0, 0, p, q, modpdiv, modpsum, modpdiv1, modpsum1, modpdiv2, modpsum2, modpmem1, modpmem2) 
					: JOSMODPRIM7(Q, PP2, f1, W, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, AP, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, 0, 0, p, q, modpdiv, modpsum, modpdiv1, modpsum1, modpdiv2, modpsum2, modpmem1, modpmem2);
		}
}
