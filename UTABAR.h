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
		MODPMPZSUSE(unu, p, A20, d, doi, d1, modpmem, 0, j1, j2, modpdiv, modpsum, modpdiv1, modpsum1, Q, F2);	
		}	
	} else if(mpz_divisible_ui_p(p, A20)) {
		MODPMPZSUSE(unu, p, A20, d, doi, d1, modpmem, 0, j1, j2, modpdiv, modpsum, modpdiv1, modpsum1, Q, F2);
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
		MODPMPZSUSE(unu, p, A20, d, doi, d1, modpmem, 0, j1, j2, modpdiv, modpsum, modpdiv1, modpsum1, Q, F2);	
		}	
	} else if(mpz_divisible_ui_p(p, A20)) {
		MODPMPZSUSE(unu, p, A20, d, doi, d1, modpmem, 0, j1, j2, modpdiv, modpsum, modpdiv1, modpsum1, Q, F2);
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
		MODPMPZSUSE(unu, p, A20, d, doi, d1, modpmem, 0, j1, j2, modpdiv, modpsum, modpdiv1, modpsum1, Q, F2);	
		}	
	} else if(mpz_divisible_ui_p(p, A20)) {
		MODPMPZSUSE(unu, p, A20, d, doi, d1, modpmem, 0, j1, j2, modpdiv, modpsum, modpdiv1, modpsum1, Q, F2);
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
		MODPMPZSUSE(unu, p, A20, d, doi, d1, modpmem, 0, j1, j2, modpdiv, modpsum, modpdiv1, modpsum1, Q, F2);	
		}	
	} else if(mpz_divisible_ui_p(p, A20)) {
		MODPMPZSUSE(unu, p, A20, d, doi, d1, modpmem, 0, j1, j2, modpdiv, modpsum, modpdiv1, modpsum1, Q, F2);
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
	
	MODPMPZJOSE(unu, p, A20, d, doi, d1, modpmem, 0, j1, j2, modpdiv, modpsum, modpdiv1, modpsum1, Q, F2);			
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
	
	MODPMPZJOSE(unu, p, A20, d, doi, d1, modpmem, 0, j1, j2, modpdiv, modpsum, modpdiv1, modpsum1, Q, F2);			
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
	
	MODPMPZJOSE(unu, p, A20, d, doi, d1, modpmem, 0, j1, j2, modpdiv, modpsum, modpdiv1, modpsum1, Q, F2);			
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
	
	MODPMPZJOSE(unu, p, A20, d, doi, d1, modpmem, 0, j1, j2, modpdiv, modpsum, modpdiv1, modpsum1, Q, F2);			
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
			MODPMPZSUSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);
			}
	}
else {
		 if(mpz_divisible_ui_p(p, A20)) {			
			MODPMPZSUSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);			
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
			MODPMPZSUSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);
			}
	}
else {
		 if(mpz_divisible_ui_p(p, A20))		 {			
			MODPMPZSUSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);			
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
			MODPMPZSUSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);
			}
	}
else {
		 if(mpz_divisible_ui_p(p, A20))		 {			
			MODPMPZSUSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);			
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
			MODPMPZSUSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);
			}
	}
else {
		 if(mpz_divisible_ui_p(p, A20))		 {			
			MODPMPZSUSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);			
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


void USUSMODSPRIMULE4BIF4(int M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			SUMMPZE(p, unu, trei, A20, mem[M0], d, d1, doi, div[M0], sum[M0], div1[M0], sum1[M0], Q, F2);
		}
}



void USUSMODSPRIMULE5BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);			
			SUMINT1(p, unu, trei, A2, 1+A2, sum2, d, d1, doi, Q, F2);
			}
}


void USUSMODSPRIMULE5BIF4(int M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			SUMMPZE(p, unu, trei, A20, mem[M0], d, d1, doi, div[M0], sum[M0], div1[M0], sum1[M0], Q, F2);
		}
}




void USUSMODSPRIMULE6BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);			
			SUMINT1(p, unu, trei, A2, 1+A2, sum2, d, d1, doi, Q, F2);
		}
}


