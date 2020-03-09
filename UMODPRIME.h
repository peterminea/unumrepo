int USUSMODPRIME6BIF3(int M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {if(!A2) return 0;
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
			if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;			
			MODPINTSUS(unu, p, A2, doi, 2, j1, j2, div1[M], sum1[M], Q, F2);
			}
return 1;
}


void USUSMODPRIME6BIF4(int M0, int M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {if(!A20) return;
if(!h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, j, div1, sum1, div, sum, mem, q[j], 0);
			if(VALIDNOU1(unu, d1, d, trei, j1, j2)) 
				MODPMPZSUSE(unu, p, A20, d, mem[M1], 0, j1, j2, div1[M1], sum1[M1], Q, F2);			
		}
	}
else 
		if(mpz_divisible_ui_p(p, A20)) {
			MODPMPZSUSE(unu, p, A20, d, mem[M1], 0, j1, j2, div1[M1], sum1[M1], Q, F2);
		}
}


int USUSMODPRIME7BIF3(int M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {if(!A2) return 0;
		if(mpz_divisible_ui_p(unu, A2)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
			if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
			MODPINTSUS(unu, p, A2, doi, 2, j1, j2, div1[M], sum1[M], Q, F2);
			}
		
	return 1;
}


void USUSMODPRIME7BIF4(int M0, int M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {if(!A20) return;
if(!h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, j, div1, sum1, div, sum, mem, q[j]);
			if(VALIDNOU1(unu, d1, d, trei, j1, j2)) 
				MODPMPZSUSE(unu, p, A20, d, mem[M1], 0, j1, j2, div1[M1], sum1[M1], Q, F2);	
		}
	}
else 
	if(mpz_divisible_ui_p(p, A20)) {			
			MODPMPZSUSE(unu, p, A20, d, mem[M1], 0, j1, j2, div1[M1], sum1[M1], Q, F2);
		}
}


int USUSMODPRIME8BIF3(int M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {if(!A2) return 0;
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
			if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;	
			MODPINTSUS(unu, p, A2, doi, 2, j1, j2, div1[M], sum1[M], Q, F2);
			}
	
return 1;
}


