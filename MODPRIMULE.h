#define PRAGW 1

int SUSMODPRIMULE6BIF1(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
				if(!u) {
					SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
					u = 1;
					}
				
				MODPINTSUS2(unu, A2[W], doi, sum2[W], j1, j2, Q, F2);
			}
	}
return 0;//1 ori zero.
}


void SUSMODPRIMULE6BIF2(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
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


int SUSMODPRIMULE6BIF3(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
				}
			
			MODPINTSUS2(unu, A2[W], doi, sum2[W], j1, j2, Q, F2);
			}
		}
return 0;//1 ori zero.
}


void SUSMODPRIMULE6BIF4(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
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


int SUSMODPRIMULE7BIF1(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
while(1) {
	if(!W--) break;
	if(mpz_divisible_ui_p(p, A2[W])) {
			if(!u) {
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q);
				if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
				u = 1;
				}
						
			MODPINTSUS2(unu, A2[W], doi, sum2[W], j1, j2, Q, F2);
		}
	}
return 0;
}


void SUSMODPRIMULE7BIF2(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
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


int SUSMODPRIMULE7BIF3(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
				}				
			
			MODPINTSUS2(unu, A2[W], doi, sum2[W], j1, j2, Q, F2);
			}
		}
	return 0;//1 ori zero.
}


void SUSMODPRIMULE7BIF4(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
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



int SUSMODPRIMULE8BIF1(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, int g, mpz_t p, mpz_t q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(p, A2[W])) {
				if(!u) {
					SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q, 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
					u = 1;
					}
				
				MODPINTSUS2(unu, A2[W], doi, sum2[W], j1, j2, Q, F2);
			}
		}
return 0;
}


void SUSMODPRIMULE8BIF2(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t q, int h) {
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


int SUSMODPRIMULE8BIF3(int W, int *M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
				}				
			
			MODPINTSUS2(unu, A2[W], doi, sum2[W], j1, j2, Q, F2);			
			}
	}
return 0;//1 ori zero.
}


