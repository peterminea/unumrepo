#ifndef _Z_H
#define _Z_H

//#include "/TOLVECUN.h"
#define PRAGW 1
#define TMODP 4
#define TMODF 4


//SUMM:
void SUMMSUS(char *Q, long PP2, FILE * f1, int f, int W, int t, int u, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, gmp_ui j1, gmp_ui k, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, gmp_ui &s, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &nm, gmp_ui &nr, mpz_t p, gmp_ui *q, gmp_ui *qq, int *f2) {

while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	while(1) {
		if(!f--)
			break;
		mpz_mul_ui(doi, unu, A2[f]);
		mpz_tdiv_q_2exp(p, doi, t = mpz_scan1(unu, 0));
		SMOD(p, d1, b, b1, 0, D, H, t, div1, sum1, j, j1, k, nm = qq[t], nr = q[t]);
		if(nm < PRAG)
			SCRIE(doi, Q, F2);
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUMMJOS(char *Q, long PP2, FILE * f1, int f, int W, int t, int u, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, gmp_ui j1, gmp_ui k, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, gmp_ui &s, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &nm, gmp_ui &nr, mpz_t p, gmp_ui *q, gmp_ui *qq, int *f2) {
while(1) {
	mpz_set_str(unu, Q, 10);	
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		if(!u) {
			LOTVEC1(unu, y, Y, b, b1, y1, D, H, h, s, f2);	
			t = mpz_scan1(unu, 0);
			u = 1;
		}
			mpz_divexact_ui(doi, unu, A2[f]);
			mpz_tdiv_q_2exp(p, doi, t);
			SMOD1(p, d1, y, y1, 0, Y, h, t, div1, sum1, j, j1, k, f2, nm = qq[t], nr = q[t]);
			if(nm < PRAG)
				SCRIE(doi, Q, F2);				
		}
		
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUMM(char *Q, long PP2, FILE * f1, int f, int W, int t, int u, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, gmp_ui j1, gmp_ui k, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, gmp_ui &s, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &nm, gmp_ui &nr, int *f2, mpz_t p, gmp_ui *q, gmp_ui *qq, int dir) {
	if(dir) {
		SUMMSUS(Q, PP2, f1, f, W, mpz_scan1(unu, 0), u, d, d1, unu, doi, A2, b, b1, D, H, j, j1, k, R, Y, y, y1, h, s, F2, div1, sum1, nm, nr, p, q, qq, f2); 
		} else {
		SUMMJOS(Q, PP2, f1, f, W, mpz_scan1(unu, 0), u, d, d1, unu, doi, A2, b, b1, D, H, j, j1, k, R, Y, y, y1, h, s, F2, div1, sum1, nm, nr, p, q, qq, f2);
	}
}


//SUMRED:
void SUMREDES(mpz_t A, gmp_ui *b, gmp_ui *b1, mpz_t B, int D, int d1, gmp_ui &e, int &d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t p, mpz_t q, int t) {
mpz_set_ui(B, 1);
mpz_tdiv_q_2exp(p, A, t);
d = d1;

while(1) {
	if(!d--)
	 	break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}

if(mpz_cmp(B, p) == 1) {
	mpz_mul(B, B, q);
	return;
	}

	while(1) {
		if(!(D-- ^ d1))
			break;
		if(mpz_divisible_ui_p(p, b[D])) {
			mpz_mul_ui(B, B, b1[D]);
			if(mpz_cmp(B, p) == 1) {
				mpz_mul(B, B, q);
				return;
				}
			}
		}
}


void SUMREDES1(mpz_t A, gmp_ui *b, gmp_ui *b1, mpz_t B, int D, int d1, gmp_ui &e, int &d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t p, int *f2, int t) {
mpz_set_ui(B, 1);
mpz_tdiv_q_2exp(p, A, t);
d = d1;

while(1) {
	if(!d--)
	 	break;
	if(mpz_divisible_ui_p(p, b[d])) {
		t = f2[d];
		VERIFSUM2(p, B, 2, div1[t], sum1[t]);
		}
	}

while(1) {
	if(!(D-- ^ d1))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		}
	}
}


void SUMREDSUS(char *Q, long PP2, FILE *f1, int f, int W, int t, int u, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, int s, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t p, mpz_t *q, int *f2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	t = mpz_scan1(unu, 0);
	if( (t == 88) || (t == 106) || (t == 126) )
		goto s1;
		
	while(1) {
		if(!f--)
			break;
		mpz_mul_ui(doi, unu, A2[f]);
		SUMREDES(doi, b, b1, d, D, H, j, R, div1, sum1, p, q[t], t);
		if(
		//VALID(doi, d1, d)
		VALID4(doi, d1, d)
		== 1)
			SCRIE(doi, Q, F2);
		}
		goto s2;
	s1:
		
	while(1) {
		if(!f--)
			break;
		mpz_mul_ui(doi, unu, A2[f]);
		SUMREDES(doi, b, b1, d, D, H, j, R, div1, sum1, p, q[t], t);
		mpz_mul_2exp(d, d, t + 1);
		if(
		//VALID(doi, d1, d)
		VALID4(doi, d1, d)
		== 1)
			SCRIE(doi, Q, F2);
		}
	s2:
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

void SUMREDJOS(char *Q, long PP2, FILE *f1, int f, int W, int t, int u, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, int s, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t p, int *f2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		if(!u) {
			t = mpz_scan1(unu, 0);
			LOTVEC1(unu, y, Y, b, b1, y1, D, H, h, s, f2);
			u = (t == 88) || (t == 106) || (t == 126)? 2 : 1;
		}
		
	//	if( (t == 88) || (t == 106) || (t == 126) )
		//	goto s3;

		mpz_divexact_ui(doi, unu, A2[f]);			
		SUMREDES1(doi, y, y1, d, Y, h, j, R, div1, sum1, p, f2, t);
		if(u == 2) mpz_mul_2exp(d, d, t + 1);
		
		if(// mpz_divisible_ui_p(doi, A1[u]) &&
		//VALID(doi, d1, d) == 1
		VALID4(doi, d1, d) == 1
		)
			{SCRIE(doi, Q, F2);}			
		/*
			goto s4;
			
		s3:	
		mpz_divexact_ui(doi, unu, A2[f]);
		SUMREDES1(doi, y, y1, d, Y, h, j, R, div1, sum1, p, f2, t);
		mpz_mul_2exp(d, d, t + 1);
		if( //mpz_divisible_ui_p(doi, A1[u]) &&
		//VALID(doi, d1, d) == 1
		VALID4(doi, d1, d) == 1
		)
			{SCRIE(doi, Q, F2);}
			
		}
	s4:*/
		}
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUMREDSUS(char *Q, long PP2, FILE *f1, int t, int u, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, int s, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t p, mpz_t *q, int *f2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	t = mpz_scan1(unu, 0);	
	mpz_mul_ui(doi, unu, A2);
	SUMREDES(doi, b, b1, d, D, H, j, R, div1, sum1, p, q[t], t);
	if( (t == 88) || (t == 106) || (t == 126) )
		mpz_mul_2exp(d, d, t + 1);
		
		if(
		//VALID(doi, d1, d)
		VALID4(doi, d1, d)
		== 1)
			SCRIE(doi, Q, F2);
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

void USUMREDJOS(char *Q, long PP2, FILE *f1, int t, int u, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, int s, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t p, int *f2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	
	if(mpz_divisible_ui_p(unu, A2)) {
		t = mpz_scan1(unu, 0);
		LOTVEC1(unu, y, Y, b, b1, y1, D, H, h, s, f2);		
		mpz_divexact_ui(doi, unu, A2);			
		SUMREDES1(doi, y, y1, d, Y, h, j, R, div1, sum1, p, f2, t);
		
		if( (t == 88) || (t == 106) || (t == 126) )
			mpz_mul_2exp(d, d, t + 1);
		if(// mpz_divisible_ui_p(doi, A1[u]) &&
		//VALID(doi, d1, d) == 1
		VALID4(doi, d1, d) == 1
		)
			{SCRIE(doi, Q, F2);}
		}
		
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUMRED(char *Q, long PP2, FILE *f1, int t, int u, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, int s, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, mpz_t p, mpz_t *q, int dir) {
if(dir) {
	USUMREDSUS(Q, PP2, f1, mpz_scan1(unu, 0), u, d, d1, unu, doi, A2, b, b1, D, H, j, R, Y, y, y1, h, s, F2, div1, sum1, p, q, f2); 
	} else {
	USUMREDJOS(Q, PP2, f1, mpz_scan1(unu, 0), u, d, d1, unu, doi, A2, b, b1, D, H, j, R, Y, y, y1, h, s, F2, div1, sum1, p, f2);
	}
}



void SUMRED(char *Q, long PP2, FILE *f1, int f, int W, int t, int u, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, int s, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, mpz_t p, mpz_t *q, int dir) {
if(dir) {
	SUMREDSUS(Q, PP2, f1, f, W, mpz_scan1(unu, 0), u, d, d1, unu, doi, A2, b, b1, D, H, j, R, Y, y, y1, h, s, F2, div1, sum1, p, q, f2); 
	} else {
	SUMREDJOS(Q, PP2, f1, f, W, mpz_scan1(unu, 0), u, d, d1, unu, doi, A2, b, b1, D, H, j, R, Y, y, y1, h, s, F2, div1, sum1, p, f2);
	}
}


//NUMSUM:
void NUMSUM0(int dir, int f, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, gmp_ui j, int D, int H, int R, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], char *Q, FILE *F2, gmp_ui *A2, gmp_ui *y, gmp_ui *y1, int Y, int &h, int *f2, mpz_t p, mpz_t *q) {
	if(dir) {
		f = W;
		while(1) {
			if(!f--)
				break;		
			mpz_mul_ui(doi, unu, A2[f]);
			mpz_tdiv_q_2exp(p, doi, u = mpz_scan1(unu, 0));
			NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
			if(
			VALID4(doi, d1, d)
			//VALID(doi, d1, d)
			 == 1)
				SCRIE(doi, Q, F2);
			}
	} else {
		for(u = 0, f = W-1; f >= 0; --f) 
		if(mpz_divisible_ui_p(unu, A2[f])) {
			if(!u) {
				LOTVEC1(unu, y, Y, b, b1, y1, D, H, h, u, f2);				
				}
				
			mpz_divexact_ui(doi, unu, A2[f]);
			mpz_tdiv_q_2exp(p, doi, u = mpz_scan1(unu, 0));
			NUMSUM2(p, d, y, y1, Y, h, u, div1, sum1, f2, q[u]);
			if(
			VALID4(doi, d1, d) == 1
			//VALID(doi, d1, d) == 1
			)
				SCRIE(doi, Q, F2);
			}
	}
}


#endif
