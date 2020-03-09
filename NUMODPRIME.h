int USUSMODPRIME2BIF3(int W, int M, int &u, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p) {
		if(mpz_divisible_ui_p(unu, A2)) {	
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			j = M;			
			MODPINTSUS(unu, p, A2, doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
		}
return 1;
}


void USUSMODPRIME2BIF4(int W0, int M0, int M1, int u, mpz_t unu, mpz_t doi, gmp_ui A20, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, int h) {
if(!h) {	
		if(mpz_divisible_ui_p(unu, A20)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			MODPMPZSUSE(unu, p, A20, doi, mem[M1], 0, j1, j2, div1[M1], sum1[M1], Q, F2);				
		}
	}
else {	
		if(mpz_divisible_ui_p(p, A20)) {			
			MODPMPZSUSE(unu, p, A20, doi, mem[M1], 0, j1, j2, div1[M1], sum1[M1], Q, F2);
			}
	}
}


int UJOSMODPRIME2BIF3(int M, int W, int &u, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p) {
		if(mpz_divisible_ui_p(unu, AP)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			j = M;
			MODPINTJOS(unu, p, A2, doi, 3, j1, j2, div1[j], sum1[j], Q, F2);			
	}
return 1;
}


void UJOSMODPRIME2BIF4(int M0, int M1, int W0, int u, mpz_t unu, mpz_t doi, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, int h) {
if(!h) {	
		if(mpz_divisible_ui_p(unu, AP0)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			MODPMPZJOSE(unu, p, A20, doi, mem[M1], 0, j1, j2, div[M0][1], div1[M1], sum1[M1], Q, F2);			
		}
	}
else {
		if(mpz_divisible_ui_p(p, AP0)) {			
			MODPMPZJOSE(unu, p, A20, doi, mem[M1], 0, j1, j2, div[M0][1], div1[M1], sum1[M1], Q, F2);
		}
	}
}


void USUSMODPRIME1(char *Q, long PP2, FILE *f1, int W, int M, int f, int u, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p) {
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
				
		#pragma omp single nowait
		for(f = W-1; f >= 0; f--) {
		//while(1) {
			//if(!f--)
				//break;
			if(mpz_divisible_ui_p(p, A2)) {
				j = M;
				//#pragma omp critical
				MODPINTSUS(unu, p, A2, doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
				}
			}
		}

	i = 0;
	if(!i1) break;
	}

return;*/
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W;
		mpz_tdiv_q_2exp(p, unu, mpz_scan1(unu, 0));

		if(mpz_divisible_ui_p(p, A2)) {
			j = M;
			MODPINTSUS(unu, p, A2, doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
			}

		if(!(ftell(f1) ^ PP2))
			break;		
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j1, &j2);
		}
}


void USUSMODPRIME2(char *Q, long PP2, FILE *f1, int W, int M, int M0, int M1, int W0, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui A20, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p) {
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
		SUSMODPRIME2BIF3(W, M, h = 0, unu, doi, A2, div1, sum1, Q, F2, 0, j1, j2, p);
		SUSMODPRIME2BIF4(W0, M0, M1, -1, unu, doi, A20, div1, sum1, mem, Q, F2, 0, j1, j2, p, h);
		}

	i = 0;
	if(!i1) break;
	}

return;*/
	while(1) {
		mpz_set_str(unu, Q, 10);
		USUSMODPRIME2BIF3(W, M, h = 0, unu, doi, A2, div1, sum1, Q, F2, 0, j1, j2, p);
		USUSMODPRIME2BIF4(W0, M0, M1, -1, unu, doi, A20, div1, sum1, mem, Q, F2, 0, j1, j2, p, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j1, &j2);
		}
}


void UJOSMODPRIME1(char *Q, long PP2, FILE *f1, int W, int M, int f, int u, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p) {

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


			if(mpz_divisible_ui_p(unu, AP)) {
				if(!u) {
					SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
					if(!VALIDN1(unu, d1, d, trei, j1, j2)) break;
					u = 1;
					}
					
					j = M;
					MODPINTJOS(unu, p, A2, doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
				}
			
		}

	i = 0;
	if(!i1) break;
	}

return;*/
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W;
		mpz_tdiv_q_2exp(p, unu, mpz_scan1(unu, 0));		

		if(mpz_divisible_ui_p(p, AP)) {			
			j = M;
			MODPINTJOS(unu, p, A2, doi, 3, j1, j2, div1[j], sum1[j], Q, F2);
			}
		
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j1, &j2);
	}
}


void UJOSMODPRIME2(char *Q, long PP2, FILE *f1, int W, int M, int M0, int M1, int W0, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui A20, gmp_ui AP, gmp_ui AP0, mpz_t div[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p) {
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
			JOSMODPRIME2BIF3(M, W, h = 0, unu, doi, A2, AP, div1, sum1, Q, F2, 0, j1, j2, p);
			JOSMODPRIME2BIF4(M0, M1, W0, -1, unu, doi, A20, AP0, div, div1, sum1, mem, Q, F2, 0, j1, j2, p, h);
			}
		i = 0;
		if(!i1) break;
		}

	return;
	*/
	while(1) {
		mpz_set_str(unu, Q, 10);		
		UJOSMODPRIME2BIF3(M, W, h = 0, unu, doi, A2, AP, div1, sum1, Q, F2, 0, j1, j2, p);
		UJOSMODPRIME2BIF4(M0, M1, W0, -1, unu, doi, A20, AP0, div, div1, sum1, mem, Q, F2, 0, j1, j2, p, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j1, &j2);
		}
}


void MODPRIME(char *Q, gmp_ui nr, gmp_ui nm, long PP2, FILE *f1, int W, int M, int M0, int M1, int f, int W0, int u, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui A20, gmp_ui AP, gmp_ui AP0, mpz_t div[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F2, mpz_t p, int &sus, int dir) {
	if(dir) {
		sus < 243? USUSMODPRIME1(Q, PP2, f1, W, M, f, 0, unu, doi, A2, div1, sum1, F2, 0, nr, nm, p) 
		: USUSMODPRIME2(Q, PP2, f1, W, M, M0, M1, W0, unu, doi, A2, A20, div1, sum1, mem, F2, 0, 0, nr, nm, p);
		} else {
		sus < 243? UJOSMODPRIME1(Q, PP2, f1, W, M, f, 0, unu, doi, A2, AP, div1, sum1, F2, 0, nr, nm, 0, p) 
		: UJOSMODPRIME2(Q, PP2, f1, W, M, M0, M1, W0, unu, doi, A2, A20, AP, AP0, div, div1, sum1, mem, F2, 0, 0, nr, nm, p);
		}
}