void USUSMODSPRIMULE6BIF4(int M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui sum2, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {

		if(mpz_divisible_ui_p(unu, A20)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			SUMMPZE(p, unu, trei, A20, mem[M0], d, d1, doi, div[M0], sum[M0], div1[M0], sum1[M0], Q, F2);
		}
}



void USUSMODSPRIMULE7BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui sum2, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
			SUMINT1(p, unu, trei, A2, 1+A2, sum2, d, d1, doi, Q, F2);
			}
}


void USUSMODSPRIMULE7BIF4(int M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui sum2, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			SUMMPZE(p, unu, trei, A20, mem[M0], d, d1, doi, div[M0], sum[M0], div1[M0], sum1[M0], Q, F2);
		}
}

//UMODPRIME 4-7:


int USUSMODPRIME4BIF3(int W, int M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
			MODPINTSUS(unu, p, A2, doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
	}

return 1;
}


void USUSMODPRIME4BIF4(int W0, int M0, int M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZSUSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);
			}
	}
else {
		 if(mpz_divisible_ui_p(p, A20))		 {			
			MODPMPZSUSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);
			}
	}
}


int USUSMODPRIME5BIF3(int W, int M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
			MODPINTSUS(unu, p, A2, doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
			}
			
	return 1;
}


void USUSMODPRIME5BIF4(int W0, int M0, int M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZSUSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);
			}
	}
else {
		 if(mpz_divisible_ui_p(p, A20))		 {			
			MODPMPZSUSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);
			}
	}
}



int USUSMODPRIME6BIF3(int W, int M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;	
			MODPINTSUS(unu, p, A2, doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
			}
	return 1;
}


void USUSMODPRIME6BIF4(int W0, int M0, int M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZSUSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);
			}
	}
else {
		 if(mpz_divisible_ui_p(p, A20))		 {			
			MODPMPZSUSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);
			}
	}
}


int USUSMODPRIME7BIF3(int W, int M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;			
			MODPINTSUS(unu, p, A2, doi, 2, j1, j2, div1[j], sum1[j], Q, F2);
			}
return 1;
}


void USUSMODPRIME7BIF4(int W0, int M0, int M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			NUMESUMV(p, d, b, b1, D, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZSUSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);
			}
	}
else {
		 if(mpz_divisible_ui_p(p, A20))		 {			
			MODPMPZSUSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);
			}
	}
}


int UJOSMODPRIME4BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, AP)) {			
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;								
			MODPINTJOS(unu, p, A2, doi, 3, j1, j2, div1[M], sum1[M], Q, F2);
	}
	
return 1;
}


void UJOSMODPRIME4BIF4(int M0, int M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
		if(mpz_divisible_ui_p(unu, AP0)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZJOSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);			
			}
	}
else {
		if(mpz_divisible_ui_p(p, AP0)) {
			MODPMPZJOSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);
			}
	}
}
int UJOSMODPRIME5BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, AP)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
			MODPINTJOS(unu, p, A2, doi, 3, j1, j2, div1[M], sum1[M], Q, F2);	
			}

return 1;
}


void UJOSMODPRIME5BIF4(int M0, int M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
		if(mpz_divisible_ui_p(unu, AP0)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZJOSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);			
			}
	}
else {
		if(mpz_divisible_ui_p(p, AP0)) {
			MODPMPZJOSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);
			}
	}
}


int UJOSMODPRIME6BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, AP)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;
			MODPINTJOS(unu, p, A2, doi, 3, j1, j2, div1[M], sum1[M], Q, F2);	
			}	
return 1;
}


void UJOSMODPRIME6BIF4(int M0, int M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
		if(mpz_divisible_ui_p(unu, AP0)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));			
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, j, div1, sum1, div, sum, mem, q[j]);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZJOSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);			
			}
	}
else {
		if(mpz_divisible_ui_p(p, AP0)) {
			MODPMPZJOSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);
			}
	}
}



int UJOSMODPRIME7BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {	
		if(mpz_divisible_ui_p(unu, AP)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return 0;		
			MODPINTJOS(unu, p, A2, doi, 3, j1, j2, div1[M], sum1[M], Q, F2);	
			}	
return 1;
}


