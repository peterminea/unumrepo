#define PRAGW 1


void SUSMODSPRIM6BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
			
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void SUSMODSPRIM6BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			if(!u && !h) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}

			SUMMPZE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void SUSMODSPRIM6BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				}				
			
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void SUSMODSPRIM6BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				}				
			
			SUMMPZE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void SUSMODSPRIM7BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
			
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void SUSMODSPRIM7BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			if(!u && !h) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}				
			
			SUMMPZE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void SUSMODSPRIM7BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				}				
			
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void SUSMODSPRIM7BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				}
			
			SUMMPZE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void SUSMODSPRIM8BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
			
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void SUSMODSPRIM8BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {
			if(!u && !h) {
				SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
			
			SUMMPZE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void SUSMODSPRIM8BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);				
				}
			
			SUMINT(p, unu, trei, A2[W], 2, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void SUSMODSPRIM8BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				}
			
			SUMMPZE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void JOSMODSPRIM6BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
			
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void JOSMODSPRIM6BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			if(!u && !h) {
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}

			SUMMPZJOSE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void JOSMODSPRIM6BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				}				
			
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void JOSMODSPRIM6BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				}				
			
			SUMMPZJOSE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void JOSMODSPRIM7BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}				
			
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void JOSMODSPRIM7BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			if(!u && !h) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q);
				u = 1;
				}
			
			SUMMPZJOSE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void JOSMODSPRIM7BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				}			
			
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void JOSMODSPRIM7BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				}				
			
			SUMMPZJOSE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void JOSMODSPRIM8BIF1(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, AP[W])) {
			if(!u) {
				SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}				
			
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void JOSMODSPRIM8BIF2(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, int j, char *Q, FILE *F2, int g, mpz_t p, mpz_t q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, AP0[W0])) {
			if(!u && !h) {
				SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
				u = 1;
				}
			
			SUMMPZJOSE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void JOSMODSPRIM8BIF3(int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, AP[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			SUMINTJOS(p, unu, trei, A2[W], 3, d, d1, doi, modpdiv1[W], modpsum1[W], Q, F2);
			}
		}
}


void JOSMODSPRIM8BIF4(int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *modpmem) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, AP0[W0])) {
			if(!u && !h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);				
				}
			
			SUMMPZJOSE(p, unu, trei, A20[W0], modpmem[W0], d, d1, doi, modpdiv[W0][1], modpdiv1[W0], modpsum1[W0], Q, F2);
			}
		}
}


