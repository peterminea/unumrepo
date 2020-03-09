void USUSMODGEN1(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, mpz_t p, gmp_ui *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_mul_ui(doi, unu, A2);
	mpz_tdiv_q_2exp(p, doi, g = mpz_scan1(doi, 0));
	SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
	if(VALID4(doi, p, d))
		SCRIE(doi, Q, F2);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODGEN2(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_mul_ui(doi, unu, A2);
	mpz_tdiv_q_2exp(p, doi, g = mpz_scan1(doi, 0));
	NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
	if(VALID4(doi, p, d))
		SCRIE(doi, Q, F2);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODGEN3(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_mul_ui(doi, unu, A2);
	mpz_tdiv_q_2exp(p, doi, g = mpz_scan1(doi, 0));
	NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
	if(VALID4(doi, p, d))
		SCRIE(doi, Q, F2);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODGEN4(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_mul_ui(doi, unu, A2);
	mpz_tdiv_q_2exp(p, doi, g = mpz_scan1(doi, 0));
	NUMSUMV3(p, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
	if(VALID4(doi, p, d))
		SCRIE(doi, Q, F2);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODGEN5(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_mul_ui(doi, unu, A2);
	mpz_tdiv_q_2exp(p, doi, g = mpz_scan1(doi, 0));
	NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);
	if(VALID4(doi, p, d))
		SCRIE(doi, Q, F2);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODGEN6(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t doi, gmp_ui s1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_mul_ui(doi, unu, s1);
	mpz_tdiv_q_2exp(p, doi, g = mpz_scan1(doi, 0));
	SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
	if(VALID4(doi, p, d))
		SCRIE(doi, Q, F2);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODGEN7(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t doi, gmp_ui s1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_mul_ui(doi, unu, s1);
	mpz_tdiv_q_2exp(p, doi, g = mpz_scan1(doi, 0));
	SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g]);
	if(VALID4(doi, p, d))
		SCRIE(doi, Q, F2);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODGEN8(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t doi, gmp_ui s1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_mul_ui(doi, unu, s1);
	mpz_tdiv_q_2exp(p, doi, g = mpz_scan1(doi, 0));
	SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
	if(VALID4(doi, p, d))
		SCRIE(doi, Q, F2);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSMODGEN1(char *Q, long PP2, FILE *f1, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int g, mpz_t p, gmp_ui *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	if(mpz_divisible_ui_p(unu, A2)) {	
		mpz_divexact_ui(doi, unu, A2);
		mpz_tdiv_q_2exp(p, doi, u = mpz_scan1(doi, 0));
		SMV(p, d, b, b1, D, H, u, div1, sum1, q[u]);
		if(VALID4(doi, p, d))
			SCRIE(doi, Q, F2);
		}
		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODGEN2(char *Q, long PP2, FILE *f1, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int g, mpz_t p, mpz_t *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	if(mpz_divisible_ui_p(unu, A2)) {	
		mpz_divexact_ui(doi, unu, A2);
		mpz_tdiv_q_2exp(p, doi, u = mpz_scan1(doi, 0));
		NUMSUMPURG1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
		if(VALID4(doi, p, d))
			SCRIE(doi, Q, F2);
		}
		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODGEN3(char *Q, long PP2, FILE *f1, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int g, mpz_t p, mpz_t *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	if(mpz_divisible_ui_p(unu, A2)) {	
		mpz_divexact_ui(doi, unu, A2);
		mpz_tdiv_q_2exp(p, doi, u = mpz_scan1(doi, 0));
		NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
		if(VALID4(doi, p, d))
			SCRIE(doi, Q, F2);
		}
		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODGEN4(char *Q, long PP2, FILE *f1, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, int g, mpz_t p, mpz_t *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	if(mpz_divisible_ui_p(unu, A2)) {	
		mpz_divexact_ui(doi, unu, A2);
		mpz_tdiv_q_2exp(p, doi, u = mpz_scan1(doi, 0));
		NUMSUMV3(p, d, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);
		if(VALID4(doi, p, d))
			SCRIE(doi, Q, F2);
		}
		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODGEN5(char *Q, long PP2, FILE *f1, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, int g, mpz_t p, mpz_t *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	if(mpz_divisible_ui_p(unu, A2)) {	
		mpz_divexact_ui(doi, unu, A2);
		mpz_tdiv_q_2exp(p, doi, u = mpz_scan1(doi, 0));
		NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);
		if(VALID4(doi, p, d))
			SCRIE(doi, Q, F2);
		}
		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODGEN6(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t doi, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, mpz_t p, mpz_t *q, int u) {
while(1) {
	mpz_set_str(unu, Q, 10);
	if(mpz_divisible_ui_p(unu, A2)) {	
		mpz_divexact_ui(doi, unu, A2);
		mpz_tdiv_q_2exp(p, doi, u = mpz_scan1(doi, 0));
		SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
		if(VALID4(doi, p, d))
			SCRIE(doi, Q, F2);
		}
		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODGEN7(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t doi, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, mpz_t p, mpz_t *q, int u) {
while(1) {
	mpz_set_str(unu, Q, 10);
	if(mpz_divisible_ui_p(unu, A2)) {	
		mpz_divexact_ui(doi, unu, A2);
		mpz_tdiv_q_2exp(p, doi, u = mpz_scan1(doi, 0));
		SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
		if(VALID4(doi, p, d))
			SCRIE(doi, Q, F2);
		}
		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODGEN8(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t doi, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, mpz_t p, mpz_t *q, int u) {
while(1) {
	mpz_set_str(unu, Q, 10);
	if(mpz_divisible_ui_p(unu, A2)) {	
		mpz_divexact_ui(doi, unu, A2);
		mpz_tdiv_q_2exp(p, doi, u = mpz_scan1(doi, 0));
		SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
		if(VALID4(doi, p, d))
			SCRIE(doi, Q, F2);
		}
		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UMODGEN(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t doi, gmp_ui A2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, int &sus, int &dir, mpz_t p, mpz_t *q, gmp_ui *q0) {
	if(dir) {
		sus < 55? USUSMODGEN1(Q, PP2, f1, b, b1, unu, d, doi, A2, div1, sum1, D, H, F2, p, q0, 0)
		: sus < 73? USUSMODGEN2(Q, PP2, f1, b, b1, unu, d, doi, A2, div1, sum1, D, H, F2, p, q, 0) 
			: sus < 163? USUSMODGEN3(Q, PP2, f1, b, b1, unu, d, doi, A2, div1, sum1, D, H, F2, p, q, 0)
			: sus < 213? USUSMODGEN4(Q, PP2, f1, b, b1, unu, d, doi, A2, div1, sum1, mem, D, H, S, F2, p, q, 0) 
			: sus < 223? USUSMODGEN5(Q, PP2, f1, b, b1, C, C1, unu, d, doi, A2, div1, sum1, mem, D, E, H, S, F2, p, q, 0) 
				: sus < 243? USUSMODGEN6(Q, PP2, f1, b, b1, C, C1, unu, d, doi, A2, div, sum, div1, sum1, D, E, H, K, S, F2, mem, p, q, 0) 
					: USUSMODGEN7(Q, PP2, f1, b, b1, C, C1, unu, d, doi, A2, div, sum, div1, sum1, D, E, H, K, S, F2, mem, p, q, 0);
		} else {
		sus < 55? UJOSMODGEN1(Q, PP2, f1, 0, b, b1, unu, d, doi, A2, div1, sum1, D, H, F2, 0, p, q0) 
		: sus < 73? UJOSMODGEN2(Q, PP2, f1, 0, b, b1, unu, d, doi, A2, div1, sum1, D, H, F2, 0, p, q) 
			: sus < 163? UJOSMODGEN3(Q, PP2, f1, 0, b, b1, unu, d, doi, A2, div1, sum1, D, H, F2, 0, p, q)
			: sus < 213? UJOSMODGEN4(Q, PP2, f1, 0, b, b1, unu, d, doi, A2, div1, sum1, mem, D, H, S, F2, 0, p, q) 
			: sus < 223? UJOSMODGEN5(Q, PP2, f1, 0, b, b1, C, C1, unu, d, doi, A2, div1, sum1, mem, D, E, H, S, F2, 0, p, q) 
				: sus < 243? UJOSMODGEN6(Q, PP2, f1, b, b1, C, C1, unu, d, doi, A2, div, sum, div1, sum1, D, E, H, K, S, F2, mem, p, q, 0)
					: UJOSMODGEN7(Q, PP2, f1, b, b1, C, C1, unu, d, doi, A2, div, sum, div1, sum1, D, E, H, K, S, F2, mem, p, q, 0);
	}
}
