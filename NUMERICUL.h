void NUMERICULSUS1(char *Q, long PP2, int W, FILE *f1, int f, int s, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui *divInt1, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, FILE *F2, mpz_t p, gmp_ui *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	
	for(s = W-1; s >= 0; s--) {
		mpz_mul_ui(d1, unu, divInt[s]);
		VSUMA1(d1, d, y, y1, dd, h, h, div1, sum1, f2, q[g]);
		if(!mpz_divisible_ui_p(unu, divInt[s]))
			mpz_mul_ui(d, d, divInt1[s]);
		if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
			}
		}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULSUS2(char *Q, long PP2, int W, FILE *f1, int f, int s, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui *divInt1, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	
	for(s = W-1; s >= 0; s--) {
		mpz_mul_ui(d1, unu, divInt[s]);
		VSUMA2(d1, d, y, y1, dd, h, g, div1, sum1, f2, q[g]);
		if(!mpz_divisible_ui_p(unu, divInt[s]))
			mpz_mul_ui(d, d, divInt1[s]);
		if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
			}
		}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULSUS3(char *Q, long PP2, int W, FILE *f1, int f, int s, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui *divInt1, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	
	for(s = W-1; s >= 0; s--) {
		mpz_mul_ui(d1, unu, divInt[s]);
		VSUMA3(d1, d, y, y1, dd, h, g, div1, sum1, f2, q[g]);
		if(!mpz_divisible_ui_p(unu, divInt[s]))
			mpz_mul_ui(d, d, divInt1[s]);
		if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
			}		
		}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULSUS4(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui *divInt1, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int H, int S, int dd, int h, int s, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC0(unu, b, b1, y, y1, D, H, S, dd = 0, h, s = 0, H, f2);
	
	for(s1 = W-1; s1 >= 0; s1--) {
		mpz_mul_ui(d1, unu, divInt[s1]);
		VSUMA4(d1, d, y, y1, dd, h, s, g, div1, sum1, mem, f2, q[g], 0);
		if(!mpz_divisible_ui_p(unu, divInt[s1]))
			mpz_mul_ui(d, d, divInt1[s1]);
		if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
			}		
		}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULSUS5(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui *divInt1, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int S, int dd, int e, int h, int s, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, S, dd = 0, e = H, h, s = 0, f2);
	
	for(s1 = W-1; s1 >= 0; s1--) {
		mpz_mul_ui(d1, unu, divInt[s1]);
		VSUMA5(d1, d, z, z1, y, y1, dd, e, h, s, g, div1, sum1, mem, f2, q[g], 0, 0);
		if(!mpz_divisible_ui_p(unu, divInt[s1]))
			mpz_mul_ui(d, d, divInt1[s1]);
		if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
			}		
		}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULSUS6(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui *divInt1, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int K, int S, int dd, int e, int h, int k, int s, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVECM(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, K, S, dd = 0, e = H, h, k = 0, s = 0, f2);
	
	for(s1 = W-1; s1 >= 0; s1--) {
		mpz_mul_ui(d1, unu, divInt[s1]);
		VSUMA6(d1, d, z, z1, y, y1, dd, e, h, k, s, g, div1, sum1, div, sum, mem, f2, q[g], 0, 0);
		if(!mpz_divisible_ui_p(unu, divInt[s1]))
			mpz_mul_ui(d, d, divInt1[s1]);
		if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
			}		
		}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULSUS7(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui *divInt1, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int K, int S, int dd, int e, int h, int k, int s, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVECM(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, K, S, dd = 0, e = H, h, k = 0, s = 0, f2);
	
	for(s1 = W-1; s1 >= 0; s1--) {
		mpz_mul_ui(d1, unu, divInt[s1]);
		SUMADIV2(d1, d, z, z1, y, y1, dd, e, h, k, s, g, div1, sum1, div, sum, mem, f2, q[g], 0);
		if(!mpz_divisible_ui_p(unu, divInt[s1]))
			mpz_mul_ui(d, d, divInt1[s1]);
		if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
			}		
		}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULSUS8(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui *divInt1, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int H, int K, int S, int dd, int h, int k, int s, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVECM0(unu, b, b1, y, y1, D, H, K, S, dd = 0, h, k = 0, s = 0, H, f2);//S = S+K.
	
	for(s1 = W-1; s1 >= 0; s1--) {
		mpz_mul_ui(d1, unu, divInt[s1]);
		VSUMA7(d1, d, y, y1, dd, h, k, s, g, div1, sum1, div, sum, mem, f2, q[g], 0);
		if(!mpz_divisible_ui_p(unu, divInt[s1]))
			mpz_mul_ui(d, d, divInt1[s1]);
		if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
			}		
		}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULJOS1(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, FILE *F2, mpz_t p, gmp_ui *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	
	for(s1 = W-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, divInt[s1])) {
		mpz_divexact_ui(d1, unu, divInt[s1]);
		VSUMA1(d1, d, y, y1, dd, h, h, div1, sum1, f2, q[g]);
		if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }		
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULJOS2(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	
	for(s1 = W-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, divInt[s1])) {
		mpz_divexact_ui(d1, unu, divInt[s1]);
		VSUMA2(d1, d, y, y1, dd, h, g, div1, sum1, f2, q[g]);
		if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
	    }			
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULJOS3(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	
	for(s1 = W-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, divInt[s1])) {
		mpz_divexact_ui(d1, unu, divInt[s1]);
		VSUMA3(d1, d, y, y1, dd, h, g, div1, sum1, f2, q[g]);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULJOS4(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int H, int S, int dd, int h, int s, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC0(unu, b, b1, y, y1, D, H, S, dd = 0, h, s = 0, H, f2);
	
	for(s1 = W-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, divInt[s1])) {
		mpz_divexact_ui(d1, unu, divInt[s1]);
		VSUMA4(d1, d, y, y1, dd, h, s, g, div1, sum1, mem, f2, q[g], 0);
		if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		}
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULJOS5(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int S, int dd, int e, int h, int s, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, S, dd = 0, e = H, h, s = 0, f2);
	
	for(s1 = W-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, divInt[s1])) {
		mpz_divexact_ui(d1, unu, divInt[s1]);
		VSUMA5(d1, d, z, z1, y, y1, dd, e, h, s, g, div1, sum1, mem, f2, q[g], 0, 0);
		if(!(VALID(d1, p, d) ^ 1)) {
		SCRIE(d1, Q, F2);
		    }
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULJOS6(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int K, int S, int dd, int e, int h, int k, int s, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVECM(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, K, S, dd = 0, e = H, h, k = 0, s = 0, f2);
	
	for(s1 = W-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, divInt[s1])) {
		mpz_divexact_ui(d1, unu, divInt[s1]);
		VSUMA6(d1, d, z, z1, y, y1, dd, e, h, k, s, g, div1, sum1, div, sum, mem, f2, q[g], 0, 0);
		if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
	    }
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULJOS7(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int K, int S, int dd, int e, int h, int k, int s, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVECM(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, K, S, dd = 0, e = H, h, k = 0, s = 0, f2);
	
	for(s1 = W-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, divInt[s1])) {
		mpz_divexact_ui(d1, unu, divInt[s1]);
		SUMADIV2(d1, d, z, z1, y, y1, dd, e, h, k, s, g, div1, sum1, div, sum, mem, f2, q[g], 0);
		if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		}
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULJOS8(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int H, int K, int S, int dd, int h, int k, int s, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVECM0(unu, b, b1, y, y1, D, H, K, S, dd = 0, h, k = 0, s = 0, H, f2);//S = S+K.
	
	for(s1 = W-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, divInt[s1])) {
		mpz_divexact_ui(d1, unu, divInt[s1]);
		VSUMA7(d1, d, y, y1, dd, h, k, s, g, div1, sum1, div, sum, mem, f2, q[g], 0);
		if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
	    }
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICUL(char *Q, long PP2, int W, FILE *f1, int f, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *divInt, gmp_ui *divInt1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, gmp_ui *y, gmp_ui *y1, mpz_t *z, mpz_t *z1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int K, int S, int dd, int e, int h, int k, int s, FILE *F2, int &sus, mpz_t p, mpz_t *q, gmp_ui *q0, int dir) {
	if(dir) {
		sus < 55? NUMERICULSUS1(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, divInt, divInt1, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, F2, p, q0, 0)
		: sus < 73? NUMERICULSUS2(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, divInt, divInt1, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, F2, p, q, 0)
		: sus < 163? NUMERICULSUS3(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, divInt, divInt1, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, F2, p, q, 0)
		: sus < 213? NUMERICULSUS4(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, divInt, divInt1, b, b1, y, y1, div1, sum1, mem, f2, D, H, S, dd, h, s, F2, p, q, 0)
		: sus < 223? NUMERICULSUS5(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, divInt, divInt1, b, b1, y, y1, C, C1, z, z1, div1, sum1, mem, f2, D, E, H, S, dd, e, h, s, F2, p, q, 0)
			: sus < 243? NUMERICULSUS6(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, divInt, divInt1, b, b1, y, y1, C, C1, z, z1, div, sum, div1, sum1, mem, f2, D, E, H, K, K+S, dd, e, h, k, s, F2, p, q, 0)
				: NUMERICULSUS7(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, divInt, divInt1, b, b1, y, y1, C, C1, z, z1, div, sum, div1, sum1, mem, f2, D, E, H, K, K+S, dd, e, h, k, s, F2, p, q, 0);
		} else {
			sus < 55? NUMERICULJOS1(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, divInt, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, F2, p, q0, 0)  
		: sus < 73? NUMERICULJOS2(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, divInt, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, F2, p, q, 0)
		: sus < 163? NUMERICULJOS3(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, divInt, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, F2, p, q, 0)
		: sus < 213? NUMERICULJOS4(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, divInt, b, b1, y, y1, div1, sum1, mem, f2, D, H, S, dd, h, s, F2, p, q, 0)
		: sus < 223? NUMERICULJOS5(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, divInt, b, b1, y, y1, C, C1, z, z1, div1, sum1, mem, f2, D, E, H, S, dd, e, h, s, F2, p, q, 0)
			: sus < 243? NUMERICULJOS6(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, divInt, b, b1, y, y1, C, C1, z, z1, div, sum, div1, sum1, mem, f2, D, E, H, K, K+S, dd, e, h, k, s, F2, p, q, 0)
				: NUMERICULJOS7(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, divInt, b, b1, y, y1, C, C1, z, z1, div, sum, div1, sum1, mem, f2, D, E, H, K, K+S, dd, e, h, k, s, F2, p, q, 0);
		}
}