void SUSMODSPRIM1(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2,int g, mpz_t p, gmp_ui *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
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
				
				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
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
					
				
				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODSPRIM2(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2,int g, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
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
					
				
				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
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

				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODSPRIM3(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2,int g, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
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
					
				
				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
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

				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODSPRIM4(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2,int g, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
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
				
				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
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

				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODSPRIM5(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2,int g, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
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
					
				
				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
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

				SUMINT(p, unu, trei, A2[f], 2, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODSPRIM6(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2,int g, int h, mpz_t p, mpz_t *q, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], gmp_ui modpdiv2[][MAX2], gmp_ui modpsum2[][MAX2], int *modpmem1, int *modpmem2) {
//PURGANTE(C, C1, E);
		
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SUSMODSPRIM6BIF1(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, g, p, q[g], modpdiv1, modpsum1, modpmem1);
		SUSMODSPRIM6BIF2(W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, g, p, q[g], h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		SUSMODSPRIM6BIF3(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, p, q, modpdiv1, modpsum1, modpmem1);
		SUSMODSPRIM6BIF4(W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void SUSMODSPRIM7(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2,int g, int h, mpz_t p, mpz_t *q, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], gmp_ui modpdiv2[][MAX2], gmp_ui modpsum2[][MAX2], int *modpmem1, int *modpmem2) {
		
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SUSMODSPRIM7BIF1(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, g, p, q[g], modpdiv1, modpsum1, modpmem1);
		SUSMODSPRIM7BIF2(W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, g, p, q[g], h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		SUSMODSPRIM7BIF3(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, p, q, modpdiv1, modpsum1, modpmem1);
		SUSMODSPRIM7BIF4(W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void SUSMODSPRIM8(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, FILE *F2,int g, int h, mpz_t p, mpz_t *q, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], gmp_ui modpdiv2[][MAX2], gmp_ui modpsum2[][MAX2], int *modpmem1, int *modpmem2) {
		
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SUSMODSPRIM8BIF1(W, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, H, K, S, 0, Q, F2, g, p, q[g], modpdiv1, modpsum1, modpmem1);
		SUSMODSPRIM8BIF2(W0, 0, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, H, K, S, 0, Q, F2, g, p, q[g], h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		SUSMODSPRIM8BIF3(W, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, H, K, S, 0, Q, F2, p, q, modpdiv1, modpsum1, modpmem1);
		SUSMODSPRIM8BIF4(W0, 0, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, H, K, S, 0, Q, F2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIM1(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2,int g, mpz_t p, gmp_ui *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
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
				
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
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
					
				
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIM2(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2,int g, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
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
					
				
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
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
				
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIM3(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2,int g, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
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
					
				
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
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
				
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIM4(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2,int g, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
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
				
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
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
				
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIM5(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2,int g, mpz_t p, mpz_t *q, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
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
				
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
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
				
				SUMINTJOS(p, unu, trei, A2[f], 3, d, d1, doi, modpdiv1[f], modpsum1[f], Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIM6(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2,int g, int h, mpz_t p, mpz_t *q, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], gmp_ui modpdiv2[][MAX2], gmp_ui modpsum2[][MAX2], int *modpmem1, int *modpmem2) {
	//PURGANTE(C, C1, E);
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		JOSMODSPRIM6BIF1(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, g, p, q[g], modpdiv1, modpsum1, modpmem1);
		JOSMODSPRIM6BIF2(W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, g, p, q[g], h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		JOSMODSPRIM6BIF3(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, p, q, modpdiv1, modpsum1, modpmem1);
		JOSMODSPRIM6BIF4(W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIM7(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2,int g, int h, mpz_t p, mpz_t *q, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], gmp_ui modpdiv2[][MAX2], gmp_ui modpsum2[][MAX2], int *modpmem1, int *modpmem2) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		JOSMODSPRIM7BIF1(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, g, p, q[g], modpdiv1, modpsum1, modpmem1);
		JOSMODSPRIM7BIF2(W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, g, p, q[g], h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		JOSMODSPRIM7BIF3(W, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, p, q, modpdiv1, modpsum1, modpmem1);
		JOSMODSPRIM7BIF4(W0, 0, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, 0, Q, F2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODSPRIM8(char *Q, long PP2, FILE *f1, int W, int W0, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2,int g, int h, mpz_t p, mpz_t *q, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], gmp_ui modpdiv2[][MAX2], gmp_ui modpsum2[][MAX2], int *modpmem1, int *modpmem2) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		JOSMODSPRIM8BIF1(W, h = 0, b, b1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, H, K, S, 0, Q, F2, g, p, q[g], modpdiv1, modpsum1, modpmem1);
		JOSMODSPRIM8BIF2(W0, 0, b, b1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, H, K, S, 0, Q, F2, g, p, q[g], h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		JOSMODSPRIM8BIF3(W, h = 0, b, b1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, H, K, S, 0, Q, F2, p, q, modpdiv1, modpsum1, modpmem1);
		JOSMODSPRIM8BIF4(W0, 0, b, b1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, H, K, S, 0, Q, F2, p, q, h, modpdiv, modpsum, modpdiv2, modpsum2, modpmem2);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void MODSPRIM(char *Q, long PP2, FILE *f1, int W, int f, int W0, int f0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *AP, gmp_ui *A20, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int &sus, int dir, mpz_t p, mpz_t *q, gmp_ui *q0, mpz_t modpdiv[][MAX1], mpz_t modpsum[][MAX1], gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], gmp_ui modpdiv2[][MAX2], gmp_ui modpsum2[][MAX2], int *modpmem1, int *modpmem2) {
	if(dir) {
		sus < 55? SUSMODSPRIM1(Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, F2, 0, p, q0, modpdiv1, modpsum1) 
		: sus < 73? SUSMODSPRIM2(Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, F2, 0, p, q, modpdiv1, modpsum1) 
			: sus < 163? SUSMODSPRIM3(Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, F2, 0, p, q, modpdiv1, modpsum1)
			: sus < 213? SUSMODSPRIM4(Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, mem, D, H, S, F2, 0, p, q, modpdiv1, modpsum1) 
			: sus < 223? SUSMODSPRIM5(Q, PP2, f1, W = f, f, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div1, sum1, mem, D, E, H, S, F2, 0, p, q, modpdiv1, modpsum1) 
				: sus < 243? SUSMODSPRIM6(Q, PP2, f1, W = f, W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, p, q, modpdiv, modpsum, modpdiv1, modpsum1, modpdiv2, modpsum2, modpmem1, modpmem2) 
					: SUSMODSPRIM7(Q, PP2, f1, W = f, W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, p, q, modpdiv, modpsum, modpdiv1, modpsum1, modpdiv2, modpsum2, modpmem1, modpmem2);
		} else {
		sus < 55? JOSMODSPRIM1(Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, F2, 0, p, q0, modpdiv1, modpsum1) 
		: sus < 73? JOSMODSPRIM2(Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, F2, 0, p, q, modpdiv1, modpsum1) 
			: sus < 163? JOSMODSPRIM3(Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, F2, 0, p, q, modpdiv1, modpsum1)
			: sus < 213? JOSMODSPRIM4(Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, mem, D, H, S, F2, 0, p, q, modpdiv1, modpsum1) 
			: sus < 223? JOSMODSPRIM5(Q, PP2, f1, W = f, f, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div1, sum1, mem, D, E, H, S, F2, 0, p, q, modpdiv1, modpsum1) 
				: sus < 243? JOSMODSPRIM6(Q, PP2, f1, W = f, W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, p, q, modpdiv, modpsum, modpdiv1, modpsum1, modpdiv2, modpsum2, modpmem1, modpmem2) 
					: JOSMODSPRIM7(Q, PP2, f1, W = f, W0 = f0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, p, q, modpdiv, modpsum, modpdiv1, modpsum1, modpdiv2, modpsum2, modpmem1, modpmem2);
		}
}
