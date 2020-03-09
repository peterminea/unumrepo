#define PRAGW 4000


int SUSMODPRIME6BIF1(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
				if(!u) {
					SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
					u = 1;
					}
				j = M[W];
				MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);				
			}
	}
return 1;
}


void SUSMODPRIME6BIF2(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZSUSE(unu, p, A20[u=W0], d, mem[M1[W0]], 0, j1, j2, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		MODPMPZSUSE(unu, p, A20[u], d, mem[M1[u]], 0, j1, j2, div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			MODPMPZSUSE(unu, p, A20[W0], d, mem[M1[W0]], 0, j1, j2, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int SUSMODPRIME6BIF3(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
				}
			j = M[W];
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
			}
		}
return 1;
}


void SUSMODPRIME6BIF4(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZSUSE(unu, p, A20[u=W0], d, mem[M1[W0]], 0, j1, j2, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		MODPMPZSUSE(unu, p, A20[u], d, mem[M1[u]], 0, j1, j2, div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			MODPMPZSUSE(unu, p, A20[W0], d, mem[M1[W0]], 0, j1, j2, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int SUSMODPRIME7BIF1(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
while(1) {
	if(!W--) break;
	if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q);
				if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
			j = M[W];			
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
		}
	}
return 1;
}


void SUSMODPRIME7BIF2(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q);
			if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZSUSE(unu, p, A20[u=W0], d, mem[M1[W0]], 0, j1, j2, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		MODPMPZSUSE(unu, p, A20[u], d, mem[M1[u]], 0, j1, j2, div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			MODPMPZSUSE(unu, p, A20[W0], d, mem[M1[W0]], 0, j1, j2, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int SUSMODPRIME7BIF3(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			j = M[W];
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
			}
		}
	return 1;
}


void SUSMODPRIME7BIF4(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZSUSE(unu, p, A20[u=W0], d, mem[M1[W0]], 0, j1, j2, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
		
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		MODPMPZSUSE(unu, p, A20[u], d, mem[M1[u]], 0, j1, j2, div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			MODPMPZSUSE(unu, p, A20[W0], d, mem[M1[W0]], 0, j1, j2, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int SUSMODPRIME8BIF1(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
				if(!u) {
					SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
					u = 1;
					}
				j = M[W];
				MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
			}
		}
return 1;
}


void SUSMODPRIME8BIF2(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZSUSE(unu, p, A20[u=W0], d, mem[M1[W0]], 0, j1, j2, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		MODPMPZSUSE(unu, p, A20[u], d, mem[M1[u]], 0, j1, j2, div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {						
			MODPMPZSUSE(unu, p, A20[W0], d, mem[M1[W0]], 0, j1, j2, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int SUSMODPRIME8BIF3(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			j = M[W];
			MODPINTSUS(unu, p, A2[W], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
			}
	}
return 1;
}


void SUSMODPRIME8BIF4(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUM7(p, d, b, b1, D, H, K, S, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZSUSE(unu, p, A20[u=W0], d, mem[M1[W0]], 0, j1, j2, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		MODPMPZSUSE(unu, p, A20[u], d, mem[M1[u]], 0, j1, j2, div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			MODPMPZSUSE(unu, p, A20[W0], d, mem[M1[W0]], 0, j1, j2, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int JOSMODPRIME6BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
				
			j = M[W];
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
			}
	}
return 1;
}


void JOSMODPRIME6BIF2(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZJOSE(unu, p, A20[u=W0], d, mem[M1[W0]], 0, j1, j2, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		MODPMPZJOSE(unu, p, A20[u], d, mem[M1[u]], 0, j1, j2, div[M0[u]][1], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			MODPMPZJOSE(unu, p, A20[W0], d, mem[M1[W0]], 0, j1, j2, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int JOSMODPRIME6BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--)
			break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
				}
								
			j = M[W];
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);	
			}
	}
return 1;
}


void JOSMODPRIME6BIF4(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZJOSE(unu, p, A20[u=W0], d, mem[M1[W0]], 0, j1, j2, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}

	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		MODPMPZJOSE(unu, p, A20[u], d, mem[M1[u]], 0, j1, j2, div[M0[u]][1], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			MODPMPZJOSE(unu, p, A20[W0], d, mem[M1[W0]], 0, j1, j2, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int JOSMODPRIME7BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q);
				if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
				
			j = M[W];
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
			}
	}
return 1;
}


void JOSMODPRIME7BIF2(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {	
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q);
			if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZJOSE(unu, p, A20[u=W0], d, mem[M1[W0]], 0, j1, j2, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		MODPMPZJOSE(unu, p, A20[u], d, mem[M1[u]], 0, j1, j2, div[M0[u]][1], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			MODPMPZJOSE(unu, p, A20[W0], d, mem[M1[W0]], 0, j1, j2, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int JOSMODPRIME7BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--)
			break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			j = M[W];
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);	
			}
	}
return 1;
}


void JOSMODPRIME7BIF4(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZJOSE(unu, p, A20[u=W0], d, mem[M1[W0]], 0, j1, j2, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		j = M0[u];		
		MODPMPZJOSE(unu, p, A20[u], d, mem[M1[u]], 0, j1, j2, div[M0[u]][1], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			MODPMPZJOSE(unu, p, A20[W0], d, mem[M1[W0]], 0, j1, j2, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int JOSMODPRIME8BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
				
			j = M[W];
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
			}
	}
return 1;
}


void JOSMODPRIME8BIF2(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZJOSE(unu, p, A20[u=W0], d, mem[M1[W0]], 0, j1, j2, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		MODPMPZJOSE(unu, p, A20[u], d, mem[M1[u]], 0, j1, j2, div[M0[u]][1], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			MODPMPZJOSE(unu, p, A20[W0], d, mem[M1[W0]], 0, j1, j2, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


int JOSMODPRIME8BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--)
			break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
				}

			j = M[W];
			MODPINTJOS(unu, p, A2[W], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);	
			}
	}
return 1;
}


void JOSMODPRIME8BIF4(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUM7(p, d, b, b1, D, H, K, S, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return;			
			MODPMPZJOSE(unu, p, A20[u=W0], d, mem[M1[W0]], 0, j1, j2, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, AP0[u])) {
		MODPMPZJOSE(unu, p, A20[u], d, mem[M1[u]], 0, j1, j2, div[M0[u]][1], div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {			
			
			MODPMPZJOSE(unu, p, A20[W0], d, mem[M1[W0]], 0, j1, j2, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}



void SUSMODPRIME1(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, gmp_ui *q) {
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
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		#pragma omp single nowait
		for(f = W-1; f >= 0; f--) {
		//while(1) {
			//if(!f--)
				//break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}
				j = M[f];
				//#pragma omp critical
				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}
		}

	i = 0;
	if(!i1) break;
	}

return;*/


if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--)
				break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}
				j = M[f];
				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
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
			if(!f--)
				break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {					
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					SMV(p, d, b, b1, D, H, u, div1, sum1, q[u]);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
				}
				j = M[f];
				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void SUSMODPRIME2(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {

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
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--)
				break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}
				j = M[f];
				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}
		}

	i = 0;
	if(!i1) break;
	}

return;
*/

if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--)
				break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}
				j = M[f];
				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
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
			if(!f--)
				break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMPURG1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
				}
				j = M[f];
				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODPRIME3(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
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
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		//#pragma omp single nowait
		for(f = W-1; f >= 0; f--) {
		//while(1) {
			//if(!f--)
				//break;
				gmp_printf("%d %llu %Zd\n", f, A2[f], p);
			//if(1==2)
			if(mpz_divisible_ui_p(p, A2[f])) {
				//#pragma omp single nowait
				//if(1==2)
				if(!u) {
					NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}
				j = M[f];
				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}
		}

	i = 0;
	if(!i1) break;
	}

return;*/


if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--)
				break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}
				j = M[f];
				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
				//MODPINTSUS2(unu, A2[f], doi, sum2, j1, j2, Q, F2);
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
			if(!f--)
				break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
				}
				j = M[f];
				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODPRIME4(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
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
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		//#pragma omp single nowait
		for(f = W-1; f >= 0; f--) {
		//while(1) {
			//if(!f--)
				//break;
				gmp_printf("%d %llu %Zd\n", f, A2[f], p);
			//if(1==2)
			if(mpz_divisible_ui_p(p, A2[f])) {
				//#pragma omp single nowait
				//if(1==2)
				if(!u) {
					NUMSUMV3(p, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}
				j = M[f];
				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}
		}

	i = 0;
	if(!i1) break;
	}

return;*/

if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--)
				break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					NUMSUMV3(p, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}
				j = M[f];
				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
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
			if(!f--)
				break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMV3(p, d, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
				}
				j = M[f];
				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODPRIME5(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
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
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		//#pragma omp single nowait
		for(f = W-1; f >= 0; f--) {
		//while(1) {
			//if(!f--)
				//break;
				gmp_printf("%d %llu %Zd\n", f, A2[f], p);
			//if(1==2)
			if(mpz_divisible_ui_p(p, A2[f])) {
				//#pragma omp single nowait
				//if(1==2)
				if(!u) {
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, g, div1, sum1, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}
				j = M[f];
				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}
		}

	i = 0;
	if(!i1) break;
	}