void SUSMODPRIMULE8BIF4(int W0, int *M0, int *M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUM7(p, d, b, b1, D, H, K, S, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return;
			//MODPMPZSUSE2(mpz_t unu, A20[u=W0], doi, d1, j1, j2, Q, F2) {//j=sum2.
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


void SUSMODPRIMULE1(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, gmp_ui *q) {
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
			//if(!--f)
				//break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}
				j = M[f];
				//#pragma omp critical
				MODPINTSUS2(unu, A2[f], doi, sum2[f], j1, j2, Q, F2);
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
			if(!--f)
				break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}
				
				MODPINTSUS2(unu, A2[f], doi, sum2[f], j1, j2, Q, F2);
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
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
				}
				
				MODPINTSUS2(unu, A2[f], doi, sum2[f], j1, j2, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void SUSMODPRIMULE2(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {

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
			if(!--f)
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
			if(!--f)
				break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}
				
				MODPINTSUS2(unu, A2[f], doi, sum2[f], j1, j2, Q, F2);
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
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
				}
				
				MODPINTSUS2(unu, A2[f], doi, sum2[f], j1, j2, Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMULE3(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
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
			//if(!--f)
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
				MODPINTSUS2(unu, A2[f], doi, sum2[f], j1, j2, Q, F2);
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
			if(!--f)
				break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}

				MODPINTSUS2(unu, A2[f], doi, sum2[f], j1, j2, Q, F2);
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
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
				}
				
				MODPINTSUS2(unu, A2[f], doi, sum2[f], j1, j2, Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMULE4(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int H, int S, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
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
			//if(!--f)
				//break;
				gmp_printf("%d %llu %Zd\n", f, A2[f], p);
			//if(1==2)
			if(mpz_divisible_ui_p(p, A2[f])) {
				//#pragma omp single nowait
				//if(1==2)
				if(!u) {
					NUMSUM3(d1, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}
				
				MODPINTSUS2(unu, A2[f], doi, sum2[f], j1, j2, Q, F2);
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
			if(!--f)
				break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					NUMSUMV3(d1, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}
				
				MODPINTSUS2(unu, A2[f], doi, sum2[f], j1, j2, Q, F2);
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
					NUMSUMV3(d1, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
				}
				
				MODPINTSUS2(unu, A2[f], doi, sum2[f], j1, j2, Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMULE5(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int E, int H, int S, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
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
			//if(!--f)
				//break;
				gmp_printf("%d %llu %Zd\n", f, A2[f], p);
			//if(1==2)
			if(mpz_divisible_ui_p(p, A2[f])) {
				//#pragma omp single nowait
				//if(1==2)
				if(!u) {
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}
				
				MODPINTSUS2(unu, A2[f], doi, sum2[f], j1, j2, Q, F2);
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
			if(!--f)
				break;
			if(mpz_divisible_ui_p(p, A2[f])) {
				if(!u) {
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
				}
				
				MODPINTSUS2(unu, A2[f], doi, sum2[f], j1, j2, Q, F2);
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
					if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) break;
				}
				
				MODPINTSUS2(unu, A2[f], doi, sum2[f], j1, j2, Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}



void SUSMODPRIMULE6(char *Q, long PP2, FILE *f1, int W, int *M, int *M0, int *M1, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
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
		if(SUSMODPRIMULE6BIF1(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, sum2, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
			SUSMODPRIMULE6BIF2(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, sum2, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
		}

	i = 0;
	if(!i1) break;
	}

return;*/
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(SUSMODPRIMULE6BIF1(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, sum2, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
			SUSMODPRIMULE6BIF2(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, sum2, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(SUSMODPRIMULE6BIF3(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, sum2, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q))
			SUSMODPRIMULE6BIF4(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, sum2, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void SUSMODPRIMULE7(char *Q, long PP2, FILE *f1, int W, int *M, int *M0, int *M1, int W0, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
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
		if(SUSMODPRIMULE7BIF1(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, sum2, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
			SUSMODPRIMULE7BIF2(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, sum2, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
		}

	i = 0;
	if(!i1) break;
	}

return;*/
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(SUSMODPRIMULE7BIF1(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, sum2, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
			SUSMODPRIMULE7BIF2(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, sum2, mem, D, E, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(SUSMODPRIMULE7BIF3(W, M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, sum2, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q))
			SUSMODPRIMULE7BIF4(W0, M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, sum2, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}



void SUSMODPRIMULE8(char *Q, long PP2, FILE *f1, int W, int *M, int *M0, int *M1, int W0, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, int D, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
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
		if(SUSMODPRIMULE7BIF1(W, M, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, sum2, mem, D, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
			SUSMODPRIMULE7BIF2(W0, M0, M1, -1, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, sum2, mem, D, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
		}

	i = 0;
	if(!i1) break;
	}

return;*/
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		if(SUSMODPRIMULE8BIF1(W, M, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, sum2, mem, D, H, K, S, Q, F2, 0, j1, j2, g, p, q[g]))
			SUSMODPRIMULE8BIF2(W0, M0, M1, -1, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, sum2, mem, D, H, K, S, Q, F2, 0, j1, j2, g, p, q[g], h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(SUSMODPRIMULE8BIF3(W, M, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, sum2, mem, D, H, K, S, Q, F2, 0, j1, j2, p, q))
			SUSMODPRIMULE8BIF4(W0, M0, M1, -1, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, sum2, mem, D, H, K, S, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void MODPRIMULE(char *Q, long PP2, FILE *f1, int W, int *M, int *M0, int *M1, int f, int W0, int f0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *A2, gmp_ui *A20, gmp_ui *AP, gmp_ui *AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, int D, int E, int H, int K, int S, FILE *F2, mpz_t p, mpz_t *q, gmp_ui *q0, int &sus, int dir) {
	if(dir) {
		sus < 55? SUSMODPRIMULE1(Q, PP2, f1, W, M, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, sum2, D, H, F2, 0, 0, 0, 0, p, q0) 
		: sus < 73? SUSMODPRIMULE2(Q, PP2, f1, W, M, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, sum2, D, H, F2, 0, 0, 0, 0, p, q) 
			: sus < 163? SUSMODPRIMULE3(Q, PP2, f1, W, M, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, sum2, D, H, F2, 0, 0, 0, 0, p, q)
			: sus < 213? SUSMODPRIMULE4(Q, PP2, f1, W, M, f, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, mem, sum2, D, H, S, F2, 0, 0, 0, 0, p, q)
			: sus < 223? SUSMODPRIMULE5(Q, PP2, f1, W, M, f, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div1, sum1, mem, sum2, D, E, H, S, F2, 0, 0, 0, 0, p, q) 
				: sus < 243? SUSMODPRIMULE6(Q, PP2, f1, W, M, M0, M1, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, sum2, mem, D, E, H, K, S, F2, 0, 0, 0, 0, p, q) 
					: SUSMODPRIMULE7(Q, PP2, f1, W, M, M0, M1, W0, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, sum2, mem, D, E, H, K, S, F2, 0, 0, 0, 0, p, q);
		}
}