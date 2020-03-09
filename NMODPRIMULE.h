int SUSMODPRIMULE4BIF3(int W, int *M, int &u, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
	while(1) {
		if(!W--) break;
		if(mpz_divisible_ui_p(unu, A2[W])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));			
				}				
			
			MODPINTSUS2(unu, A2[W], doi, sum2[W], j1, j2, Q, F2);
			}
		}
	return 0;//1 ori zero.
}


void SUSMODPRIMULE4BIF4(int W0, int *M0, int *M1, int u, mpz_t unu, mpz_t doi, gmp_ui *A20, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(unu, A20[W0])) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));					
			MODPMPZSUSE(unu, p, A20[u=W0], doi, mem[M1[W0]], 0, j1, j2, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			u--;
			break;
			}
		}
		
	for(; u >= 0; u--)
	if(mpz_divisible_ui_p(p, A20[u])) {		
		MODPMPZSUSE(unu, p, A20[u], doi, mem[M1[u]], 0, j1, j2, div1[M1[u]], sum1[M1[u]], Q, F2);
		}
	}
else {
	while(1) {
		if(!W0--) break;
		if(mpz_divisible_ui_p(p, A20[W0])) {			
			MODPMPZSUSE(unu, p, A20[W0], doi, mem[M1[W0]], 0, j1, j2, div1[M1[W0]], sum1[M1[W0]], Q, F2);
			}
		}
	}
}


void SUSMODPRIMULE1(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui *sum2, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, gmp_ui *q) {
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
					SMV(p, d, g, div1, sum1, q[g]);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
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
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;

		while(1) {
			if(!--f)
				break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {					
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));					
				}
				
				MODPINTSUS2(unu, A2[f], doi, sum2[f], j1, j2, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j1, &j2);
		}
}


void SUSMODPRIMULE2(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui *sum2, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
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
					NUMSUMV1(p, d, g, div1, sum1, q[g], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
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
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;

		while(1) {
			if(!--f)
				break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				}
				
				MODPINTSUS2(unu, A2[f], doi, sum2[f], j1, j2, Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j1, &j2);
	}
}


void SUSMODPRIMULE3(char *Q, long PP2, FILE *f1, int W, int *M, int f, int u, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui *sum2, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
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
					NUMSUMV2(p, d, D, E, H, S, g, div1, sum1, q[g], 0);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
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
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W, u = 0;

		while(1) {
			if(!--f)
				break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				if(!u) {
					mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				}
				
				MODPINTSUS2(unu, A2[f], doi, sum2[f], j1, j2, Q, F2);
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j1, &j2);
	}
}


void SUSMODPRIMULE4(char *Q, long PP2, FILE *f1, int W, int *M, int *M0, int *M1, int W0, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui *A20, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sum2, int *mem, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
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
		if(SUSMODPRIMULE4BIF1(W, M, h = 0, unu, doi, A2, div, sum, div1, sum1, sum2, mem, Q, F2, 0, j1, j2, g, p, q[g]))
			SUSMODPRIMULE4BIF2(W0, M0, M1, -1, unu, doi, A20, div, sum, div1, sum1, sum2, mem, Q, F2, 0, j1, j2, g, p, q[g], h);
		}

	i = 0;
	if(!i1) break;
	}

return;*/
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(SUSMODPRIMULE4BIF3(W, M, h = 0, unu, doi, A2, div1, sum1, sum2, Q, F2, 0, j1, j2, p, q))
			SUSMODPRIMULE4BIF4(W0, M0, M1, -1, unu, doi, A20, div1, sum1, sum2, mem, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j1, &j2);
	}
}


void MODPRIMULE(char *Q, gmp_ui nr, gmp_ui nm, long PP2, FILE *f1, int W, int *M, int *M0, int *M1, int f, int W0, int f0, int u, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui *A20, gmp_ui *AP, gmp_ui *AP0, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sum2, FILE *F2, mpz_t p, mpz_t *q, gmp_ui *q0, int &sus, int dir) {
	if(dir) {
		sus < 55? SUSMODPRIMULE1(Q, PP2, f1, W, M, f, 0, unu, doi, A2, sum2, F2, 0, 0, 0, 0, p, q0) 
		: sus < 163? SUSMODPRIMULE2(Q, PP2, f1, W, M, f, 0, unu, doi, A2, sum2, F2, 0, 0, 0, 0, p, q)
			: sus < 223? SUSMODPRIMULE3(Q, PP2, f1, W, M, f, 0, unu, doi, A2, sum2, F2, 0, 0, 0, 0, p, q) 
				: SUSMODPRIMULE4(Q, PP2, f1, W, M, M0, M1, W0, unu, doi, A2, A20, div1, sum1, sum2, mem, F2, 0, 0, 0, 0, p, q);
		}
}
