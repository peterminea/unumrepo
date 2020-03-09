#define PRAGW 4000


void NUMSIMPLSUS1(char *Q, long PP2, FILE *f1, int f, int W, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, gmp_ui *q) {
/*
gmp_ui nr, nm;

fscanf(SS, "%llu %llu", nr, nm);
La NUMSIMPL cu MODPRIM, ajunge asta, dar este rentabil ca LPT-ul (nu GIG-ul) să fie de maxim câteva zeci de GB.
La HMODIFSUM e nevoie de sumă.


mpz_mul_ui(doi, unu, nr);
mpz_divexact_ui(doi, doi, nm);

versus

fgets(Q1, 1920, SS);
mpz_set_str(doi, Q1, 10);
*/


//Pentru W suficient de mare.
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(p, divInt[f])) {
				if(!s) {
					SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					s = 1;
				}
				
				if(TRAT(j * sumInt[f], j1 * divInt[f])) {
					mpz_mul_ui(doi, unu, divInt[f]);
					SCRIE(doi, Q, F2);
				}
			}
		}
		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
	else
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		
		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(unu, divInt[f])) {
				if(!s) {
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					s = 1;
				}
				
				if(TRAT(j * sumInt[f], j1 * divInt[f])) {
					mpz_mul_ui(doi, unu, divInt[f]);
					SCRIE(doi, Q, F2);
				}
			}
		}
		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}	
}


void NUMSIMPLSUS2(char *Q, long PP2, FILE *f1, int f, int W, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		while(1) {
		if(!f--)
			break;	
		if(!mpz_divisible_ui_p(p, divInt[f])) {
			if(!s) {
				NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
				if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
				s = 1;
				}

			if(TRAT(j * sumInt[f], j1 * divInt[f])) {
				mpz_mul_ui(doi, unu, divInt[f]);
				SCRIE(doi, Q, F2);
				}
			}
		}
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		
		while(1) {
		if(!f--)
			break;	
		if(!mpz_divisible_ui_p(unu, divInt[f])) {
			if(!s) {
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				NUMSUMPURG1(p, d, b, b1, D, H, s, div1, sum1, q[s], 0);
				if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
				}

			if(TRAT(j * sumInt[f], j1 * divInt[f])) {
				mpz_mul_ui(doi, unu, divInt[f]);
				SCRIE(doi, Q, F2);
				}
			}
		}
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void NUMSIMPLSUS3(char *Q, long PP2, FILE *f1, int f, int W, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		while(1) {
		if(!f--)
			break;	
		if(!mpz_divisible_ui_p(p, divInt[f])) {
			if(!s) {
				NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
				if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
				s = 1;
				}

			if(TRAT(j * sumInt[f], j1 * divInt[f])) {
				mpz_mul_ui(doi, unu, divInt[f]);
				SCRIE(doi, Q, F2);
				}
			}
		}
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		
		while(1) {
		if(!f--)
			break;	
		if(!mpz_divisible_ui_p(unu, divInt[f])) {
			if(!s) {
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				NUMSUMV1(p, d, b, b1, D, H, s, div1, sum1, q[s], 0);
				if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
				}

			if(TRAT(j * sumInt[f], j1 * divInt[f])) {
				mpz_mul_ui(doi, unu, divInt[f]);
				SCRIE(doi, Q, F2);
				}
			}
		}
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void NUMSIMPLSUS4(char *Q, long PP2, FILE *f1, int f, int W, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		while(1) {
		if(!f--)
			break;	
		if(!mpz_divisible_ui_p(p, divInt[f])) {
			if(!s) {
				NUMSUMV3(p, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
				if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
				s = 1;
				}

			if(TRAT(j * sumInt[f], j1 * divInt[f])) {
				mpz_mul_ui(doi, unu, divInt[f]);
				SCRIE(doi, Q, F2);
				}
			}
		}
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		
		while(1) {
		if(!f--)
			break;	
		if(!mpz_divisible_ui_p(unu, divInt[f])) {
			if(!s) {
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				NUMSUMV3(p, d, b, b1, D, H, S, s, div1, sum1, mem, q[s], 0);
				if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
				}

			if(TRAT(j * sumInt[f], j1 * divInt[f])) {
				mpz_mul_ui(doi, unu, divInt[f]);
				SCRIE(doi, Q, F2);
				}
			}
		}
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void NUMSIMPLSUS5(char *Q, long PP2, FILE *f1, int f, int W, int s, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		while(1) {
		if(!f--)
			break;	
		if(!mpz_divisible_ui_p(p, divInt[f])) {
			if(!s) {
				NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);
				if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
				s = 1;
				}

			if(TRAT(j * sumInt[f], j1 * divInt[f])) {
				mpz_mul_ui(doi, unu, divInt[f]);
				SCRIE(doi, Q, F2);
				}
			}
		}
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		
		while(1) {
		if(!f--)
			break;	
		if(!mpz_divisible_ui_p(unu, divInt[f])) {
			if(!s) {
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, s, div1, sum1, mem, q[s], 0);
				if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
				}

			if(TRAT(j * sumInt[f], j1 * divInt[f])) {
				mpz_mul_ui(doi, unu, divInt[f]);
				SCRIE(doi, Q, F2);
				}
			}
		}
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void NUMSIMPLSUS6(char *Q, long PP2, FILE *f1, int f, int W, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
//PURGANTE(C, C1, E);
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		while(1) {
			if(!f--)
				break;	
			if(!mpz_divisible_ui_p(p, divInt[f])) {
				if(!s) {
					SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					s = 1;
					}

				if(TRAT(j * sumInt[f], j1 * divInt[f])) {
					mpz_mul_ui(doi, unu, divInt[f]);
					SCRIE(doi, Q, F2);
					}
				}
		}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		
		while(1) {
			if(!f--)
				break;	
			if(!mpz_divisible_ui_p(unu, divInt[f])) {
				if(!s) {
					mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
					SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, s, div1, sum1, div, sum, mem, q[s], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					}

				if(TRAT(j * sumInt[f], j1 * divInt[f])) {
					mpz_mul_ui(doi, unu, divInt[f]);
					SCRIE(doi, Q, F2);
					}
				}
		}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void NUMSIMPLSUS7(char *Q, long PP2, FILE *f1, int f, int W, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(p, divInt[f])) {
				if(!s) {
					SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g]);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					s = 1;
					}

				if(TRAT(j * sumInt[f], j1 * divInt[f])) {
					mpz_mul_ui(doi, unu, divInt[f]);
					SCRIE(doi, Q, F2);
					}
				}
			}	
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		
		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(unu, divInt[f])) {
				if(!s) {
					mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
					SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, s, div1, sum1, div, sum, mem, q[s]);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					}

				if(TRAT(j * sumInt[f], j1 * divInt[f])) {
					mpz_mul_ui(doi, unu, divInt[f]);
					SCRIE(doi, Q, F2);
					}
				}
			}	
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
	
}


