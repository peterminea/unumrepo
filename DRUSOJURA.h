void SUSDRUSOJURA1(char *Q, long PP2, FILE *f1, int s, int f, int W, mpz_t unu, mpz_t doi, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, FILE *F2, mpz_t p, gmp_ui *q, gmp_ui *qq) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0;
	
	for(f = W-1; f >= 0; f--)		
		if(!mpz_divisible_ui_p(unu, divInt[f])) {
			if(!s) {
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				SMOD(p, doi, b, b1, j, D, H, s, div1, sum1, e, j1, j2, nm = qq[s], nr = q[s]);
				//nr = mpz_get_ui(nr1);
				//nm = mpz_get_ui(nm1);
			}	
			if(TRAT(nr * sumInt[f], nm * divInt[f])) {
				mpz_mul_ui(doi, unu, divInt[f]);
				SCRIE(doi, Q, F2);		
			}
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSDRUSOJURA2(char *Q, long PP2, FILE *f1, int s, int f, int W, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq) {//q cu nr, qq cu nm.
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0;

	for(f = W-1; f >= 0; f--)	
		if(!mpz_divisible_ui_p(unu, divInt[f])) {
			if(!s) {
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				NUMSUMMODPURG1(p, d, d1, Z, b, b1, e, D, H, s, div1, sum1, j, j1, j2, nm1, nr1, q[s], qq[s]);
				nr = mpz_get_ui(nr1);
				nm = mpz_get_ui(nm1);
			}
			if(TRAT(nr * sumInt[f], nm * divInt[f])) {
				mpz_mul_ui(doi, unu, divInt[f]);
				SCRIE(doi, Q, F2);		
			}
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSDRUSOJURA3(char *Q, long PP2, FILE *f1, int s, int f, int W, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq) {//q cu nr, qq cu nm.
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0;

	for(f = W-1; f >= 0; f--)	
		if(!mpz_divisible_ui_p(unu, divInt[f])) {
			if(!s) {
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				NUMSUMMOD1(p, d, d1, Z, b, b1, e, D, H, s, div1, sum1, j, j1, j2, nm1, nr1, q[s], qq[s]);
				nr = mpz_get_ui(nr1);
				nm = mpz_get_ui(nm1);
			}
			if(TRAT(nr * sumInt[f], nm * divInt[f])) {
				mpz_mul_ui(doi, unu, divInt[f]);
				SCRIE(doi, Q, F2);		
			}
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSDRUSOJURA4(char *Q, long PP2, FILE *f1, int s, int f, int W, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0;
	
	for(f = W-1; f >= 0; f--)		
	if(!mpz_divisible_ui_p(unu, divInt[f])) {
		if(!s) {			
			mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));			
			NUMSUMMOD(p, doi, trei, d, d1, b, b1, e, D, H, S, s, div1, sum1, j, j1, j2, nm1, nr1, q[s], qq[s], mem);
			nr = mpz_get_ui(nr1);
			nm = mpz_get_ui(nm1);
		}
		if(TRAT(nr * sumInt[f], nm * divInt[f])) {
			mpz_mul_ui(doi, unu, divInt[f]);
			SCRIE(doi, Q, F2);		
		}
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSDRUSOJURA5(char *Q, long PP2, FILE *f1, int s, int f, int W, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int S, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0;
	
	for(f = W-1; f >= 0; f--)		
	if(!mpz_divisible_ui_p(unu, divInt[f])) {
		if(!s) {			
			mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
			SUMDIVMOD1(p, doi, trei, d, d1, Z, b, b1, e, D, H, s, div1, sum1, div, sum, C, C1, E, S, j, j1, j2, nm1, nr1, q[s], qq[s], mem, 0);
			nr = mpz_get_ui(nr1);
			nm = mpz_get_ui(nm1);
		}
		if(TRAT(nr * sumInt[f], nm * divInt[f])) {
			mpz_mul_ui(doi, unu, divInt[f]);
			SCRIE(doi, Q, F2);		
		}
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSDRUSOJURA6(char *Q, long PP2, FILE *f1, int s, int f, int W, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0;
	
	for(f = W-1; f >= 0; f--)		
	if(!mpz_divisible_ui_p(unu, divInt[f])) {
		if(!s) {
			mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
			SUMDIVMOD2(p, doi, trei, d, d1, Z, b, b1, e, D, H, s, div1, sum1, div, sum, C, C1, E, K, S, j, j1, j2, nm1, nr1, q[s], qq[s], mem, 0);
			nr = mpz_get_ui(nr1);
			nm = mpz_get_ui(nm1);
		}
		if(TRAT(nr * sumInt[f], nm * divInt[f])) {
			mpz_mul_ui(doi, unu, divInt[f]);
			SCRIE(doi, Q, F2);		
		}
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSDRUSOJURA7(char *Q, long PP2, FILE *f1, int s, int f, int W, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0;
	
	for(f = W-1; f >= 0; f--)		
	if(!mpz_divisible_ui_p(unu, divInt[f])) {
		if(!s) {
			mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
			SUMDIVMODMARE(p, doi, trei, d, d1, Z, b, b1, e, D, H, s, div1, sum1, div, sum, C, C1, E, K, S, j, j1, j2, nm1, nr1, q[s], qq[s], mem);
			nr = mpz_get_ui(nr1);
			nm = mpz_get_ui(nm1);
		}
		if(TRAT(nr * sumInt[f], nm * divInt[f])) {
			mpz_mul_ui(doi, unu, divInt[f]);
			SCRIE(doi, Q, F2);
		}
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSDRUSOJURA8(char *Q, long PP2, FILE *f1, int s, int f, int W, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *b, gmp_ui *b1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, int S, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0;

	for(f = W-1; f >= 0; f--)		
	if(!mpz_divisible_ui_p(unu, divInt[f])) {
		if(!s) {
			mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
			NUMSUMEMOD(p, doi, d, d1, Z, b, b1, e, D, H, s, div1, sum1, div, sum, K, S, j, j1, j2, nm1, nr1, q[s], qq[s], mem);
			nr = mpz_get_ui(nr1);
			nm = mpz_get_ui(nm1);
		}
		if(TRAT(nr * sumInt[f], nm * divInt[f])) {
			mpz_mul_ui(doi, unu, divInt[f]);
			SCRIE(doi, Q, F2);		
		}
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSDRUSOJURA1(char *Q, long PP2, FILE *f1, int s, int f, int W, mpz_t unu, mpz_t doi, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, FILE *F2, mpz_t p, gmp_ui *q, gmp_ui *qq) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0;

	for(f = W-1; f >= 0; f--)		
		if( (!mpz_divisible_ui_p(unu, M[f])) && (mpz_divisible_ui_p(unu, divInt[f])) ) {
			if(!s) {
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				SMOD(p, doi, b, b1, j, D, H, s, div1, sum1, e, j1, j2, nm = qq[s], nr = q[s]);
			}
			
			if(TRAT(nm * sumInt[f], nr * divInt[f])) {
				mpz_divexact_ui(doi, unu, divInt[f]);								
				SCRIE(doi, Q, F2);
				}
			}	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSDRUSOJURA2(char *Q, long PP2, FILE *f1, int s, int f, int W, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0;
	
	for(f = W-1; f >= 0; f--)		
		if( (!mpz_divisible_ui_p(unu, M[f])) && (mpz_divisible_ui_p(unu, divInt[f])) ) {
			if(!s) {
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				NUMSUMMODPURG1(p, d, d1, Z, b, b1, e, D, H, s, div1, sum1, j, j1, j2, nm1, nr1, q[s], qq[s]);
				nr = mpz_get_ui(nr1);
				nm = mpz_get_ui(nm1);
				}
			if(TRAT(nm * sumInt[f], nr * divInt[f])) {
				mpz_divexact_ui(doi, unu, divInt[f]);								
				SCRIE(doi, Q, F2);
				}
			}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSDRUSOJURA3(char *Q, long PP2, FILE *f1, int s, int f, int W, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0;
	
	for(f = W-1; f >= 0; f--)		
		if( (!mpz_divisible_ui_p(unu, M[f])) && (mpz_divisible_ui_p(unu, divInt[f])) ) {
			if(!s) {
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				NUMSUMMOD1(p, d, d1, Z, b, b1, e, D, H, s, div1, sum1, j, j1, j2, nm1, nr1, q[s], qq[s]);
				nr = mpz_get_ui(nr1);
				nm = mpz_get_ui(nm1);
				}
			if(TRAT(nm * sumInt[f], nr * divInt[f])) {
				mpz_divexact_ui(doi, unu, divInt[f]);								
				SCRIE(doi, Q, F2);
				}
			}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSDRUSOJURA4(char *Q, long PP2, FILE *f1, int s, int f, int W, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0;
	
	for(f = W-1; f >= 0; f--)		
		if( (!mpz_divisible_ui_p(unu, M[f])) && (mpz_divisible_ui_p(unu, divInt[f])) ) {
			if(!s) {
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				NUMSUMMOD(p, doi, trei, d, d1, b, b1, e, D, H, S, s, div1, sum1, j, j1, j2, nm1, nr1, q[s], qq[s], mem);
				nr = mpz_get_ui(nr1);
				nm = mpz_get_ui(nm1);
				}
			if(TRAT(nm * sumInt[f], nr * divInt[f])) {
				mpz_divexact_ui(doi, unu, divInt[f]);
				SCRIE(doi, Q, F2);
				}
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSDRUSOJURA5(char *Q, long PP2, FILE *f1, int s, int f, int W, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int S, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0;

	for(f = W-1; f >= 0; f--)
		if( (!mpz_divisible_ui_p(unu, M[f])) && (mpz_divisible_ui_p(unu, divInt[f])) ) {
			if(!s) {
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				SUMDIVMOD1(p, doi, trei, d, d1, Z, b, b1, e, D, H, s, div1, sum1, div, sum, C, C1, E, S, j, j1, j2, nm1, nr1, q[s], qq[s], mem, 0);
				nr = mpz_get_ui(nr1);
				nm = mpz_get_ui(nm1);
				}
			if(TRAT(nm * sumInt[f], nr * divInt[f])) {
				mpz_divexact_ui(doi, unu, divInt[f]);
				SCRIE(doi, Q, F2);
				}
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSDRUSOJURA6(char *Q, long PP2, FILE *f1, int s, int f, int W, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0;
	
	for(f = W-1; f >= 0; f--)		
		if( (!mpz_divisible_ui_p(unu, M[f])) && (mpz_divisible_ui_p(unu, divInt[f])) ) {
			if(!s) {
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				SUMDIVMOD2(p, doi, trei, d, d1, Z, b, b1, e, D, H, s, div1, sum1, div, sum, C, C1, E, K, S, j, j1, j2, nm1, nr1, q[s], qq[s], mem, 0);
				nr = mpz_get_ui(nr1);
				nm = mpz_get_ui(nm1);
				}
			if(TRAT(nm * sumInt[f], nr * divInt[f])) {
				mpz_divexact_ui(doi, unu, divInt[f]);
				SCRIE(doi, Q, F2);
				}
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSDRUSOJURA7(char *Q, long PP2, FILE *f1, int s, int f, int W, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0;
	for(f = W-1; f >= 0; f--)		
		if( (!mpz_divisible_ui_p(unu, M[f])) && (mpz_divisible_ui_p(unu, divInt[f])) ) {
			if(!s) {
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				SUMDIVMODMARE(p, doi, trei, d, d1, Z, b, b1, e, D, H, s, div1, sum1, div, sum, C, C1, E, K, j, j1, j2, nm1, nr1, q[s], qq[s], mem);
				nr = mpz_get_ui(nr1);
				nm = mpz_get_ui(nm1);
				}
			if(TRAT(nm * sumInt[f], nr * divInt[f])) {
				mpz_divexact_ui(doi, unu, divInt[f]);
				SCRIE(doi, Q, F2);
				}
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSDRUSOJURA8(char *Q, long PP2, FILE *f1, int s, int f, int W, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, int S, gmp_ui e, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, mpz_t p, mpz_t *q, mpz_t *qq, int *mem) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0;
	
	for(f = W-1; f >= 0; f--)		
		if( (!mpz_divisible_ui_p(unu, M[f])) && (mpz_divisible_ui_p(unu, divInt[f])) ) {
			if(!s) {
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				NUMSUMEMOD(p, doi, d, d1, Z, b, b1, e, D, H, s, div1, sum1, div, sum, K, S, j, j1, j2, nm1, nr1, q[s], qq[s], mem);
				nr = mpz_get_ui(nr1);
				nm = mpz_get_ui(nm1);
				}
			if(TRAT(nm * sumInt[f], nr * divInt[f])) {
				mpz_divexact_ui(doi, unu, divInt[f]);
				SCRIE(doi, Q, F2);
				}
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void DRUSOJURA(char *Q, long PP2, FILE *f1, int dir, int s, int f, int W, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d, mpz_t d1, mpz_t Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *J, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, int sus, gmp_ui nm, gmp_ui nr, mpz_t nm1, mpz_t nr1, FILE *F2, int *mem, mpz_t p, mpz_t *q, mpz_t *qq, gmp_ui *q0, gmp_ui *q1) {
	if(dir) {
		sus < 55? SUSDRUSOJURA1(Q, PP2, f1, s, f, W, unu, doi, divInt, sumInt, b, b1, div1, sum1, D, H, 0, 0, 0, 0, nm, nr, F2, p, q0, q1) 
		: sus < 73? SUSDRUSOJURA2(Q, PP2, f1, s, f, W, unu, doi, d, d1, Z, divInt, sumInt, b, b1, div1, sum1, D, H, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq)
			: sus < 163? SUSDRUSOJURA3(Q, PP2, f1, s, f, W, unu, doi, d, d1, Z, divInt, sumInt, b, b1, div1, sum1, D, H, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq)
			: sus < 213? SUSDRUSOJURA4(Q, PP2, f1, s, f, W, unu, doi, trei, d, d1, divInt, sumInt, b, b1, div1, sum1, D, H, S, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq, mem) 
			: sus < 223? SUSDRUSOJURA5(Q, PP2, f1, s, f, W, unu, doi, trei, d, d1, Z, divInt, sumInt, b, b1, C, J, div1, sum1, D, E, H, S, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq, mem) 
				: sus < 243? SUSDRUSOJURA6(Q, PP2, f1, s, f, W, unu, doi, trei, d, d1, Z, divInt, sumInt, b, b1, C, J, div, sum, div1, sum1, D, E, H, K, S, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq, mem) 
					: SUSDRUSOJURA7(Q, PP2, f1, s, f, W, unu, doi, trei, d, d1, Z, divInt, sumInt, b, b1, C, J, div, sum, div1, sum1, D, E, H, K, S, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq, mem);
		} else {
		sus < 55? JOSDRUSOJURA1(Q, PP2, f1, s, f, W, unu, doi, divInt, sumInt, M, b, b1, div1, sum1, D, H, 0, 0, 0, 0, nm, nr, F2, p, q0, q1)
		: sus < 73? JOSDRUSOJURA2(Q, PP2, f1, s, f, W, unu, doi, d, d1, Z, divInt, sumInt, M, b, b1, div1, sum1, D, H, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq) 
			: sus < 163? JOSDRUSOJURA3(Q, PP2, f1, s, f, W, unu, doi, d, d1, Z, divInt, sumInt, M, b, b1, div1, sum1, D, H, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq)
			: sus < 213? JOSDRUSOJURA4(Q, PP2, f1, s, f, W, unu, doi, trei, d, d1, divInt, sumInt, M, b, b1, div1, sum1, D, H, S, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq, mem)
			: sus < 223? JOSDRUSOJURA5(Q, PP2, f1, s, f, W, unu, doi, trei, d, d1, Z, divInt, sumInt, M, b, b1, C, J, div1, sum1, D, E, H, S, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq, mem)			
				: sus < 243? JOSDRUSOJURA6(Q, PP2, f1, s, f, W, unu, doi, trei, d, d1, Z, divInt, sumInt, M, b, b1, C, J, div, sum, div1, sum1, D, E, H, K, S, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq, mem) 
					: JOSDRUSOJURA7(Q, PP2, f1, s, f, W, unu, doi, trei, d, d1, Z, divInt, sumInt, M, b, b1, C, J, div, sum, div1, sum1, D, E, H, K, S, 0, 0, 0, 0, nm, nr, nm1, nr1, F2, p, q, qq, mem);
		}
}