return;*/


if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--)
				break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}
				j = M[f];
				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
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
			if(!f--)
				break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
				}
				j = M[f];
				MODPINTSUS(unu, p, A2[f], doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODPRIME6(char *Q, long PP2, FILE *f1, int W, int *M, int *M0, int *M1, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
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
		if(SUSMODPRIME6BIF1(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
			SUSMODPRIME6BIF2(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
		}

	i = 0;
	if(!i1) break;
	}

return;*/
	
	
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(SUSMODPRIME6BIF1(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
			SUSMODPRIME6BIF2(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(SUSMODPRIME6BIF3(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q))
			SUSMODPRIME6BIF4(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void SUSMODPRIME7(char *Q, long PP2, FILE *f1, int W, int *M, int *M0, int *M1, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
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
		if(SUSMODPRIME7BIF1(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
			SUSMODPRIME7BIF2(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
		}

	i = 0;
	if(!i1) break;
	}

return;*/

if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(SUSMODPRIME7BIF1(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
			SUSMODPRIME7BIF2(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(SUSMODPRIME7BIF3(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q))
			SUSMODPRIME7BIF4(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODPRIME8(char *Q, long PP2, FILE *f1, int W, int *M, int *M0, int *M1, int W0, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
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
		if(SUSMODPRIME8BIF1(W, M, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
			SUSMODPRIME8BIF2(W0, M0, M1, -1, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
		}

	i = 0;
	if(!i1) break;
	}

return;*/


if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(SUSMODPRIME8BIF1(W, M, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
			SUSMODPRIME8BIF2(W0, M0, M1, -1, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(SUSMODPRIME8BIF3(W, M, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, p, q))
			SUSMODPRIME8BIF4(W0, M0, M1, -1, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODPRIME1(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, gmp_ui *q) {

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
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(unu, AP[f])) {
				if(!u) {
					SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
					}
					
					j = M[f];
					MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}

		}

	i = 0;
	if(!i1) break;
	}

return;*/

if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
		if(!f--) break;
		if(mpz_divisible_ui_p(p, AP[f])) {
			if(!u) {
				SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
				if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
				u = 1;
				}
				
				j = M[f];
				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
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
				if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
				}

				j = M[f];
				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
			}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODPRIME2(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {

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
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(unu, AP[f])) {
				if(!u) {
					NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
					}
					
					j = M[f];
					MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}

		}

	i = 0;
	if(!i1) break;
	}

return;*/

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
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
					}
					
				j = M[f];
				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
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
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					}
					
				j = M[f];
				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
				}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODPRIME3(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
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
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(unu, AP[f])) {
				if(!u) {
					NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
					}
					
					j = M[f];
					MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}

		}

	i = 0;
	if(!i1) break;
	}

return;*/



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
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
					}
					
				j = M[f];
				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
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
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					}
					
				j = M[f];
				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
				}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODPRIME4(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
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
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(unu, AP[f])) {
				if(!u) {
					NUMSUMV3(p, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
					}
					
					j = M[f];
					MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}
		}

	i = 0;
	if(!i1) break;
	}

return;*/

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
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
					}
					
				j = M[f];
				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
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
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					}
					
				j = M[f];
				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
				}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODPRIME5(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
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
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(unu, AP[f])) {
				if(!u) {
					NUMSUMV2(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
					}
					
					j = M[f];
					MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}

		}

	i = 0;
	if(!i1) break;
	}

return;*/

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
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
					}
					
				j = M[f];
				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
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
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					}
					
				j = M[f];
				MODPINTJOS(unu, p, A2[f], doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
				}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODPRIME6(char *Q, long PP2, FILE *f1, int W, int *M, int *M0, int *M1, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, gmp_ui *AP, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
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
			if(JOSMODPRIME6BIF1(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
				JOSMODPRIME6BIF2(M0, M1, W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
			}
		i = 0;
		if(!i1) break;
		}

	return;
	*/
	
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(JOSMODPRIME6BIF1(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
			JOSMODPRIME6BIF2(M0, M1, W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(JOSMODPRIME6BIF3(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q))
			JOSMODPRIME6BIF4(M0, M1, W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODPRIME7(char *Q, long PP2, FILE *f1, int W, int *M, int *M0, int *M1, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, gmp_ui *AP, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
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
			if(JOSMODPRIME7BIF1(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
				JOSMODPRIME7BIF2(M0, M1, W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
			}
		i = 0;
		if(!i1) break;
		}

	return;*/

if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(JOSMODPRIME7BIF1(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
			JOSMODPRIME7BIF2(M0, M1, W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(JOSMODPRIME7BIF3(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q))
			JOSMODPRIME7BIF4(M0, M1, W0, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}



void JOSMODPRIME8(char *Q, long PP2, FILE *f1, int W, int *M, int *M0, int *M1, int W0, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, gmp_ui *AP, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
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
			if(JOSMODPRIME8BIF1(M, W, h = 0, b, b1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
				JOSMODPRIME8BIF2(M0, M1, W0, -1, b, b1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
			}
		i = 0;
		if(!i1) break;
		}

	return;*/

if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(JOSMODPRIME8BIF1(M, W, h = 0, b, b1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
			JOSMODPRIME8BIF2(M0, M1, W0, -1, b, b1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(JOSMODPRIME8BIF3(M, W, h = 0, b, b1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, p, q))
			JOSMODPRIME8BIF4(M0, M1, W0, -1, b, b1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void MODPRIME(char *Q, long PP2, FILE *f1, int W, int *M, int *M0, int *M1, int f, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, gmp_ui *AP, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, mpz_t p, mpz_t *q, gmp_ui *q0, int &sus, int dir) {
	if(dir) {
		sus < 55? SUSMODPRIME1(Q, PP2, f1, W, M, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, F2, 0, 0, 0, 0, p, q0) 
		: sus < 73? SUSMODPRIME2(Q, PP2, f1, W, M, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, F2, 0, 0, 0, 0, p, q) 
			: sus < 163? SUSMODPRIME3(Q, PP2, f1, W, M, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, F2, 0, 0, 0, 0, p, q)
			: sus < 213? SUSMODPRIME4(Q, PP2, f1, W, M, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, mem, D, H, S, F2, 0, 0, 0, 0, p, q) 
			: sus < 223? SUSMODPRIME5(Q, PP2, f1, W, M, f, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div1, sum1, mem, D, E, H, S, F2, 0, 0, 0, 0, p, q) 
				: sus < 243? SUSMODPRIME6(Q, PP2, f1, W, M, M0, M1, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, 0, 0, p, q) 
					: SUSMODPRIME7(Q, PP2, f1, W, M, M0, M1, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, 0, 0, p, q);
		} else {
		sus < 55? JOSMODPRIME1(Q, PP2, f1, W, M, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, F2, 0, 0, 0, 0, p, q0) 
		: sus < 73? JOSMODPRIME2(Q, PP2, f1, W, M, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, F2, 0, 0, 0, 0, p, q) 
			: sus < 163? JOSMODPRIME3(Q, PP2, f1, W, M, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, F2, 0, 0, 0, 0, p, q)
			: sus < 213? JOSMODPRIME4(Q, PP2, f1, W, M, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, mem, D, H, S, F2, 0, 0, 0, 0, p, q) 
			: sus < 223? JOSMODPRIME5(Q, PP2, f1, W, M, f, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div1, sum1, mem, D, E, H, S, F2, 0, 0, 0, 0, p, q) 
				: sus < 243? JOSMODPRIME6(Q, PP2, f1, W, M, M0, M1, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, AP, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, 0, 0, p, q) 
					: JOSMODPRIME7(Q, PP2, f1, W, M, M0, M1, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, AP, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, 0, 0, p, q);	
		}
}