void NUMSIMPLSUS8(char *Q, long PP2, FILE *f1, int f, int W, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *b, gmp_ui *b1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(p, divInt[f])) {
				if(!s) {
					SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					s = 1;
					}

				if(TRAT(j * sumInt[f], j1 * divInt[f])) {
					mpz_mul_ui(doi, unu, divInt[f]);
					SCRIE(doi, Q, F2);
					}
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		
		while(1) {
			if(!f--)
				break;	
			if(!mpz_divisible_ui_p(unu, divInt[f])) {
				if(!s) {
					mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
					SUM7(p, d, b, b1, D, H, K, S, s, div1, sum1, div, sum, mem, q[s], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					}

				if(TRAT(j * sumInt[f], j1 * divInt[f])) {
					mpz_mul_ui(doi, unu, divInt[f]);
					SCRIE(doi, Q, F2);
					}
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void NUMSIMPLJOS1(char *Q, long PP2, FILE *f1, int f, int W, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, gmp_ui *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(p, M[f]) && mpz_divisible_ui_p(p, divInt[f])) {
				if(!s) {
					SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					s = 1;
					}

				if(TRAT(j * divInt[f], j1 * sumInt[f])) {
					mpz_divexact_ui(doi, unu, divInt[f]);								
					SCRIE(doi, Q, F2);
					}
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
	else
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;		
		
		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(unu, M[f]) && mpz_divisible_ui_p(unu, divInt[f])) {
				if(!s) {
					mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
					SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					s = 1;
					}

				if(TRAT(j * divInt[f], j1 * sumInt[f])) {
					mpz_divexact_ui(doi, unu, divInt[f]);								
					SCRIE(doi, Q, F2);
					}
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void NUMSIMPLJOS2(char *Q, long PP2, FILE *f1, int f, int W, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(p, M[f]) && mpz_divisible_ui_p(p, divInt[f])) {
				if(!s) {
					NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					s = 1;
				}

				if(TRAT(j * divInt[f], j1 * sumInt[f])) {
					mpz_divexact_ui(doi, unu, divInt[f]);								
					SCRIE(doi, Q, F2);
					}
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;

		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(unu, M[f]) && mpz_divisible_ui_p(unu, divInt[f])) {
				if(!s) {
					mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
					NUMSUMPURG1(p, d, b, b1, D, H, s, div1, sum1, q[s], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
				}

				if(TRAT(j * divInt[f], j1 * sumInt[f])) {
					mpz_divexact_ui(doi, unu, divInt[f]);								
					SCRIE(doi, Q, F2);
					}
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void NUMSIMPLJOS3(char *Q, long PP2, FILE *f1, int f, int W, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(p, M[f]) && mpz_divisible_ui_p(p, divInt[f])) {
				if(!s) {
					NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					s = 1;
				}

				if(TRAT(j * divInt[f], j1 * sumInt[f])) {
					mpz_divexact_ui(doi, unu, divInt[f]);								
					SCRIE(doi, Q, F2);
					}
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;

		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(unu, M[f]) && mpz_divisible_ui_p(unu, divInt[f])) {
				if(!s) {
					mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
					NUMSUMV1(p, d, b, b1, D, H, s, div1, sum1, q[s], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
				}

				if(TRAT(j * divInt[f], j1 * sumInt[f])) {
					mpz_divexact_ui(doi, unu, divInt[f]);								
					SCRIE(doi, Q, F2);
					}
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void NUMSIMPLJOS6(char *Q, long PP2, FILE *f1, int f, int W, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {

//PURGANTE(C, C1, E);
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(p, M[f]) && mpz_divisible_ui_p(p, divInt[f])) {
				if(!s) {
					SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					s = 1;
					}

				if(TRAT(j * divInt[f], j1 * sumInt[f])) {
					mpz_divexact_ui(doi, unu, divInt[f]);								
					SCRIE(doi, Q, F2);
					}
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
	else
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;

		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(unu, M[f]) && mpz_divisible_ui_p(unu, divInt[f])) {
				if(!s) {
					mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
					SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, s, div1, sum1, div, sum, mem, q[s], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					}

				if(TRAT(j * divInt[f], j1 * sumInt[f])) {
					mpz_divexact_ui(doi, unu, divInt[f]);								
					SCRIE(doi, Q, F2);
					}
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void NUMSIMPLJOS7(char *Q, long PP2, FILE *f1, int f, int W, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(p, M[f]) && mpz_divisible_ui_p(p, divInt[f])) {
				if(!s) {
					SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g]);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					s = 1;
					}

				if(TRAT(j * divInt[f], j1 * sumInt[f])) {
					mpz_divexact_ui(doi, unu, divInt[f]);								
					SCRIE(doi, Q, F2);
					}
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;

		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(unu, M[f]) && mpz_divisible_ui_p(unu, divInt[f])) {
				if(!s) {
					mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
					SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, s, div1, sum1, div, sum, mem, q[s]);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					}

				if(TRAT(j * divInt[f], j1 * sumInt[f])) {
					mpz_divexact_ui(doi, unu, divInt[f]);								
					SCRIE(doi, Q, F2);
					}
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void NUMSIMPLJOS8(char *Q, long PP2, FILE *f1, int f, int W, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int K, int S, gmp_ui j, gmp_ui j1, int v, FILE *F2, int g, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(p, M[f]) && mpz_divisible_ui_p(p, divInt[f])) {
				if(!s) {			
					SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					s = 1;
					}

				if(TRAT(j * divInt[f], j1 * sumInt[f])) {
					mpz_divexact_ui(doi, unu, divInt[f]);
					SCRIE(doi, Q, F2);
					}
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0, f = W;

	while(1) {
		if(!f--)
			break;
		if(!mpz_divisible_ui_p(unu, M[f]) && mpz_divisible_ui_p(unu, divInt[f])) {
			if(!s) {
				mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, s, div1, sum1, div, sum, mem, q[s], 0);
				if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
				}

			if(TRAT(j * divInt[f], j1 * sumInt[f])) {
				mpz_divexact_ui(doi, unu, divInt[f]);
				SCRIE(doi, Q, F2);
				}
			}
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMSIMPLJOS5(char *Q, long PP2, FILE *f1, int f, int W, int s, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(p, M[f]) && mpz_divisible_ui_p(p, divInt[f])) {
				if(!s) {
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					s = 1;
				}

				if(TRAT(j * divInt[f], j1 * sumInt[f])) {
					mpz_divexact_ui(doi, unu, divInt[f]);								
					SCRIE(doi, Q, F2);
					}
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;

		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(unu, M[f]) && mpz_divisible_ui_p(unu, divInt[f])) {
				if(!s) {
					mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
					NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, s, div1, sum1, mem, q[s], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
				}

				if(TRAT(j * divInt[f], j1 * sumInt[f])) {
					mpz_divexact_ui(doi, unu, divInt[f]);								
					SCRIE(doi, Q, F2);
					}
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void NUMSIMPLJOS4(char *Q, long PP2, FILE *f1, int f, int W, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, gmp_ui j, gmp_ui j1, FILE *F2, int g, mpz_t p, mpz_t *q) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));

		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(p, M[f]) && mpz_divisible_ui_p(p, divInt[f])) {
				if(!s) {
					NUMSUMV3(p, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
					s = 1;
				}

				if(TRAT(j * divInt[f], j1 * sumInt[f])) {
					mpz_divexact_ui(doi, unu, divInt[f]);								
					SCRIE(doi, Q, F2);
					}
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		s = 0, f = W;

		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(unu, M[f]) && mpz_divisible_ui_p(unu, divInt[f])) {
				if(!s) {
					mpz_tdiv_q_2exp(p, unu, s = mpz_scan1(unu, 0));
					NUMSUMV3(p, d, b, b1, D, H, S, s, div1, sum1, mem, q[s], 0);
					if(!VALIDNOU1(unu, d1, d, trei, j, j1)) break;
				}

				if(TRAT(j * divInt[f], j1 * sumInt[f])) {
					mpz_divexact_ui(doi, unu, divInt[f]);								
					SCRIE(doi, Q, F2);
					}
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void NUMSIMPL(char *Q, long PP2, FILE *f1, int f, int W, int s, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *M, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, int &sus, mpz_t p, mpz_t *q, gmp_ui *q0, int dir) {//Regim de discriminare pentru categoriile numerice.
if(dir) {
	sus < 55? NUMSIMPLSUS1(Q, PP2, f1, f, W, 0, unu, d, d1, doi, trei, divInt, sumInt, b, b1, div1, sum1, D, H, 0, 0, F2, 0, p, q0) 
	: sus < 73? NUMSIMPLSUS2(Q, PP2, f1, f, W, 0, unu, d, d1, doi, trei, divInt, sumInt, b, b1, div1, sum1, D, H, 0, 0, F2, 0, p, q) 
	: sus < 163? NUMSIMPLSUS3(Q, PP2, f1, f, W, 0, unu, d, d1, doi, trei, divInt, sumInt, b, b1, div1, sum1, D, H, 0, 0, F2, 0, p, q)
	: sus < 213? NUMSIMPLSUS4(Q, PP2, f1, f, W, 0, unu, d, d1, doi, trei, divInt, sumInt, b, b1, div1, sum1, mem, D, H, S, 0, 0, F2, 0, p, q)
	: sus < 223? NUMSIMPLSUS5(Q, PP2, f1, f, W, 0, C, C1, unu, d, d1, doi, trei, divInt, sumInt, b, b1, div1, sum1, mem ,D, E, H, S, 0, 0, F2, 0, p, q) 
		: sus < 243? NUMSIMPLSUS6(Q, PP2, f1, f, W, 0, unu, d, d1, doi, trei, divInt, sumInt, b, b1, C, C1, div, sum, div1, sum1, mem, D, E, H, K, S, 0, 0, F2, 0, p, q) 
			: NUMSIMPLSUS7(Q, PP2, f1, f, W, 0, unu, d, d1, doi, trei, divInt, sumInt, b, b1, C, C1, div, sum, div1, sum1, mem, D, E, H, K, S, 0, 0, F2, 0, p, q);
	} else {
	sus < 55? NUMSIMPLJOS1(Q, PP2, f1, f, W, 0, unu, d, d1, doi, trei, divInt, sumInt, M, b, b1, div1, sum1, D, H, 0, 0, F2, 0, p, q0) 
	: sus < 73? NUMSIMPLJOS2(Q, PP2, f1, f, W, 0, unu, d, d1, doi, trei, divInt, sumInt, M, b, b1, div1, sum1, D, H, 0, 0, F2, 0, p, q) 
	: sus < 163? NUMSIMPLJOS3(Q, PP2, f1, f, W, 0, unu, d, d1, doi, trei, divInt, sumInt, M, b, b1, div1, sum1, D, H, 0, 0, F2, 0, p, q)
	: sus < 213? NUMSIMPLJOS4(Q, PP2, f1, f, W, 0, unu, d, d1, doi, trei, divInt, sumInt, M, b, b1, div1, sum1, mem, D, H, S, 0, 0, F2, 0, p, q)
	: sus < 223? NUMSIMPLJOS5(Q, PP2, f1, f, W, 0, C, C1, unu, d, d1, doi, trei, divInt, sumInt, M, b, b1, div1, sum1, mem, D, E, H, S, 0, 0, F2, 0, p, q) 
		: sus < 243? NUMSIMPLJOS6(Q, PP2, f1, f, W, 0, unu, d, d1, doi, trei, divInt, sumInt, M, b, b1, C, C1, div, sum, div1, sum1, mem, D, E, H, K, S, 0, 0, F2, 0, p, q) 
			: NUMSIMPLJOS7(Q, PP2, f1, f, W, 0, unu, d, d1, doi, trei, divInt, sumInt, M, b, b1, C, C1, div, sum, div1, sum1, mem, D, E, H, K, S, 0, 0, F2, 0, p, q);
	}
}