void USUSMODPRIME8BIF4(int M0, int M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {if(!A20) return;
if(!h) {
		if(mpz_divisible_ui_p(unu, A20)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUM7(p, d, b, b1, D, H, K, S, j, div1, sum1, div, sum, mem, q[j], 0);
			if(VALIDNOU1(unu, d1, d, trei, j1, j2))
				MODPMPZSUSE(unu, p, A20, d, mem[M1], 0, j1, j2, div1[M1], sum1[M1], Q, F2);			
			}
	}
else 
		if(mpz_divisible_ui_p(p, A20)) {			
			MODPMPZSUSE(unu, p, A20, d, mem[M1], 0, j1, j2, div1[M1], sum1[M1], Q, F2);	
	}
}


int UJOSMODPRIME6BIF3(int M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {if(!A2) return 0;	
	if(mpz_divisible_ui_p(unu, AP)) {			
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
		if(VALIDNOU1(unu, d1, d, trei, j1, j2))
			MODPINTJOS(unu, p, A2, doi, 3, j1, j2, div1[M], sum1[M], Q, F2);
	}
return 1;
}


void UJOSMODPRIME6BIF4(int M0, int M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {if(!A20) return;
if(!h) {
		if(mpz_divisible_ui_p(unu, AP0)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, j, div1, sum1, div, sum, mem, q[j], 0);
			if(VALIDNOU1(unu, d1, d, trei, j1, j2))
				MODPMPZJOSE(unu, p, A20, d, mem[M1], 0, j1, j2, div[M0][1], div1[M1], sum1[M1], Q, F2);
			}
	}
else if(mpz_divisible_ui_p(p, AP0)) {			
		MODPMPZJOSE(unu, p, A20, d, mem[M1], 0, j1, j2, div[M0][1], div1[M1], sum1[M1], Q, F2);
		}
}


int UJOSMODPRIME7BIF3(int M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {if(!A2) return 0;
		if(mpz_divisible_ui_p(unu, AP)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
			if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;
			MODPINTJOS(unu, p, A2, doi, 3, j1, j2, div1[M], sum1[M], Q, F2);	
			}
return 1;
}


void UJOSMODPRIME7BIF4(int M0, int M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {if(!A20) return;
if(!h) {
		if(mpz_divisible_ui_p(unu, AP0)) {
			mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, j, div1, sum1, div, sum, mem, q[j]);
			if(VALIDNOU1(unu, d1, d, trei, j1, j2)) 
				MODPMPZJOSE(unu, p, A20, d, mem[M1], 0, j1, j2, div[M0][1], div1[M1], sum1[M1], Q, F2);
		}	
	}
else if(mpz_divisible_ui_p(p, AP0)) {			
		MODPMPZJOSE(unu, p, A20, d, mem[M1], 0, j1, j2, div[M0][1], div1[M1], sum1[M1], Q, F2);
	}
}


int UJOSMODPRIME8BIF3(int M, int &u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui &j1, gmp_ui &j2, mpz_t p, mpz_t *q) {if(!A2) return 0;
	if(mpz_divisible_ui_p(unu, AP)) {			
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
		if(!VALIDNOU1(unu, d1, d, trei, j1, j2)) return 0;			
		MODPINTJOS(unu, p, A2, doi, 3, j1, j2, div1[M], sum1[M], Q, F2);	
		}
return 1;
}


void UJOSMODPRIME8BIF4(int M0, int M1, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A20, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, char *Q, FILE *F2, int j, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q, int h) {if(!A20) return;
if(!h) {
	if(mpz_divisible_ui_p(unu, AP0)) {
		mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
		SUM7(p, d, b, b1, D, H, K, S, j, div1, sum1, div, sum, mem, q[j], 0);
		if(VALIDNOU1(unu, d1, d, trei, j1, j2)) 
		MODPMPZJOSE(unu, p, A20, d, mem[M1], 0, j1, j2, div[M0][1], div1[M1], sum1[M1], Q, F2);			
		}
	}
else if(mpz_divisible_ui_p(p, AP0)) {
		MODPMPZJOSE(unu, p, A20, d, mem[M1], 0, j1, j2, div[M0][1], div1[M1], sum1[M1], Q, F2);
	}
}



void USUSMODPRIME1(char *Q, long PP2, FILE *f1, int M, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, gmp_ui *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		
		if(mpz_divisible_ui_p(unu, A2)) {									
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SMV(p, d, b, b1, D, H, u, div1, sum1, q[u]);
			if(VALIDNOU1(unu, d1, d, trei, j1, j2))				
				MODPINTSUS(unu, p, A2, doi, 2, j1, j2, div1[M], sum1[M], Q, F2);
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void USUSMODPRIME2(char *Q, long PP2, FILE *f1, int M, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
		
	if(mpz_divisible_ui_p(unu, A2)) {
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		NUMSUMPURG1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
		if(VALIDNOU1(unu, d1, d, trei, j1, j2))
			MODPINTSUS(unu, p, A2, doi, 2, j1, j2, div1[M], sum1[M], Q, F2);				
		}
		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODPRIME3(char *Q, long PP2, FILE *f1, int M, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	if(mpz_divisible_ui_p(unu, A2)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
			if(VALIDNOU1(unu, d1, d, trei, j1, j2))				
				MODPINTSUS(unu, p, A2, doi, 2, j1, j2, div1[M], sum1[M], Q, F2);				
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODPRIME4(char *Q, long PP2, FILE *f1, int M, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	if(mpz_divisible_ui_p(unu, A2)) {				
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		NUMSUMV3(p, d, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);
		if(VALIDNOU1(unu, d1, d, trei, j1, j2))
			MODPINTSUS(unu, p, A2, doi, 2, j1, j2, div1[M], sum1[M], Q, F2);
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODPRIME5(char *Q, long PP2, FILE *f1, int M, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	if(mpz_divisible_ui_p(unu, A2)) {
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);
		if(VALIDNOU1(unu, d1, d, trei, j1, j2)) 
			MODPINTSUS(unu, p, A2, doi, 2, j1, j2, div1[M], sum1[M], Q, F2);
		}
		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODPRIME6(char *Q, long PP2, FILE *f1, int M, int M0, int M1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(USUSMODPRIME6BIF3(M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q))
			USUSMODPRIME6BIF4(M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void USUSMODPRIME7(char *Q, long PP2, FILE *f1, int M, int M0, int M1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(USUSMODPRIME7BIF3(M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q))
			USUSMODPRIME7BIF4(M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODPRIME8(char *Q, long PP2, FILE *f1, int M, int M0, int M1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(USUSMODPRIME8BIF3(M, h = 0, b, b1, unu, doi, trei, d, d1, A2, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, p, q))
			USUSMODPRIME8BIF4(M0, M1, -1, b, b1, unu, doi, trei, d, d1, A20, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODPRIME1(char *Q, long PP2, FILE *f1, int M, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, gmp_ui *q) {
while(1) {
	mpz_set_str(unu, Q, 10);		

	if(mpz_divisible_ui_p(unu, AP)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SMV(p, d, b, b1, D, H, u, div1, sum1, q[u]);
			if(VALIDNOU1(unu, d1, d, trei, j1, j2))				
				MODPINTJOS(unu, p, A2, doi, 3, j1, j2, div1[M], sum1[M], Q, F2);
	}
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSMODPRIME2(char *Q, long PP2, FILE *f1, int M, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
while(1) {
	mpz_set_str(unu, Q, 10);

	if(mpz_divisible_ui_p(unu, AP)) {
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		NUMSUMPURG1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
		if(VALIDNOU1(unu, d1, d, trei, j1, j2))
			MODPINTJOS(unu, p, A2, doi, 3, j1, j2, div1[M], sum1[M], Q, F2);				
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSMODPRIME3(char *Q, long PP2, FILE *f1, int M, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(mpz_divisible_ui_p(unu, AP)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
			if(VALIDNOU1(unu, d1, d, trei, j1, j2))
				MODPINTJOS(unu, p, A2, doi, 3, j1, j2, div1[M], sum1[M], Q, F2);
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODPRIME4(char *Q, long PP2, FILE *f1, int M, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(mpz_divisible_ui_p(unu, AP)) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMSUMV3(p, d, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);
				if(VALIDNOU1(unu, d1, d, trei, j1, j2)) 
					MODPINTJOS(unu, p, A2, doi, 3, j1, j2, div1[M], sum1[M], Q, F2);
				}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODPRIME5(char *Q, long PP2, FILE *f1, int M, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui AP, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, int j, gmp_ui j1, gmp_ui j2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(mpz_divisible_ui_p(unu, AP)) {				
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);
			if(VALIDNOU1(unu, d1, d, trei, j1, j2)) 
				MODPINTJOS(unu, p, A2, doi, 3, j1, j2, div1[M], sum1[M], Q, F2);
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODPRIME6(char *Q, long PP2, FILE *f1, int M, int M0, int M1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, gmp_ui AP, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(UJOSMODPRIME6BIF3(M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q))
			UJOSMODPRIME6BIF4(M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UJOSMODPRIME7(char *Q, long PP2, FILE *f1, int M, int M0, int M1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, gmp_ui AP, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(UJOSMODPRIME7BIF3(M, h = 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q))
			UJOSMODPRIME7BIF4(M0, M1, -1, b, b1, C, C1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UJOSMODPRIME8(char *Q, long PP2, FILE *f1, int M, int M0, int M1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, gmp_ui AP, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, FILE *F2, int g, int h, gmp_ui j1, gmp_ui j2, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		if(UJOSMODPRIME8BIF3(M, h = 0, b, b1, unu, doi, trei, d, d1, A2, AP, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, p, q))
			UJOSMODPRIME8BIF4(M0, M1, -1, b, b1, unu, doi, trei, d, d1, A20, AP0, div, sum, div1, sum1, mem, D, H, K, S, Q, F2, 0, j1, j2, p, q, h);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UMODPRIME(char *Q, long PP2, FILE *f1, int M, int M0, int M1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui A2, gmp_ui A20, gmp_ui AP, gmp_ui AP0, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, mpz_t p, mpz_t *q, gmp_ui *q0, int &sus, int dir) {
if(!(A2 + A20) || (!A2 && (sus < 223))) return;
	if(dir) {
		sus < 55? USUSMODPRIME1(Q, PP2, f1, M, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, F2, 0, 0, 0, 0, p, q0) 
		: sus < 73? USUSMODPRIME2(Q, PP2, f1, M, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, F2, 0, 0, 0, 0, p, q) 
			: sus < 163? USUSMODPRIME3(Q, PP2, f1, M, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, D, H, F2, 0, 0, 0, 0, p, q)
			: sus < 213? USUSMODPRIME4(Q, PP2, f1, M, 0, b, b1, unu, doi, trei, d, d1, A2, div1, sum1, mem, D, H, S, F2, 0, 0, 0, 0, p, q) 
			: sus < 223? USUSMODPRIME5(Q, PP2, f1, M, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, div1, sum1, mem, D, E, H, S, F2, 0, 0, 0, 0, p, q) 
				: sus < 243? USUSMODPRIME6(Q, PP2, f1, M, M0, M1, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, 0, 0, p, q) 
					: USUSMODPRIME7(Q, PP2, f1, M, M0, M1, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, 0, 0, p, q);
		} else {
		sus < 55? UJOSMODPRIME1(Q, PP2, f1, M, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, F2, 0, 0, 0, 0, p, q0) 
		: sus < 73? UJOSMODPRIME2(Q, PP2, f1, M, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, F2, 0, 0, 0, 0, p, q) 
			: sus < 163? UJOSMODPRIME3(Q, PP2, f1, M, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, D, H, F2, 0, 0, 0, 0, p, q)
			: sus < 213? UJOSMODPRIME4(Q, PP2, f1, M, 0, b, b1, unu, doi, trei, d, d1, A2, AP, div1, sum1, mem, D, H, S, F2, 0, 0, 0, 0, p, q) 
			: sus < 223? UJOSMODPRIME5(Q, PP2, f1, M, 0, b, b1, C, C1, unu, doi, trei, d, d1, A2, AP, div1, sum1, mem, D, E, H, S, F2, 0, 0, 0, 0, p, q) 
				: sus < 243? UJOSMODPRIME6(Q, PP2, f1, M, M0, M1, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, AP, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, 0, 0, p, q) 
					: UJOSMODPRIME7(Q, PP2, f1, M, M0, M1, b, b1, C, C1, unu, doi, trei, d, d1, A2, A20, AP, AP0, div, sum, div1, sum1, mem, D, E, H, K, S, F2, 0, 0, 0, 0, p, q);
		}
}
