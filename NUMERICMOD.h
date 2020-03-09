void NUMERICMODSUS1(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, gmp_ui *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	f = W;
	
	while(1) {
		if(!f--)
			break;
		mpz_mul_ui(d1, unu, mul[f]);
		    VSUMA1(d1, d, y, y1, dd, h, h, div1, sum1, f2, q[g]);
		    if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, mul[f], dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }
		}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICMODSUS2(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	f = W;
	
	while(1) {
		if(!f--)
			break;
		mpz_mul_ui(d1, unu, mul[f]);
		    VSUMA2(d1, d, y, y1, dd, h, g, div1, sum1, f2, q[g]);
		    if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, mul[f], dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }    
		}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICMODSUS3(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	f = W;
	
	while(1) {
		if(!f--)
			break;
		mpz_mul_ui(d1, unu, mul[f]);
		    VSUMA3(d1, d, y, y1, dd, h, g, div1, sum1, f2, q[g]);
		    if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, mul[f], dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }    
		}
			
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICMODSUS4(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int H, int S, int dd, int h, int s, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC0(unu, b, b1, y, y1, D, H, S, dd = 0, h, s = 0, H, f2);
	
	for(f = W-1; f >= 0; f--) {
		mpz_mul_ui(d1, unu, mul[f]);
		VSUMA4(d1, d, y, y1, dd, h, s, g, div1, sum1, mem, f2, q[g], 0);
		if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, mul[f], dd, h, H, D-H, 1, 0, 0, 0, 0);
		if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }
		}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICMODSUS5(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int S, int dd, int e, int h, int s, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, S, dd = 0, e = H, h, s = 0, f2);
		
	for(f = W-1; f >= 0; f--) {
		mpz_mul_ui(d1, unu, mul[f]);
		VSUMA5(d1, d, z, z1, y, y1, dd, e, h, s, g, div1, sum1, mem, f2, q[g], 0, 0);
		if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, mul[f], dd, h, H, D-H, 1, 0, 0, 0, 0);
		if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }
		}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICMODSUS6(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int K, int S, int dd, int e, int h, int k, int s, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVECM(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, K, S, dd = 0, e = H, h, k = 0, s = 0, f2);
	f = W;
	
	while(1) {
		if(!f--)
			break;
		mpz_mul_ui(d1, unu, mul[f]);
		    VSUMA6(d1, d, z, z1, y, y1, dd, e, h, k, s, g, div1, sum1, div, sum, mem, f2, q[g], 0, 0);
		    if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, mul[f], dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }    
		}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICMODSUS7(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int K, int S, int dd, int e, int h, int k, int s, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVECM(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, K, S, dd = 0, e = H, h, k = 0, s = 0, f2);
	f = W;
	
	while(1) {
		if(!f--)
			break;
		mpz_mul_ui(d1, unu, mul[f]);
		    SUMADIV2(d1, d, z, z1, y, y1, dd, e, h, k, s, g, div1, sum1, div, sum, mem, f2, q[g], 0);
		    if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, mul[f], dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }    
		}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICMODSUS8(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *mul, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int H, int K, int S, int dd, int h, int k, int s, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVECM0(unu, b, b1, y, y1, D, H, K, S, dd = 0, h, k = 0, s = 0, H, f2);//S = S+K.
	f = W;
	
	while(1) {
		if(!f--)
			break;
		mpz_mul_ui(d1, unu, mul[f]);
		    VSUMA7(d1, d, y, y1, dd, h, k, s, g, div1, sum1, div, sum, mem, f2, q[g], 0);
		    if(1 > mpz_cmp(d, d1)) ADAUGPRIM(d, unu, div1, sum1, y, bex, bex2, b1ex2, f2, fex, mul[f], dd, h, H, D-H, 1, 0, 0, 0, 0);
		    if(!(VALID(d1, p, d) ^ 1)) {
			SCRIE(d1, Q, F2);
		    }
		}	
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


//Jos cu mul, sus cu mul/cmmdc2.
void NUMERICMODJOS1(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, FILE *F2, mpz_t p, gmp_ui *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	
	for(s1 = f-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, imp[s1])) {
		mpz_divexact_ui(d1, unu, imp[s1]);		
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


void NUMERICMODJOS2(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	
	for(s1 = f-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, imp[s1])) {
		mpz_divexact_ui(d1, unu, imp[s1]);
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


void NUMERICMODJOS3(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int D, int H, int dd, int h, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC1(unu, b, b1, y, y1, D, H, dd = 0, h, H, f2);
	
	for(s1 = f-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, imp[s1])) {
		mpz_divexact_ui(d1, unu, imp[s1]);
		//mpz_tdiv_q_2exp(p, d1, g);
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


void NUMERICMODJOS4(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int H, int S, int dd, int h, int s, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC0(unu, b, b1, y, y1, D, H, S, dd = 0, h, s = 0, H, f2);
	
	for(s1 = f-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, imp[s1])) {
		mpz_divexact_ui(d1, unu, imp[s1]);
		    //mpz_tdiv_q_2exp(p, d1, g);
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


void NUMERICMODJOS5(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int S, int dd, int e, int h, int s, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVEC(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, S, dd = 0, e = H, h, s = 0, f2);
	
	for(s1 = f-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, imp[s1])) {
		mpz_divexact_ui(d1, unu, imp[s1]);
		//mpz_tdiv_q_2exp(p, d1, g);
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


void NUMERICMODJOS6(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int K, int S, int dd, int e, int h, int k, int s, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVECM(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, K, S, dd = 0, e = H, h, k = 0, s = 0, f2);
	
	for(s1 = f-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, imp[s1])) {
		mpz_divexact_ui(d1, unu, imp[s1]);
		//mpz_tdiv_q_2exp(p, d1, g);
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


void NUMERICMODJOS7(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int K, int S, int dd, int e, int h, int k, int s, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVECM(unu, b, b1, C, C1, y, y1, z, z1, D, E, H, K, S, dd = 0, e = H, h, k = 0, s = 0, f2);
	
	for(s1 = f-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, imp[s1])) {
		mpz_divexact_ui(d1, unu, imp[s1]);
		//mpz_tdiv_q_2exp(p, d1, g);
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


void NUMERICMODJOS8(char *Q, long PP2, int W, FILE *f1, int f, int s1, int t, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *imp, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int H, int K, int S, int dd, int h, int k, int s, FILE *F2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	g = mpz_scan1(unu, 0);
	LOTVECM0(unu, b, b1, y, y1, D, H, K, S, dd = 0, h, k = 0, s = 0, H, f2);
	
	for(s1 = f-1; s1 >= 0; s1--) 
	if(mpz_divisible_ui_p(unu, imp[s1])) {
	    mpz_divexact_ui(d1, unu, imp[s1]);
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


void NUMERICMOD(char *Q, long PP2, int W, FILE *f1, int f, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *vec, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, gmp_ui *y, gmp_ui *y1, mpz_t *z, mpz_t *z1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, int D, int E, int H, int K, int S, int dd, int e, int h, int k, int s, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F2, int &sus, mpz_t p, mpz_t *q, gmp_ui *q0, int dir) {
	if(dir) {//9=4, 8=5, 4=6, 5 cu 6=7.
		sus < 55? NUMERICMODSUS1(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, vec, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, bex, bex2, b1ex2, fex, F2, p, q0, 0) 
		: sus < 73? NUMERICMODSUS2(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, vec, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, bex, bex2, b1ex2, fex, F2, p, q, 0) 
		: sus < 163? NUMERICMODSUS3(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, vec, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, bex, bex2, b1ex2, fex, F2, p, q, 0)
		: sus < 213? NUMERICMODSUS4(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, vec, b, b1, y, y1, div1, sum1, mem, f2, D, H, S, dd, h, s, bex, bex2, b1ex2, fex, F2, p, q, 0)
		: sus < 223? NUMERICMODSUS5(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, vec, b, b1, y, y1, C, C1, z, z1, div1, sum1, mem, f2, D, E, H, S, dd, e, h, s, bex, bex2, b1ex2, fex, F2, p, q, 0)
			: sus < 243? NUMERICMODSUS6(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, vec, b, b1, y, y1, C, C1, z, z1, div, sum, div1, sum1, mem, f2, D, E, H, K, K+S, dd, e, h, k, s, bex, bex2, b1ex2, fex, F2, p, q, 0) 
				: NUMERICMODSUS7(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, vec, b, b1, y, y1, C, C1, z, z1, div, sum, div1, sum1, mem, f2, D, E, H, K, K+S, dd, e, h, k, s, bex, bex2, b1ex2, fex, F2, p, q, 0);
		} else {
			sus < 55? NUMERICMODJOS1(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, vec, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, F2, p, q0, 0) 
		: sus < 73? NUMERICMODJOS2(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, vec, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, F2, p, q, 0) 
		: sus < 163? NUMERICMODJOS3(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, vec, b, b1, y, y1, div1, sum1, f2, D, H, dd, h, F2, p, q, 0)
		: sus < 213? NUMERICMODJOS4(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, vec, b, b1, y, y1, div1, sum1, mem, f2, D, H, S, dd, h, s, F2, p, q, 0)
		: sus < 223? NUMERICMODJOS5(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, vec, b, b1, y, y1, C, C1, z, z1, div1, sum1, mem, f2, D, E, H, S, dd, e, h, s, F2, p, q, 0)
			: sus < 243? NUMERICMODJOS6(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, vec, b, b1, y, y1, C, C1, z, z1, div, sum, div1, sum1, mem, f2, D, E, H, K, K+S, dd, e, h, k, s, F2, p, q, 0) 
				: NUMERICMODJOS7(Q, PP2, W, f1, f, 0, 0, unu, d, d1, doi, vec, b, b1, y, y1, C, C1, z, z1, div, sum, div1, sum1, mem, f2, D, E, H, K, K+S, dd, e, h, k, s, F2, p, q, 0);
		}
}
