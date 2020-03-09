#define PRAGW 4


void SUSMODSPRIME6BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			j = M[W];
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME6BIF2(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			if(!u && !h) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			j = M0[W0];//Nu 2, ci mem[j].
			SUMMPZE(p, unu, trei, A20[W0], mem[j], d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME6BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			j = M[W];
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME6BIF4(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			SUMMPZE(p, unu, trei, A20[W0], mem[M1[W0]], d, d1, doi, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
}


void SUSMODSPRIME7BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
				
			j = M[W];
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME7BIF2(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			if(!u && !h) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
				
			SUMMPZE(p, unu, trei, A20[W0], mem[M1[W0]], d, d1, doi, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
}


void SUSMODSPRIME7BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			j = M[W];
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME7BIF4(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			SUMMPZE(p, unu, trei, A20[W0], mem[M1[W0]], d, d1, doi, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
}


void SUSMODSPRIME8BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			j = M[W];
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME8BIF2(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			if(!u && !h) {
				SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			SUMMPZE(p, unu, trei, A20[W0], mem[M1[W0]], d, d1, doi, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
}


void SUSMODSPRIME8BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);				
				}
				
			j = M[W];
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void SUSMODSPRIME8BIF4(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			SUMMPZE(p, unu, trei, A20[W0], mem[M1[W0]], d, d1, doi, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
}


void JOSMODSPRIME6BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			j = M[W];
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME6BIF2(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			if(!u && !h) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			SUMMPZJOSE(p, unu, trei, A20[W0], mem[M1[W0]], d, d1, doi, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
}


void JOSMODSPRIME6BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			j = M[W];
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME6BIF4(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			SUMMPZJOSE(p, unu, trei, A20[W0], mem[M1[W0]], d, d1, doi, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
}


void JOSMODSPRIME7BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
				
			j = M[W];
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME7BIF2(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			if(!u && !h) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}

			SUMMPZJOSE(p, unu, trei, A20[W0], mem[M1[W0]], d, d1, doi, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
}


void JOSMODSPRIME7BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				}
			
			j = M[W];
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME7BIF4(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			SUMMPZJOSE(p, unu, trei, A20[W0], mem[M1[W0]], d, d1, doi, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
}


void JOSMODSPRIME8BIF1(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			j = M[W];
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME8BIF2(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			if(!u && !h) {
				SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
				
			SUMMPZJOSE(p, unu, trei, A20[W0], mem[M1[W0]], d, d1, doi, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
}


void JOSMODSPRIME8BIF3(int *M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			j = M[W];
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
			}
		}
}


void JOSMODSPRIME8BIF4(int *M0, int *M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);				
				}

			SUMMPZJOSE(p, unu, trei, A20[W0], mem[M1[W0]], d, d1, doi, div[M0[W0]][1], div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
}




void SUSMODSPRIME1(int *M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int j, FILE *F2, int g, mpz_t p, gmp_ui *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
					u = 1;
					}
					
				j = M[f];
				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
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
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {					
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
					u = 1;
					}
					
				j = M[f];
				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODSPRIME2(int *M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int j, FILE *F2, int g, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					u = 1;
					}
					
				j = M[f];
				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
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
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					u = 1;
					}
					
				j = M[f];
				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODSPRIME3(int *M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int j, FILE *F2, int g, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					u = 1;
					}
					
				j = M[f];
				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
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
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					u = 1;
					}
					
				j = M[f];
				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODSPRIME4(int *M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, int j, FILE *F2, int g, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					NUMSUMV3(p, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
					u = 1;
					}
					
				j = M[f];
				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
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
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					NUMSUMV3(p, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
					u = 1;
					}
					
				j = M[f];
				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODSPRIME5(int *M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, int j, FILE *F2, int g, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		while(1) {
			if(!f--) break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);
					u = 1;
					}
					
				j = M[f];
				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
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
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);
					u = 1;
					}
					
				j = M[f];
				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODSPRIME6(int *M, int *M1, int *M0, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, mpz_t p, mpz_t *q) {
//PURGANTE(C, C1, E);
		
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SUSMODSPRIME6BIF1(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, g, p, q[g]);
		SUSMODSPRIME6BIF2(M0, M1, W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, g, p, q[g], h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		SUSMODSPRIME6BIF3(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, p, q);
		SUSMODSPRIME6BIF4(M0, M1, W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void SUSMODSPRIME7(int *M, int *M1, int *M0, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, mpz_t p, mpz_t *q) {
		
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SUSMODSPRIME7BIF1(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, g, p, q[g]);
		SUSMODSPRIME7BIF2(M0, M1, W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, g, p, q[g], h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		SUSMODSPRIME7BIF3(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, p, q);
		SUSMODSPRIME7BIF4(M0, M1, W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void SUSMODSPRIME8(int *M, int *M1, int *M0, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, FILE *F2, int g, int h, mpz_t p, mpz_t *q) {
		
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SUSMODSPRIME8BIF1(M, W, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, H, K, S, 0, Q, F2, g, p, q[g]);
		SUSMODSPRIME8BIF2(M0, M1, W0, 0, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, H, K, S, 0, Q, F2, g, p, q[g], h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		SUSMODSPRIME8BIF3(M, W, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, H, K, S, 0, Q, F2, p, q);
		SUSMODSPRIME8BIF4(M0, M1, W0, 0, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, H, K, S, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIME1(int *M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int j, FILE *F2, int g, mpz_t p, gmp_ui *q) {
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
					u = 1;
					}
					
				j = M[f];
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
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
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
					u = 1;
					}
					
				j = M[f];
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIME2(int *M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int j, FILE *F2, int g, mpz_t p, mpz_t *q) {
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
					u = 1;
					}
					
				j = M[f];
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
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
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					u = 1;
					}
					
				j = M[f];
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIME3(int *M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int j, FILE *F2, int g, mpz_t p, mpz_t *q) {
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
					u = 1;
					}
					
				j = M[f];
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
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
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					u = 1;
					}
					
				j = M[f];
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIME4(int *M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, int j, FILE *F2, int g, mpz_t p, mpz_t *q) {
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
					u = 1;
					}
					
				j = M[f];
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
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
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					NUMSUMV3(p, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
					u = 1;
					}
					
				j = M[f];
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIME5(int *M, char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, int j, FILE *F2, int g, mpz_t p, mpz_t *q) {
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
					u = 1;
					}
					
				j = M[f];
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
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
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);
					u = 1;
					}
					
				j = M[f];
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, div1[j], sum1[j], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIME6(int *M, int *M1, int *M0, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, mpz_t p, mpz_t *q) {
	//PURGANTE(C, C1, E);
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		JOSMODSPRIME6BIF1(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, g, p, q[g]);
		JOSMODSPRIME6BIF2(M0, M1, W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, g, p, q[g], h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		JOSMODSPRIME6BIF3(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, p, q);
		JOSMODSPRIME6BIF4(M0, M1, W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIME7(int *M, int *M1, int *M0, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		JOSMODSPRIME7BIF1(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, g, p, q[g]);
		JOSMODSPRIME7BIF2(M0, M1, W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, g, p, q[g], h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		JOSMODSPRIME7BIF3(M, W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, p, q);
		JOSMODSPRIME7BIF4(M0, M1, W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIME8(int *M, int *M1, int *M0, char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		JOSMODSPRIME8BIF1(M, W, h = 0, b, b1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, H, K, S, 0, Q, F2, g, p, q[g]);
		JOSMODSPRIME8BIF2(M0, M1, W0, 0, b, b1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, H, K, S, 0, Q, F2, g, p, q[g], h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		JOSMODSPRIME8BIF3(M, W, h = 0, b, b1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, H, K, S, 0, Q, F2, p, q);
		JOSMODSPRIME8BIF4(M0, M1, W0, 0, b, b1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, H, K, S, 0, Q, F2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void MODSPRIME(char *Q, long PP2, FILE *f1, int W, int f, int *M, int *M1, int *M0, int W0, int f0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int &sus, int dir, mpz_t p, mpz_t *q, gmp_ui *q0) {
	if(dir) {
		sus < 55? SUSMODSPRIME1(M, Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, 0, F2, 0, p, q0) 
		: sus < 73? SUSMODSPRIME2(M, Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, 0, F2, 0, p, q) 
			: sus < 163? SUSMODSPRIME3(M, Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, 0, F2, 0, p, q)
			: sus < 213? SUSMODSPRIME4(M, Q, PP2, f1, W = f, f, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div1, sum1, mem, D, E, H, S, 0, F2, 0, p, q) 
			: sus < 223? SUSMODSPRIME5(M, Q, PP2, f1, W = f, f, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div1, sum1, mem, D, E, H, S, 0, F2, 0, p, q) 
				: sus < 243? SUSMODSPRIME6(M, M1, M0, Q, PP2, f1, W = f, W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, p, q) 
					: SUSMODSPRIME7(M, M1, M0, Q, PP2, f1, W = f, W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, p, q);
		} else {
		sus < 55? JOSMODSPRIME1(M, Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, 0, F2, 0, p, q0) 
		: sus < 73? JOSMODSPRIME2(M, Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, 0, F2, 0, p, q) 
			: sus < 163? JOSMODSPRIME3(M, Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, 0, F2, 0, p, q)
			: sus < 213? JOSMODSPRIME4(M, Q, PP2, f1, W = f, f, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div1, sum1, mem, D, E, H, S, 0, F2, 0, p, q) 
			: sus < 223? JOSMODSPRIME5(M, Q, PP2, f1, W = f, f, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div1, sum1, mem, D, E, H, S, 0, F2, 0, p, q) 
				: sus < 243? JOSMODSPRIME6(M, M1, M0, Q, PP2, f1, W = f, W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, p, q) 
					: JOSMODSPRIME7(M, M1, M0, Q, PP2, f1, W = f, W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, p, q);
		}
}
