#ifndef _Z_H
#define _Z_H

#include "/TOLNUM.h"
#include "/TOLVECUN.h"


void NUMSIMPLSUS1(char *Q, long PP2, fstream &f1, int f, int W, int s, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, gmp_ui &j1, int &v, char *G, fstream &F2) {

while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0, f = W;
	
	while(1) {
		if(!f--)
			break;
		if((unu % divInt[f])) {
			A1[s] = divInt[f];
			sumInt[s++] = A2[f];
			}
	}
	if(s)	{
		SM(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1, 2);
		VALIDN(unu, d1, d, trei);//j1 nm, j nr.
		j = (trei);
		j1 = (d1);
		if(j1 && j1 < v)
		while(1) {
			if(!s--)
				break;
			if(TRAT(j * sumInt[s], j1 * A1[s], v)) {				
				SCRIE(unu*A1[s], G, F2);
				}
			}
		}

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMSIMPLSUS2(char *Q, long PP2, fstream &f1, int f, int W, int s, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, gmp_ui &j1, int &v, char *G, fstream &F2) {

while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0, f = W;
	
	while(1) {
	if(!f--)
		break;	
	if((unu % divInt[f])) {
		A1[s] = divInt[f];
		sumInt[s++] = A2[f];
		}
	}
	if(s)	{
		NUMSUM1(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1);
		VALIDN(unu, d1, d, trei);//j1 nm, j nr.
		j = (trei);
		j1 = (d1);
		if(j1 && j1 < v)
		while(1) {
			if(!s--)
				break;
			if(TRAT(j * sumInt[s], j1 * A1[s], v)) {
				SCRIE(unu*A1[s], G, F2);
				}
			}
		}
		
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

/*
void NUMSIMPLSUS3(char *Q, long PP2, fstream &f1, int f, int W, int s, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, gmp_ui &j1, int &v, char *G, fstream &F2) {
//NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0, f = W;
			
		while(1) {
		if(!f--)
			break;	
		if((unu % divInt[f])) {
			A1[s] = divInt[f];
			sumInt[s++] = A2[f];
			}
	}
	if(s)	{
		SUMADIV1(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		VALIDN(unu, d1, d, trei);//j1 nm, j nr.
		j = mpz_get_ui(trei);
		j1 = mpz_get_ui(d1);
		if(j1 && j1 < v)
		while(1) {
			if(!s--)
				break;
			if(TRAT(j * sumInt[s], j1 * A1[s], v)) {
				mpz_mul_ui(doi, unu, A1[s]);				
				SCRIE(doi, G, F2);
				}
			}
		}
		
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMSIMPLSUS4(char *Q, long PP2, fstream &f1, int f, int W, int s, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, gmp_ui &j1, int &v, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0, f = W;
			
		while(1) {
		if(!f--)
			break;	
		if((unu % divInt[f])) {
			A1[s] = divInt[f];
			sumInt[s++] = A2[f];
			}
	}
	if(s)	{
		SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		VALIDN(unu, d1, d, trei);//j1 nm, j nr.
		j = mpz_get_ui(trei);
		j1 = mpz_get_ui(d1);
		if(j1 && j1 < v)
		while(1) {
			if(!s--)
				break;
			if(TRAT(j * sumInt[s], j1 * A1[s], v)) {
				mpz_mul_ui(doi, unu, A1[s]);				
				SCRIE(doi, G, F2);
				}
			}
		}
		
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}
*/

void NUMSIMPLSUS5(char *Q, long PP2, fstream &f1, int f, int W, int s, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui &j, gmp_ui &j1, int &v, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0, f = W;
			
		while(1) {
		if(!f--)
			break;	
		if((unu % divInt[f])) {
			A1[s] = divInt[f];
			sumInt[s++] = A2[f];
			}
	}
	if(s)	{
		NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		VALIDN(unu, d1, d, trei);//j1 nm, j nr.
		j = mpz_get_ui(trei);
		j1 = mpz_get_ui(d1);
		if(j1 && j1 < v)
		while(1) {
			if(!s--)
				break;
			if(TRAT(j * sumInt[s], j1 * A1[s], v)) {
				SCRIE(unu*A1[s], G, F2);
				}
			}
		}
		
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMSIMPLJOS1(char *Q, long PP2, fstream &f1, int f, int W, int s, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *M, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, gmp_ui &j1, int &v, char *G, fstream &F2) {

while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0, f = W;
			
	while(1) {
		if(!--f)
			break;
		if( (!(unu % divInt[f])) && ((unu % M[f])) ) {
			A1[s] = divInt[f];
			sumInt[s++] = A2[f];
			}
		}					
	if(s)	{
		SM(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1, 2);					
		VALIDN(unu, d1, d, trei);
		j = (trei);
		j1 = (d1);
	if(j1 && j1 < v)
		while(1) {
			if(!s--)
				break;						
			if(TRAT(j * A1[s], j1 * sumInt[s], v)) {
				SCRIE(unu/A1[s], G, F2);
				}
			}
		}
	
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMSIMPLJOS2(char *Q, long PP2, fstream &f1, int f, int W, int s, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *M, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, gmp_ui &j1, int &v, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0, f = W;
			
	while(1) {
		if(!--f)
			break;
		if( (!(unu % divInt[f])) && ((unu % M[f])) ) {
			A1[s] = divInt[f];
			sumInt[s++] = A2[f];
			}
		}					
	if(s)	{
		NUMSUM1(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1);
		VALIDN(unu, d1, d, trei);
		j = (trei);
		j1 = (d1);
	if(j1 && j1 < v)
		while(1) {
			if(!s--)
				break;						
			if(TRAT(j * A1[s], j1 * sumInt[s], v)) {				
				SCRIE(unu/A1[s], G, F2);
				}
			}
		}
	
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

/*
void NUMSIMPLJOS3(char *Q, long PP2, fstream &f1, int f, int W, int s, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *M, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, gmp_ui &j1, int &v, char *G, fstream &F2) {

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0, f = W;
			
	while(1) {
		if(!--f)
			break;
		if( (!(unu % divInt[f])) && ((unu % M[f])) ) {
			A1[s] = divInt[f];
			sumInt[s++] = A2[f];
			}
		}					
	if(s)	{
		SUMADIV1(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		VALIDN(unu, d1, d, trei);
		j = mpz_get_ui(trei);
		j1 = mpz_get_ui(d1);
	if(j1 && j1 < v)
		while(1) {
			if(!s--)
				break;						
			if(TRAT(j * A1[s], j1 * sumInt[s], v)) {
				mpz_divexact_ui(doi, unu, A1[s]);								
				SCRIE(doi, G, F2);
				}
			}
		}
	
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMSIMPLJOS4(char *Q, long PP2, fstream &f1, int f, int W, int s, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *M, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, gmp_ui &j1, int &v, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0, f = W;
			
	while(1) {
		if(!--f)
			break;
		if( (!(unu % divInt[f])) && ((unu % M[f])) ) {
			A1[s] = divInt[f];
			sumInt[s++] = A2[f];
			}
		}					
	if(s)	{
		SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		VALIDN(unu, d1, d, trei);
		j = mpz_get_ui(trei);
		j1 = mpz_get_ui(d1);
		if(j1 && (j1 < v) )
		while(1) {
			if(!s--)
				break;						
			if(TRAT(j * A1[s], j1 * sumInt[s], v)) {
				mpz_divexact_ui(doi, unu, A1[s]);								
				SCRIE(doi, G, F2);
				}
			}
		}
	
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}
*/

void NUMSIMPLJOS5(char *Q, long PP2, fstream &f1, int f, int W, int s, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *M, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui &j, gmp_ui &j1, int &v, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	s = 0, f = W;
			
	while(1) {
		if(!--f)
			break;
		if( (!(unu % divInt[f])) && ((unu % M[f])) ) {
			A1[s] = divInt[f];
			sumInt[s++] = A2[f];
			}
		}					
	if(s)	{
		NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		VALIDN(unu, d1, d, trei);
		j = (trei);
		j1 = (d1);
		if(j1 && (j1 < v) )
		while(1) {
			if(!s--)
				break;						
			if(TRAT(j * A1[s], j1 * sumInt[s], v)) {				
				SCRIE(unu/A1[s], G, F2);
				}
			}
		}
	
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMSIMPL
(char *Q, long PP2, fstream &f1, int f, int W, int s, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *M, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, gmp_ui &j1, int &v, char *G, fstream &F2, int &sus, int dir) {

if(dir) {
	sus < 55? NUMSIMPLSUS1(Q, PP2, f1, f, W, 0, unu, d, d1, doi, trei, divInt, sumInt, A1, A2, b, b1, div1, sum1, D, H, j, j1, v, G, F2) 
	: NUMSIMPLSUS2(Q, PP2, f1, f, W, 0, unu, d, d1, doi, trei, divInt, sumInt, A1, A2, b, b1, div1, sum1, D, H, j, j1, v, G, F2) ;	
	} else {	
	sus < 55? NUMSIMPLJOS1(Q, PP2, f1, f, W, 0, unu, d, d1, doi, trei, divInt, sumInt, A1, M, A2, b, b1, div1, sum1, D, H, j, j1, v, G, F2) 
	: NUMSIMPLJOS2(Q, PP2, f1, f, W, 0, unu, d, d1, doi, trei, divInt, sumInt, A1, M, A2, b, b1, div1, sum1, D, H, j, j1, v, G, F2) ;	
	}
}


void NUMERICULSUS1(char *Q, long PP2, int W, fstream &f1, int f, int s, int256 unu, int256 d, int256 d1, int256 doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	while(1) {
		if(!f--)
			break;
		doi = unu * divInt[f];
		SM(doi, d, b, b1, D, H, mpz_scan1(doi, 0), div1, sum1, 2);
		if(!(VALID(doi, d1, d) ^ 1)) {
			SCRIE(doi, G, F2);
			}
	}

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULSUS2(char *Q, long PP2, int W, fstream &f1, int f, int s, int256 unu, int256 d, int256 d1, int256 doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, char *G, fstream &F2) {
while(1) {//sus < 163? NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(doi, 0), div1, sum1, div, sum);
	mpz_set_str(unu, Q, 10);
	f = W;
	while(1) {
		if(!f--)
			break;
		doi = unu * divInt[f];
		NUMSUM1(doi, d, b, b1, D, H, mpz_scan1(doi, 0), div1, sum1);
		if(!(VALID(doi, d1, d) ^ 1)) {
			SCRIE(doi, G, F2);
		}
	}
	
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}
/*

void NUMERICULSUS3(char *Q, long PP2, int W, fstream &f1, int f, int s, int256 unu, int256 d, int256 d1, int256 doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, char *G, fstream &F2) {

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	
	while(1) {
		if(!f--)
			break;
		mpz_mul_ui(doi, unu, divInt[f]);
		SUMADIV1(doi, d, C, C1, b, b1, D, E, H, K, mpz_scan1(doi, 0), div1, sum1, div, sum);
		if(!(VALID(doi, d1, d) ^ 1)) {
			SCRIE(doi, G, F2);
			}
		}
		
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULSUS4(char *Q, long PP2, int W, fstream &f1, int f, int s, int256 unu, int256 d, int256 d1, int256 doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, char *G, fstream &F2) {

while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	
	while(1) {
		if(!f--)
			break;
		mpz_mul_ui(doi, unu, divInt[f]);
		SUMADIV(doi, d, C, C1, b, b1, D, E, H, K, mpz_scan1(doi, 0), div1, sum1, div, sum);
		if(!(VALID(doi, d1, d) ^ 1)) {
			SCRIE(doi, G, F2);
			}
		}

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}*/


void NUMERICULSUS5(char *Q, long PP2, int W, fstream &f1, int f, int s, int256 unu, int256 d, int256 d1, int256 doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, char *G, fstream &F2) {
while(1) {//sus < 163? NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(doi, 0), div1, sum1, div, sum);
	mpz_set_str(unu, Q, 10);
	f = W;
	while(1) {
		if(!f--)
			break;		
		doi = unu * divInt[f];
		NUMSUM(doi, d, b, b1, D, H, K, mpz_scan1(doi, 0), div1, sum1, div, sum);
		if(!(VALID(doi, d1, d) ^ 1)) {
			SCRIE(doi, G, F2);
		}
	}
	
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULJOS1(char *Q, long PP2, int W, fstream &f1, int f, int s, int256 unu, int256 d, int256 d1, int256 doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	
	while(1) {
		if(!--f)
			break;
		if(!(unu % divInt[f])) {
			doi = unu / divInt[f];
			SM(doi, d, b, b1, D, H, mpz_scan1(doi, 0), div1, sum1, 2);
			if(!(VALID(doi, d1, d) ^ 1)) {
				SCRIE(doi, G, F2);
				}
			}				
		}
		
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULJOS2(char *Q, long PP2, int W, fstream &f1, int f, int s, int256 unu, int256 d, int256 d1, int256 doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	
	while(1) {
		if(!--f)
			break;
		if(!(unu % divInt[f])) {
			doi = unu / divInt[f];
			NUMSUM1(doi, d, b, b1, D, H, mpz_scan1(doi, 0), div1, sum1);
			if(!(VALID(doi, d1, d) ^ 1)) {
				SCRIE(doi, G, F2);
				}
			}				
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

/*
void NUMERICULJOS3(char *Q, long PP2, int W, fstream &f1, int f, int s, int256 unu, int256 d, int256 d1, int256 doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, char *G, fstream &F2) {

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	
	while(1) {
		if(!--f)
			break;
		if(!(unu % divInt[f])) {
			doi = unu / divInt[f];
			SUMADIV1(doi, d, C, C1, b, b1, D, E, H, K, mpz_scan1(doi, 0), div1, sum1, div, sum);
			if(!(VALID(doi, d1, d) ^ 1)) {
				SCRIE(doi, G, F2);
				}
			}				
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICULJOS4(char *Q, long PP2, int W, fstream &f1, int f, int s, int256 unu, int256 d, int256 d1, int256 doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	
	while(1) {
		if(!--f)
			break;
		if(!(unu % divInt[f])) {
			doi = unu / divInt[f];
			SUMADIV(doi, d, C, C1, b, b1, D, E, H, K, mpz_scan1(doi, 0), div1, sum1, div, sum);
			if(!(VALID(doi, d1, d) ^ 1)) {
				SCRIE(doi, G, F2);
				}
			}				
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}
*/

void NUMERICULJOS5(char *Q, long PP2, int W, fstream &f1, int f, int s, int256 unu, int256 d, int256 d1, int256 doi, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	
	while(1) {
		if(!--f)
			break;
		if(!(unu % divInt[f])) {
			doi = unu / divInt[f];
			NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(doi, 0), div1, sum1, div, sum);
			if(!(VALID(doi, d1, d) ^ 1)) {
				SCRIE(doi, G, F2);
				}
			}				
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void NUMERICUL(char *Q, long PP2, int W, fstream &f1, int f, int s, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *divInt, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, char *G, fstream &F2, int &sus, int dir) {

if(dir) {
	sus < 55? NUMERICULSUS1(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, b, b1, div1, sum1, D, H, G, F2) 
	: NUMERICULSUS2(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, b, b1, div1, sum1, D, H, G, F2) ;	
	} else {	
	sus < 55? NUMERICULJOS1(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, b, b1, div1, sum1, D, H, G, F2) 
	: NUMERICULJOS2(Q, PP2, W, f1, f, 0, unu, d, d1, doi, divInt, b, b1, div1, sum1, D, H, G, F2);	
	}
}


void MODSUS(int256 unu, gmp_ui *A3, int256 SUM, gmp_ui coef, int u1, gmp_ui a, gmp_ui k, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int n, int p) {//a = 1.
while(1) {
	if(!u1--)
		break;
	
	if(!(coef % A3[u1])) {
		k = 2;
		while(!(coef % divnum1[u1][k])) k++;				
		a *= divnum1[u1][--k];
		n = k;
		//http://mirror.rackspace.com/archlinux/iso/2016.09.03/
		if(!(unu % A3[u1])) {
			for(p = 2; !(unu % divnum1[u1][p]); p += 2);
			if((unu % divnum1[u1][--p])) p--;
			SUM /= sumnum1[u1][p]);
			SUM *= sumnum1[u1][n+p];
			}
		else	{
			SUM *= sumnum1[u1][k];
			}
			
		if(!(a ^ coef))
			return;
		}
	}
}


//Acum MODIFSUM e ca un MODSPRIM extins pentru mai mulţi factori primi în coeficientul de legătură, şi putere supraunitară de factor prim în coeficient. Se doreşte să devină ca un MODPRIM.
void MODJOS(int256 unu, gmp_ui *A3, int256 SUM, gmp_ui coef, int u1, gmp_ui k, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int n, int p) {
while(1) {
	if(!u1--)
		break;
		
	if(!(coef % A3[u1])) {
		k = 2;
		while(!(coef % divnum1[u1][k])) k++;
		n = --k;
		for(p = 2; unu % divnum1[u1][p] < 1; p += 2);
		if(unu % divnum1[u1][--p] > 0) p--;
		SUM /= sumnum1[u1][p]);
		SUM *= sumnum1[u1][p-n];
		}
	}
}

/*
void MODSUSM(int256 unu, gmp_ui *A3, int256 SUM, gmp_ui coef, int u1, gmp_ui a, gmp_ui k, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int n, int p, int m) {
while(1) {
	if(!(u1-- ^ m))
		break;
	if(!(coef % A3[u1])) {
		k = 2;
		n = u1-m;
		while(!(coef % divnum1[n][k])) k++;		
		a *= divnum1[n][--k];
		p = k;

		if(!(unu % A3[u1])) {
			for(k = 2; !(unu % divnum1[n][k]); k += 2);
			if(!mpz_divisible_ui_p(unu, divnum1[n][--k])) k--;
			mpz_divexact_ui(SUM, SUM, sumnum1[n][k]);
			mpz_mul_ui(SUM, SUM, sumnum1[n][p+k]);
			}
		else	{
			mpz_mul_ui(SUM, SUM, sumnum1[n][k]);
			}
				
		if(!(a ^ coef))
			return;
	}
}
if (!m) return;
while(1) {	
	if(!(coef % A3[u1])) {
		k = 2;
		while(!(coef % divnum2[u1][k])) k++;		
		a *= divnum2[u1][--k];
			
		if(mpz_divisible_ui_p(unu, A3[u1])) {
			for(p = 2; mpz_divisible_p(unu, divnum[u1][p]); p += 2);
			if(!mpz_divisible_p(unu, divnum[u1][--p])) p--;
			mpz_divexact(SUM, SUM, sumnum[u1][p]);
			mpz_mul(SUM, SUM, sumnum[u1][p+k]);
			}
		else	{
			mpz_mul_ui(SUM, SUM, sumnum2[u1][k]);
			}

		if(!(a ^ coef))
			return;
		}
	if(!u1--)
		break;
	}		
}


void MODJOSM(int256 unu, gmp_ui *A3, int256 SUM, gmp_ui coef, int u1, gmp_ui k, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], int n, int p, int m) {

while(1) {
	if(!(u1-- ^ m))
		break;

	if(!(coef % A3[u1])) {
		k = 2;
		n = u1-m;
		while(!(coef % divnum1[n][k])) k++;
		p = --k;
		for(k = 2; mpz_divisible_ui_p(unu, divnum1[n][k]); k += 2);
		if(!mpz_divisible_ui_p(unu, divnum1[n][--k])) k--;
		mpz_divexact_ui(SUM, SUM, sumnum1[n][k]);
		mpz_mul_ui(SUM, SUM, sumnum1[n][k-p]);
	}
}
if(!m) return;
while(1) {
	if(!(coef % A3[u1])) {
		k = 2;
		while(!(coef % divnum2[u1][k])) k++;
		n = --k;
		for(p = 2; !(unu % divnum[u1][p]); p += 2);
		if((unu % divnum[u1][--p])) p--;
		mpz_divexact(SUM, SUM, sumnum[u1][p]);
		mpz_mul(SUM, SUM, sumnum[u1][p-n]);
		}
	if(!u1--)
		break;
	}
}
*/

void MODIFSUS1(int f, int u1, int256 unu, gmp_ui *A3, int256 d, int256 d1, int k, gmp_ui *A2, int256 doi, int256 trei, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int n, int p) {
	while(1) {
			if(!f--)
				break;
			mpz_set(trei, d);
			MODSUS(unu, A3, trei, A2[f], u1, 1, k, divnum1, sumnum1, n, p);
			unu *= A2[f];		
			if(VALID4(unu, d1, trei) == 1) {
				SCRIE(unu, G, F2);
				}
			}
}
/*
void MODIFSUS2(int f, int u1, int256 unu, gmp_ui *A3, int256 d, int256 d1, int k, gmp_ui *A2, int256 doi, int256 trei, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int n, int p, int m) {
	while(1) {
			if(!f--)
				break;
			mpz_set(trei, d);
			MODSUSM(unu, A3, trei, A2[f], u1, 1, k, divnum1, sumnum1, divnum, sumnum, divnum2, sumnum2, n, p, m);
			mpz_mul_ui(doi, unu, A2[f]);			
			if(VALID4(doi, d1, trei) == 1) {
				SCRIE(doi, G, F2);
				}
			}
}
*/

void MODIFJOS1(int &u, int &u1, int256 unu, gmp_ui *A3, int256 d, int256 d1, int k, gmp_ui *A1, int256 doi, int256 trei, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int n, int p) {
	while(1) {
		if(!u--)
			break;		
		mpz_set(trei, d);
		MODJOS(unu, A3, trei, A1[u], u1, k, divnum1, sumnum1, n, p);
		unu /= A1[u];
		if(VALID4(unu, d1, trei) == 1) {
			SCRIE(unu, G, F2);			
			}
		}
}

/*
void MODIFJOS2(int u, int u1, int256 unu, gmp_ui *A3, int256 d, int256 d1, int k, gmp_ui *A1, int256 doi, int256 trei, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], int n, int p, int m) {
	while(1) {
		if(!u--)
			break;
		mpz_divexact_ui(doi, unu, A1[u]);
		mpz_set(trei, d);
		MODJOSM(unu, A3, trei, A1[u], u1, k, divnum1, sumnum1, divnum, sumnum, divnum2, n, p, m);
		if(VALID4(doi, d1, trei) == 1) {
			SCRIE(doi, G, F2);
			}
		}
}*/


void SUSMODIFSUM1(char *Q, long PP2, int &W, fstream &f1, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int n, int p) {

while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	SM(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1, 2);
	MODIFSUS1(f, u1, unu, A3, d, d1, k, A2, doi, trei, G, F2, divnum1, sumnum1, n, p);

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

void SUSMODIFSUM2(char *Q, long PP2, int &W, fstream &f1, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int n, int p) {

while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	NUMSUM1(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1);
	MODIFSUS1(f, u1, unu, A3, d, d1, k, A2, doi, trei, G, F2, divnum1, sumnum1, n, p);
	
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}
/*
void SUSMODIFSUM3(char *Q, long PP2, int &W, fstream &f1, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int n, int p, int m) {

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	SUMADIV1(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
	MODIFSUS2(f, u1, unu, A3, d, d1, k, A2, doi, trei, G, F2, divnum1, sumnum1, divnum, sumnum, divnum2, sumnum2, n, p, m);

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

void SUSMODIFSUM4(char *Q, long PP2, int &W, fstream &f1, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int n, int p, int m) {

while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
	MODIFSUS2(f, u1, unu, A3, d, d1, k, A2, doi, trei, G, F2, divnum1, sumnum1, divnum, sumnum, divnum2, sumnum2, n, p, m);

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}
*/

void SUSMODIFSUM5(char *Q, long PP2, int &W, fstream &f1, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int n, int p, int m) {

while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
	MODIFSUS2(f, u1, unu, A3, d, d1, k, A2, doi, trei, G, F2, divnum1, sumnum1, divnum, sumnum, divnum2, sumnum2, n, p, m);

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

void JOSMODIFSUM1(char *Q, long PP2, int &W, fstream &f1, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int n, int p) {

while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(unu % A2[f] < 1) {
		A1[u++] = A2[f];
		}

	if(u) {
		SM(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1, 2);
		MODIFJOS1(u, u1, unu, A3, d, d1, k, A1, doi, trei, G, F2, divnum1, sumnum1, n, p);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

void JOSMODIFSUM2(char *Q, long PP2, int &W, fstream &f1, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int n, int p) {

while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(unu % A2[f] < 1) {
		A1[u++] = A2[f];
	}

	if(u) {
		NUMSUM1(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1);
		MODIFJOS1(u, u1, unu, A3, d, d1, k, A1, doi, trei, G, F2, divnum1, sumnum1, n, p);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}
/*

void JOSMODIFSUM3(char *Q, long PP2, int &W, fstream &f1, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int n, int p, int m) {//NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		A1[u++] = A2[f];
	}

	if(u) {
		SUMADIV1(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		MODIFJOS2(u, u1, unu, A3, d, d1, k, A1, doi, trei, G, F2, divnum1, sumnum1, divnum, sumnum, divnum2, n, p, m);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODIFSUM4(char *Q, long PP2, int &W, fstream &f1, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int n, int p, int m) {

while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		A1[u++] = A2[f];
	}

	if(u) {
		SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		MODIFJOS2(u, u1, unu, A3, d, d1, k, A1, doi, trei, G, F2, divnum1, sumnum1, divnum, sumnum, divnum2, n, p, m);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}*/


void JOSMODIFSUM5(char *Q, long PP2, int &W, fstream &f1, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int n, int p, int m) {

while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(unu % A2[f] < 1) {
		A1[u++] = A2[f];
	}

	if(u) {
		NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		MODIFJOS2(u, u1, unu, A3, d, d1, k, A1, doi, trei, G, F2, divnum1, sumnum1, divnum, sumnum, divnum2, n, p, m);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void MODIFSUM(char *Q, long PP2, int &W, fstream &f1, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int n, int p, int m, int &sus, int &dir) {

if(dir) {
	sus < 55? SUSMODIFSUM1(Q, PP2, W, f1, f, u, u1, b, b1, unu, d, d1, doi, trei, A2, A3, div1, sum1, D, H, k, G, F2, divnum1, sumnum1, n, p) 
		: SUSMODIFSUM2(Q, PP2, W, f1, f, u, u1, b, b1, unu, d, d1, doi, trei, A2, A3, div1, sum1, D, H, k, G, F2, divnum1, sumnum1, n, p) ;
	} else {
	sus < 55? JOSMODIFSUM1(Q, PP2, W, f1, f, u, u1, b, b1, unu, d, d1, doi, trei, A1, A2, A3, div1, sum1, D, H, k, G, F2, divnum1, sumnum1, n, p) 
		: JOSMODIFSUM2(Q, PP2, W, f1, f, u, u1, b, b1, unu, d, d1, doi, trei, A1, A2, A3, div1, sum1, D, H, k, G, F2, divnum1, sumnum1, n, p);
	}
}


void MODPRIMSUS1(gmp_ui *A1, int u, gmp_ui j, int256 unu, int256 doi, gmp_ui k1, gmp_ui k2, int v, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *A3, char *G, fstream &F2) {
	if(k2 && (k2 < v) )
	while(1) {
		if(!u--)
			break;
		j = A3[u];
		//Aici modp-urile au elementele ordonate la fel ca la A1 cu M1. La MODPINT-uri n e 0, atunci mepezetelele modp nu apar.
		if(MODPINTSUS(unu, A1[u], 2, k1, k2, v, modpdiv1[j], modpsum1[j])) {
			SCRIE(unu*A1[u], G, F2);
			}
		}
}
/*

void MODPRIMSUS2(gmp_ui *A1, int u, int256 unu, int256 doi, gmp_ui j, int256 Z, gmp_ui k1, gmp_ui k2, int v, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], int *A3, char *G, fstream &F2, int m, int n) {
	if(k2 && (k2 < v) )
	while(1) {
		if(!u--)
			break;			
		j = (n && (A3[u] >= m) )? A3[u] - m : A3[u];
		
		if( ( (j ^ A3[u]) && MODPMPZSUS(unu, A1[u], Z, doi, k1, k2, v, modpdiv[j], modpsum[j])) 
			|| ( !(j ^ A3[u]) && MODPINTSUS(unu, A1[u], 2, k1, k2, v, modpdiv1[j], modpsum1[j])) ) {
				mpz_mul_ui(doi, unu, A1[u]);
				SCRIE(doi, G, F2);
		}
	}
}*/


void MODPRIMJOS1(gmp_ui *A1, int u, gmp_ui j, int256 unu, int256 doi, gmp_ui k1, int v, gmp_ui k2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int *A3, char *G, fstream &F2) {
	if(k2 && (k2 < v) )
	while(1)	{
			if(!u--)
				break;
			j = A3[u];			
			if(MODPINTJOS(unu, 3, k1, k2, v, modpdiv1[j], modpsum1[j])) {			
				SCRIE(unu/A1[u], G, F2);
				}
			}
}
//f = 324, m = 240, n = 84, primul m, apoi n.
/*
void MODPRIMJOS2(gmp_ui *A1, int u, int256 unu, int256 doi, gmp_ui j, int256 Z, gmp_ui k1, gmp_ui k2, int v, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], int *A3, char *G, fstream &F2, int m, int n) {//Aici trebuie făcută bifurcație - pentru factorii primi modprimici de tip K se lucrează cu modpdiv și modpsum, iar pentru restul, cu modpdiv1 și modpsum1.
	if(k2 && (k2 < v) )//Până la filtrarea care va da afară numerele proaste.
	while(1) {
		if(!u--)
			break;
		j = (n && A3[u] >= m)? A3[u] - m : A3[u];
		
		if( ((j ^ A3[u]) && MODPMPZJOS(unu, A1[u], Z, k1, k2, v, modpdiv[j], modpsum[j]))
			|| (!(j ^ A3[u]) && MODPINTJOS(unu, 3, k1, k2, v, modpdiv1[j], modpsum1[j])) ) {
				mpz_divexact_ui(doi, unu, A1[u]);				
				SCRIE(doi, G, F2);
		}
	}
}*/


void SUSMODPRIM1(char *Q, long PP2, fstream &f1, int f, int W, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, int *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, int &v, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {

while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
		if(!--f) break;
		if(unu % A2[f] < 1) {
			A3[u] = f;
			A1[u++] = A2[f];	
			}
		}
		
		if(u) {
			SM(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1, 2);
			VALIDN(unu, d1, d, trei);
			MODPRIMSUS1(A1, u, j, unu, doi, mpz_get_ui(trei), mpz_get_ui(d1), v, modpdiv1, modpsum1, A3, G, F2);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODPRIM2(char *Q, long PP2, fstream &f1, int f, int W, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, int *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, int &v, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
			if(!--f) break;
			if(unu % A2[f] < 1) {
				A3[u] = f;
				A1[u++] = A2[f];	
			}
		}
		if(u) {
			NUMSUM1(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1);
			VALIDN(unu, d1, d, trei);
			MODPRIMSUS1(A1, u, j, unu, doi, mpz_get_ui(trei), mpz_get_ui(d1), v, modpdiv1, modpsum1, A3, G, F2);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}
/*

void SUSMODPRIM3(char *Q, long PP2, fstream &f1, int f, int W, int u, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *A1, gmp_ui *A2, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, int &v, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], int m, int n) {

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
			if(!--f) break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				A3[u] = f;
				A1[u++] = A2[f];	
			}
		}
		if(u) {
			SUMADIV1(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
			VALIDN(unu, d1, d, trei);
			MODPRIMSUS2(A1, u, unu, doi, j, Z, mpz_get_ui(trei), mpz_get_ui(d1), v, modpdiv1, modpsum1, modpdiv, modpsum, A3, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODPRIM4(char *Q, long PP2, fstream &f1, int f, int W, int u, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *A1, gmp_ui *A2, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, int &v, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], int m, int n) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
			if(!--f) break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				A3[u] = f;
				A1[u++] = A2[f];	
			}
		}
		if(u) {
			SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
			VALIDN(unu, d1, d, trei);
			MODPRIMSUS2(A1, u, unu, doi, j, Z, mpz_get_ui(trei), mpz_get_ui(d1), v, modpdiv1, modpsum1, modpdiv, modpsum, A3, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}*/


void SUSMODPRIM5(char *Q, long PP2, fstream &f1, int f, int W, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *A1, gmp_ui *A2, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui &j, int &v, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], int m, int n) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
			if(!--f) break;
			if(unu % A2[f] < 1) {
				A3[u] = f;
				A1[u++] = A2[f];	
			}
		}
		if(u) {
			NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
			VALIDN(unu, d1, d, trei);
			MODPRIMSUS2(A1, u, unu, doi, j, Z, mpz_get_ui(trei), mpz_get_ui(d1), v, modpdiv1, modpsum1, modpdiv, modpsum, A3, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIM1(char *Q, long PP2, fstream &f1, int f, int W, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, int &v, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
	if(!f--) break;
	if(unu % AP[f] < 1) {
		A3[u] = f;
		A1[u++] = A2[f];
		}
	}
	if(u) {
		SM(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1, 2);
		VALIDN(unu, d1, d, trei);
		MODPRIMJOS1(A1, u, j, unu, doi, mpz_get_ui(trei), v, mpz_get_ui(d1), modpdiv1, modpsum1, A3, G, F2);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIM2(char *Q, long PP2, fstream &f1, int f, int W, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, int &v, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
		if(!f--) break;
		if(unu % AP[f] < 1) {
			A3[u] = f;
			A1[u++] = A2[f];
		}
	}
	if(u) {
		NUMSUM1(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1);
		VALIDN(unu, d1, d, trei);
		MODPRIMJOS1(A1, u, j, unu, doi, mpz_get_ui(trei), v, mpz_get_ui(d1), modpdiv1, modpsum1, A3, G, F2);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

/*
void JOSMODPRIM3(char *Q, long PP2, fstream &f1, int f, int W, int u, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, int &v, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], int m, int n) {//NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
		if(!f--) break;
		if(mpz_divisible_ui_p(unu, AP[f])) {
			A3[u] = f;
			A1[u++] = A2[f];
		}
	}
	if(u) {
		SUMADIV1(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		VALIDN(unu, d1, d, trei);
		MODPRIMJOS2(A1, u, unu, doi, j, Z, mpz_get_ui(trei), mpz_get_ui(d1), v, modpdiv1, modpsum1, modpdiv, modpsum, A3, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIM4(char *Q, long PP2, fstream &f1, int f, int W, int u, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, int &v, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], int m, int n) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
		if(!f--) break;
		if(mpz_divisible_ui_p(unu, AP[f])) {
			A3[u] = f;
			A1[u++] = A2[f];
		}
	}
	if(u) {
		SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		VALIDN(unu, d1, d, trei);
		MODPRIMJOS2(A1, u, unu, doi, j, Z, mpz_get_ui(trei), mpz_get_ui(d1), v, modpdiv1, modpsum1, modpdiv, modpsum, A3, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}
*/

void JOSMODPRIM5(char *Q, long PP2, fstream &f1, int f, int W, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui &j, int &v, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], int m, int n) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
		if(!f--) break;
		if(unu % AP[f] < 1) {
			A3[u] = f;
			A1[u++] = A2[f];
		}
	}
	if(u) {
		NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		VALIDN(unu, d1, d, trei);
		MODPRIMJOS2(A1, u, unu, doi, j, Z, mpz_get_ui(trei), mpz_get_ui(d1), v, modpdiv1, modpsum1, modpdiv, modpsum, A3, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void MODPRIM(char *Q, long PP2, fstream &f1, int f, int W, int u, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, int &v, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], int m, int n, int &sus, int dir) {

if(dir) {
	sus < 55? SUSMODPRIM1(Q, PP2, f1, f, W, 0, b, b1, unu, doi, trei, d, d1, A1, A2, A3, div1, sum1, D, H, j, v, G, F2, modpdiv1, modpsum1) 
		: SUSMODPRIM2(Q, PP2, f1, f, W, 0, b, b1, unu, doi, trei, d, d1, A1, A2, A3, div1, sum1, D, H, j, v, G, F2, modpdiv1, modpsum1) ;
	} else {
	sus < 55? JOSMODPRIM1(Q, PP2, f1, f, W, 0, b, b1, unu, doi, trei, d, d1, A1, A2, AP, A3, div1, sum1, D, H, j, v, G, F2, modpdiv1, modpsum1) 
		: JOSMODPRIM2(Q, PP2, f1, f, W, 0, b, b1, unu, doi, trei, d, d1, A1, A2, AP, A3, div1, sum1, D, H, j, v, G, F2, modpdiv1, modpsum1);	
	}
}


//Varianta 2 de MODPRIM:
void MODPRIMESUS1(int *M, gmp_ui *A1, int u, int256 unu, int256 doi, gmp_ui k1, gmp_ui k2, int v, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *A3, char *G, fstream &F2) {
	if(k2 && (k2 < v) )
	while(1) {
		if(!u--)
			break;
		if(MODPINTSUS(unu, A1[u], 2, k1, k2, v, div1[M[A3[u]]], sum1[M[A3[u]]])) {
			SCRIE(unu*A1[u], G, F2);
			}
		}
}

/*
void MODPRIMESUS2(int *M, gmp_ui *A1, int u, int256 unu, int256 doi, gmp_ui j, int256 Z, gmp_ui k1, gmp_ui k2, int v, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1], int *A3, char *G, fstream &F2, int m, int n) {
	if(k2 && (k2 < v) )
	while(1) {
		if(!u--)
			break;	
		j = (n && (A3[u] >= m) )? A3[u] - m : A3[u];
		
		if( ( (j ^ A3[u]) && MODPMPZSUS(unu, A1[u], Z, doi, k1, k2, v, div[M[j]], sum[M[j]])) 
			|| ( !(j ^ A3[u]) && MODPINTSUS(unu, A1[u], 2, k1, k2, v, div1[M[j]], sum1[M[j]])) ) {
				mpz_mul_ui(doi, unu, A1[u]);
				SCRIE(doi, G, F2);
		}
	}
}
*/

void MODPRIMEJOS1(int *M, gmp_ui *A1, int u, int256 unu, int256 doi, gmp_ui k1, int v, gmp_ui k2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *A3, char *G, fstream &F2) {	
	if(k2 && (k2 < v) )
	while(1)	{
			if(!u--)
				break;			
			if(MODPINTJOS(unu, 3, k1, k2, v, div1[M[A3[u]]], sum1[M[A3[u]]])) {				
				SCRIE(unu/A1[u], G, F2);
				}
			}
}

/*
void MODPRIMEJOS2(int *M, gmp_ui *A1, int u, int256 unu, int256 doi, gmp_ui j, int256 Z, gmp_ui k1, gmp_ui k2, int v, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1], int *A3, char *G, fstream &F2, int m, int n) {
	if(k2 && (k2 < v) )
	while(1) {
		if(!u--)
			break;
		j = (n && A3[u] >= m)? A3[u] - m : A3[u];
		
		if( ((j ^ A3[u]) && MODPMPZJOS(unu, A1[u], Z, k1, k2, v, div[M[j]], sum[M[j]]))
			|| (!(j ^ A3[u]) && MODPINTJOS(unu, 3, k1, k2, v, div1[M[j]], sum1[M[j]])) ) {
				mpz_divexact_ui(doi, unu, A1[u]);				
				SCRIE(doi, G, F2);
		}
	}
}*/


void SUSMODPRIME1(char *Q, long PP2, fstream &f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, int *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int &v, char *G, fstream &F2) {

while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;

	while(1) {
		if(!--f) break;
		if(unu % A2[f] < 1) {
			A3[u] = f;
			A1[u++] = A2[f];	
			}
		}
		
		if(u) {
			SM(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1, 2);
			VALIDN(unu, d1, d, trei);
			MODPRIMESUS1(M, A1, u, unu, doi, mpz_get_ui(trei), mpz_get_ui(d1), v, div1, sum1, A3, G, F2);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODPRIME2(char *Q, long PP2, fstream &f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, int *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int &v, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
			if(!--f) break;
			if(unu % A2[f] < 1) {
				A3[u] = f;
				A1[u++] = A2[f];	
			}
		}
		if(u) {
			NUMSUM1(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1);
			VALIDN(unu, d1, d, trei);
			MODPRIMESUS1(M, A1, u, unu, doi, mpz_get_ui(trei), mpz_get_ui(d1), v, div1, sum1, A3, G, F2);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

/*
void SUSMODPRIME3(char *Q, long PP2, fstream &f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *A1, gmp_ui *A2, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, int &v, char *G, fstream &F2, int m, int n) {

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
			if(!--f) break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				A3[u] = f;
				A1[u++] = A2[f];	
			}
		}
		if(u) {
			SUMADIV1(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
			VALIDN(unu, d1, d, trei);
			MODPRIMESUS2(M, A1, u, unu, doi, j, Z, mpz_get_ui(trei), mpz_get_ui(d1), v, div1, sum1, div, sum, A3, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODPRIME4(char *Q, long PP2, fstream &f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *A1, gmp_ui *A2, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, int &v, char *G, fstream &F2, int m, int n) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
		if(!--f) break;
		if(mpz_divisible_ui_p(unu, A2[f])) {
			A3[u] = f;
			A1[u++] = A2[f];	
			}
		}
		if(u) {
			SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
			VALIDN(unu, d1, d, trei);
			MODPRIMESUS2(M, A1, u, unu, doi, j, Z, mpz_get_ui(trei), mpz_get_ui(d1), v, div1, sum1, div, sum, A3, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}*/


void SUSMODPRIME5(char *Q, long PP2, fstream &f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *A1, gmp_ui *A2, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui &j, int &v, char *G, fstream &F2, int m, int n) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
		if(!--f) break;
		if(unu % A2[f] < 1) {
			A3[u] = f;
			A1[u++] = A2[f];	
			}
		}
		if(u) {
			NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
			VALIDN(unu, d1, d, trei);
			MODPRIMESUS2(M, A1, u, unu, doi, j, Z, mpz_get_ui(trei), mpz_get_ui(d1), v, div1, sum1, div, sum, A3, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIME1(char *Q, long PP2, fstream &f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int &v, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
	if(!f--) break;
	if(unu % AP[f] < 1) {
		A3[u] = f;
		A1[u++] = A2[f];
		}
	}
	if(u) {
		SM(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1, 2);
		VALIDN(unu, d1, d, trei);
		MODPRIMEJOS1(M, A1, u, unu, doi, mpz_get_ui(trei), v, mpz_get_ui(d1), div1, sum1, A3, G, F2);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIME2(char *Q, long PP2, fstream &f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int &v, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
		if(!f--) break;
		if(unu % AP[f] < 1) {
			A3[u] = f;
			A1[u++] = A2[f];
		}
	}
	if(u) {
		NUMSUM1(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1);
		VALIDN(unu, d1, d, trei);
		MODPRIMEJOS1(M, A1, u, unu, doi, mpz_get_ui(trei), v, mpz_get_ui(d1), div1, sum1, A3, G, F2);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

/*
void JOSMODPRIME3(char *Q, long PP2, fstream &f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, int &v, char *G, fstream &F2, int m, int n) {//NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
		if(!f--) break;
		if(mpz_divisible_ui_p(unu, AP[f])) {
			A3[u] = f;
			A1[u++] = A2[f];
		}
	}
	if(u) {
		SUMADIV1(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		VALIDN(unu, d1, d, trei);
		MODPRIMEJOS2(M, A1, u, unu, doi, j, Z, mpz_get_ui(trei), mpz_get_ui(d1), v, div1, sum1, div, sum, A3, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIME4(char *Q, long PP2, fstream &f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, int &v, char *G, fstream &F2, int m, int n) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
		if(!f--) break;
		if(mpz_divisible_ui_p(unu, AP[f])) {
			A3[u] = f;
			A1[u++] = A2[f];
		}
	}
	if(u) {
		SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		VALIDN(unu, d1, d, trei);
		MODPRIMEJOS2(M, A1, u, unu, doi, j, Z, mpz_get_ui(trei), mpz_get_ui(d1), v, div1, sum1, div, sum, A3, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}*/


void JOSMODPRIME5(char *Q, long PP2, fstream &f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui &j, int &v, char *G, fstream &F2, int m, int n) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
		if(!f--) break;
		if(unu % AP[f] < 1) {
			A3[u] = f;
			A1[u++] = A2[f];
		}
	}
	if(u) {
		NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		VALIDN(unu, d1, d, trei);
		MODPRIMEJOS2(M, A1, u, unu, doi, j, Z, mpz_get_ui(trei), mpz_get_ui(d1), v, div1, sum1, div, sum, A3, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void MODPRIME(char *Q, long PP2, fstream &f1, int W, int *M, int f, int u, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, int &v, char *G, fstream &F2, int m, int n, int &sus, int dir) {

if(dir) {
	sus < 55? SUSMODPRIME1(Q, PP2, f1, W, M, f, 0, b, b1, unu, doi, trei, d, d1, A1, A2, A3, div1, sum1, D, H, v, G, F2) 
		: SUSMODPRIME2(Q, PP2, f1, W, M, f, 0, b, b1, unu, doi, trei, d, d1, A1, A2, A3, div1, sum1, D, H, v, G, F2) ;
	} else {
	sus < 55? JOSMODPRIME1(Q, PP2, f1, W, M, f, 0, b, b1, unu, doi, trei, d, d1, A1, A2, AP, A3, div1, sum1, D, H, v, G, F2) 
		: JOSMODPRIME2(Q, PP2, f1, W, M, f, 0, b, b1, unu, doi, trei, d, d1, A1, A2, AP, A3, div1, sum1, D, H, v, G, F2);	
	}
}


int SUMINT(int256 NUM, int256 SUM, gmp_ui coef, gmp_ui j, int256 d, int256 d1, gmp_ui *div1, gmp_ui *sum1) {
mpz_set(SUM, d);
j = 2;
while(NUM % div1[j] < 1) j += 2;
if(NUM % div1[--j] > 0) j--;

SUM /= sum1[j];
SUM *= sum1[++j];
return (VALID4(NUM*coef, d1, SUM) == 1);
}


int SUMINTJOS(int256 NUM, int256 SUM, gmp_ui coef, gmp_ui j, int256 d, int256 d1, gmp_ui *div1, gmp_ui *sum1) {
mpz_set(SUM, d);
j = 2;
while(NUM % div1[j] < 1) j += 2;
if(NUM % div1[--j] > 0) j--;

SUM /= sum1[j];
SUM *= sum1[--j];
return (VALID4(NUM/coef, d1, SUM) == 1);
}

/*
int SUMMPZ(int256 NUM, int256 SUM, gmp_ui coef, gmp_ui j, int256 d, int256 d1, int256 doi, int256 *div, int256 *sum) {
mpz_set(SUM, d);
j = 2;
while(mpz_divisible_p(NUM, div[j])) j += 2;
if(!mpz_divisible_p(NUM, div[--j])) j--;

mpz_divexact(SUM, SUM, sum[j]);
mpz_mul(SUM, SUM, sum[++j]);
mpz_mul_ui(doi, NUM, coef);
return (VALID4(doi, d1, SUM) == 1);
}


int SUMMPZJOS(int256 NUM, int256 SUM, gmp_ui coef, gmp_ui j, int256 d, int256 d1, int256 doi, int256 *div, int256 *sum) {
mpz_set(SUM, d);
j = 2;
while(mpz_divisible_p(NUM, div[j])) j += 2;
if(!mpz_divisible_p(NUM, div[--j])) j--;

mpz_divexact(SUM, SUM, sum[j]);
mpz_mul(SUM, SUM, sum[--j]);
mpz_divexact_ui(doi, NUM, coef);
return (VALID4(doi, d1, SUM) == 1);
}*/


void MODSPRIMSUS1(gmp_ui *A1, int *A3, int u, gmp_ui j, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], char *G, fstream &F2) {
	while(1) {
		if(!u--)
			break;
		j = A3[u];
		
		if(SUMINT(unu, trei, A1[u], j, d, d1, doi, modpdiv1[j], modpsum1[j])) {
			SCRIE(unu*A1[u], G, F2);
			}
		}
}


/*
void MODSPRIMSUS2(gmp_ui *A1, int *A3, int u, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui j, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], char *G, fstream &F2, int m, int n) {

	while(1) {
		if(!u--)
			break;
		j = (n && A3[u] >= m)? A3[u] : A3[u] - m;
		
		if( ( (j ^ A3[u]) && SUMMPZ(unu, trei, A1[u], j, d, d1, doi, modpdiv[j], modpsum[j])) 
			|| ( !(j ^ A3[u]) && SUMINT(unu, trei, A1[u], j, d, d1, doi, modpdiv1[j], modpsum1[j])) ) {
				mpz_mul_ui(doi, unu, A1[u]);
				SCRIE(doi, G, F2);
		}
	}		
}*/


void MODSPRIMJOS1(gmp_ui *A1, int *A3, int u, gmp_ui j, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], char *G, fstream &F2) {
		
	while(1)	{
			if(!u--)
				break;
			j = A3[u];
			
			if(SUMINTJOS(unu, trei, A1[u], j, d, d1, doi, modpdiv1[j], modpsum1[j])) {
				SCRIE(unu/A1[u], G, F2);
				}
			}		
}

/*
void MODSPRIMJOS2(gmp_ui *A1, int *A3, int u, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui j, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], char *G, fstream &F2, int m, int n) {
		
	while(1) {
		if(!u--)
			break;
		j = (n && A3[u] >= m)? A3[u] : A3[u] - m;
		
		if( ((j ^ A3[u]) && SUMMPZJOS(unu, trei, A1[u], j, d, d1, doi, modpdiv[j], modpsum[j]))
			|| (!(j ^ A3[u]) && SUMINTJOS(unu, trei, A1[u], j, d, d1, doi, modpdiv1[j], modpsum1[j])) ) {
				mpz_divexact_ui(doi, unu, A1[u]);				
				SCRIE(doi, G, F2);
		}		
	}		
}*/


void SUSMODSPRIM1(char *Q, long PP2, fstream &f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, int *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {

while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
		if(!--f) break;
		if(unu % A2[f] < 1) {
			A3[u] = f;
			A1[u++] = A2[f];	
			}
		}
		
		if(u) {
			SM(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1, 2);
			MODSPRIMSUS1(A1, A3, u, j, unu, doi, trei, d, d1, modpdiv1, modpsum1, G, F2);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODSPRIM2(char *Q, long PP2, fstream &f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, int *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
			if(!--f) break;
			if(unu % A2[f] < 1) {
				A3[u] = f;
				A1[u++] = A2[f];	
			}
		}
		if(u) {
			NUMSUM1(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1);
			MODSPRIMSUS1(A1, A3, u, j, unu, doi, trei, d, d1, modpdiv1, modpsum1, G, F2);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

/*
void SUSMODSPRIM3(char *Q, long PP2, fstream &f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], int m, int n) {

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
			if(!--f) break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				A3[u] = f;
				A1[u++] = A2[f];	
			}
		}
		if(u) {
			SUMADIV1(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
			MODSPRIMSUS2(A1, A3, u, unu, doi, trei, d, d1, j, modpdiv1, modpsum1, modpdiv, modpsum, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODSPRIM4(char *Q, long PP2, fstream &f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], int m, int n) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
			if(!--f) break;
			if(mpz_divisible_ui_p(unu, A2[f])) {
				A3[u] = f;
				A1[u++] = A2[f];	
			}
		}
		if(u) {
			SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
			MODSPRIMSUS2(A1, A3, u, unu, doi, trei, d, d1, j, modpdiv1, modpsum1, modpdiv, modpsum, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}*/


void SUSMODSPRIM5(char *Q, long PP2, fstream &f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui &j, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], int m, int n) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
			if(!--f) break;
			if(unu % A2[f] < 1) {
				A3[u] = f;
				A1[u++] = A2[f];	
			}
		}
		if(u) {
			NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
			MODSPRIMSUS2(A1, A3, u, unu, doi, trei, d, d1, j, modpdiv1, modpsum1, modpdiv, modpsum, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODSPRIM1(char *Q, long PP2, fstream &f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
	if(!f--) break;
	if(unu % AP[f] M 1) {
		A3[u] = f;
		A1[u++] = A2[f];
		}
	}
	if(u) {
		SM(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1, 2);
		MODSPRIMJOS1(A1, A3, u, j, unu, doi, trei, d, d1, modpdiv1, modpsum1, G, F2);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODSPRIM2(char *Q, long PP2, fstream &f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2]) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
		if(!f--) break;
		if(unu % AP[f] < 1) {
			A3[u] = f;
			A1[u++] = A2[f];
		}
	}
	if(u) {
		NUMSUM1(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1);
		MODSPRIMJOS1(A1, A3, u, j, unu, doi, trei, d, d1, modpdiv1, modpsum1, G, F2);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

/*
void JOSMODSPRIM3(char *Q, long PP2, fstream &f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], int m, int n) {//NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
		if(!f--) break;
		if(mpz_divisible_ui_p(unu, AP[f])) {
			A3[u] = f;
			A1[u++] = A2[f];
		}
	}
	if(u) {
		SUMADIV1(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		MODSPRIMJOS2(A1, A3, u, unu, doi, trei, d, d1, j, modpdiv1, modpsum1, modpdiv, modpsum, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODSPRIM4(char *Q, long PP2, fstream &f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], int m, int n) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
		if(!f--) break;
		if(mpz_divisible_ui_p(unu, AP[f])) {
			A3[u] = f;
			A1[u++] = A2[f];
		}
	}
	if(u) {
		SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		MODSPRIMJOS2(A1, A3, u, unu, doi, trei, d, d1, j, modpdiv1, modpsum1, modpdiv, modpsum, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}*/


void JOSMODSPRIM5(char *Q, long PP2, fstream &f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui &j, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], int m, int n) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W, u = 0;
	
	while(1) {
		if(!f--) break;
		if(unu % AP[f] < 1) {
			A3[u] = f;
			A1[u++] = A2[f];
		}
	}
	if(u) {
		NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		MODSPRIMJOS2(A1, A3, u, unu, doi, trei, d, d1, j, modpdiv1, modpsum1, modpdiv, modpsum, G, F2, m, n);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void MODSPRIM(char *Q, long PP2, fstream &f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A2, gmp_ui *AP, int *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, char *G, fstream &F2, gmp_ui modpdiv1[][MAX2], gmp_ui modpsum1[][MAX2], int256 modpdiv[][MAX1], int256 modpsum[][MAX1], int m, int n, int &sus, int dir) {

if(dir) {
	sus < 55? SUSMODSPRIM1(Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A1, A2, A3, div1, sum1, D, H, j, G, F2, modpdiv1, modpsum1) 
		: SUSMODSPRIM2(Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A1, A2, A3, div1, sum1, D, H, j, G, F2, modpdiv1, modpsum1) 
	} else {
	sus < 55? JOSMODSPRIM1(Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A1, A2, AP, A3, div1, sum1, D, H, j, G, F2, modpdiv1, modpsum1) 
		: JOSMODSPRIM2(Q, PP2, f1, W = f, f, 0, b, b1, unu, doi, trei, d, d1, A1, A2, AP, A3, div1, sum1, D, H, j, G, F2, modpdiv1, modpsum1);
	}
}


void SUMMSUS(char *Q, long PP2, fstream & f1, int f, int W, int t, int u, int256 d, int256 d1, int256 unu, int256 doi, gmp_ui *A1, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, gmp_ui j1, gmp_ui k, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, gmp_ui &s, char *G, fstream &F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &nm, gmp_ui &nr, int N, int *f2) {

while(1) {
	CONV(f1, Q, unu);
	f = W;
	while(1) {
		if(!f--)
			break;
		doi = unu*A2[f];
		SMOD(doi, d1, b, b1, s, D, H, t, div1, sum1, j, j1, k, nm, nr);
		if(nm < N)
			SCRIE(doi, G, F2);
		}
		
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUMMJOS(char *Q, long PP2, fstream & f1, int f, int W, int t, int u, int256 d, int256 d1, int256 unu, int256 doi, gmp_ui *A1, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, gmp_ui j1, gmp_ui k, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, gmp_ui &s, char *G, fstream &F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &nm, gmp_ui &nr, int N, int *f2) {

while(1) {
	mpz_set_str(unu, Q, 10);	
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(unu % A2[f] < 1)
		A1[u++] = A2[f];
		
	if(u) {
		t = mpz_scan1(unu, 0);
		LOTVEC1(unu, y, Y, b, b1, y1, D, H, h, s, f2);		
		while(1) {
			if(!u--)
				break;
			doi = unu/A1[u];		
			SMOD1(doi, d1, y, y1, s, Y, h, t, div1, sum1, j, j1, k, f2, nm, nr);
			if(nm < N)
				SCRIE(doi, G, F2);
			}		
		}
		
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUMM(char *Q, long PP2, fstream & f1, int f, int W, int t, int u, int256 d, int256 d1, int256 unu, int256 doi, gmp_ui *A1, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, gmp_ui j1, gmp_ui k, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, gmp_ui &s, char *G, fstream &F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &nm, gmp_ui &nr, int N, int *f2, int dir) {

if(dir) {
	SUMMSUS(Q, PP2, f1, f, W, mpz_scan1(unu, 0), u, d, d1, unu, doi, A1, A2, b, b1, D, H, j, j1, k, R, Y, y, y1, h, s, G, F2, div1, sum1, nm, nr, N, f2); 
	} else {
	SUMMJOS(Q, PP2, f1, f, W, mpz_scan1(unu, 0), u, d, d1, unu, doi, A1, A2, b, b1, D, H, j, j1, k, R, Y, y, y1, h, s, G, F2, div1, sum1, nm, nr, N, f2);
	}
}


void SUMREDES(int256 A, gmp_ui *b, gmp_ui *b1, int256 B, int D, int d1, gmp_ui &e, int &d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int t) {
mpz_set_ui(B, 0);
mpz_setbit(B, ++t);
mpz_sub_ui(B, B, 1);
d = d1;

while(1) {
	if(!d--)
	 	break;
	if(!(A % b[d])) {
		e = 2;
		while(A % div1[d][e] < 1) e += 2;
		if(A % div1[d][--e] > 0) e--;
		B *= sum1[d][e];
		}
	}

	while(1) {
		if(!(D-- ^ d1))
			break;
		if(A % b[D] < 1) {
			B *= b1[D];
			if(B > A)
				return;
			}
		}
}


void SUMREDES1(int256 A, gmp_ui *b, gmp_ui *b1, int256 B, int D, int d1, gmp_ui &e, int &d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int t) {
mpz_set_ui(B, 0);
mpz_setbit(B, ++t);
mpz_sub_ui(B, B, 1);
d = d1;

while(1) {
	if(!d--)
	 	break;
	if(!(A % b[d])) {
		e = 2;
		t = f2[d];
		while(A % div1[t][e] < 1) e += 2;
		if(A % div1[t][--e] > 0) e--;
		B *= sum1[t][e];
		}
	}

while(1) {
	if(!(D-- ^ d1))
		break;
	if(A % b[D] < 1) {
		B *= b1[D];
		}
	}	
}



void SUMREDSUS(char *Q, long PP2, fstream &f1, int f, int W, int t, int u, int256 d, int256 d1, int256 unu, int256 doi, gmp_ui *A1, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, int s, char *G, fstream &F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	if( (t == 88) || (t == 106) || (t == 126) )
		goto s1;
		
	while(1) {
		if(!f--)
			break;
		doi = unu * A2[f];
		SUMREDES(doi, b, b1, d, D, H, j, R, div1, sum1, t);
		if(
		//VALID(doi, d1, d)
		VALID4(doi, d1, d)
		== 1)
			SCRIE(doi, G, F2);
		}
		goto s2;
	s1:
		
	while(1) {
		if(!f--)
			break;
		doi = unu*A2[f];
		SUMREDES(doi, b, b1, d, D, H, j, R, div1, sum1, t);
		d <<= (1+t);
		if(
		//VALID(doi, d1, d)
		VALID4(doi, d1, d)
		== 1)
			SCRIE(doi, G, F2);
		}
	s2:
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

void SUMREDJOS(char *Q, long PP2, fstream &f1, int f, int W, int t, int u, int256 d, int256 d1, int256 unu, int256 doi, gmp_ui *A1, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, int s, char *G, fstream &F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(!(unu % A2[f]))
		A1[u++] = A2[f];
		
	if(u) {
		t = mpz_scan1(unu, 0);
		LOTVEC1(unu, y, Y, b, b1, y1, D, H, h, s, f2);
		if( (t == 88) || (t == 106) || (t == 126) )
			goto s3;
	
		while(1) {
			if(!u--)
				break;
			doi = unu/A1[u];		
			SUMREDES1(doi, y, y1, d, Y, h, j, R, div1, sum1, f2, t);
			if(// mpz_divisible_ui_p(doi, A1[u]) &&
			//VALID(doi, d1, d) == 1
			VALID4(doi, d1, d) == 1
			)
				{SCRIE(doi, G, F2);}
			}
		
			goto s4;
		s3:
		while(1) {
			if(!u--)
				break;
			doi = unu/A1[u];
			d <<= (t+1);			
			if( //mpz_divisible_ui_p(doi, A1[u]) &&
			//VALID(doi, d1, d) == 1
			VALID4(doi, d1, d) == 1
			)
				{SCRIE(doi, G, F2);}
			}
		}
	s4:
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUMRED(char *Q, long PP2, fstream &f1, int f, int W, int t, int u, int256 d, int256 d1, int256 unu, int256 doi, gmp_ui *A1, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int D, int H, gmp_ui j, int R, int Y, gmp_ui *y, gmp_ui *y1, int h, int s, char *G, fstream &F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, int dir) {

if(dir) {
	SUMREDSUS(Q, PP2, f1, f, W, mpz_scan1(unu, 0), u, d, d1, unu, doi, A1, A2, b, b1, D, H, j, R, Y, y, y1, h, s, G, F2, div1, sum1, f2); 
	} else {
	SUMREDJOS(Q, PP2, f1, f, W, mpz_scan1(unu, 0), u, d, d1, unu, doi, A1, A2, b, b1, D, H, j, R, Y, y, y1, h, s, G, F2, div1, sum1, f2);
	}
}


void BAZ(long &l, long W, long f, int256 d, int256 d1, int256 unu, int256 doi, int256 *A1, int320 *C, int320 *C1, gmp_ui *b, gmp_ui *b2, int D, int E, int Y, int m, fstream &F1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1], int256 *a, int I, int *c, int U, int N) {

int256 trei, patru;
const int M = 280;
double H, J1, g;
fstream &ff, *f1, *G;
int B[M], K[18000], C2, HH1, H2, J, i, R, r, dd;
gmp_ui j, M1[360];
W = 5317;

mpz_inits(trei, patru, NULL);
SIB(a, I, N, unu);
dd = U;
R = 0;
d = 0;

for(i = I; i < N; i++) {
	SUMADIV(a[i], doi, C, C1, b, b2, D, E, Y, m, mpz_scan1(d1, 0), div1, sum1, div, sum);
	VALIDV(a[i], unu, doi, trei, R);
	K[dd++] = R;
	}

mpz_clears(unu, doi, trei, patru, NULL);
ff = fopen("BAZSUS.TXT", "w");
G = fopen("N2.TXT", "w");
f1 = fopen("/ABUND.TXT", "r");

for(i = 0; i < M; ++i) {
	fscanf(f1, "%d", &B[i]);
	}

f1.close();
H = pow((double)2, -40);
C2 = 0;
HH1 = N - I;
putchar('\n');

while(1) {
	J = B[C2];
	i = 0;
	d = 0;
	H2 = I;

	while(1) {
		if (J == K[dd]) {
			++i;
			gmp_fprintf(G, "%Zd\n", a[H2]);

			if(i==1) {
				J1 = J/2520.0;
				//printf("%.3lf %d  ", J1, C1);
				fprintf(ff, "%s", "Abundenţa ");
				g = modf(2*J1, &g);
				if((g<H)||(1-g<H))
					fprintf(ff, "%.1lf:    ", J1);

				else
				{
				g = modf(4*J1, &g);
				if((g<H)||(1-g<H))
					fprintf(ff, "%.2lf:   ", J1);

				else
				{
				g = modf(8*J1, &g);			
				if((g<H)||(1-g<H))
					fprintf(ff, "%.3lf:  ", J1);

				else
				{				
				g = modf(9*J1, &g);			
				if((g<H)||(1-g<H))
				{

				fprintf(ff, "%d.", (int)J1);		
				J1 -= (int)J1;
				J1 = (int)(J1*10);
				fprintf(ff, "(%.0lf):  ", J1);
				}
			
				else{
				g = modf(6*J1, &g);
				if((g<H)||(1-g<H))
				{
				fprintf(ff, "%d.", (int)J1);
				J1 -= (int)J1;
				J1 = (int)(J1*100);
				fprintf(ff, "%d(%.0lf): ", (int)(J1)/10, fmod(J1, 10));
				}

				else{
				g = modf(7*J1, &g);
				if((g<H)||(1-g<H))
				{
				if(J1>1)fprintf(ff, "%d+", (int)J1 );
				fprintf(ff, "%.0lf/7:  ", 7*(J1-(int)J1 ));
				if(J1<1)
					fputs("  ", ff);
				}

				else
				{		
				g = modf(10*J1, &g);
				if((g<H)||(1-g<H))
					fprintf(ff, "%.1lf:    ", J1);
}}}}}}

fputc('\n', ff);
	}
				gmp_fprintf(ff, "%Zd\n", a[H2]);
			}

		++H2;
		if( !(++dd ^ HH1) )
			break;
		}

	if(i > 0)
		fputs("\n", ff);
		
	if ( !(++C2 ^ M) )
		break;
	}

fclose(ff);
fclose(G);

}

/*
void VECUN1(int &e, int &l, long W, long f, int256 d, int256 d1, int256 unu, int256 doi, int256 *A1, int256 *a, int320 *C, int320 *C1, gmp_ui *b, gmp_ui *b2, int D, int E, int Y, int m, fstream &F1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1]) {

	while(l ^ e) {
			f = W;
			mpz_set(d, a[l--]);

			while(1) {
				if(!f)
					break;
				mpz_mul(d1, d, A1[--f]);				
				SUMADIV(d1, doi, C, C1, b, b2, D, E, Y, m, mpz_scan1(d1, 0), div1, sum1, div, sum);			
				if(VALID(d1, unu, doi) == 1)
					gmp_fprintf(F1, "%Zd\n", d1);
				}
			}
}*/


void VECUN2(int &e, int &l, long W, long f, int256 d, int256 d1, int256 unu, int256 doi, int256 *A1, int256 *a, gmp_ui *b, gmp_ui *b2, int D, int Y, fstream &F1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2]) {
	while(l ^ e) {
		f = W;
		mpz_set(d, a[l--]);
			while(1) {
			if(!f)
				break;
			d1 = d*A1[--f];
			NUMSUM1(d1, doi, b, b2, D, Y, mpz_scan1(d1, 0), div1, sum1);
			if(VALID(d1, unu, doi) == 1)
				gmp_fprintf(F1, "%Zd\n", d1);
			}
		}
}

/*
void VECUN3(long W, long V, long f, int &i, int l, int256 d, int256 d1, int256 unu, int256 doi, int256 I, int256 *a, int256 *A1, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, int320 *C, int320 *C1, int256 *z, int256 *z3, int *f2, int D, int E, int &H, int &m, int n, int &s, int Y, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], fstream &F1) {
	while(l > H) {
		f = V;
		mpz_set(d, a[l--]);
		LOTVECM(d, y, z, Y, b, C, b2, C1, y1, z3, D, E, W, i, m, n, s, f2);			

		while(1) {
			if(!f--)
				break;
			mpz_set(I, A1[f]);
			
			if(mpz_divisible_p(d, I)) {
				mpz_divexact(d1, d, I);
				SUMADIV2(d1, doi, z, z3, y, y1, Y, s, i, n, mpz_scan1(d1, 0), div1, sum1, div, sum, f2);
				//SUM(d1, doi, y, y1, z, doi, Y, s, i, j, mpz_scan1(d1, 0), div1, sum1);
				//SM1(d1, y, doi, j, Y, i, mpz_scan1(d1, 0), div1, sum1, f2);
				if(VALID(d1, unu, doi) == 1)
					gmp_fprintf(F1, "%Zd\n", d1);
				}
			}
		}
}
*/

void VECUN4(int &W, long V, long f, int &i, int l, int256 d, int256 d1, int256 unu, int256 doi, int256 I, int256 *a, int256 *A1, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, int320 *C, int320 *C1, int256 *z, int256 *z3, int *f2, int D, int E, int &H, int &s, int Y, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], fstream &F1) {

	while(l > H) {
		f = V;
		mpz_set(d, a[l--]);			
		LOTVEC(d, y, z, Y, b, C, b2, C1, y1, z3, D, E, W, i, s, f2);

		while(1) {
			if(!f--)
				break;
			mpz_set(I, A1[f]);

			if(!(d % I)) {
				d1 = d/I;
				//SUM(d1, doi, y, y1, z, doi, Y, s, i, j, mpz_scan1(d1, 0), div1, sum1);
				NUMSUM2(d1, doi, y, y1, Y, i, mpz_scan1(d1, 0), div1, sum1, f2);
				//SM1(d1, y, doi, j, Y, i, mpz_scan1(d1, 0), div1, sum1, f2);
				if(VALID(d1, unu, doi) == 1)
					gmp_fprintf(F1, "%Zd\n", d1);
				}
			}
		}
}


void VECUN(int256 xe, int256 g, int dir, int V, int f, int W, int L, int i, int l, int256 d, int256 d1, int256 unu, int256 doi, int256 I, int256 *a, int256 *A1, int b1, int e, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, int320 *C, int320 *C1, int256 *z, int256 *z3, int *c, int *f2, int D, int E, int H, int m, int n, int s, int Y, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], fstream &F1, fstream &f1) {

if(dir) {
	W = 5317;
	L = 4896;
	TOLVECUN(1, A1, b1, e-1, 0, W, b, C, c, D, E, L, "/P2.TXT");
	m = PUTEREA1();
	n = m;
	s = e;
	printf("%d %d %d %d %d\n", D, E, D+E, W, m);
	INV(b, C, W, D, E);
	UNIVEC(xe, g, 1, b, C, W, D, E, m, div, sum, div1, sum1, unu, doi, d1, 1667U);
	
	for(i = 0; i < D; i++)
		b2[i] = 1 + b[i];

	for(i = 0; i < E; i++) {
		mpz_init(C1[i]);
		mpz_add_ui(C1[i], C[i], 1);
	}
	
	//BAZ(l, W, f, d, d1, unu, doi, A1, C, C1, b, b2, D, E, Y, m, F1, div1, sum1, div, sum, a, 6256, c, 4896, e);
	//exit(0);
	Y = W;
	printf("Puteri de sus pentru SUMADIV: %d.\n", m);
	l = s - 1;
	e = l;
	W = VC1(a, A1, s-1, 0, 75000, 25, 0, 1);
	printf("%d\n", W);
	FACT(W, A1, f1, I, 75000);

	while(1) {
		e -= 800;
		printf("%d\n", l);
		if(e < 9900)
			break;	
		/*n? VECUN1(e, l, W, f, d, d1, unu, doi, A1, a, C, C1, b, b2, D, E, Y, m, F1, div1, sum1, div, sum) 
			: */VECUN2(e, l, W, f, d, d1, unu, doi, A1, a, b, b2, D, Y, F1, div1, sum1);		
		}

	F1.close();
	for(i = 0; i < 364000; i++)
		mpz_clear(A1[i]);	
	} else {
		l = e - 1;
		H = l;
		W = VC1(a, A1, e-1, 0, 364000, 48, 0, 1);
		printf("%d\n", W);
		FACT(W, A1, f1, I, 364000);
		V = W;

		while(H > 8500) {
		if(l > 10000)
			H = 10000;
		else
			H -= 1000;
		W = 5317;
		L = 4896;
		TOLVECUN(1, a, b1, l, H, W, b, C, c, D, E, L, "/P2.TXT");
		m = PUTEREA1();
		L = D1 + E1;
		printf("%d %d %d %d %d %d %llu\n\n", l, D, E, L, W, m, div1[0][0]);
		UNIVEC(xe, g, 0, b, C, W, D, E, m, div, sum, div1, sum1, unu, doi, d1, 1667U);		
		
		for(i = 0; i < D; i++)
			b2[i] = 1 + b[i];

		for(i = 0; i < E; i++) {
			mpz_init(C1[i]);
			mpz_add_ui(C1[i], C[i], 1);
		}
		
		/*m? VECUN3(W, V, f, i, l, d, d1, unu, doi, I, a, A1, b, b2, y, y1, C, C1, z, z3, f2, D, E, H, m, n, s, Y, div, sum, div1, sum1, F1)
			: */VECUN4(W, V, f, i, l, d, d1, unu, doi, I, a, A1, b, b2, y, y1, C, C1, z, z3, f2, D, E, H, s, Y, div1, sum1,  F1);		
		}
	}
}

/*
void VECUNA1(int D, int E, int H, int Y, int R, int b1, int e, int f, int l, int m, int256 *a, int256 *A1, gmp_ui *b, gmp_ui *b2, int320 *C, int256 unu, int256 doi, int256 d, int256 d1, double a2, double a3, double a4, double E2, int256 div[][MAX1], gmp_ui div1[][MAX2], fstream &F1, int jos, int cant) {
while(1) {
	e -= 1000;
	printf("%d\n", l);
	if(e < jos)
		break;

	while(l > e) {
		f = cant;
		mpz_set(d, a[l--]);

		while(1) {
			if(!f)
				break;
			mpz_mul(d1, d, A1[--f]);
			ABP(d1, b, b2, C, unu, doi, a2, a3, a4, E2, D, E, Y, F1, div1, div, m);					
			}
		}
	}
}*/


void VECUNA2(int D, int E, int H, int Y, int R, int b1, int e, int f, int l, int256 *a, int256 *A1, gmp_ui *b, gmp_ui *b2, int320 *C, int256 unu, int256 doi, int256 d, int256 d1, double a2, double a3, double a4, double E2, gmp_ui div1[][MAX2], fstream &F1, int jos, int cant) {
while(1) {
	e -= 1000;
	printf("%d\n", l);
	if(e < jos)
		break;

	while(l > e) {
		f = cant;
		mpz_set(d, a[l--]);

		while(1) {
			if(!f)
				break;
			mpz_mul(d1, d, A1[--f]);					
			ABP1(d1, b, b2, C, doi, a2, a3, a4, E2, D, E, Y, F1, div1);
			}
		}
	}
}

/*
void VECUNA3(int L, int U, int W, int D, int E, int H, int Y, int R, int b1, int e, int f, int i, int l, int m, int n, int *c, int *f2, int256 *a, int256 *A1, gmp_ui s, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, int320 *C, int320 *C1, int256 *z, int256 *z3, int256 xe, int256 unu, int256 doi, int256 d, int256 d1, int256 I, double a2, double a3, double a4, double E2, int256 div[][MAX1], gmp_ui div1[][MAX2], fstream &F1, int cant) {
while(H) {
	l > 8000? H = 8000 : H -= 2000;
	W = 5321;
	L = U;
	TOLVECUN(0, a, b1, l, H, W, b, C, c, D, E, L, "/P2.TXT");
	m = PUTEREA1();
	UNIVEC2(xe, 0, b, C, W, D, E, m, div, div1, unu, doi, d1, 1667U);
	printf("%d %d\n", l, D+E);

	while(l > H) {
		f = cant;
		mpz_set(d, a[l]);
		LOTVECM(d, y, z, Y, b, C, b2, C1, y1, z3, D, E, W, i, R, m, n, f2);					
		
		while(1) {
			mpz_set(I, A1[--f]);
			if(mpz_divisible_p(d, I)) {
				mpz_divexact(d1, d, I);
				ABP2(d1, y, y1, z, unu, doi, s, a2, a3, a4, E2, Y, R, i, F1, div1, div, n, f2);							
				}
			if(!f)
				break;
			}
		--l;
		}
	}
}*/


void VECUNA4(int L, int U, int W, int D, int E, int H, int Y, int R, int b1, int e, int f, int i, int l, int m, int *c, int *f2, int256 *a, int256 *A1, gmp_ui s, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, int320 *C, int320 *C1, int256 *z, int256 *z3, int256 xe, int256 unu, int256 doi, int256 d, int256 d1, int256 I, double a2, double a3, double a4, double E2, int256 div[][MAX1], gmp_ui div1[][MAX2], fstream &F1, int cant) {
while(H) {
	l > 8000? H = 8000 : H -= 2000;
	W = 5321;
	L = U;
	TOLVECUN(0, a, b1, l, H, W, b, C, c, D, E, L, "/P2.TXT");
	m = PUTEREA1();
	UNIVEC2(xe, 0, b, C, W, D, E, m, div, div1, unu, doi, d1, 1667U);	
	printf("%d %d\n", l, D+E);

	while(l > H) {
		f = cant;
		mpz_set(d, a[l]);					
		LOTVEC(d, y, z, Y, b, C, b2, C1, y1, z3, D, E, W, i, R, f2);
		
		while(1) {
			mpz_set(I, A1[--f]);
			if(mpz_divisible_p(d, I)) {
				mpz_divexact(d1, d, I);							
				ABP3(d1, y, y1, z, s, doi, a2, a3, a4, E2, Y, R, i, F1, div1, f2);
				}
			if(!f)
				break;
			}
		--l;
		}
	}
}


void VECUNA(int L, int U, int W, int D, int E, int H, int N, int Y, int R, int b1, int e, int f, int i, int l, int m, int n, int *c, int *f2, int256 *a, int256 *A1, gmp_ui s, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, int320 *C, int320 *C1, int256 *z, int256 *z3, int256 xe, int256 unu, int256 doi, int256 d, int256 d1, int256 I, double a2, double a3, double a4, double E2, int256 div[][MAX1], gmp_ui div1[][MAX2], fstream &F1, fstream &f1) {

if(L) {
	W = 5321;
	//GEN(U, W, b, C, D, E, "/P2.TXT");
	L = U;
	TOLVECUN(1, a, b1, N-1, 0, W, b, C, c, D, E, L, "/P2.TXT");
	m = PUTEREA1();//Va fi K.
	Y = m;
	INV(b, C, W, D, E);
	UNIVEC2(xe, 1, b, C, W, D, E, m, div, div1, unu, doi, d1, 1667U);

	for(i = 0; i < D; i++)
			b2[i] = b[i] - 1;

	for(i = 0; i < E; i++) {
		mpz_init(C1[i]);
		mpz_add_ui(C1[i], C[i], 1);
	}

	printf("Puteri de sus pentru ABP: %d.\n", m);
	W = VC1(a, A1, N-1, 0, 2000, 12, 0, 1);
	//W = COEFG1(444000, 5, b, C, D, E, 7);
	printf("%d %d %d %d\n", W, D, E, Y);
	FACT(W, A1, f1, I, 2000);
	l = N-1;
	e = l;
	
	/*b1 > 100? VECUNA1(D, E, H, Y, R, b1, e, f, l, m, a, A1, b, b2, C, unu, doi, d, d1, a2, a3, a4, E2, div, div1, F1, 5000, 2000) 
		: */VECUNA2(D, E, H, Y, R, b1, e, f, l, a, A1, b, b2, C, unu, doi, d, d1, a2, a3, a4, E2, div1, F1, 5000, 2000);
	} else {
	l = N-1;
	H = l;
	for(i = 0; i < 16; i++)
		mpz_init(z[i]);
	W = VC1(a, A1, N-1, 0, 8000, 25, 0, 1);
	printf("%d\n", W);
	FACT(W, A1, f1, I, 8000);
	
	/*b1 > 100? VECUNA3(L, U, W, D, E, H, Y, R, b1, e, f, i, l, m, n, c, f2, a, A1, s, b, b2, y, y1, C, C1, z, z3, xe, unu, doi, d, d1, I, a2, a3, a4, E2, div, div1, F1, 8000) 
		: */VECUNA4(L, U, W, D, E, H, Y, R, b1, e, f, i, l, m, c, f2, a, A1, s, b, b2, y, y1, C, C1, z, z3, xe, unu, doi, d, d1, I, a2, a3, a4, E2, div, div1, F1, 8000);
}
}


void DOISUS(gmp_ui &coef, int256 SUM, int256 sumDoi, gmp_ui *divdoi1, int256 *sumdoi, int v, gmp_ui j) {//j = 1
while(!(coef % divdoi1[j])) j++;
coef >>= --j;
SUM /= sumDoi;
SUM *= sumdoi[v+j];
}


void DOIJOS(gmp_ui &coef, int256 SUM, int256 sumDoi, gmp_ui *divdoi1, int256 *sumdoi, int v, gmp_ui j) {//j = 1
while(!(coef % divdoi1[j])) j++;
coef >>= --j;
SUM /= sumDoi;
SUM *= sumdoi[v-j];
}


void DOISPARSUS(int256 unu, gmp_ui *A3, int256 SUM, gmp_ui coef, int u1, gmp_ui a, gmp_ui k, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 sumDoi, gmp_ui *divdoi1, int256 *sumdoi, int v, int n, int p) {

if(!(coef & 1)) {	
	DOISUS(coef, SUM, sumDoi, divdoi1, sumdoi, v, 1);
	if(coef == 1)
		return;
	}

MODSUS(unu, A3, SUM, coef, u1, 1, k, divnum1, sumnum1, n, p);
}


void DOISPARJOS(int256 unu, gmp_ui *A3, int256 SUM, gmp_ui coef, int u1, gmp_ui k, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 sumDoi, gmp_ui *divdoi1, int256 *sumdoi, int v, int n, int p) {

if(!(coef & 1)) {	
	DOIJOS(coef, SUM, sumDoi, divdoi1, sumdoi, v, 1);
	if(coef == 1)
		return;
	}

MODJOS(unu, A3, SUM, coef, u1, k, divnum1, sumnum1, n, p);
}

/*
void DOISPARSUSM(int256 unu, gmp_ui *A3, int256 SUM, gmp_ui coef, int u1, gmp_ui a, gmp_ui k, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int256 sumDoi, gmp_ui *divdoi1, int256 *sumdoi, int v, int n, int p, int m) {

if(!(coef & 1)) {
	DOISUS(coef, SUM, sumDoi, divdoi1, sumdoi, v, 1);
	if(coef == 1)
		return;
	}

MODSUSM(unu, A3, SUM,coef, u1, 1, k, divnum1, sumnum1, divnum, sumnum, divnum2, sumnum2, n, p, m);
}


void DOISPARJOSM(int256 unu, gmp_ui *A3, int256 SUM, gmp_ui coef, int u1, gmp_ui k, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], int256 sumDoi, gmp_ui *divdoi1, int256 *sumdoi, int v, int n, int p, int m) {

if(!(coef & 1)) {
	DOIJOS(coef, SUM, sumDoi, divdoi1, sumdoi, v, 1);
	if(coef == 1)
		return;
	}

MODJOSM(unu, A3, SUM, coef, u1, k, divnum1, sumnum1, divnum, sumnum, divnum2, n, p, m);
}*/



void MODSPARSUS1(int f, int u1, int256 unu, gmp_ui *A3, int256 d, int256 d1, int k, gmp_ui *A2, int256 doi, int256 trei, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 sumDoi, gmp_ui *divdoi1, int256 *sumdoi, int v, int n, int p) {
	while(1) {
			if(!f--)
				break;
			mpz_set(trei, d);
			DOISPARSUS(unu, A3, trei, A2[f], u1, 1, k, divnum1, sumnum1, sumDoi, divdoi1, sumdoi, v, n, p);
			mpz_mul_ui(doi, unu, A2[f]);
			
			if(VALID4(doi, d1, trei) == 1) {
				SCRIE(doi, G, F2);
				}
			}
}

/*
void MODSPARSUS2(int f, int u1, int256 unu, gmp_ui *A3, int256 d, int256 d1, int k, gmp_ui *A2, int256 doi, int256 trei, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int256 sumDoi, gmp_ui *divdoi1, int256 *sumdoi, int v, int n, int p, int m) {
	while(1) {
			if(!f--)
				break;
			mpz_set(trei, d);
			DOISPARSUSM(unu, A3, trei, A2[f], u1, 1, k, divnum1, sumnum1, divnum, sumnum, divnum2, sumnum2, sumDoi, divdoi1, sumdoi, v, n, p, m);
			mpz_mul_ui(doi, unu, A2[f]);
			
			if(VALID4(doi, d1, trei) == 1) {
				SCRIE(doi, G, F2);
				}
			}
}*/


void MODSPARJOS1(int &u, int &u1, int256 unu, gmp_ui *A3, int256 d, int256 d1, int k, gmp_ui *A1, int256 doi, int256 trei, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 sumDoi, gmp_ui *divdoi1, int256 *sumdoi, int v, int n, int p) {
	while(1) {
		if(!u--)
			break;
		mpz_divexact_ui(doi, unu, A1[u]);
		mpz_set(trei, d);
		DOISPARJOS(unu, A3, trei, A1[u], u1, k, divnum1, sumnum1, sumDoi, divdoi1, sumdoi, v, n, p);
		if(VALID4(doi, d1, trei) == 1) {
			SCRIE(doi, G, F2);			
			}
		}
}

/*
void MODSPARJOS2(int u, int u1, int256 unu, gmp_ui *A3, int256 d, int256 d1, int k, gmp_ui *A1, int256 doi, int256 trei, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], int256 sumDoi, gmp_ui *divdoi1, int256 *sumdoi, int v, int n, int p, int m) {
	while(1) {
		if(!u--)
			break;
		mpz_divexact_ui(doi, unu, A1[u]);
		mpz_set(trei, d);
		DOISPARJOSM(unu, A3, trei, A1[u], u1, k, divnum1, sumnum1, divnum, sumnum, divnum2, sumDoi, divdoi1, sumdoi, v, n, p, m);
		if(VALID4(doi, d1, trei) == 1) {
			SCRIE(doi, G, F2);
			}
		}
}
*/

void SUSMODSPAR1(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, int256 sumDoi, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 *sumdoi, gmp_ui *divdoi1, int n, int p, int v) {

while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	v = mpz_scan1(unu, 0);
	SM(unu, d, b, b1, D, H, v, div1, sum1, 2);
	MODSPARSUS1(f, u1, unu, A3, d, d1, k, A2, doi, trei, G, F2, divnum1, sumnum1, sumDoi, divdoi1, sumdoi, v, n, p);
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODSPAR2(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, int256 sumDoi, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 *sumdoi, gmp_ui *divdoi1, int n, int p, int v) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	v = mpz_scan1(unu, 0);
	NUMSUM1(unu, d, b, b1, D, H, v, div1, sum1);
	MODSPARSUS1(f, u1, unu, A3, d, d1, k, A2, doi, trei, G, F2, divnum1, sumnum1, sumDoi, divdoi1, sumdoi, v, n, p);
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

/*
void SUSMODSPAR3(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, int256 sumDoi, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], int256 *sumdoi, gmp_ui *divdoi1, gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int n, int p, int m, int v) {

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	SUMADIV1(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
	MODSPARSUS2(f, u1, unu, A3, d, d1, k, A2, doi, trei, G, F2, divnum1, sumnum1, divnum, sumnum, divnum2, sumnum2, sumDoi, divdoi1, sumdoi, v, n, p, m);
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODSPAR4(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, int256 sumDoi, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], int256 *sumdoi, gmp_ui *divdoi1, gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int n, int p, int m, int v) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
	MODSPARSUS2(f, u1, unu, A3, d, d1, k, A2, doi, trei, G, F2, divnum1, sumnum1, divnum, sumnum, divnum2, sumnum2, sumDoi, divdoi1, sumdoi, v, n, p, m);
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}*/


void SUSMODSPAR5(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, int256 sumDoi, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], int256 *sumdoi, gmp_ui *divdoi1, gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int n, int p, int m, int v) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
	MODSPARSUS2(f, u1, unu, A3, d, d1, k, A2, doi, trei, G, F2, divnum1, sumnum1, divnum, sumnum, divnum2, sumnum2, sumDoi, divdoi1, sumdoi, v, n, p, m);

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODSPAR1(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, int256 sumDoi, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 *sumdoi, gmp_ui *divdoi1, int n, int p, int v) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		A1[u++] = A2[f];
	}
	if(u) {
		SM(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1, 2);
		MODSPARJOS1(u, u1, unu, A3, d, d1, k, A1, doi, trei, G, F2, divnum1, sumnum1, sumDoi, divdoi1, sumdoi, v, n, p);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODSPAR2(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, int256 sumDoi, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 *sumdoi, gmp_ui *divdoi1, int n, int p, int v) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		A1[u++] = A2[f];
	}
	if(u) {
		NUMSUM1(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1);
		MODSPARJOS1(u, u1, unu, A3, d, d1, k, A1, doi, trei, G, F2, divnum1, sumnum1, sumDoi, divdoi1, sumdoi, v, n, p);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

/*
void JOSMODSPAR3(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, int256 sumDoi, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], int256 *sumdoi, gmp_ui *divdoi1, gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int n, int p, int m, int v) {//NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		A1[u++] = A2[f];
	}

	if(u) {
		SUMADIV1(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		MODSPARJOS2(u, u1, unu, A3, d, d1, k, A1, doi, trei, G, F2, divnum1, sumnum1, divnum, sumnum, divnum2, sumDoi, divdoi1, sumdoi, v, n, p, m);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODSPAR4(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, int256 sumDoi, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], int256 *sumdoi, gmp_ui *divdoi1, gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int n, int p, int m, int v) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		A1[u++] = A2[f];
	}

	if(u) {
		SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		MODSPARJOS2(u, u1, unu, A3, d, d1, k, A1, doi, trei, G, F2, divnum1, sumnum1, divnum, sumnum, divnum2, sumDoi, divdoi1, sumdoi, v, n, p, m);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}
*/

void JOSMODSPAR5(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, int256 sumDoi, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], int256 *sumdoi, gmp_ui *divdoi1, gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int n, int p, int m, int v) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		A1[u++] = A2[f];
	}

	if(u) {
		NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		MODSPARJOS2(u, u1, unu, A3, d, d1, k, A1, doi, trei, G, F2, divnum1, sumnum1, divnum, sumnum, divnum2, sumDoi, divdoi1, sumdoi, v, n, p, m);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void MODSPARSUM(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, int256 sumDoi, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], int256 *sumdoi, gmp_ui *divdoi1, gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int n, int p, int m, int v, int &sus, int &dir) {

if(dir) {
	sus < 55? SUSMODSPAR1(Q, PP2, f1, W, f, u, u1, b, b1, unu, d, d1, doi, trei, sumDoi, A1, A2, A3, div1, sum1, D, H, k, G, F2, divnum1, sumnum1, sumdoi, divdoi1, n, p, v) 
		: SUSMODSPAR2(Q, PP2, f1, W, f, u, u1, b, b1, unu, d, d1, doi, trei, sumDoi, A1, A2, A3, div1, sum1, D, H, k, G, F2, divnum1, sumnum1, sumdoi, divdoi1, n, p, v) ;
	} else {
	sus < 55? JOSMODSPAR1(Q, PP2, f1, W, f, u, u1, b, b1, unu, d, d1, doi, trei, sumDoi, A1, A2, A3, div1, sum1, D, H, k, G, F2, divnum1, sumnum1, sumdoi, divdoi1, n, p, v) 
		: JOSMODSPAR2(Q, PP2, f1, W, f, u, u1, b, b1, unu, d, d1, doi, trei, sumDoi, A1, A2, A3, div1, sum1, D, H, k, G, F2, divnum1, sumnum1, sumdoi, divdoi1, n, p, v);
	}
}


void MODPSUS(int256 unu, gmp_ui *A3, gmp_ui coef, int u1, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui a, gmp_ui k, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui &nr, gmp_ui &nm) {//a = 1
while(1) {
	if(!u1--)
		break;
		
	if(!(coef % A3[u1])) {
		k = 1;
		while( !(coef % divnum1[u1][k])	) k++;
		a *= divnum1[u1][--k];
		
		if(!(unu % A3[u1])) {			
			j = 2;
			while(!(unu % divnum1[u1][j])) j += 2;
			if((unu % divnum1[u1][--j])) j--;
			j = sumnum1[u1][j] * divnum1[u1][k--];
			j2 = j + sumnum1[u1][k];
			k = CMMDC(j2, j, j2%j);
			if(k^1) {j2 /= k; j /= k;}			
			j1 = CMMDCA(j, nr, j%nr);
			k = CMMDCA(nm, j2, nm%j2);			
			nm = (j / j1) * (nm / k);
			nr = (nr / j1) * (j2 / k);		
			}
		else	{
			j = divnum1[u1][k];
			j2 = sumnum1[u1][k];
			//j2 = j + j / (A3[u1]-1);
			//k = CMMDC(j2, j, j2%j);
			//if(k^1) {j2 /= k; j /= k;}
			j1 = CMMDCA(j, nr, j%nr);
			k = CMMDCA(nm, j2, nm%j2);		
			nm = (j / j1) * (nm / k);
			nr = (nr / j1) * (j2 / k);			
			}
		printf("%llu %llu %llu, TRIPLET NR: *%llu/(%llu*%llu), TRIPLET NM: *%llu/(%llu*%llu).\n", nm, nr, A3[u1], j2, k, j1, j, j1, k);
		if(!(a ^ coef))
			return;
		}
	}
}


void MODPJOS(int256 unu, gmp_ui *A3, gmp_ui coef, int u1, gmp_ui &j, gmp_ui &j1, gmp_ui k, gmp_ui &j2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui &nr, gmp_ui &nm) {
while(1) {
	if(!u1--)
		break;
	if(!(coef % A3[u1])) {
		k = 1;
		while( !(coef % divnum1[u1][k])	) k++;		
		k--;
		j = 2;
		while(!(unu % divnum1[u1][j])) j += 2;
		if((unu % divnum1[u1][--j])) j--;
		j = sumnum1[u1][j];
		j2 = j - sumnum1[u1][--k];
		
		//j2 = j - (k / (M1[u1]-A3[u1]));
		k = CMMDC(j, j2, j%j2);
		if(k^1) {j2 /= k; j /= k;}
		k = CMMDCA(nm, j2, nm%j2);
		j1 = CMMDCA(nr, j, nr%j);
		nm = (nm / k) * (j / j1);
		nr = (nr / j1) * (j2 / k);
		printf("%llu %llu %llu, TRIPLET NR: *%llu/(%llu*%llu), TRIPLET NM: *%llu/(%llu*%llu).\n", nm, nr, A3[u1], j2, k, j1, j, j1, k);
		}
	}
}


void MODPDOISUS(gmp_ui &coef, gmp_ui &j, gmp_ui j1, gmp_ui j2, gmp_ui j3, gmp_ui &nr, gmp_ui &nm, gmp_ui *divdoi1, gmp_ui *sumdoi1) {//j = 1, j1 = 2, j2 = mpz_scan1(unu, 0), j3 = 1
while(!(coef % divdoi1[j])) j++;
coef >>= --j;

//Nu se lucrează cu sumDoi și cu divDoi, ci cu mpz_ones (sau cum se cheamă de fapt), funcția care numără cu câte zerouri se termină în binar un număr (adică puterea de 2 cu care se împarte el).
j1 = sumdoi1[j+j2];//32767
j2 = j1 - divdoi1[j];//32767 cu 32760, au CMMDC=7
j3 = CMMDC(j1, j2, j1%j2);
if(j3 ^ 1) {j1 /= j3; j2 /= j3;}//4681, 4680
j = CMMDCA(j1, nm, j1%nm);
j3 = CMMDCA(j2, nr, j2%nr);
nm = (j2 / j3) * (nm / j);
nr = (nr / j3) * (j1 / j);
}


void MODPDOIJOS(gmp_ui &coef, gmp_ui &a, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &nr, gmp_ui &nm, gmp_ui *divdoi1, gmp_ui *sumdoi1) {//a = 1, j = 2, j1 = mpz_scan1(unu, 0), j2 = 1
while(!(coef % divdoi1[j])) a++;
coef >>= --a;

j = sumdoi1[j1];//131072;
j2 = j - divdoi1[a];//131071, 131056, j2<<a = divdoi1[a].
j1 = CMMDC(j, j2, j%j2);//1
if(j1 ^ 1) {j /= j1; j2 /= j1;}
a = CMMDCA(j, nr, j%nr);
j1 = CMMDCA(j2, nm, j2 % nm);
//j * nm, j2 * nr.
nm = (nm / j1) * (j / a);
nr = (j2 / j1) * (nr / a);
}

/*
void MODPDOISUSM(gmp_ui &coef, int256 doi, int256 trei, int256 d1, int256 d2, gmp_ui &j, gmp_ui j1, gmp_ui j2, gmp_ui j3, gmp_ui &nr, gmp_ui &nm, int256 *sumdoi, gmp_ui *divdoi1, int256 nr2, int256 nm2, gmp_ui prag) {//j = 1, j1 = 2, j2 = mpz_scan1(unu, 0), j3 = 1
while(!(coef % divdoi1[j])) j++;
coef >>= --j;

mpz_set(doi, sumdoi[j+j2]);
mpz_sub_ui(trei, doi, divdoi1[j]);
mpz_gcd(d1, doi, trei);

if(mpz_cmp_ui(d1, 1)) {
	mpz_divexact(doi, doi, d1);
	mpz_divexact(trei, trei, d1);
	}

mpz_gcd(d1, doi, nm2);
mpz_gcd(d2, trei, nr2);
mpz_divexact(nm2, nm2, d1);
mpz_divexact(nr2, nr2, d2);
mpz_divexact(d2, trei, d2);
mpz_divexact(d1, doi, d1);
mpz_mul(nm2, d2, nm2);
mpz_mul(nr2, d1, nr2);

}


void MODPDOIJOSM(gmp_ui &coef, int256 doi, int256 trei, int256 d1, int256 d2, gmp_ui &a, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &nr, gmp_ui &nm, int256 *sumdoi, gmp_ui *divdoi1, int256 nr2, int256 nm2, gmp_ui prag) {//a = 1, j = 2, j1 = mpz_scan1(unu, 0), j2 = 1
while(!(coef % divdoi1[j])) a++;
coef >>= --a;

mpz_set(doi, sumdoi[j1]);
mpz_sub_ui(trei, doi, divdoi1[a]);
mpz_gcd(d1, doi, trei);

if(mpz_cmp_ui(d1, 1)) {
	mpz_divexact(doi, doi, d1);
	mpz_divexact(trei, trei, d1);
	}

mpz_gcd(d1, doi, nm2);
mpz_gcd(d2, trei, nr2);
mpz_divexact(nm2, nm2, d1);
mpz_divexact(nr2, nr2, d2);
mpz_divexact(d2, trei, d2);
mpz_divexact(d1, doi, d1);
mpz_mul(nm2, d2, nm2);
mpz_mul(nr2, d1, nr2);

}
*/

void DOIMODPSUS(int256 unu, gmp_ui *A3, gmp_ui coef, int u1, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui a, gmp_ui k, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *divdoi1, gmp_ui *sumdoi1, gmp_ui &nr, gmp_ui &nm) {
if(!(coef & 1)) {
	MODPDOISUS(coef, a = 0, j1 = 2, j2 = mpz_scan1(unu, 0), j = 1, nr, nm, divdoi1, sumdoi1);
	if(!(coef ^ 1))
		return;
	}

MODPSUS(unu, A3, coef, u1, j, j1, j2, a = 1, k, div1, sum1, nr, nm);
}

void DOIMODPJOS(int256 unu, gmp_ui *A3, gmp_ui coef, int u1, gmp_ui &j, gmp_ui &j1, gmp_ui &k, gmp_ui &j2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *divdoi1, gmp_ui *sumdoi1, gmp_ui &nr, gmp_ui &nm) {
if(!(coef & 1)) {
	MODPDOIJOS(coef, j = 0, j1 = 2, j2 = mpz_scan1(unu, 0), k = 1, nr, nm, divdoi1, sumdoi1);
	if(!(coef ^ 1))
		return;
	}

MODPJOS(unu, A3, coef, u1, j, j1, k, j2, div1, sum1, nr, nm);
}

/*
void MODPSUSM(int256 unu, int256 doi, int256 trei, int256 d1, int256 d2, gmp_ui *A3, gmp_ui coef, int u1, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui a, gmp_ui k, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], gmp_ui &nr, gmp_ui &nm, int256 nr2, int256 nm2, int m, gmp_ui prag) {//a = 1

while(1) {
	if(!u1-- ^ m)
		break;
	if(!(coef % A3[u1])) {
		j2 = u1-m;
		k = 2;
		while(!(coef % (div1[j2][k]))) k++;		
		j1 = --k;
		k = div1[j2][k];
		a *= k;

		if(mpz_divisible_ui_p(unu, A3[u1])) {
			j = 2;
			while(!(A3[u1] % div1[j2][j])) j += 2;
			if(A3[u1] % div1[j2][--j]) j--;

			//Ceva așa:
			
			mpz_set_ui(doi, sum1[j2][j]);
			mpz_mul_ui(doi, doi, k);
			mpz_add_ui(trei, doi, sum1[j2][j1-1]);//u1 - m.
			mpz_gcd(d1, doi, trei);

			if(mpz_cmp_ui(d1, 1)) {
				mpz_divexact(doi, doi, d1);
				mpz_divexact(trei, trei, d1);
				}
			mpz_gcd(d1, doi, nm2);
			mpz_gcd(d2, trei, nr2);
			mpz_divexact(nm2, nm2, d1);
			mpz_divexact(nr2, nr2, d2);
			mpz_divexact(d2, trei, d2);
			mpz_divexact(d1, doi, d1);
			mpz_mul(nm2, d2, nm2);
			mpz_mul(nr2, d1, nr2);
			}
		else	{			
			j = k;
			j2 = sum1[j2][j1];
			mpz_gcd_ui(doi, nr2, j);
			mpz_gcd_ui(trei, nm2, j2);
			mpz_divexact(nr2, nr2, doi);
			mpz_divexact(nm2, nm2, trei);
			mpz_mul_ui(nm2, nm2, j / mpz_get_ui(doi));
			mpz_mul_ui(nr2, nr2, j2 / mpz_get_ui(trei));		
			}		
		if(!(a ^ coef))
			return;
		}
	}
if(!m) return;

while(1) {	
	if(!(coef % A3[u1])) {
		k = 2;		
		while(!(coef % (divnum2[u1][k]))) k++;		
		j1 = --k;
		k = divnum2[u1][k];
		a *= k;
				
		if(mpz_divisible_ui_p(unu, A3[u1])) {
			j = 2;
			while(!(A3[u1] % div1[u1][j])) j += 2;
			if(A3[u1] % div1[u1][--j]) j--;

			//Ceva așa:
			
			mpz_set(doi, sum[u1][j]);
			mpz_mul_ui(doi, doi, k);
			mpz_add_ui(trei, doi, sumnum2[u1][j1-1]);//u1 - m. sumnum2.
			mpz_gcd(d1, doi, trei);

			if(mpz_cmp_ui(d1, 1)) {
				mpz_divexact(doi, doi, d1);
				mpz_divexact(trei, trei, d1);
				}
			mpz_gcd(d1, doi, nm2);
			mpz_gcd(d2, trei, nr2);
			mpz_divexact(nm2, nm2, d1);
			mpz_divexact(nr2, nr2, d2);
			mpz_divexact(d2, trei, d2);
			mpz_divexact(d1, doi, d1);
			mpz_mul(nm2, d2, nm2);
			mpz_mul(nr2, d1, nr2);			
			}
		else	{
			j = k;
			j2 = sumnum2[u1][j1];
			
			mpz_gcd_ui(doi, nr2, j);
			mpz_gcd_ui(trei, nm2, j2);
			mpz_divexact(nr2, nr2, doi);
			mpz_divexact(nm2, nm2, trei);
			mpz_mul_ui(nm2, nm2, j / mpz_get_ui(doi));
			mpz_mul_ui(nr2, nr2, j2 / mpz_get_ui(trei));
		
			}
		if(!(a ^ coef))
			return;
		}
	if(!u1--)
		break;
	}
}
//Dar MODPMSUS + MODPMJOS?
//S-ar face construcția directă de numărător și numitor abundențial în int256, cum la MODPSUS + MODPJOS componentele fracției de abundență sunt gmp_ui.
//Dar gargara algoritmică ar fi destul de solicitantă, viteznic vorbind.
//În loc de SINT, ar fi SMPZ și j ar fi mepezetea.
//k ar fi tot întreg normal, iar j2 mepezetea și s-ar face mpz_gcd - uri între j și j2, împărțiri cu int256, nu neapărat cu divexact; pentru siguranță, ar fi nevoie ca până și nm și nr să fie mepezetele, și împărțiri + înmulțiri repetate de mepezetele ar avea loc.
//Consum serios de operații.

void MODPJOSM(int256 unu, int256 doi, int256 trei, int256 d1, int256 d2, gmp_ui *A3, gmp_ui coef, int u1, gmp_ui &j, gmp_ui &j1, gmp_ui k, gmp_ui &j2, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], gmp_ui &nr, gmp_ui &nm, int256 nr2, int256 nm2, int m, gmp_ui prag) {

while(1) {
	if(!u1-- ^ m)
		break;
	if(!(coef % A3[u1])) {
		j2 = u1-m;
		k = 2;
		while(!(coef % (div1[j2][k]))) k++;
		j1 = --k;
		k = div1[j2][k];
			
		//j2 = j - (k / (M1[u1]-A3[u1]));
		j = 2;
		while(!(A3[u1] % div1[j2][j])) j += 2;
		if(A3[u1] % div1[j2][--j]) j--;

		
		mpz_set_ui(doi, sum1[j2][j]);
		mpz_sub_ui(trei, doi, sum1[j2][j1-1]);//u1 - m.
		mpz_gcd(d1, doi, trei);

		if(mpz_cmp_ui(d1, 1)) {
			mpz_divexact(doi, doi, d1);
			mpz_divexact(trei, trei, d1);
			}
		mpz_gcd(d1, doi, nm2);
		mpz_gcd(d2, trei, nr2);
		mpz_divexact(nm2, nm2, d1);
		mpz_divexact(nr2, nr2, d2);
		mpz_divexact(d2, trei, d2);
		mpz_divexact(d1, doi, d1);
		mpz_mul(nm2, d2, nm2);
		mpz_mul(nr2, d1, nr2);
		}
	}

if(!m) return;
while(1) {	
	if(!(coef % A3[u1])) {
		k = 2;
		while(!(coef % (divnum2[u1][k]))) k++;
		j1 = --k;
		k = divnum2[u1][k];
		
		j = 2;
		while(!(A3[u1] % div1[u1][j])) j += 2;
		if(A3[u1] % div1[u1][--j]) j--;
		
		mpz_set(doi, sum[u1][j]);
		mpz_sub(trei, doi, sum[u1][j1-1]);//u1 - m.
		mpz_gcd(d1, doi, trei);

		if(mpz_cmp_ui(d1, 1)) {
			mpz_divexact(doi, doi, d1);
			mpz_divexact(trei, trei, d1);
			}
		mpz_gcd(d1, doi, nm2);
		mpz_gcd(d2, trei, nr2);
		mpz_divexact(nm2, nm2, d1);
		mpz_divexact(nr2, nr2, d2);
		mpz_divexact(d2, trei, d2);
		mpz_divexact(d1, doi, d1);
		mpz_mul(nm2, d2, nm2);
		mpz_mul(nr2, d1, nr2);
		}
	if(!u1--)
		break;
	}
}


void DOIMODPSUSM(int256 unu, int256 doi, int256 trei, int256 d1, int256 d2, gmp_ui *A3, gmp_ui coef, int u1, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui a, gmp_ui k, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], gmp_ui *divdoi1, int256 *sumdoi, gmp_ui &nr, gmp_ui &nm, int256 nr2, int256 nm2, int m, gmp_ui prag) {
if(!(coef & 1)) {
	MODPDOISUSM(coef, doi, trei, d1, d2, a = 0, j1 = 2, j2 = mpz_scan1(unu, 0), j = 1, nr, nm, sumdoi, divdoi1, nr2, nm2, prag);
	if(!(coef ^ 1))
		return;
	}

MODPSUSM(unu, doi, trei, d1, d2, A3, coef, u1, j, j1, j2, a = 1, k, div, sum, div1, sum1, divnum2, sumnum2, nr, nm, nr2, nm2, m, prag);
}

void DOIMODPJOSM(int256 unu, int256 doi, int256 trei, int256 d1, int256 d2, gmp_ui *A3, gmp_ui coef, int u1, gmp_ui &j, gmp_ui &j1, gmp_ui &k, gmp_ui &j2, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], gmp_ui *divdoi1, int256 *sumdoi, gmp_ui &nr, gmp_ui &nm, int256 nr2, int256 nm2, int m, gmp_ui prag) {
if(!(coef & 1)) {
	MODPDOIJOSM(coef, doi, trei, d1, d2, j = 0, j1 = 2, j2 = mpz_scan1(unu, 0), k = 1, nr, nm, sumdoi, divdoi1, nr2, nm2, prag);
	if(!(coef ^ 1))
		return;
	}

MODPJOSM(unu, doi, trei, d1, d2, A3, coef, u1, j, j1, k, j2, div, sum, div1, sum1, divnum2, sumnum2, nr, nm, nr2, nm2, m, prag);
}*/


void MODPARSUMSUS(gmp_ui &nr1, gmp_ui &nm1, gmp_ui &nr, gmp_ui &nm, int f, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A2, gmp_ui *A3, int u1, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui k, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui *divdoi1, gmp_ui *sumdoi1, char *G, fstream &F2, int N) {
	VALIDN(unu, d1, d, trei);
	nr1 = mpz_get_ui(trei);
	nm1 = mpz_get_ui(d1);

	while(1) {
		if(!f--)
			break;
		DOIMODPSUS(unu, A3, A2[f], u1, j, j1, j2, 1, k, divnum1, sumnum1, divdoi1, sumdoi1, nr = nr1, nm = nm1);
		if(nm < N) {
			mpz_mul_ui(doi, unu, A2[f]);
			SCRIE(doi, G, F2);
			}
		}
}


void MODPARSUMJOS(gmp_ui &nr1, gmp_ui &nm1, gmp_ui &nr, gmp_ui &nm, int f, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A3, int u, int u1, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui k, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui *divdoi1, gmp_ui *sumdoi1, char *G, fstream &F2, int N) {
	VALIDN(unu, d1, d, trei);			
	nr1 = mpz_get_ui(trei);
	nm1 = mpz_get_ui(d1);

	while(1) {
		if(!u--)
			break;						
		DOIMODPJOS(unu, A3,  A1[u], u1, j, j1, k, j2, divnum1, sumnum1, divdoi1, sumdoi1, nr = nr1, nm = nm1);
		if(nm < N) {
			mpz_divexact_ui(doi, unu, A1[u]);
			SCRIE(doi, G, F2);
			}
		}
}

/*
void MODPARSUMSUSM(gmp_ui &nr1, gmp_ui &nm1, gmp_ui &nr, gmp_ui &nm, int f, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 d2, gmp_ui *A2, gmp_ui *A3, int u1, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui k, int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int256 *sumdoi, gmp_ui *divdoi1, char *G, fstream &F2, int256 nr2, int256 nm2, int m, gmp_ui prag, int N) {
	VALIDN(unu, d1, d, trei);
	//nr1 = mpz_get_ui(trei);
	//nm1 = mpz_get_ui(d1);
	mpz_set(nr2, trei);
	mpz_set(nm2, d1);

	while(1) {
		if(!f--)
			break;
		DOIMODPSUSM(unu, doi, trei, d1, d2, A3, A2[f], u1, j, j1, j2, 1, k, divnum, sumnum, divnum1, sumnum1, divnum2, sumnum2, divdoi1, sumdoi, nr = nr1, nm = nm1, nr2, nm2, m, prag);
		if(mpz_cmp_ui(nm2, N) < 0) {
			mpz_mul_ui(doi, unu, A2[f]);
			SCRIE(doi, G, F2);
			}
		}
}


void MODPARSUMJOSM(gmp_ui &nr1, gmp_ui &nm1, gmp_ui &nr, gmp_ui &nm, int f, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 d2, gmp_ui *A1, gmp_ui *A3, int u, int u1, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui k, int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int256 *sumdoi, gmp_ui *divdoi1, char *G, fstream &F2, int256 nr2, int256 nm2, int m, gmp_ui prag, int N) {
	VALIDN(unu, d1, d, trei);			
	//nr1 = mpz_get_ui(trei);
	//nm1 = mpz_get_ui(d1);
	mpz_set(nr2, trei);
	mpz_set(nm2, d1);

	while(1) {
		if(!u--)
			break;
		DOIMODPJOSM(unu, doi, trei, d1, d2, A3, A1[u], u1, j, j1, k, j2, divnum, sumnum, divnum1, sumnum1, divnum2, sumnum2, divdoi1, sumdoi, nr = nr1, nm = nm1, nr2, nm2, m, prag);
		if(mpz_cmp_ui(nm2, N) < 0) {
			mpz_divexact_ui(doi, unu, A1[u]);
			SCRIE(doi, G, F2);
			}
		}
}*/


void SUSMODPARSUM1(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui *divdoi1, gmp_ui *sumdoi1, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, int N) {

while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	SM(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1, 2);
	MODPARSUMSUS(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, A2, A3, u1, j, j1, j2, k, divnum1, sumnum1, divdoi1, sumdoi1, G, F2, N);

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODPARSUM2(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui *divdoi1, gmp_ui *sumdoi1, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, int N) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	NUMSUM1(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1);
	MODPARSUMSUS(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, A2, A3, u1, j, j1, j2, k, divnum1, sumnum1, divdoi1, sumdoi1, G, F2, N);

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

/*
void SUSMODPARSUM3(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 d2, int256 doi, int256 trei, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int256 *sumdoi, gmp_ui *divdoi1, gmp_ui *sumdoi1, int m, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, int N, int256 nr2, int256 nm2, gmp_ui prag) {

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	SUMADIV1(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
	MODPARSUMSUSM(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, d2, A2, A3, u1, j, j1, j2, k, divnum, sumnum, divnum1, sumnum1, divnum2, sumnum2, sumdoi, divdoi1, G, F2, nr2, nm2, m, prag, N);

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODPARSUM4(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 d2, int256 doi, int256 trei, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int256 *sumdoi, gmp_ui *divdoi1, gmp_ui *sumdoi1, int m, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, int N, int256 nr2, int256 nm2, gmp_ui prag) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
	MODPARSUMSUSM(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, d2, A2, A3, u1, j, j1, j2, k, divnum, sumnum, divnum1, sumnum1, divnum2, sumnum2, sumdoi, divdoi1, G, F2, nr2, nm2, m, prag, N);

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}*/


void SUSMODPARSUM5(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 d2, int256 doi, int256 trei, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int256 *sumdoi, gmp_ui *divdoi1, gmp_ui *sumdoi1, int m, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, int N, int256 nr2, int256 nm2, gmp_ui prag) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
	MODPARSUMSUSM(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, d2, A2, A3, u1, j, j1, j2, k, divnum, sumnum, divnum1, sumnum1, divnum2, sumnum2, sumdoi, divdoi1, G, F2, nr2, nm2, m, prag, N);

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPARSUM1(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui *divdoi1, gmp_ui *sumdoi1, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, int N) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		A1[u++] = A2[f];
	}
	if(u) {
		SM(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1, 2);
		MODPARSUMJOS(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, A1, A3, u, u1, j, j1, j2, k, divnum1, sumnum1, divdoi1, sumdoi1, G, F2, N);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPARSUM2(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui *divdoi1, gmp_ui *sumdoi1, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, int N) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		A1[u++] = A2[f];
	}

	if(u) {
		NUMSUM1(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1);
		MODPARSUMJOS(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, A1, A3, u, u1, j, j1, j2, k, divnum1, sumnum1, divdoi1, sumdoi1, G, F2, N);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

/*
void JOSMODPARSUM3(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 d2, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int256 *sumdoi, gmp_ui *divdoi1, gmp_ui *sumdoi1, int m, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, int N, int256 nr2, int256 nm2, gmp_ui prag) {//NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		A1[u++] = A2[f];
	}

	if(u) {
		SUMADIV1(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		MODPARSUMJOSM(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, d2, A1, A3, u, u1, j, j1, j2, k, divnum, sumnum, divnum1, sumnum1, divnum2, sumnum2, sumdoi, divdoi1, G, F2, nr2, nm2, m, prag, N);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPARSUM4(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 d2, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int256 *sumdoi, gmp_ui *divdoi1, gmp_ui *sumdoi1, int m, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, int N, int256 nr2, int256 nm2, gmp_ui prag) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		A1[u++] = A2[f];
	}

	if(u) {
		SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		MODPARSUMJOSM(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, d2, A1, A3, u, u1, j, j1, j2, k, divnum, sumnum, divnum1, sumnum1, divnum2, sumnum2, sumdoi, divdoi1, G, F2, nr2, nm2, m, prag, N);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}*/


void JOSMODPARSUM5(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 d2, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int256 *sumdoi, gmp_ui *divdoi1, gmp_ui *sumdoi1, int m, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, int N, int256 nr2, int256 nm2, gmp_ui prag) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		A1[u++] = A2[f];
	}

	if(u) {
		NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		MODPARSUMJOSM(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, d2, A1, A3, u, u1, j, j1, j2, k, divnum, sumnum, divnum1, sumnum1, divnum2, sumnum2, sumdoi, divdoi1, G, F2, nr2, nm2, m, prag, N);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void MODPARSUM(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 d2, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int256 *sumdoi, gmp_ui *divdoi1, gmp_ui *sumdoi1, int m, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, int v, int &sus, int256 nr2, int256 nm2, int &dir) {

if(dir) {
	sus < 55? SUSMODPARSUM1(Q, PP2, f1, W, f, u, u1, b, b1, unu, d, d1, doi, trei, A2, A3, div1, sum1, D, H, k, j, j1, j2, G, F2, divnum1, sumnum1, divdoi1, sumdoi1, nr, nm, nr1, nm1, v) 
		: SUSMODPARSUM2(Q, PP2, f1, W, f, u, u1, b, b1, unu, d, d1, doi, trei, A2, A3, div1, sum1, D, H, k, j, j1, j2, G, F2, divnum1, sumnum1, divdoi1, sumdoi1, nr, nm, nr1, nm1, v);
	} else {
	sus < 55? JOSMODPARSUM1(Q, PP2, f1, W, f, u, u1, b, b1, unu, d, d1, doi, trei, A1, A2, A3, div1, sum1, D, H, k, j, j1, j2, G, F2, divnum1, sumnum1, divdoi1, sumdoi1, nr, nm, nr1, nm1, v)
		: JOSMODPARSUM2(Q, PP2, f1, W, f, u, u1, b, b1, unu, d, d1, doi, trei, A1, A2, A3, div1, sum1, D, H, k, j, j1, j2, G, F2, divnum1, sumnum1, divdoi1, sumdoi1, nr, nm, nr1, nm1, v);
	}
}


void MODPRIMSUMSUS(gmp_ui &nr1, gmp_ui &nm1, gmp_ui &nr, gmp_ui &nm, int f, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A2, gmp_ui *A3, int u1, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui k, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], char *G, fstream &F2, int N) {
	VALIDN(unu, d1, d, trei);
	nr1 = mpz_get_ui(trei);
	nm1 = mpz_get_ui(d1);

	while(1) {
		if(!f--)
			break;
		MODPSUS(unu, A3, A2[f], u1, j, j1, j2, 1, k, divnum1, sumnum1, nr = nr1, nm = nm1);
		if(nm < N) {
			mpz_mul_ui(doi, unu, A2[f]);
			SCRIE(doi, G, F2);
			}
		}
}

void MODPRIMSUMJOS(gmp_ui &nr1, gmp_ui &nm1, gmp_ui &nr, gmp_ui &nm, int f, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, gmp_ui *A1, gmp_ui *A3, int u, int u1, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui k, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], char *G, fstream &F2, int N) {
	VALIDN(unu, d1, d, trei);			
	nr1 = mpz_get_ui(trei);
	nm1 = mpz_get_ui(d1);

	while(1) {
		if(!u--)
			break;						
		MODPJOS(unu, A3,  A1[u], u1, j, j1, k, j2, divnum1, sumnum1, nr = nr1, nm = nm1);
		if(nm < N) {
			mpz_divexact_ui(doi, unu, A1[u]);
			SCRIE(doi, G, F2);
			}
		}
}

/*
void MODPRIMSUMSUSM(gmp_ui &nr1, gmp_ui &nm1, gmp_ui &nr, gmp_ui &nm, int f, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 d2, gmp_ui *A2, gmp_ui *A3, int u1, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui k, int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], char *G, fstream &F2, int256 nr2, int256 nm2, int m, gmp_ui prag, int N) {
	VALIDN(unu, d1, d, trei);
	//nr1 = mpz_get_ui(trei);
	//nm1 = mpz_get_ui(d1);
	mpz_set(nr2, trei);
	mpz_set(nm2, d1);

	while(1) {
		if(!f--)
			break;
		MODPSUSM(unu, doi, trei, d1, d2, A3, A2[f], u1, j, j1, j2, 1, k, divnum, sumnum, divnum1, sumnum1, divnum2, sumnum2, nr = nr1, nm = nm1, nr2, nm2, m, prag);
		if(mpz_cmp_ui(nm2, N) < 0) {
			mpz_mul_ui(doi, unu, A2[f]);
			SCRIE(doi, G, F2);
			}
		}
}


void MODPRIMSUMJOSM(gmp_ui &nr1, gmp_ui &nm1, gmp_ui &nr, gmp_ui &nm, int f, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 d2, gmp_ui *A1, gmp_ui *A3, int u, int u1, gmp_ui j, gmp_ui j1, gmp_ui j2, gmp_ui k, int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], char *G, fstream &F2, int256 nr2, int256 nm2, int m, gmp_ui prag, int N) {
	VALIDN(unu, d1, d, trei);			
	//nr1 = mpz_get_ui(trei);
	//nm1 = mpz_get_ui(d1);
	mpz_set(nr2, trei);
	mpz_set(nm2, d1);

	while(1) {
		if(!u--)
			break;
		MODPJOSM(unu, doi, trei, d1, d2, A3,  A1[u], u1, j, j1, k, j2, divnum, sumnum, divnum1, sumnum1, divnum2, sumnum2, nr = nr1, nm = nm1, nr2, nm2, m, prag);
		if(mpz_cmp_ui(nm2, N) < 0) {
			mpz_divexact_ui(doi, unu, A1[u]);
			SCRIE(doi, G, F2);
			}
		}
}*/


void SUSMODPRIMSUM1(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui &nr, gmp_ui &nm, gmp_ui &nr1, gmp_ui &nm1, int N) {

while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	SM(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1, 2);
	MODPRIMSUMSUS(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, A2, A3, u1, j, j1, j2, k, divnum1, sumnum1, G, F2, N);

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMSUM2(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui &nr, gmp_ui &nm, gmp_ui &nr1, gmp_ui &nm1, int N) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	NUMSUM1(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1);
	MODPRIMSUMSUS(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, A2, A3, u1, j, j1, j2, k, divnum1, sumnum1, G, F2, N);

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

/*
void SUSMODPRIMSUM3(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 d2, int256 doi, int256 trei, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int m, gmp_ui &nr, gmp_ui &nm, gmp_ui &nr1, gmp_ui &nm1, int N, int256 nr2, int256 nm2, gmp_ui prag) {

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	SUMADIV1(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
	MODPRIMSUMSUSM(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, d2, A2, A3, u1, j, j1, j2, k, divnum, sumnum, divnum1, sumnum1, divnum2, sumnum2, G, F2, nr2, nm2, m, prag, N);

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMSUM4(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 d2, int256 doi, int256 trei, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int m, gmp_ui &nr, gmp_ui &nm, gmp_ui &nr1, gmp_ui &nm1, int N, int256 nr2, int256 nm2, gmp_ui prag) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
	MODPRIMSUMSUSM(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, d2, A2, A3, u1, j, j1, j2, k, divnum, sumnum, divnum1, sumnum1, divnum2, sumnum2, G, F2, nr2, nm2, m, prag, N);

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}*/


void SUSMODPRIMSUM5(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 d2, int256 doi, int256 trei, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int m, gmp_ui &nr, gmp_ui &nm, gmp_ui &nr1, gmp_ui &nm1, int N, int256 nr2, int256 nm2, gmp_ui prag) {
while(1) {
	mpz_set_str(unu, Q, 10);
	f = W;
	NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
	MODPRIMSUMSUSM(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, d2, A2, A3, u1, j, j1, j2, k, divnum, sumnum, divnum1, sumnum1, divnum2, sumnum2, G, F2, nr2, nm2, m, prag, N);

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIMSUM1(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui &nr, gmp_ui &nm, gmp_ui &nr1, gmp_ui &nm1, int N) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		A1[u++] = A2[f];
	}
	if(u) {
		SM(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1, 2);
		MODPRIMSUMJOS(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, A1, A3, u, u1, j, j1, j2, k, divnum1, sumnum1, G, F2, N);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIMSUM2(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui &nr, gmp_ui &nm, gmp_ui &nr1, gmp_ui &nm1, int N) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		A1[u++] = A2[f];
	}

	if(u) {
		NUMSUM1(unu, d, b, b1, D, H, mpz_scan1(unu, 0), div1, sum1);
		MODPRIMSUMJOS(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, A1, A3, u, u1, j, j1, j2, k, divnum1, sumnum1, G, F2, N);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

/*
void JOSMODPRIMSUM3(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 d2, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int m, gmp_ui &nr, gmp_ui &nm, gmp_ui &nr1, gmp_ui &nm1, int N, int256 nr2, int256 nm2, gmp_ui prag) {//NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		A1[u++] = A2[f];
	}

	if(u) {
		SUMADIV1(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		MODPRIMSUMJOSM(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, d2, A1, A3, u, u1, j, j1, j2, k, divnum, sumnum, divnum1, sumnum1, divnum2, sumnum2, G, F2, nr2, nm2, m, prag, N);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIMSUM4(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 d2, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int m, gmp_ui &nr, gmp_ui &nm, gmp_ui &nr1, gmp_ui &nm1, int N, int256 nr2, int256 nm2, gmp_ui prag) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		A1[u++] = A2[f];
	}

	if(u) {
		SUMADIV(unu, d, C, C1, b, b1, D, E, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		MODPRIMSUMJOSM(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, d2, A1, A3, u, u1, j, j1, j2, k, divnum, sumnum, divnum1, sumnum1, divnum2, sumnum2, G, F2, nr2, nm2, m, prag, N);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}*/


void JOSMODPRIMSUM5(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int256 unu, int256 d, int256 d1, int256 d2, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int m, gmp_ui &nr, gmp_ui &nm, gmp_ui &nr1, gmp_ui &nm1, int N, int256 nr2, int256 nm2, gmp_ui prag) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		A1[u++] = A2[f];
	}

	if(u) {
		NUMSUM(unu, d, b, b1, D, H, K, mpz_scan1(unu, 0), div1, sum1, div, sum);
		MODPRIMSUMJOSM(nr1, nm1, nr, nm, f, unu, doi, trei, d, d1, d2, A1, A3, u, u1, j, j1, j2, k, divnum, sumnum, divnum1, sumnum1, divnum2, sumnum2, G, F2, nr2, nm2, m, prag, N);
		}
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void MODPRIMSUM(char *Q, long PP2, fstream &f1, int &W, int &f, int &u, int &u1, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 unu, int256 d, int256 d1, int256 d2, int256 doi, int256 trei, gmp_ui *A1, gmp_ui *A2, gmp_ui *A3, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, char *G, fstream &F2, gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], int256 divnum[][MAX1], int256 sumnum[][MAX1], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int m, gmp_ui &nr, gmp_ui &nm, gmp_ui &nr1, gmp_ui &nm1, int v, int &sus, int256 nr2, int256 nm2, int &dir) {

if(dir) {
	sus < 55? SUSMODPRIMSUM1(Q, PP2, f1, W, f, u, u1, b, b1, unu, d, d1, doi, trei, A2, A3, div1, sum1, D, H, k, j, j1, j2, G, F2, divnum1, sumnum1, nr, nm, nr1, nm1, v) 
		: SUSMODPRIMSUM2(Q, PP2, f1, W, f, u, u1, b, b1, unu, d, d1, doi, trei, A2, A3, div1, sum1, D, H, k, j, j1, j2, G, F2, divnum1, sumnum1, nr, nm, nr1, nm1, v);
	} else {
	sus < 55? JOSMODPRIMSUM1(Q, PP2, f1, W, f, u, u1, b, b1, unu, d, d1, doi, trei, A1, A2, A3, div1, sum1, D, H, k, j, j1, j2, G, F2, divnum1, sumnum1, nr, nm, nr1, nm1, v)
		: JOSMODPRIMSUM2(Q, PP2, f1, W, f, u, u1, b, b1, unu, d, d1, doi, trei, A1, A2, A3, div1, sum1, D, H, k, j, j1, j2, G, F2, divnum1, sumnum1, nr, nm, nr1, nm1, v) ;
	}
}


void NUMSUM0(int dir, int f, int W, int u, gmp_ui *b, gmp_ui *b1, int256 unu, int256 doi, int256 d, int256 d1, gmp_ui j, int D, int H, int R, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], char *G, fstream &F2, gmp_ui *A2, gmp_ui *y, gmp_ui *y1, int Y, int &h, gmp_ui *A1, int s, int *f2) {
	if(dir) {
		f = W;
		while(1) {
			if(!f--)
				break;		
			mpz_mul_ui(doi, unu, A2[f]);
			NUMSUM1(doi, d, b, b1, D, H, mpz_scan1(doi, 0), div1, sum1);
			if(
			VALID4(doi, d1, d)
			//VALID(doi, d1, d)
			 == 1)
				SCRIE(doi, G, F2);
			}
	} else {		
		u = 0;
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(unu, A2[f]))
			A1[u++] = A2[f];
		if(u)	{
			LOTVEC1(unu, y, Y, b, b1, y1, D, H, h, s, f2);
			while(1) {
				if(!u--)
					break;
				mpz_divexact_ui(doi, unu, A1[u]);
				NUMSUM2(doi, d, y, y1, Y, h, mpz_scan1(doi, 0), div1, sum1, f2);
				if(
				VALID4(doi, d1, d) == 1
				//VALID(doi, d1, d) == 1
				)
					SCRIE(doi, G, F2);
				}
			}
	}
}


void SUSDRUSOJURA1(char *Q, long PP2, fstream &f1, int s, int f, int W, int256 unu, int256 doi, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &e, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, int v, gmp_ui nm, gmp_ui nr, char *G, fstream &F2) {

while(1) {
	mpz_set_str(unu, Q, 10);
	
	for(f = W-1; f >= 0; f--)		
		if(!mpz_divisible_ui_p(unu, divInt[f])) {
			A1[s] = divInt[f];
			sumInt[s++] = A2[f];
			}
	if(s) {
		SMOD(unu, doi, b, b1, j = 2, D, H, mpz_scan1(unu, 0), div1, sum1, e, j1, j2, nm, nr);
		while(1) {
			if(!s--)
				break;
			if(TRAT(nr * sumInt[s], nm * A1[s], v))	{
				mpz_mul_ui(doi, unu, A1[s]);				
				SCRIE(doi, G, F2);		
				}
			}
		}

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSDRUSOJURA2(char *Q, long PP2, fstream &f1, int s, int f, int W, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &e, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, int v, gmp_ui nm, gmp_ui nr, int256 nm1, int256 nr1, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	
	for(f = W-1; f >= 0; f--)		
	if(!mpz_divisible_ui_p(unu, divInt[f])) {
		A1[s] = divInt[f];
		sumInt[s++] = A2[f];
		}

	if(s) {//NUMSUMMOD(unu, doi, trei, d, d1, Z, b, b1, e, D, H, mpz_scan1(unu, 0), div1, sum1, div, sum, K, j, j1, j2, nm1, nr1);
		NUMSUMMOD1(unu, doi, trei, d, d1, Z, b, b1, e, D, H, mpz_scan1(unu, 0), div1, sum1, j, j1, j2, nm1, nr1);
		nr = mpz_get_ui(nm1);
		nm = mpz_get_ui(nm1);
		
		while(1) {
			if(!s--)
				break;
			if(TRAT(nr * sumInt[s], nm * A1[s], v))	{
				mpz_mul_ui(doi, unu, A1[s]);				
				SCRIE(doi, G, F2);		
				}
			}		
		}

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

/*
void SUSDRUSOJURA3(char *Q, long PP2, fstream &f1, int s, int f, int W, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &e, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, int v, gmp_ui nm, gmp_ui nr, int256 nm1, int256 nr1, char *G, fstream &F2) {

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	
	for(f = W-1; f >= 0; f--)
	if(!mpz_divisible_ui_p(unu, divInt[f])) {
		A1[s] = divInt[f];
		sumInt[s++] = A2[f];
		}

	if(s)	{
		SUMDIVMOD1(unu, doi, trei, d, d1, Z, b, b1, e, D, H, mpz_scan1(unu, 0), div1, sum1, div, sum, C, C1, E, K, j, j1, j2, nm1, nr1);
		nr = mpz_get_ui(nm1);
		nm = mpz_get_ui(nm1);
		while(1) {
			if(!s--)
				break;
			if(TRAT(nr * sumInt[s], nm * A1[s], v))	{
				mpz_mul_ui(doi, unu, A1[s]);				
				SCRIE(doi, G, F2);		
				}
			}
		}

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSDRUSOJURA4(char *Q, long PP2, fstream &f1, int s, int f, int W, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &e, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, int v, gmp_ui nm, gmp_ui nr, int256 nm1, int256 nr1, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	
	for(f = W-1; f >= 0; f--)		
	if(!mpz_divisible_ui_p(unu, divInt[f])) {
		A1[s] = divInt[f];
		sumInt[s++] = A2[f];
		}
		
	if(s)	{
		SUMDIVMOD(unu, doi, trei, d, d1, Z, b, b1, e, D, H, mpz_scan1(unu, 0), div1, sum1, div, sum, C, C1, E, K, j, j1, j2, nm1, nr1);
		nr = mpz_get_ui(nm1);
		nm = mpz_get_ui(nm1);
		while(1) {
			if(!s--)
				break;
			if(TRAT(nr * sumInt[s], nm * A1[s], v))	{
				mpz_mul_ui(doi, unu, A1[s]);				
				SCRIE(doi, G, F2);		
				}
			}	
		}

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}*/


void SUSDRUSOJURA5(char *Q, long PP2, fstream &f1, int s, int f, int W, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *A2, gmp_ui *b, gmp_ui *b1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui &e, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, int v, gmp_ui nm, gmp_ui nr, int256 nm1, int256 nr1, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	
	for(f = W-1; f >= 0; f--)		
	if(!mpz_divisible_ui_p(unu, divInt[f])) {
		A1[s] = divInt[f];
		sumInt[s++] = A2[f];
		}
		
	if(s)	{
		NUMSUMMOD(unu, doi, trei, d, d1, Z, b, b1, e, D, H, mpz_scan1(unu, 0), div1, sum1, div, sum, K, j, j1, j2, nm1, nr1);
		nr = mpz_get_ui(nm1);
		nm = mpz_get_ui(nm1);
		while(1) {
			if(!s--)
				break;
			if(TRAT(nr * sumInt[s], nm * A1[s], v))	{
				mpz_mul_ui(doi, unu, A1[s]);				
				SCRIE(doi, G, F2);		
				}
			}	
		}

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSDRUSOJURA1(char *Q, long PP2, fstream &f1, int s, int f, int W, int256 unu, int256 doi, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *A2, gmp_ui *M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &e, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, int v, gmp_ui nm, gmp_ui nr, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	for(f = W-1; f >= 0; f--)		
		if( (mpz_divisible_ui_p(unu, divInt[f])) && (!mpz_divisible_ui_p(unu, M[f])) ) {
			A1[s] = divInt[f];		
			sumInt[s++] = A2[f];
			}
	if(s) {
		SMOD(unu, doi, b, b1, j = 2, D, H, mpz_scan1(unu, 0), div1, sum1, e, j1, j2, nm, nr);
		while(1) {
			if(!s--)
				break;
			if(TRAT(nm * sumInt[s], nr * A1[s], v)) {
				mpz_divexact_ui(doi, unu, A1[s]);								
				SCRIE(doi, G, F2);
				}
			}
		}
	
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSDRUSOJURA2(char *Q, long PP2, fstream &f1, int s, int f, int W, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *A2, gmp_ui *M, gmp_ui *b, gmp_ui *b1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, gmp_ui &e, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, int v, gmp_ui nm, gmp_ui nr, int256 nm1, int256 nr1, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	for(f = W-1; f >= 0; f--)		
		if( (mpz_divisible_ui_p(unu, divInt[f])) && (!mpz_divisible_ui_p(unu, M[f])) ) {
			A1[s] = divInt[f];		
			sumInt[s++] = A2[f];
			}
	if(s) {
		NUMSUMMOD1(unu, doi, trei, d, d1, Z, b, b1, e, D, H, mpz_scan1(unu, 0), div1, sum1, j, j1, j2, nm1, nr1);
		nr = mpz_get_ui(nm1);
		nm = mpz_get_ui(nm1);
		while(1) {
			if(!s--)
				break;
			if(TRAT(nm * sumInt[s], nr * A1[s], v)) {
				mpz_divexact_ui(doi, unu, A1[s]);								
				SCRIE(doi, G, F2);
				}
			}
		}
	
	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

/*
void JOSDRUSOJURA3(char *Q, long PP2, fstream &f1, int s, int f, int W, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *A2, gmp_ui *M, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &e, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, int v, gmp_ui nm, gmp_ui nr, int256 nm1, int256 nr1, char *G, fstream &F2) {

PURGANTE(C, C1, E);
while(1) {
	mpz_set_str(unu, Q, 10);
	for(f = W-1; f >= 0; f--)		
		if( (mpz_divisible_ui_p(unu, divInt[f])) && (!mpz_divisible_ui_p(unu, M[f])) ) {
			A1[s] = divInt[f];		
			sumInt[s++] = A2[f];
			}
	if(s) {
		SUMDIVMOD1(unu, doi, trei, d, d1, Z, b, b1, e, D, H, mpz_scan1(unu, 0), div1, sum1, div, sum, C, C1, E, K, j, j1, j2, nm1, nr1);
		nr = mpz_get_ui(nm1);
		nm = mpz_get_ui(nm1);
		while(1) {
			if(!s--)
				break;
			if(TRAT(nm * sumInt[s], nr * A1[s], v)) {
				mpz_divexact_ui(doi, unu, A1[s]);								
				SCRIE(doi, G, F2);
				}
			}
		}

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSDRUSOJURA4(char *Q, long PP2, fstream &f1, int s, int f, int W, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *A2, gmp_ui *M, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *C1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &e, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, int v, gmp_ui nm, gmp_ui nr, int256 nm1, int256 nr1, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	for(f = W-1; f >= 0; f--)		
		if( (mpz_divisible_ui_p(unu, divInt[f])) && (!mpz_divisible_ui_p(unu, M[f])) ) {
			A1[s] = divInt[f];		
			sumInt[s++] = A2[f];
			}
	if(s) {
		SUMDIVMOD(unu, doi, trei, d, d1, Z, b, b1, e, D, H, mpz_scan1(unu, 0), div1, sum1, div, sum, C, C1, E, K, j, j1, j2, nm1, nr1);
		nr = mpz_get_ui(nm1);
		nm = mpz_get_ui(nm1);
		while(1) {
			if(!s--)
				break;
			if(TRAT(nm * sumInt[s], nr * A1[s], v)) {
				mpz_divexact_ui(doi, unu, A1[s]);								
				SCRIE(doi, G, F2);
				}
			}
		}	

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}
*/

void JOSDRUSOJURA5(char *Q, long PP2, fstream &f1, int s, int f, int W, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *A2, gmp_ui *M, gmp_ui *b, gmp_ui *b1, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, gmp_ui &e, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, int v, gmp_ui nm, gmp_ui nr, int256 nm1, int256 nr1, char *G, fstream &F2) {
while(1) {
	mpz_set_str(unu, Q, 10);
	for(f = W-1; f >= 0; f--)		
		if( (mpz_divisible_ui_p(unu, divInt[f])) && (!mpz_divisible_ui_p(unu, M[f])) ) {
			A1[s] = divInt[f];		
			sumInt[s++] = A2[f];
			}
	if(s) {
		NUMSUMMOD(unu, doi, trei, d, d1, Z, b, b1, e, D, H, mpz_scan1(unu, 0), div1, sum1, div, sum, K, j, j1, j2, nm1, nr1);
		nr = mpz_get_ui(nm1);
		nm = mpz_get_ui(nm1);
		while(1) {
			if(!s--)
				break;
			if(TRAT(nm * sumInt[s], nr * A1[s], v)) {
				mpz_divexact_ui(doi, unu, A1[s]);								
				SCRIE(doi, G, F2);
				}
			}
		}	

	if(!(f1.tellg() ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void DRUSOJURA(char *Q, long PP2, fstream &f1, int dir, int s, int f, int W, int256 unu, int256 doi, int256 trei, int256 d, int256 d1, int256 Z, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui *A1, gmp_ui *A2, gmp_ui *M, gmp_ui *b, gmp_ui *b1, int320 *C, int320 *J, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, gmp_ui &e, gmp_ui &j, gmp_ui &j1, gmp_ui &j2, int v, int sus, gmp_ui nm, gmp_ui nr, int256 nm1, int256 nr1, char *G, fstream &F2) {

if(dir) {
	sus < 55? SUSDRUSOJURA1(Q, PP2, f1, s, f, W, unu, doi, divInt, sumInt, A1, A2, b, b1, div1, sum1, D, H, e, j, j1, j2, v, nm, nr, G, F2) 
		: SUSDRUSOJURA2(Q, PP2, f1, s, f, W, unu, doi, trei, d, d1, Z, divInt, sumInt, A1, A2, b, b1, div1, sum1, D, H, e, j, j1, j2, v, nm, nr, nm1, nr1, G, F2);
	} else {
	sus < 55? JOSDRUSOJURA1(Q, PP2, f1, s, f, W, unu, doi, divInt, sumInt, A1, A2, M, b, b1, div1, sum1, D, H, e, j, j1, j2, v, nm, nr, G, F2)
		: JOSDRUSOJURA2(Q, PP2, f1, s, f, W, unu, doi, trei, d, d1, Z, divInt, sumInt, A1, A2, M, b, b1, div1, sum1, D, H, e, j, j1, j2, v, nm, nr, nm1, nr1, G, F2) ;
	}
}


void DIVNUM(int &u1, int &H, int H2, int H3, int &K, gmp_ui *b, gmp_ui *A3, int *A4, int &pp, int &pp1, int &m, int &n, int &p, int D, gmp_ui VERTOITO, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui divnum1[][MAX2], gmp_ui sumnum1[][MAX2], gmp_ui divnum2[][20], gmp_ui sumnum2[][20], int256 div[][MAX1], int256 sum[][MAX1], int256 divnum[][MAX1], int256 sumnum[][MAX1]) {
if(K) {
	for(int i = 0; i < u1; i++) {
		H2 = H;
		if(PREZ3(A3[i], b, H2, H-K)) {
			memcpy(divnum[pp1], div[H2-H+K], sizeof(div[H2-H+K]));
			memcpy(sumnum[pp1], sum[H2-H+K], sizeof(sum[H2-H+K]));
			for(int i1 = 0; i1 < 20; i1++) {
				divnum2[pp1][i1] = (sumnum[pp1][i1] <= (gmp_ui)1U-2U)? (divnum[pp1][i1]) : 1667;
				sumnum2[pp1][i1] = (sumnum[pp1][i1] <= (gmp_ui)1U-2U)? (sumnum[pp1][i1]) : 1667;
				printf("%llu ", (divnum2[pp1][i1]));
				}

			putchar('\n');
			++pp1;
		}
	}
}
m = pp1;
H3 = K? K : 0;

for(int i = 0; i < u1; i++) {
	H2 = H - K;
	if(PREZ3(A3[i], b, H2, 0)) {
		memcpy(divnum1[pp], div1[H2], sizeof(div1[H2]));
		memcpy(sumnum1[pp], sum1[H2], sizeof(sum1[H2]));
		++pp;
	}
}
n = pp;

for(int i = 0; i < u1; i++) {
	H2 = D;
	if(PREZ3(A3[i], b, H2, H)) {
		divnum1[pp][0] = 1;
		sumnum1[pp][0] = 1;
		divnum1[pp][1] = b[H2];
		sumnum1[pp][1] = 1+b[H2];
		divnum1[pp][2] = b[H2] < VERTOITO? b[H2] * b[H2] : 1667;
		sumnum1[pp][2] = b[H2] < VERTOITO? sumnum1[pp][1] * b[H2] + 1 : 1667;
		divnum1[pp][3] = 1667;
		sumnum1[pp][3] = 1667;
		divnum1[pp][4] = 1667;
		sumnum1[pp][4] = 1667;
		++pp;
	}
}

p = pp - n;
/*
printf("K: \n");
for(int i = 0; i < m; i++) { gmp_printf("%Zd ", divnum[i][1]); A4[i] = mpz_get_ui(divnum[i][1]);}
putchar('\n');

printf("H-K: \n");
for(int i = 0; i < n; i++) { printf("%llu ", divnum1[i][1]); A4[i+m] = divnum1[i][1];}
putchar('\n');

printf("D-H: \n");
for(int i = n; i < pp; i++) { printf("%llu ", divnum1[i][1]); A4[i+m] = divnum1[i][1];}
putchar('\n');*/

for(int i = 0; i < u1; i++) {
	A3[i] = A4[i];
	}
printf("%d %d %d\n\n", n, p, m);//n e 15, p 33, m 44: D-H, H-K, K. Se va parcurge de la K.
}


#endif
