void UNUMSIMPLSUS1(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui divInt, gmp_ui sumInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, gmp_ui *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(!mpz_divisible_ui_p(unu, divInt)) {
			SUMA1(unu, d, b, b1, D, H, H, div1, sum1, q[mpz_scan1(unu, 0)]);
			if(VALIDNOU1(unu, d1, d, trei, j, j1) && TRAT(j * sumInt, j1 * divInt)) {
				mpz_mul_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UNUMSIMPLSUS2(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui divInt, gmp_ui sumInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(!mpz_divisible_ui_p(unu, divInt)) {
			g = mpz_scan1(unu, 0);
			SUMA2(unu, d, b, b1, D, H, g, div1, sum1, q[g]);
			if(VALIDNOU1(unu, d1, d, trei, j, j1) && TRAT(j * sumInt, j1 * divInt)) {
				mpz_mul_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UNUMSIMPLSUS3(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui divInt, gmp_ui sumInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(!mpz_divisible_ui_p(unu, divInt)) {
			g = mpz_scan1(unu, 0);
			SUMA3(unu, d, b, b1, D, H, g, div1, sum1, q[g]);
			if(VALIDNOU1(unu, d1, d, trei, j, j1) && TRAT(j * sumInt, j1 * divInt)) {
				mpz_mul_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UNUMSIMPLSUS4(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui divInt, gmp_ui sumInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(!mpz_divisible_ui_p(unu, divInt)) {
			g = mpz_scan1(unu, 0);
			SUMA4(unu, d, b, b1, D, H, S, g, div1, sum1, mem, q[g]);
			if(VALIDNOU1(unu, d1, d, trei, j, j1) && TRAT(j * sumInt, j1 * divInt)) {
				mpz_mul_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UNUMSIMPLSUS5(char *Q, long PP2, FILE *f1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui divInt, gmp_ui sumInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(!mpz_divisible_ui_p(unu, divInt)) {
			g = mpz_scan1(unu, 0);
			SUMA5(unu, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);
			if(VALIDNOU1(unu, d1, d, trei, j, j1) && TRAT(j * sumInt, j1 * divInt)) {
				mpz_mul_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UNUMSIMPLSUS6(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui divInt, gmp_ui sumInt, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(!mpz_divisible_ui_p(unu, divInt)) {
			g = mpz_scan1(unu, 0);
			SUMA6(unu, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
			if(VALIDNOU1(unu, d1, d, trei, j, j1) && TRAT(j * sumInt, j1 * divInt)) {
				mpz_mul_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UNUMSIMPLSUS7(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui divInt, gmp_ui sumInt, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(!mpz_divisible_ui_p(unu, divInt)) {
			SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, S, H, div1, sum1, div, sum, mem, q[mpz_scan1(unu, 0)]);
			if(VALIDNOU1(unu, d1, d, trei, j, j1) && TRAT(j * sumInt, j1 * divInt)) {
				mpz_mul_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UNUMSIMPLSUS8(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui divInt, gmp_ui sumInt, gmp_ui *b, gmp_ui *b1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(!mpz_divisible_ui_p(unu, divInt)) {
			g = mpz_scan1(unu, 0);
			SUMA7(unu, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q[g]);
			if(VALIDNOU1(unu, d1, d, trei, j, j1) && TRAT(j * sumInt, j1 * divInt)) {
				mpz_mul_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UNUMSIMPLJOS1(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui divInt, gmp_ui sumInt, gmp_ui M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, gmp_ui *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(!mpz_divisible_ui_p(unu, M) && mpz_divisible_ui_p(unu, divInt)) {
			SUMA1(unu, d, b, b1, D, H, H, div1, sum1, q[mpz_scan1(unu, 0)]);
			if(VALIDNOU1(unu, d1, d, trei, j, j1) && TRAT(j * divInt, j1 * sumInt)) {
				mpz_divexact_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UNUMSIMPLJOS2(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui divInt, gmp_ui sumInt, gmp_ui M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(!mpz_divisible_ui_p(unu, M) && mpz_divisible_ui_p(unu, divInt)) {
			g = mpz_scan1(unu, 0);
			SUMA2(unu, d, b, b1, D, H, g, div1, sum1, q[g]);
			if(VALIDNOU1(unu, d1, d, trei, j, j1) && TRAT(j * divInt, j1 * sumInt)) {
				mpz_divexact_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UNUMSIMPLJOS3(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui divInt, gmp_ui sumInt, gmp_ui M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(!mpz_divisible_ui_p(unu, M) && mpz_divisible_ui_p(unu, divInt)) {
			g = mpz_scan1(unu, 0);
			SUMA3(unu, d, b, b1, D, H, g, div1, sum1, q[g]);
			if(VALIDNOU1(unu, d1, d, trei, j, j1) && TRAT(j * divInt, j1 * sumInt)) {
				mpz_divexact_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UNUMSIMPLJOS4(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui divInt, gmp_ui sumInt, gmp_ui M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(!mpz_divisible_ui_p(unu, M) && mpz_divisible_ui_p(unu, divInt)) {
			g = mpz_scan1(unu, 0);
			SUMA4(unu, d, b, b1, D, H, S, g, div1, sum1, mem, q[g]);
			if(VALIDNOU1(unu, d1, d, trei, j, j1) && TRAT(j * divInt, j1 * sumInt)) {
				mpz_divexact_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UNUMSIMPLJOS5(char *Q, long PP2, FILE *f1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui divInt, gmp_ui sumInt, gmp_ui M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(!mpz_divisible_ui_p(unu, M) && mpz_divisible_ui_p(unu, divInt)) {
			g = mpz_scan1(unu, 0);
			SUMA5(unu, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);
			if(VALIDNOU1(unu, d1, d, trei, j, j1) && TRAT(j * divInt, j1 * sumInt)) {
				mpz_divexact_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UNUMSIMPLJOS6(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui divInt, gmp_ui sumInt, gmp_ui M, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(!mpz_divisible_ui_p(unu, M) && mpz_divisible_ui_p(unu, divInt)) {
			g = mpz_scan1(unu, 0);
			SUMA6(unu, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
			if(VALIDNOU1(unu, d1, d, trei, j, j1) && TRAT(j * divInt, j1 * sumInt)) {
				mpz_divexact_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UNUMSIMPLJOS7(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui divInt, gmp_ui sumInt, gmp_ui M, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(!mpz_divisible_ui_p(unu, M) && mpz_divisible_ui_p(unu, divInt)) {
			SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, S, H, div1, sum1, div, sum, mem, q[mpz_scan1(unu, 0)]);
			if(VALIDNOU1(unu, d1, d, trei, j, j1) && TRAT(j * divInt, j1 * sumInt)) {
				mpz_divexact_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UNUMSIMPLJOS8(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui divInt, gmp_ui sumInt, gmp_ui M, gmp_ui *b, gmp_ui *b1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);

		if(!mpz_divisible_ui_p(unu, M) && mpz_divisible_ui_p(unu, divInt)) {
			g = mpz_scan1(unu, 0);
			SUMA7(unu, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q[g]);
			if(VALIDNOU1(unu, d1, d, trei, j, j1) && TRAT(j * divInt, j1 * sumInt)) {
				mpz_divexact_ui(doi, unu, divInt);
				SCRIE(doi, Q, F2);
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UNUMSIMPL(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui divInt, gmp_ui sumInt, gmp_ui M, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int &sus, mpz_t p, mpz_t *q, gmp_ui *q0, int dir) {
if(dir) {
	sus < 55? UNUMSIMPLSUS1(Q, PP2, f1, unu, d, d1, doi, trei, divInt, sumInt, b, b1, div1, sum1, D, H, 0, 0, F2, 0, p, q0) 
	: sus < 73? UNUMSIMPLSUS2(Q, PP2, f1, unu, d, d1, doi, trei, divInt, sumInt, b, b1, div1, sum1, D, H, 0, 0, F2, 0, p, q) 
	: sus < 163? UNUMSIMPLSUS3(Q, PP2, f1, unu, d, d1, doi, trei, divInt, sumInt, b, b1, div1, sum1, D, H, 0, 0, F2, 0, p, q)
	: sus < 213? UNUMSIMPLSUS4(Q, PP2, f1, unu, d, d1, doi, trei, divInt, sumInt, b, b1, div1, sum1, mem, D, H, S, 0, 0, F2, 0, p, q)
	: sus < 223? UNUMSIMPLSUS5(Q, PP2, f1, C, C1, unu, d, d1, doi, trei, divInt, sumInt, b, b1, div1, sum1, mem, D, E, H, S, 0, 0, F2, 0, p, q) 
		: sus < 243? UNUMSIMPLSUS6(Q, PP2, f1, unu, d, d1, doi, trei, divInt, sumInt, b, b1, C, C1, div, sum, div1, sum1, mem, D, E, H, K, S, 0, 0, F2, 0, p, q) 
			: UNUMSIMPLSUS7(Q, PP2, f1, unu, d, d1, doi, trei, divInt, sumInt, b, b1, C, C1, div, sum, div1, sum1, mem, D, E, H, K, S, 0, 0, F2, 0, p, q);
	} else {
	sus < 55? UNUMSIMPLJOS1(Q, PP2, f1, unu, d, d1, doi, trei, divInt, sumInt, M, b, b1, div1, sum1, D, H, 0, 0, F2, 0, p, q0) 
	: sus < 73? UNUMSIMPLJOS2(Q, PP2, f1, unu, d, d1, doi, trei, divInt, sumInt, M, b, b1, div1, sum1, D, H, 0, 0, F2, 0, p, q) 
	: sus < 163? UNUMSIMPLJOS3(Q, PP2, f1, unu, d, d1, doi, trei, divInt, sumInt, M, b, b1, div1, sum1, D, H, 0, 0, F2, 0, p, q)
	: sus < 213? UNUMSIMPLJOS4(Q, PP2, f1, unu, d, d1, doi, trei, divInt, sumInt, M, b, b1, div1, sum1, mem, D, H, S, 0, 0, F2, 0, p, q)
	: sus < 223? UNUMSIMPLJOS5(Q, PP2, f1, C, C1, unu, d, d1, doi, trei, divInt, sumInt, M, b, b1, div1, sum1, mem, D, E, H, S, 0, 0, F2, 0, p, q) 
	: sus < 243? UNUMSIMPLJOS6(Q, PP2, f1, unu, d, d1, doi, trei, divInt, sumInt, M, b, b1, C, C1, div, sum, div1, sum1, mem, D, E, H, K, S, 0, 0, F2, 0, p, q) 
		: UNUMSIMPLJOS7(Q, PP2, f1, unu, d, d1, doi, trei, divInt, sumInt, M, b, b1, C, C1, div, sum, div1, sum1, mem, D, E, H, K, S, 0, 0, F2, 0, p, q);
	}
}
