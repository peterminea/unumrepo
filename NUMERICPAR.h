void NUMERICSUS1(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, gmp_ui *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	f = W;
	
	while(1) {
		if(!f--)
			break;
		mpz_mul_ui(doi, unu, mul[f]);		
		for(s1 = f-1; s1 >= 0; s1--)
		if((mul[f] ^ imp[s1]) && mpz_divisible_ui_p(doi, imp[s1])) {
		    mpz_divexact_ui(d1, doi, imp[s1]);
		    g = mpz_scan1(d1, 0);
		    VSUMA1(d1, d, y, y1, dd, h, h, div1, sum1, f2, q[g]);
		    if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, CMMDC2(mul[f], mul[f], imp[s1], mul[f]%imp[s1]), dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }
		}
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICSUS2(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	f = W;
	
	while(1) {
		if(!f--)
			break;
		mpz_mul_ui(doi, unu, mul[f]);
		for(s1 = f-1; s1 >= 0; s1--)
		if((mul[f] ^ imp[s1]) && mpz_divisible_ui_p(doi, imp[s1])) {
		    mpz_divexact_ui(d1, doi, imp[s1]);
		    g = mpz_scan1(d1, 0);
		    VSUMA2(d1, d, y, y1, dd, h, g, div1, sum1, f2, q[g]);
		    if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, CMMDC2(mul[f], mul[f], imp[s1], mul[f]%imp[s1]), dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }    
		}		
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICSUS3(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	f = W;
	
	while(1) {
		if(!f--)
			break;
		mpz_mul_ui(doi, unu, mul[f]);
		for(s1 = f-1; s1 >= 0; s1--)
		if((mul[f] ^ imp[s1]) && mpz_divisible_ui_p(doi, imp[s1])) {
		    mpz_divexact_ui(d1, doi, imp[s1]);
		    g = mpz_scan1(d1, 0);
		    VSUMA3(d1, d, y, y1, dd, h, g, div1, sum1, f2, q[g]);
		    if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, CMMDC2(mul[f], mul[f], imp[s1], mul[f]%imp[s1]), dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }    
		}		
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICSUS4(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int H, int S, int dd, int h, int s, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	LOTVEC0(unu, b, b1, y, y1, D, H, S, dd = 0, h, s = 0, H, f2);
	
	for(s1 = W-1; s1 >= 0; s1--) {
		mpz_mul_ui(doi, unu, mul[s1]);
		for(t = f-1; t >= 0; t--)
		if((mul[s1] ^ imp[t]) && mpz_divisible_ui_p(doi, imp[t])) {
		    mpz_divexact_ui(d1, doi, imp[t]);
		    g = mpz_scan1(d1, 0);
		    VSUMA4(d1, d, y, y1, dd, h, s, g, div1, sum1, mem, f2, q[g], 0);
		    if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, CMMDC2(mul[s1], mul[s1], imp[t], mul[s1]%imp[t]), dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }
		}
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICSUS5(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int S, int dd, int e, int h, int s, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	LOTVEC(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, S, dd = 0, e = H, h, s = 0, f2);
		
	for(s1 = W-1; s1 >= 0; s1--) {
		mpz_mul_ui(doi, unu, mul[s1]);
		for(t = f-1; t >= 0; t--)
		if((mul[s1] ^ imp[t]) && mpz_divisible_ui_p(doi, imp[t])) {
		    mpz_divexact_ui(d1, doi, imp[t]);
		    g = mpz_scan1(d1, 0);
		    VSUMA5(d1, d, z, z1, y, y1, dd, e, h, s, g, div1, sum1, mem, f2, q[g], 0, 0);
		    if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, CMMDC2(mul[s1], mul[s1], imp[t], mul[s1]%imp[t]), dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }
		}
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICSUS6(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int K, int S, int dd, int e, int h, int k, int s, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	LOTVECM(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, K, S, dd = 0, e = H, h, k = 0, s = 0, f2);
	f = W;
	
	while(1) {
		if(!f--)
			break;
		mpz_mul_ui(doi, unu, mul[f]);
		
		
		for(s1 = f-1; s1 >= 0; s1--)
		if((mul[f] ^ imp[s1]) && mpz_divisible_ui_p(doi, imp[s1])) {
		    mpz_divexact_ui(d1, doi, imp[s1]);
		    g = mpz_scan1(d1, 0);
		    VSUMA6(d1, d, z, z1, y, y1, dd, e, h, k, s, g, div1, sum1, div, sum, mem, f2, q[g], 0, 0);
		    if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, CMMDC2(mul[f], mul[f], imp[s1], mul[f]%imp[s1]), dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }    
		}		
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICSUS7(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int K, int S, int dd, int e, int h, int k, int s, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	LOTVECM(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, K, S, dd = 0, e = H, h, k = 0, s = 0, f2);
	f = W;
	
	while(1) {
		if(!f--)
			break;
		mpz_mul_ui(doi, unu, mul[f]);		
		for(s1 = f-1; s1 >= 0; s1--)
		if((mul[f] ^ imp[s1]) && mpz_divisible_ui_p(doi, imp[s1])) {
		    mpz_divexact_ui(d1, doi, imp[s1]);
		    g = mpz_scan1(d1, 0);
		    SUMADIV2(d1, d, z, z1, y, y1, dd, e, h, k, s, g, div1, sum1, div, sum, mem, f2, q[g], 0);
		    if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, CMMDC2(mul[f], mul[f], imp[s1], mul[f]%imp[s1]), dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }    
		}		
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICSUS8(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int H, int K, int S, int dd, int h, int k, int s, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	LOTVECM0(unu, b, b1, y, y1, D, H, K, S, dd = 0, h, k = 0, s = 0, H, f2);//S = S+K.
	f = W;
	
	while(1) {
		if(!f--)
			break;
		mpz_mul_ui(doi, unu, mul[f]);		
		for(s1 = f-1; s1 >= 0; s1--)
		if((mul[f] ^ imp[s1]) && mpz_divisible_ui_p(doi, imp[s1])) {
		    mpz_divexact_ui(d1, doi, imp[s1]);
		    g = mpz_scan1(d1, 0);
		    VSUMA7(d1, d, y, y1, dd, h, k, s, g, div1, sum1, div, sum, mem, f2, q[g], 0);
		    if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, CMMDC2(mul[f], mul[f], imp[s1], mul[f]%imp[s1]), dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }
		}	
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


//Jos cu mul, sus cu mul/cmmdc2.
void NUMERICJOS1(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, gmp_ui *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	
	for(s1 = f-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, imp[s1])) {
		mpz_divexact_ui(doi, unu, imp[s1]);
		for(t = W-1; t >= 0; t--)
		if((mul[t] ^ imp[s1])) {
			mpz_mul_ui(d1, doi, mul[t]);
			g = mpz_scan1(d1, 0);
			VSUMA1(d1, d, y, y1, dd, h, h, div1, sum1, f2, q[g]);
			if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, mul[t], dd, h, H, D-H, 1, 0, 0, 0, 0);
			if(!(VALID(d1, p, d) ^ 1)) {
				SCRIE(d1, Q, F2);
			    }
		}
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICJOS2(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	
	for(s1 = f-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, imp[s1])) {
		mpz_divexact_ui(doi, unu, imp[s1]);		
		for(t = W-1; t >= 0; t--)
		if((mul[t] ^ imp[s1])) {
		    mpz_mul_ui(d1, doi, mul[t]);
			g = mpz_scan1(d1, 0);
			VSUMA2(d1, d, y, y1, dd, h, g, div1, sum1, f2, q[g]);
			if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, mul[t], dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }    
		}		
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICJOS3(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	
	for(s1 = f-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, imp[s1])) {
		mpz_divexact_ui(doi, unu, imp[s1]);		
		for(t = W-1; t >= 0; t--)
		if((mul[t] ^ imp[s1])) {
		    mpz_mul_ui(d1, doi, mul[t]);
			//mpz_tdiv_q_2exp(p, d1, g);
		    //NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
		    g = mpz_scan1(d1, 0);
			VSUMA3(d1, d, y, y1, dd, h, g, div1, sum1, f2, q[g]);
			if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, mul[t], dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }    
		}		
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICJOS4(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int H, int S, int dd, int h, int s, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	LOTVEC0(unu, b, b1, y, y1, D, H, S, dd = 0, h, s = 0, H, f2);
	
	for(s1 = f-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, imp[s1])) {
		mpz_divexact_ui(doi, unu, imp[s1]);		
		for(t = W-1; t >= 0; t--)
		if(mul[t] ^ imp[s1]) {
		    mpz_mul_ui(d1, doi, mul[t]);
		    //mpz_tdiv_q_2exp(p, d1, g);
		    //NUMSUMV3(p, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
		    g = mpz_scan1(d1, 0);
		    VSUMA4(d1, d, y, y1, dd, h, s, g, div1, sum1, mem, f2, q[g], 0);
		    if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, mul[t], dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }
		}
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICJOS5(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int S, int dd, int e, int h, int s, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	LOTVEC(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, S, dd = 0, e = H, h, s = 0, f2);
	
	for(s1 = f-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, imp[s1])) {
		mpz_divexact_ui(doi, unu, imp[s1]);		
		for(t = W-1; t >= 0; t--)
		if((mul[t] ^ imp[s1])) {
		    mpz_mul_ui(d1, doi, mul[t]);
		    //mpz_tdiv_q_2exp(p, d1, g);
		    g = mpz_scan1(d1, 0);
		    VSUMA5(d1, d, z, z1, y, y1, dd, e, h, s, g, div1, sum1, mem, f2, q[g], 0, 0);
		    if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, mul[t], dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }
		}
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICJOS6(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int K, int S, int dd, int e, int h, int k, int s, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	LOTVECM(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, K, S, dd = 0, e = H, h, k = 0, s = 0, f2);
	
	for(s1 = f-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, imp[s1])) {
		mpz_divexact_ui(doi, unu, imp[s1]);		
		for(t = W-1; t >= 0; t--)
		if((mul[t] ^ imp[s1])) {
		    mpz_mul_ui(d1, doi, mul[t]);
			//mpz_tdiv_q_2exp(p, d1, g);
		    //SUMDIVV1(d1, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
		    g = mpz_scan1(d1, 0);
			VSUMA6(d1, d, z, z1, y, y1, dd, e, h, k, s, g, div1, sum1, div, sum, mem, f2, q[g], 0, 0);
			if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, mul[t], dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }    
		}		
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICJOS7(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int K, int S, int dd, int e, int h, int k, int s, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	LOTVECM(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, K, S, dd = 0, e = H, h, k = 0, s = 0, f2);
	
	for(s1 = f-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, imp[s1])) {
		mpz_divexact_ui(doi, unu, imp[s1]);		
		for(t = W-1; t >= 0; t--)
		if((mul[t] ^ imp[s1])) {
			mpz_mul_ui(d1, doi, mul[t]);
			//mpz_tdiv_q_2exp(p, d1, g);
			g = mpz_scan1(d1, 0);
			SUMADIV2(d1, d, z, z1, y, y1, dd, e, h, k, s, g, div1, sum1, div, sum, mem, f2, q[g], 0);
			if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, mul[t], dd, h, H, D-H, 1, 0, 0, 0, 0);
			if(!(VALID(d1, p, d) ^ 1)) {
				SCRIE(d1, Q, F2);
		    }
		}		
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICJOS8(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int H, int K, int S, int dd, int h, int k, int s, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	LOTVECM0(unu, b, b1, y, y1, D, H, K, S, dd = 0, h, k = 0, s = 0, H, f2);
	
	for(s1 = f-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, imp[s1])) {
		mpz_divexact_ui(doi, unu, imp[s1]);		
		for(t = W-1; t >= 0; t--)
		if((mul[t] ^ imp[s1])) {
		    mpz_mul_ui(d1, doi, mul[t]);
		    g = mpz_scan1(d1, 0);
		    VSUMA7(d1, d, y, y1, dd, h, k, s, g, div1, sum1, div, sum, mem, f2, q[g], 0);
		    if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, mul[t], dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }    
		}		
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERIC(char *Q, long PP2, int W, FILE *f1, int f, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, gmp_ui *y, gmp_ui *y1, mpz_t *z, mpz_t *z1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int K, int S, int dd, int e, int h, int k, int s, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, int &sus, mpz_t p, mpz_t *q, gmp_ui *q0, int dir) {
	if(dir) {
		sus < 55? NUMERICSUS1(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, mul, imp, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, bex, bex2, b1ex2, fex, F2, p, q0, 0) 
		: sus < 73? NUMERICSUS2(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, mul, imp, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, bex, bex2, b1ex2, fex, F2, p, q, 0) 
		: sus < 163? NUMERICSUS3(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, mul, imp, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, bex, bex2, b1ex2, fex, F2, p, q, 0)
		: sus < 213? NUMERICSUS4(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, mul, imp, b, b1, y, y1, div1, sum1, mem, f2, D, H, S, dd, h, s, bex, bex2, b1ex2, fex, F2, p, q, 0)
		: sus < 223? NUMERICSUS5(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, mul, imp, b, b1, y, y1, C, C1, z, z1, div1, sum1, mem, f2, D, E, H, S, dd, e, h, s, bex, bex2, b1ex2, fex, F2, p, q, 0)
			: sus < 243? NUMERICSUS6(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, mul, imp, b, b1, y, y1, C, C1, z, z1, div, sum, div1, sum1, mem, f2, D, E, H, K, K+S, dd, e, h, k, s, bex, bex2, b1ex2, fex, F2, p, q, 0) 
				: NUMERICSUS7(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, mul, imp, b, b1, y, y1, C, C1, z, z1, div, sum, div1, sum1, mem, f2, D, E, H, K, K+S, dd, e, h, k, s, bex, bex2, b1ex2, fex, F2, p, q, 0);
		} else {
			sus < 55? NUMERICJOS1(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, mul, imp, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, bex, bex2, b1ex2, fex, F2, p, q0, 0) 
		: sus < 73? NUMERICJOS2(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, mul, imp, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, bex, bex2, b1ex2, fex, F2, p, q, 0) 
		: sus < 163? NUMERICJOS3(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, mul, imp, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, bex, bex2, b1ex2, fex, F2, p, q, 0)
		: sus < 213? NUMERICJOS4(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, mul, imp, b, b1, y, y1, div1, sum1, mem, f2, D, H, S, dd, h, s, bex, bex2, b1ex2, fex, F2, p, q, 0)
		: sus < 223? NUMERICJOS5(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, mul, imp, b, b1, y, y1, C, C1, z, z1, div1, sum1, mem, f2, D, E, H, S, dd, e, h, s, bex, bex2, b1ex2, fex, F2, p, q, 0)
			: sus < 243? NUMERICJOS6(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, mul, imp, b, b1, y, y1, C, C1, z, z1, div, sum, div1, sum1, mem, f2, D, E, H, K, K+S, dd, e, h, k, s, bex, bex2, b1ex2, fex, F2, p, q, 0) 
				: NUMERICJOS7(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, mul, imp, b, b1, y, y1, C, C1, z, z1, div, sum, div1, sum1, mem, f2, D, E, H, K, K+S, dd, e, h, k, s, bex, bex2, b1ex2, fex, F2, p, q, 0);
		}
}
