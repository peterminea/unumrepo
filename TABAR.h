//MODPRIMULE:
int SUSMODPRIMULE4BIF1(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
				if(!u) {
					SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
					u = 1;
					}
				
				MODPINTSUS2(unu, A2[W], doi, sum2[W], j1, j2, Q, F2);
			}
	}
return 0;//1 ori zero.
}


void SUSMODPRIMULE4BIF2(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			j = M0[W0];
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		j = M0[u];
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
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


int SUSMODPRIMULE4BIF3(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
			
			MODPINTSUS2(unu, A2[W], doi, sum2[W], j1, j2, Q, F2);
			}
		}
return 0;//1 ori zero.
}


void SUSMODPRIMULE4BIF4(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			j = M0[W0];
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		j = M0[u];
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
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


int SUSMODPRIMULE5BIF1(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
while(1) {
	if(!W--) break;
	if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
						
			MODPINTSUS2(unu, A2[W], doi, sum2[W], j1, j2, Q, F2);
		}
	}
return 0;//1 ori zero.
}


void SUSMODPRIMULE5BIF2(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			j = M0[W0];
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		j = M0[u];
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
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


int SUSMODPRIMULE5BIF3(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			
			MODPINTSUS2(unu, A2[W], doi, sum2[W], j1, j2, Q, F2);
			}
		}
	return 0;//1 ori zero.
}


void SUSMODPRIMULE5BIF4(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			j = M0[W0];
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
			u--;
			break;
			}
		}
		
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		j = M0[u];
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
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


int SUSMODPRIMULE6BIF1(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
while(1) {
	if(!W--) break;
	if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
						
			MODPINTSUS2(unu, A2[W], doi, sum2[W], j1, j2, Q, F2);
		}
	}
return 0;//1 ori zero.
}


void SUSMODPRIMULE6BIF2(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			j = M0[W0];
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		j = M0[u];
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
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


int SUSMODPRIMULE6BIF3(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			
			MODPINTSUS2(unu, A2[W], doi, sum2[W], j1, j2, Q, F2);
			}
		}
	return 0;//1 ori zero.
}


void SUSMODPRIMULE6BIF4(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {			
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			j = M0[W0];
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
			u--;
			break;
			}
		}
		
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		j = M0[u];
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
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


int SUSMODPRIMULE7BIF1(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
				if(!u) {
					NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
					u = 1;
					}
				
				MODPINTSUS2(unu, A2[W], doi, sum2[W], j1, j2, Q, F2);
			}
		}
return 0;//1 ori zero.
}


void SUSMODPRIMULE7BIF2(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			j = M0[W0];
			//MODPMPZSUSU2(unu, p, A20[u=W0], d, doi, d1, 2, 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);// mem[j], nu 2.
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		j = M0[u];
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
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


int SUSMODPRIMULE7BIF3(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
				}
				
			
			MODPINTSUS2(unu, A2[W], doi, sum2[W], j1, j2, Q, F2);			
			}
	}
return 0;//1 ori zero.
}


void SUSMODPRIMULE7BIF4(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			NUMESUMV(p, d, b, b1, D, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;			
			j = M0[W0];
			//MODPMPZSUSE2(mpz_t unu, A20[u=W0], doi, d1, j1, j2, Q, F2) {//j=sum2.
			MODPMPZSUSE(unu, p, A20[u=W0], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
			u--;
			break;
			}
		}
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {
		j = M0[u];
		MODPMPZSUSE(unu, p, A20[u], d, doi, d1, mem[j], 0, j1, j2, div[j], sum[j], div1[j], sum1[j], Q, F2);
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


void SUSMODSPRIMULE4BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
					
			SUMINT1(p, unu, trei, A2[W], 1+A2[W], sum2[W], d, d1, doi, Q, F2);
			}
		}
}


void SUSMODSPRIMULE4BIF2(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
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


void SUSMODSPRIMULE4BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			
			SUMINT1(p, unu, trei, A2[W], 1+A2[W], sum2[W], d, d1, doi, Q, F2);
			}
		}
}


void SUSMODSPRIMULE4BIF4(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
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


void SUSMODSPRIMULE5BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
				
			
			SUMINT1(p, unu, trei, A2[W], 1+A2[W], sum2[W], d, d1, doi, Q, F2);
			}
		}
}


void SUSMODSPRIMULE5BIF2(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
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


void SUSMODSPRIMULE5BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			
			SUMINT1(p, unu, trei, A2[W], 1+A2[W], sum2[W], d, d1, doi, Q, F2);
			}
		}
}


void SUSMODSPRIMULE5BIF4(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
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


void SUSMODSPRIMULE6BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
				//SUMINTM cu mem[j] în loc de 2.
			
			SUMINT1(p, unu, trei, A2[W], 1+A2[W], sum2[W], d, d1, doi, Q, F2);
			}
		}
}


void SUSMODSPRIMULE6BIF2(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
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


void SUSMODSPRIMULE6BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			
			SUMINT1(p, unu, trei, A2[W], 1+A2[W], sum2[W], d, d1, doi, Q, F2);
			}
		}
}


void SUSMODSPRIMULE6BIF4(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
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


void SUSMODSPRIMULE7BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				NUMESUMV(p, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			
			SUMINT1(p, unu, trei, A2[W], 1+A2[W], sum2[W], d, d1, doi, Q, F2);
			}
		}
}


void SUSMODSPRIMULE7BIF2(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int H, int K, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
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


void SUSMODSPRIMULE7BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);				
				}
				
			
			SUMINT1(p, unu, trei, A2[W], 1+A2[W], sum2[W], d, d1, doi, Q, F2);
			}
		}
}


void SUSMODSPRIMULE7BIF4(int *M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
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