void UJOSMODPRIME7BIF4(int M0, int M1, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {
if(!h) {
		if(mpz_divisible_ui_p(unu, AP0)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			NUMESUMV(p, d, b, b1, D, H, K, j, div1, sum1, div, sum, mem, q[j], 0);
			if(!VALIDN1(unu, d1, d, trei, j1, j2)) return;
			MODPMPZJOSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);			
			}
	}
else {
		if(mpz_divisible_ui_p(p, AP0)) {			
			//MODPMPZJOS(unu, p, A20, d, doi, d1, j1, j2, div[j], sum[j], Q, F2);
			MODPMPZJOSE(unu, p, A20, d, doi, d1, mem[M1], 0, j1, j2, div[M0], sum[M0], div1[M1], sum1[M1], Q, F2);
			}
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


void USUSMODSPRIME4BIF4(int M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			SUMMPZE(p, unu, trei, A20, mem[M0], d, d1, doi, div[M0], sum[M0], div1[M0], sum1[M0], Q, F2);
		}
}



void USUSMODSPRIME5BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
	if(mpz_divisible_ui_p(unu, A2)) {
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);		
		SUMINT(p, unu, trei, A2, 2, d, d1, doi, div1[M], sum1[M], Q, F2);
		}
}


void USUSMODSPRIME5BIF4(int M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			SUMMPZE(p, unu, trei, A20, mem[M0], d, d1, doi, div[M0], sum[M0], div1[M0], sum1[M0], Q, F2);
		}
}


void USUSMODSPRIME6BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);				
			SUMINT(p, unu, trei, A2, 2, d, d1, doi, div1[M], sum1[M], Q, F2);
		}
}


void USUSMODSPRIME6BIF4(int M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			SUMMPZE(p, unu, trei, A20, mem[M0], d, d1, doi, div[M0], sum[M0], div1[M0], sum1[M0], Q, F2);

		}
}


void USUSMODSPRIME7BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
			SUMINT(p, unu, trei, A2, 2, d, d1, doi, div1[M], sum1[M], Q, F2);
			}
}


void USUSMODSPRIME7BIF4(int M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			SUMMPZE(p, unu, trei, A20, mem[M0], d, d1, doi, div[M0], sum[M0], div1[M0], sum1[M0], Q, F2);
		}
}


void UJOSMODSPRIME4BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, AP)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
			SUMINTJOS(p, unu, trei, A2, 3, d, d1, doi, div1[M], sum1[M], Q, F2);			
		}
}


void UJOSMODSPRIME4BIF4(int M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, AP0)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u], 0);
				}
				
			SUMMPZJOSE(p, unu, trei, A20, mem[M0], d, d1, doi, div[M0], sum[M0], div1[M0], sum1[M0], Q, F2);
			}
}


void UJOSMODSPRIME5BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, AP)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
			SUMINTJOS(p, unu, trei, A2, 3, d, d1, doi, div1[M], sum1[M], Q, F2);			
		}
}


void UJOSMODSPRIME5BIF4(int M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, AP0)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			SUMMPZJOSE(p, unu, trei, A20, mem[M0], d, d1, doi, div[M0], sum[M0], div1[M0], sum1[M0], Q, F2);
			}		
}



void UJOSMODSPRIME6BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, AP)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
			SUMINTJOS(p, unu, trei, A2, 3, d, d1, doi, div1[M], sum1[M], Q, F2);
			}		
}

void UJOSMODSPRIME6BIF4(int M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, AP0)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMIMENS1(p, d, C, C1, b, b1, D, E, H, K, u, div1, sum1, div, sum, mem, q[u]);
				}
				
			SUMMPZJOSE(p, unu, trei, A20, mem[M0], d, d1, doi, div[M0], sum[M0], div1[M0], sum1[M0], Q, F2);
			}		
}




void UJOSMODSPRIME7BIF3(int M, int W, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q) {
		if(mpz_divisible_ui_p(unu, AP)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);				
			SUMINTJOS(p, unu, trei, A2, 3, d, d1, doi, div1[M], sum1[M], Q, F2);			
		}
}


void UJOSMODSPRIME7BIF4(int M0, int W0, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int j, char *Q, FILE *F2, mpz_t p, mpz_t *q, int h) {
		if(mpz_divisible_ui_p(unu, AP0)) {
			if(!h) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMESUMV(p, d, b, b1, D, H, K, u, div1, sum1, div, sum, mem, q[u], 0);				
				}

			SUMMPZJOSE(p, unu, trei, A20, mem[M0], d, d1, doi, div[M0], sum[M0], div1[M0], sum1[M0], Q, F2);
			}
}
