#define PRAGW 1

//MODIFSUM:
void UMODIFSUS1(gmp_ui mul1, int n, int z, int f, gmp_ui S2, gmp_ui A2, char *Q, FILE *F2, mpz_t p, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t sum, mpz_t imp, mpz_t mul, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *FACT, int *FACTLEG, int *PRIMP) {

for(z = 0; FACT[z]; z++) {
	if(mpz_divisible_ui_p(p, FACT[z])) {
		MODSUS0(unu, imp, mul, FACTLEG[z], PRIMP[z], 2, div1, sum1);
		continue;
			}
			
		mul1 *= sum1[FACTLEG[z]][PRIMP[z]];
		}

	IMPMUL(mul1, sum, d, imp, mul, unu, doi, d1, Q, F2, A2, S2);
	
}


void UMODIFSUS2(gmp_ui mul1, int n, int z, int f, gmp_ui S2, gmp_ui A2, char *Q, FILE *F2, mpz_t p, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t sum, mpz_t imp, mpz_t mul, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP) {

for(z = 0; FACT[z]; z++) {
	if(mpz_divisible_ui_p(p, FACT[z])) {
		MODSUS0(unu, imp, mul, FACTLEG[z], PRIMP[z], 2, div1, sum1);
		continue;
			}
			
		mul1 *= sum1[FACTLEG[z]][PRIMP[z]];
		}
		
for(z = 0; SFACT[z]; z++) {
	if(mpz_divisible_ui_p(p, SFACT[z])) {
		MODSUSMARE(unu, imp, mul, SFACTLEG[z], SPRIMP[z], 0, div1, sum1, mem);
		continue;
			}
			
		mul1 *= sum1[SFACTLEG[z]][SPRIMP[z]];
		}

	IMPMUL(mul1, sum, d, imp, mul, unu, doi, d1, Q, F2, A2, S2);
	
}


void USUSMODIFSUMULE(mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui s1, gmp_ui s2, gmp_ui s3, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p) {
	int n = 0, z;
	gmp_ui mul1 = 1;
	
	
		for(z = 0; FACT[z]; z++) {
		if(mpz_divisible_ui_p(p, FACT[z])) {
		  MODUMSUSM0(p, imp, mul, FACTLEG[z], PRIMP[z], FACTAUX[z], 2, div, sum, div1, sum1, mem);//Sau FACTAUX + FACTLEG[z], unde FACTAUX = H-K.
		  continue;
			}

		  mul1 *= sum1[FACTAUX[z]][PRIMP[z]];
		 }

		IMPMUL(mul1, summ, d, imp, mul, unu, doi, d1, Q, F2, m1[n], s1[n]);
	
	
	mul1 = 1;
	
		for(z = 0; FACT3[z]; z++) {
		if(mpz_divisible_ui_p(p, FACT3[z])) {
			MODSUS0(p, imp, mul, FACTLEG3[z], PRIMP3[z], 2, div1, sum1);
			continue;
			}
			
			mul1 *= sum1[FACTLEG3[z]][PRIMP3[z]];
		}
		
		for(z = 0; SFACT2[z]; z++) {
		if(mpz_divisible_ui_p(p, SFACT2[z])) {
			MODSUSMARE(p, imp, mul, SFACTLEG2[z], SPRIMP2[z], 0, div1, sum1, mem);
			continue;
			}
			
			mul1 *= sum1[SFACTLEG2[z]][SPRIMP2[z]];//1, nu 2.
		}
		
		for(z = 0; FACT2[z]; z++) {
		if(mpz_divisible_ui_p(p, FACT2[z])) {
		  MODUMSUSM0(p, imp, mul, FACTLEG2[z], PRIMP2[z], FACTAUX2[z], 2, div, sum, div1, sum1, mem);
		  continue;
		  }
		
			mul1 *= sum1[FACTAUX2[z]][PRIMP2[z]];
		}

		IMPMUL(mul1, summ, d, imp, mul, unu, doi, d1, Q, F2, m2, s2);		
		

	UUMODIFSUS2(1, 0, 0, nk, s3, m3, Q, F2, p, unu, doi, d, d1, summ, imp, mul, div1, sum1, mem, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP);//Non K-urile la urmă.
}


void UMODIFJOS1(mpz_t unu, mpz_t d, mpz_t d1, gmp_ui A1, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p) {	
	mpz_divexact_ui(doi, unu, A1);
	for(A1 = 0; FACT[A1]; A1++)
		MODJOS0(p, imp, mul, FACTLEG[A1], PRIMP[A1], 2, div1, sum1);	
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);
}


void UMODIFJOS2(mpz_t unu, mpz_t d, mpz_t d1, gmp_ui A1, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP,  gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t p) {	
	mpz_divexact_ui(doi, unu, A1);
	for(A1 = 0; FACT[A1]; A1++) {
		MODJOS0(p, imp, mul, FACTLEG[A1], PRIMP[A1], 2, div1, sum1);
		}

	for(A1 = 0; SFACT[A1]; A1++) {
		MODJOSMARE(p, imp, mul, SFACTLEG[A1], SPRIMP[A1], 0, div1, sum1, mem);
		}
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);
}


// https://drive.google.com/file/d/1lZYmxlLJ0m_TPZuR7RWc6qNQdjgYH3YH/view?fbclid=IwAR2-H_ky42Z5IVFGBGESqDHXQszo8IAQppgVrqTSwlZeOtTmugUV6gCL9sM
void UJOSMODIFSUMULE(int W, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t p) {int A1;

	
	if(m1 && mpz_divisible_ui_p(p, m1)) {//Pure.
		mpz_divexact_ui(doi, unu, m1);
		for(A1 = 0; FACT[A1]; A1++)
			MODUMJOSM0(p, imp, mul, FACTLEG[A1], PRIMP[A1], FACTAUX[A1], 2, div, sum, div1, sum1, mem);//K->0.
		IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);
	}

	
	if(m2 && mpz_divisible_ui_p(p, m2)) {//Amestecate.
		mpz_divexact_ui(doi, unu, m2);
		for(A1 = 0; FACT3[A1]; A1++)
			MODJOS0(p, imp, mul, FACTLEG3[A1], PRIMP3[A1], 2, div1, sum1);//H->K+S.
		for(A1 = 0; SFACT2[A1]; A1++)
			MODJOSMARE(p, imp, mul, SFACTLEG2[A1], SPRIMP2[A1], 0, div1, sum1, mem);//K+S->K.
		for(A1 = 0; FACT2[A1]; A1++)
			MODUMJOSM0(p, imp, mul, FACTLEG2[A1], PRIMP2[A1], FACTAUX2[A1], 2, div, sum, div1, sum1, mem);//K->0.
		
		IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);
	}
	
	
	if(m3 && mpz_divisible_ui_p(p, m3)) {//Non-K.
		UUMODIFJOS2(unu, d, d1, m3, doi, trei, imp, mul, Q, F2, div1, sum1, mem, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP, p);
	}
}


void USUSMODIFSUM1(char *Q, long PP2, int &W, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui S2, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, gmp_ui *q, int g) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
		UMODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODIFSUM2(char *Q, long PP2, int &W, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui S2, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int g) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
		UMODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODIFSUM3(char *Q, long PP2, int &W, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui S2, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int g) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
		UMODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODIFSUM4(char *Q, long PP2, int &W, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui S2, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int g) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		NUMSUMV3(p, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
		UMODIFSUS2(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, mem, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODIFSUM5(char *Q, long PP2, int &W, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui S2, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int g) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);
		//UMODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
		UMODIFSUS2(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, mem, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODIFSUM6(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui s1, gmp_ui s2, gmp_ui s3, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int g) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
		USUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}

void USUSMODIFSUM7(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui s1, gmp_ui s2, gmp_ui s3, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int g) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g]);
		USUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);//Opt parametri în minus: AK, ANK, NK, m, FD, FD1, FD2 și FD3.
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODIFSUM8(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui s1, gmp_ui s2, gmp_ui s3, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int g) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
		USUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODIFSUM1(char *Q, long PP2, int W, FILE *f1, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int g, mpz_t p, gmp_ui *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);		
		
		if(mpz_divisible_ui_p(unu, A2)) {		
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SMV(p, d, b, b1, D, H, u, div1, sum1, q[u]);	
			UMODIFJOS1(unu, d, d1, A2, doi, trei, imp, mul, Q, F2, div1, sum1, FACT, FACTLEG, PRIMP, p);
		}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODIFSUM2(char *Q, long PP2, int W, FILE *f1, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		
		if(mpz_divisible_ui_p(unu, A2)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMPURG1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);				
			UMODIFJOS1(unu, d, d1, A2, doi, trei, imp, mul, Q, F2, div1, sum1, FACT, FACTLEG, PRIMP, p);
		}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODIFSUM3(char *Q, long PP2, int W, FILE *f1, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		
		if(mpz_divisible_ui_p(unu, A2)) {		
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);				
			UMODIFJOS1(unu, d, d1, A2, doi, trei, imp, mul, Q, F2, div1, sum1, FACT, FACTLEG, PRIMP, p);
		}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODIFSUM4(char *Q, long PP2, int W, FILE *f1, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);		
		
		if(mpz_divisible_ui_p(unu, A2)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV3(p, d, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);
			//UMODIFJOS1(unu, d, d1, A2, doi, trei, imp, mul, Q, F2, div1, sum1, FACT, FACTLEG, PRIMP, p);
			UMODIFJOS2(unu, d, d1, A2, doi, trei, imp, mul, Q, F2, div1, sum1, mem, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p);
		}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODIFSUM5(char *Q, long PP2, int W, FILE *f1, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, int g, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		
		if(mpz_divisible_ui_p(unu, A2)) {			
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);
			UMODIFJOS2(unu, d, d1, A2, doi, trei, imp, mul, Q, F2, div1, sum1, mem, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p);
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODIFSUM6(char *Q, long PP2, int W, int u, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A2, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		
		if(mpz_divisible_ui_p(unu, A2)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
			UJOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
		}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODIFSUM7(char *Q, long PP2, int W, int u, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A2, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		
		if(mpz_divisible_ui_p(unu, A2)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
			UJOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UJOSMODIFSUM8(char *Q, long PP2, int W, int u, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A2, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		
		if(mpz_divisible_ui_p(unu, A2)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
			UJOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
			}
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UMODIFSUM(char *Q, long PP2, int &W, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui sm, gmp_ui s1, gmp_ui s2, gmp_ui s3, gmp_ui A2, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, int &sus, int &dir, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, gmp_ui *q0) {//10 în minus: A3, u1, AK, ANK, NK, m și FD-urile.
	if(dir) {
		sus < 55? USUSMODIFSUM1(Q, PP2, W, f1, b, b1, unu, d, d1, doi, sm, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, trei, imp, mul, p, q0, 0)
		: sus < 73? USUSMODIFSUM2(Q, PP2, W, f1, b, b1, unu, d, d1, doi, sm, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, trei, imp, mul, p, q, 0) 
			: sus < 163? USUSMODIFSUM3(Q, PP2, W, f1, b, b1, unu, d, d1, doi, sm, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, trei, imp, mul, p, q, 0)
			: sus < 213? USUSMODIFSUM4(Q, PP2, W, f1, b, b1, unu, d, d1, doi, sm, A2, div1, sum1, mem, D, H, S, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, trei, imp, mul, p, q, 0) 
			: sus < 223? USUSMODIFSUM5(Q, PP2, W, f1, b, b1, C, C1, unu, d, d1, doi, sm, A2, div1, sum1, mem, D, E, H, S, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, trei, imp, mul, p, q, 0) 
				: sus < 243? USUSMODIFSUM6(Q, PP2, f1, b, b1, C, C1, unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, trei, imp, mul, p, q, 0) 
					: USUSMODIFSUM7(Q, PP2, f1, b, b1, C, C1, unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, trei, imp, mul, p, q, 0);
		} else {
		sus < 55? UJOSMODIFSUM1(Q, PP2, W, f1, 0, 0, b, b1, imp, mul, unu, d, d1, doi, trei, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, 0, p, q0) 
		: sus < 73? UJOSMODIFSUM2(Q, PP2, W, f1, 0, 0, b, b1, imp, mul, unu, d, d1, doi, trei, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, 0, p, q) 
			: sus < 163? UJOSMODIFSUM3(Q, PP2, W, f1, 0, 0, b, b1, imp, mul, unu, d, d1, doi, trei, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, 0, p, q)
			: sus < 213? UJOSMODIFSUM4(Q, PP2, W, f1, 0, 0, b, b1, imp, mul, unu, d, d1, doi, trei, A2, div1, sum1, mem, D, H, S, F2, FACT, FACTLEG, PRIMP,  SFACT, SFACTLEG, SPRIMP,0, p, q) 
			: sus < 223? UJOSMODIFSUM5(Q, PP2, W, f1, 0, 0, b, b1, C, C1, imp, mul, unu, d, d1, doi, trei, A2, div1, sum1, mem, D, E, H, S, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, 0, p, q) 
				: sus < 243? UJOSMODIFSUM6(Q, PP2, W, 0, f1, b, b1, C, C1, imp, mul, unu, d, d1, doi, trei, A2, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, q)
					: UJOSMODIFSUM7(Q, PP2, W, 0, f1, b, b1, C, C1, imp, mul, unu, d, d1, doi, trei, A2, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, q);
	}
}


//MODSPAR:
void UDOISPARJOS(mpz_t unu, mpz_t imp, mpz_t mul, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *sumdoi, int doi, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP) {
	DOIJOS(imp, mul, sumdoi, v, doi);
	for(v = 0; FACT[v]; v++)
		MODJOS0(unu, imp, mul, FACTLEG[v], PRIMP[v], 2, div1, sum1);
}


void UDOISPARJOSM(mpz_t unu, mpz_t imp, mpz_t mul, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t *sumdoi, int doi, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, int *FACTAUX, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP) {
	DOIJOS(imp, mul, sumdoi, v, doi);
	for(v = 0; FACT1[v]; v++)
		MODJOS0(unu, imp, mul, FACTLEG1[v], PRIMP1[v], 2, div1, sum1);
	for(v = 0; SFACT[v]; v++)
		MODJOSMARE(unu, imp, mul, SFACTLEG[v], SPRIMP[v], 0, div1, sum1, mem);
	for(v = 0; FACT[v]; v++)
		MODUMJOSM0(unu, imp, mul, FACTLEG[v], PRIMP[v], FACTAUX[v], 2, div, sum, div1, sum1, mem);
}


void UDOISPARJOSM0(mpz_t unu, mpz_t imp, mpz_t mul, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, int doi, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int *FACTAUX) {
	DOIJOS(imp, mul, sumdoi, v, doi);
	for(v = 0; FACT[v]; v++)
		MODUMJOSM0(unu, imp, mul, FACTLEG[v], PRIMP[v], FACTAUX[v], 2, div, sum, div1, sum1, mem);
}


void UDOISPARJOSMARE(mpz_t unu, mpz_t imp, mpz_t mul, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, int doi, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP) {
	DOIJOS(imp, mul, sumdoi, v, doi);
	for(v = 0; FACT[v]; v++)
		MODJOS0(unu, imp, mul, FACTLEG[v], PRIMP[v], 2, div1, sum1);
	for(v = 0; SFACT[v]; v++)
		MODJOSMARE(unu, imp, mul, SFACTLEG[v], SPRIMP[v], 0, div1, sum1, mem);
}


void UMICSEPSUS(mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t sum, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui *sumdoi, int v, int n, int doiul, int sep) {//n = 0.
	for(; n < sep; n++) {
		MICDOISUS(imp, mul, sumdoi, v, doiul);		
		mpz_mul_2exp(doi, unu, doiul);
		IMPMUL2(sum, d, imp, mul, doi, d1, Q, F2);		
		}
}


void USEPSUS(mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t sum, mpz_t imp, mpz_t mul, char *Q, FILE *F2, mpz_t *sumdoi, int v, int n, int doiul, int sep) {//n = 0.
	for(; n < sep; n++) {
		DOISUS(imp, mul, sumdoi, v, doiul);
		mpz_mul_2exp(doi, unu, doiul);
		IMPMUL2(sum, d, imp, mul, doi, d1, Q, F2);
		}
}


void USEPJOS(mpz_t unu, mpz_t d, mpz_t d1, int doiul, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, mpz_t *sumdoi, int v) {
	mpz_tdiv_q_2exp(doi, unu, doiul);
	DOIJOS(imp, mul, sumdoi, v, --doiul);
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);	
}


void UMODSPARSUS1(gmp_ui mul1, int f, int z, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui AG, mpz_t doi, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *sumdoi, int doi1, int v, int n, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, int doiul, int sep) {	
		DOISUS(imp, mul, sumdoi, v, doi1);

		for(z = 0; FACT[z]; z++) {
			if(mpz_divisible_ui_p(unu, FACT[z])) {
				MODSUS0(unu, imp, mul, FACTLEG[z], PRIMP[z], 2, div1, sum1);
				continue;
				}
				
			mul1 *= sum1[FACTLEG[z]][PRIMP[z]];
			}

		mpz_mul_ui(doi, unu, AG);
		IMPMUL3(mul1, sum, d, imp, mul, doi, d1, Q, F2);
		}
		
	USEPSUS(unu, d, d1, doi, sum, imp, mul, Q, F2, sumdoi, v, 0, doiul, sep);
}


void UMODSPARSUS10(gmp_ui mul1, int f, int z, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui AG, mpz_t doi, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, int doi1, int v, int n, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, int doiul, int sep) {	
		DOISUS(imp, mul, sumdoi, v, doi1);

		for(z = 0; FACT[z]; z++) {
			if(mpz_divisible_ui_p(unu, FACT[z])) {
				MODSUS0(unu, imp, mul, FACTLEG[z], PRIMP[z], 2, div1, sum1);
				continue;
				}

			mul1 *= sum1[FACTLEG[z]][PRIMP[z]];
			}
			
		for(z = 0; SFACT[z]; z++) {
			if(mpz_divisible_ui_p(unu, SFACT[z])) {
				MODSUSMARE(unu, imp, mul, SFACTLEG[z], SPRIMP[z], 0, div1, sum1, mem);
				continue;
				}

			mul1 *= sum1[SFACTLEG[z]][SPRIMP[z]];
			}

		mpz_mul_ui(doi, unu, AG);
		IMPMUL3(mul1, sum, d, imp, mul, doi, d1, Q, F2);
		}

	USEPSUS(unu, d, d1, doi, sum, imp, mul, Q, F2, sumdoi, v, 0, doiul, sep);
}


void UMODSPARSUS2(gmp_ui mul1, int f, int z, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui AG, mpz_t doi, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t *sumdoi, int doi1, int v, int n, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, int *FACTAUX, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p) {
	DOISUS(imp, mul, sumdoi, v, doi1);

	for(z = 0; FACT1[z]; z++) {
		if(mpz_divisible_ui_p(unu, FACT1[z])) {
			MODSUS0(unu, imp, mul, FACTLEG1[z], PRIMP1[z], 2, div1, sum1);
			continue;
			}
					
	 	mul1 *= sum1[FACTLEG1[z]][PRIMP1[z]];
		}

	for(z = 0; SFACT[z]; z++) {
		if(mpz_divisible_ui_p(unu, SFACT[z])) {
			MODSUSMARE(unu, imp, mul, SFACTLEG[z], SPRIMP[z], 0, div1, sum1, mem);
			continue;
			}
					
	 	mul1 *= sum1[SFACTLEG[z]][SPRIMP[z]];
		}

	for(z = 0; FACT[z]; z++) {
		if(mpz_divisible_ui_p(unu, FACT[z])) {
		  MODUMSUSM0(unu, imp, mul, FACTLEG[z], PRIMP[z], FACTAUX[z], 2, div, sum, div1, sum1, mem);
		  continue;
		  }
		  
		  mul1 *= sum1[FACTAUX[z]][PRIMP[z]];
		 }

		mpz_mul_ui(doi, unu, AG);
		IMPMUL3(mul1, summ, d, imp, mul, doi, d1, Q, F2);
	}
}


void UMODSPARSUS20(gmp_ui mul1, int f, int z, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui AG, mpz_t doi, char *Q, FILE *F2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, int doi1, int v, int n, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int *FACTAUX, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p) {	
		DOISUS(imp, mul, sumdoi, v, doi1);

		for(z = 0; FACT[z]; z++) {
			if(mpz_divisible_ui_p(unu, FACT[z])) {
			  MODUMSUSM0(unu, imp, mul, FACTLEG[z], PRIMP[z], FACTAUX[z], 2, div, sum, div1, sum1, mem);
			  continue;
			  	}
			  		  
		  mul1 *= sum1[FACTAUX[z]][PRIMP[z]];
		}

		mpz_mul_ui(doi, unu, AG);
		IMPMUL3(mul1, summ, d, imp, mul, doi, d1, Q, F2);
	}
}


void UMODSPARJOS1(mpz_t p, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui AG, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *sumdoi, int doi1, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP) {
	mpz_divexact_ui(doi, unu, AG);
	UDOISPARJOS(p, imp, mul, div1, sum1, sumdoi, doi1, v, FACT, FACTLEG, PRIMP);
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);	
}


void UMODSPARJOS2(mpz_t p, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui AG, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t *sumdoi, int doi1, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, int *FACTAUX, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP) {
	mpz_divexact_ui(doi, unu, AG);
	UDOISPARJOSM(p, imp, mul, div1, sum1, div, sum, mem, sumdoi, doi1, v, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACTAUX, SFACT, SFACTLEG, SPRIMP);
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);	
}


void UMODSPARJOS20(mpz_t p, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui AG, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, int doi1, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int *FACTAUX) {	
	mpz_divexact_ui(doi, unu, AG);
	UDOISPARJOSM0(p, imp, mul, div, sum, div1, sum1, mem, sumdoi, doi1, v, FACT, FACTLEG, PRIMP, FACTAUX);
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);	
}


void UMODSPARJOS10(mpz_t p, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui AG, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, int doi1, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP) {
	mpz_divexact_ui(doi, unu, AG);
	UDOISPARJOSMARE(p, imp, mul, div1, sum1, mem, sumdoi, doi1, v, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP);
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);
}


void USUSMODSPARUL(mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int doi2, int doi3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, int v, mpz_t *sumdoi, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, int doiul, int sep) {
	UMODSPARSUS20(1, k, 0, unu, d, d1, w1, doi, Q, F2, div, sum, div1, sum1, mem, sumdoi, doi1, v, 0, FACT, FACTLEG, PRIMP, FACTAUX, summ, imp, mul, p);//K-urile pure.
	UMODSPARSUS2(1, knk, 0, unu, d, d1, w2, doi, Q, F2, div1, sum1, div, sum, mem, sumdoi, doi2, v, 0, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX2, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);//Amestecatele.
	UMODSPARSUS10(1, nk, 0, unu, d, d1, w3, doi, Q, F2, div1, sum1, mem, sumdoi, doi3, v, 0, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP, summ, imp, mul, p, doiul, sep);//Non K.
}


void UJOSMODSPARUL(int W, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui m1, gmp_ui m2, gmp_ui m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int doi2, int doi3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t *sumdoi, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t p, gmp_ui A5, int doiul, int sep) {
	if(m1 && mpz_divisible_ui_p(p, m1)) {
		UMODSPARJOS20(p, unu, d, d1, w1, doi, trei, imp, mul, Q, F2, div, sum, div1, sum1, mem, sumdoi, doi1-1, v, FACT, FACTLEG, PRIMP, FACTAUX);	
	}	
	
	if(m2 && mpz_divisible_ui_p(p, m2)) {
		UMODSPARJOS2(p, unu, d, d1, w2, doi, trei, imp, mul, Q, F2, div1, sum1, div, sum, mem, sumdoi, doi2-1, v, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX2, SFACT2, SFACTLEG2, SPRIMP2);
	}	
	
	if(m3 && mpz_divisible_ui_p(p, m3)) {
		UMODSPARJOS10(p, unu, d, d1, w3, doi, trei, imp, mul, Q, F2, div1, sum1, mem, sumdoi, doi3-1, v, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP);
	}	
	
	if(A5 && mpz_divisible_ui_p(unu, A5)) {
		USEPJOS(unu, d, d1, doiul, doi, trei, imp, mul, Q, F2, sumdoi, v);
	}
}


void USUSMODSPAR1(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, mpz_t *sumdoi, int doi1, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, gmp_ui *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, v = mpz_scan1(unu, 0));
	SMV(p, d, b, b1, D, H, v, div1, sum1, q[v]);
	MODSPARSUS1(1, W, 0, unu, d, d1, AG, doi, Q, F2, div1, sum1, sumdoi, doi1, v, 0, FACT, FACTLEG, PRIMP, summ, imp, mul, p, doiul, sep);	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODSPAR2(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int doi1, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, v = mpz_scan1(unu, 0));
	NUMSUMPURG1(p, d, b, b1, D, H, v, div1, sum1, q[v], 0);
	MODSPARSUS1(1, W, 0, unu, d, d1, AG, doi, Q, F2, div1, sum1, q, doi1, v, 0, FACT, FACTLEG, PRIMP, summ, imp, mul, p, doiul, sep);	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODSPAR3(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int doi1, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, v = mpz_scan1(unu, 0));
	NUMSUMV1(p, d, b, b1, D, H, v, div1, sum1, q[v], 0);
	MODSPARSUS1(1, W, 0, unu, d, d1, AG, doi, Q, F2, div1, sum1, q, doi1, v, 0, FACT, FACTLEG, PRIMP, summ, imp, mul, p, doiul, sep);	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODSPAR4(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, int doi1, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, v = mpz_scan1(unu, 0));
	NUMSUMV3(p, d, b, b1, D, H, S, v, div1, sum1, mem, q[v], 0);
	MODSPARSUS10(1, W, 0, unu, d, d1, AG, doi, Q, F2, div1, sum1, mem, q, doi1, v, 0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, summ, imp, mul, p, doiul, sep);	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODSPAR5(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, int doi1, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, v = mpz_scan1(unu, 0));
	NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, v, div1, sum1, mem, q[v], 0);
	MODSPARSUS10(1, W, 0, unu, d, d1, AG, doi, Q, F2, div1, sum1, mem, q, doi1, v, 0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, summ, imp, mul, p, doiul, sep);	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODSPAR6(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int doi2, int doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, v = mpz_scan1(unu, 0));
		SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, v, div1, sum1, div, sum, mem, q[v], 0);
		USUSMODSPARUL(unu, d, d1, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, v, q, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p, doiul, sep);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODSPAR7(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int doi2, int doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, v = mpz_scan1(unu, 0));
		SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, v, div1, sum1, div, sum, mem, q[v]);
    		USUSMODSPARUL(unu, d, d1, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, v, q, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p, doiul, sep);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void USUSMODSPAR8(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int doi2, int doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, int S, FILE *F2, int *mem, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, v = mpz_scan1(unu, 0));
		SUM7(p, d, b, b1, D, H, K, S, v, div1, sum1, div, sum, mem, q[v], 0);
		USUSMODSPARUL(unu, d, d1, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, v, q, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p, doiul, sep);		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODSPAR1(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A5, gmp_ui AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, mpz_t *sumdoi, int doi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, gmp_ui *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	
	if(mpz_divisible_ui_p(unu, AG)) {		
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		SMV(p, d, b, b1, D, H, u, div1, sum1, q[u]);		
		MODSPARJOS1(p, unu, d, d1, AG, doi, trei, imp, mul, Q, F2, div1, sum1, sumdoi, doi1-1, u, FACT, FACTLEG, PRIMP);
	}
	
	if(mpz_divisible_ui_p(unu, A5)) {
		if(!u)
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SMV(p, d, b, b1, D, H, u, div1, sum1, q[u]);
		}
		USEPJOS(unu, d, d1, doiul, doi, trei, imp, mul, Q, F2, sumdoi, u);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSMODSPAR2(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A5, gmp_ui AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int doi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
		
	if(mpz_divisible_ui_p(unu, AG)) {		
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		NUMSUMPURG1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
		MODSPARJOS1(p, unu, d, d1, AG, doi, trei, imp, mul, Q, F2, div1, sum1, q, doi1-1, u, FACT, FACTLEG, PRIMP);
	}
		if(mpz_divisible_ui_p(unu, A5)) {
			if(!u)
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMSUMPURG1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
			}
			USEPJOS(unu, d, d1, doiul, doi, trei, imp, mul, Q, F2, q, u);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSMODSPAR3(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A5, gmp_ui AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int doi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	
	if(mpz_divisible_ui_p(unu, AG)) {		
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);			
		MODSPARJOS1(p, unu, d, d1, AG, doi, trei, imp, mul, Q, F2, div1, sum1, q, doi1-1, u, FACT, FACTLEG, PRIMP);
	}
	
		if(mpz_divisible_ui_p(unu, A5)) {
			if(!u)
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
			}
			USEPJOS(unu, d, d1, doiul, doi, trei, imp, mul, Q, F2, q, u);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSMODSPAR4(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A5, gmp_ui AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, int doi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
		
	if(mpz_divisible_ui_p(unu, AG)) {		
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		NUMSUMV3(p, d, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);			
		MODSPARJOS10(p, unu, d, d1, AG, doi, trei, imp, mul, Q, F2, div1, sum1, mem, q, doi1-1, u, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP);
	}	
		if(mpz_divisible_ui_p(unu, A5)) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMSUMV3(p, d, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);
			}
			
			USEPJOS(unu, d, d1, doiul, doi, trei, imp, mul, Q, F2, q, u);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSMODSPAR5(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A5, gmp_ui AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, int doi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);	
	
	if(mpz_divisible_ui_p(unu, AG)) {		
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);			
		MODSPARJOS10(p, unu, d, d1, AG, doi, trei, imp, mul, Q, F2, div1, sum1, mem, q, doi1-1, u, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP);
	}
	
	if(mpz_divisible_ui_p(unu, A5)) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);
		}
		USEPJOS(unu, d, d1, doiul, doi, trei, imp, mul, Q, F2, q, u);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSMODSPAR6(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A5, gmp_ui AG, gmp_ui m1, gmp_ui m2, gmp_ui m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int doi2, int doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t p, mpz_t *q, int doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);	
		
		if(mpz_divisible_ui_p(unu, AG)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
			UJOSMODSPARUL(0, imp, mul, unu, d, d1, doi, trei, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, u, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, A5, doiul, 0);
		}

		if(mpz_divisible_ui_p(unu, A5)) {		
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
			}
			USEPJOS(unu, d, d1, doiul, doi, trei, imp, mul, Q, F2, q, u);
			}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSMODSPAR7(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A5, gmp_ui AG, gmp_ui m1, gmp_ui m2, gmp_ui m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int doi2, int doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t p, mpz_t *q, int doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);		
		
		if(mpz_divisible_ui_p(unu, AG)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
			UJOSMODSPARUL(0, imp, mul, unu, d, d1, doi, trei, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, u, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, A5, doiul, sep);
		}
		
		if(mpz_divisible_ui_p(unu, A5)) {		
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
			}
			USEPJOS(unu, d, d1, doiul, doi, trei, imp, mul, Q, F2, q, u);
		}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSMODSPAR8(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A5, gmp_ui AG, gmp_ui m1, gmp_ui m2, gmp_ui m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int doi2, int doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t p, mpz_t *q, int doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		
		if(mpz_divisible_ui_p(unu, AG)) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
			UJOSMODSPARUL(0, imp, mul, unu, d, d1, doi, trei, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, u, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, A5, doiul, 0);//Unde sep poate fi 0.
		}

		if(mpz_divisible_ui_p(unu, A5)) {		
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				}

			USEPJOS(unu, d, d1, doiul, doi, trei, imp, mul, Q, F2, q, u);				
		}
		
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UMODSPARSUM(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A5, gmp_ui AG, gmp_ui m1, gmp_ui m2, gmp_ui m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int doi2, int doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int doi0, int doiul, int *mem, int &sus, int &dir, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, gmp_ui *q0, int sep) {//sumdoi e q.
	if(dir) {
		sus < 55? USUSMODSPAR1(Q, PP2, f1, W, b, b1, unu, d, d1, doi, AG, div1, sum1, D, H, F2, q, doi0, 0, FACT, FACTLEG, PRIMP, trei, imp, mul, p, q0, doiul, sep) 
		: sus < 73? USUSMODSPAR2(Q, PP2, f1, W, b, b1, unu, d, d1, doi, AG, div1, sum1, D, H, F2, doi0, 0, FACT, FACTLEG, PRIMP, trei, imp, mul, p, q, doiul, sep) 
			: sus < 163? USUSMODSPAR3(Q, PP2, f1, W, b, b1, unu, d, d1, doi, AG, div1, sum1, D, H, F2, doi0, 0, FACT, FACTLEG, PRIMP, trei, imp, mul, p, q, doiul, sep)
			: sus < 213? USUSMODSPAR4(Q, PP2, f1, W, b, b1, unu, d, d1, doi, AG, div1, sum1, mem, D, H, S, F2, doi0, 0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, trei, imp, mul, p, q, doiul, sep) 
			: sus < 223? USUSMODSPAR5(Q, PP2, f1, W, b, b1, C, C1, unu, d, d1, doi, AG, div1, sum1, mem, D, E, H, S, F2, doi0, 0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, trei, imp, mul, p, q, doiul, sep) 
				: sus < 243? USUSMODSPAR6(Q, PP2, f1, b, b1, C, C1, unu, d, d1, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, 0, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, trei, imp, mul, p, q, doiul, sep)
					: SUSMODSPAR7(Q, PP2, f1, b, b1, C, C1, unu, d, d1, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, 0, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, trei, imp, mul, p, q, doiul, sep);
		} else {
		sus < 55? UJOSMODSPAR1(Q, PP2, f1, W, 0, 0, b, b1, imp, mul, unu, d, d1, doi, trei, A5, AG, div1, sum1, D, H, F2, q, doi0, FACT, FACTLEG, PRIMP, p, q0, doiul, sep) 
		: sus < 73? UJOSMODSPAR2(Q, PP2, f1, W, 0, 0, b, b1, imp, mul, unu, d, d1, doi, trei, A5, AG, div1, sum1, D, H, F2, doi0, FACT, FACTLEG, PRIMP, p, q, doiul, sep) 
			: sus < 163? UJOSMODSPAR3(Q, PP2, f1, W, 0, 0, b, b1, imp, mul, unu, d, d1, doi, trei, A5, AG, div1, sum1, D, H, F2, doi0, FACT, FACTLEG, PRIMP, p, q, doiul, sep)
			: sus < 213? UJOSMODSPAR4(Q, PP2, f1, W, 0, 0, b, b1, imp, mul, unu, d, d1, doi, trei, A5, AG, div1, sum1, mem, D, H, S, F2, doi0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p, q, doiul, sep) 
			: sus < 223? UJOSMODSPAR5(Q, PP2, f1, W, 0, 0, b, b1, C, C1, imp, mul, unu, d, d1, doi, trei, A5, AG, div1, sum1, mem, D, E, H, S, F2, doi0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p, q, doiul, sep) 
				: sus < 243? UJOSMODSPAR6(Q, PP2, f1, W, 0, b, b1, C, C1, imp, mul, unu, d, d1, doi, trei, A5, AG, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, q, doiul, sep)
					: JOSMODSPAR7(Q, PP2, f1, W, 0, b, b1, C, C1, imp, mul, unu, d, d1, doi, trei, A5, AG, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, q, doiul, sep);
		}
}


//MODPRIMSUM:
void UMODPRIMSUMSUS(int n, int z, gmp_ui nr1, gmp_ui nm1, gmp_ui nr, gmp_ui nm, int f, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p) {
	 {
		nr = nr1;
		nm = nm1;
		
		for(z = 0; FACT[z]; z++)
		mpz_divisible_ui_p(p, FACT[z])?
			MODPSUS0(p, FACTLEG[z], PRIMP[z], div1, sum1, nr, nm, 2, 0)
				: MODPSUS1(FACTLEG[z], PRIMP[z], div1, sum1, nr, nm);
				
		CMMS0(unu, doi, A2[n], nr, nm, CMMDC(nr, nm, nr%nm), Q, F2);
	}
}


void UMODPRIMSUMSUS2(int n, int z, int f, gmp_ui nr1, gmp_ui nm1, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t nr2, mpz_t nm2, mpz_t p) {
	 {
		mpz_set_ui(nm2, nm1);
		mpz_set_ui(nr2, nr1);
		
		for(z = 0; FACT[z]; z++)
			mpz_divisible_ui_p(p, FACT[z])?
				MODPSUSM2(p, FACTLEG[z], PRIMP[z], 2, 0, div1, sum1, nr2, nm2)
					: MODPSUSM1(FACTLEG[z], PRIMP[z], div1, sum1, nr2, nm2);
	
		CMMS(nr2, nm2, unu, doi, A2[n], Q, F2);
	}
}


void UMODPRIMSUMSUSUL(int n, int z, int f, gmp_ui nr1, gmp_ui nm1, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t nr2, mpz_t nm2, mpz_t p) {//gmp_ui i;
	 {
		mpz_set_ui(nm2, nm1);
		mpz_set_ui(nr2, nr1);
		
		for(z = 0; FACT[z]; z++)
			mpz_divisible_ui_p(p, FACT[z])?
				MODPSUSM2(p, FACTLEG[z], PRIMP[z], 2, 0, div1, sum1, nr2, nm2)
					: MODPSUSM1(FACTLEG[z], PRIMP[z], div1, sum1, nr2, nm2);
		
		for(z = 0; SFACT[z]; z++)
			mpz_divisible_ui_p(p, SFACT[z])?
				MODPSUSMARE(p, SFACTLEG[z], SPRIMP[z], 0, 0, div1, sum1, mem, nr2, nm2)
					: MODPSUSM1(SFACTLEG[z], SPRIMP[z], div1, sum1, nr2, nm2);
		//mpz_cmp_ui(nr2, i = mpz_get_ui(nr2))?
		CMMS(nr2, nm2, unu, doi, A2[n], Q, F2);
		// : CMMS0(unu, doi, A2[n], i, mpz_get_ui(nm2), 0, Q, F2);
	}
}


void UMODPRIMSUMSUSM(int n, int z, int knk, mpz_t unu, mpz_t doi, mpz_t d1, gmp_ui *m2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, int *FACTAUX, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t nr2, mpz_t nm2, mpz_t p) {
	for(n = 0; n < knk; n++) {
		mpz_set(nm2, d1);
		mpz_set(nr2, doi);
		
		for(z = 0; FACT1[z]; z++)
		mpz_divisible_ui_p(p, FACT1[z])?
			MODPSUSM2(p, FACTLEG1[z], PRIMP1[z], 2, 0, div1, sum1, nr2, nm2)
				: MODPSUSM1(FACTLEG1[z], PRIMP1[z], div1, sum1, nr2, nm2);
	
		for(z = 0; SFACT[z]; z++)
			mpz_divisible_ui_p(p, SFACT[z])?
				MODPSUSMARE(p, SFACTLEG[z], SPRIMP[z], 0, 0, div1, sum1, mem, nr2, nm2)
					: MODPSUSM1(SFACTLEG[z], SPRIMP[z], div1, sum1, nr2, nm2);
	
		for(z = 0; FACT[z]; z++)
			mpz_divisible_ui_p(p, FACT[z])?
				MODPSUSM0(p, FACTLEG[z], PRIMP[z], FACTAUX[z], 2, 0, div, sum, div1, sum1, mem, doi, nr2, nm2)
					: MODPSUSM1(FACTLEG[z], PRIMP[z], div1, sum1, nr2, nm2);
		
		CMMS(nr2, nm2, unu, doi, m2[n], Q, F2);
	}
}


void UMODPRIMSUMSUSM0(int n, int z, int k, mpz_t unu, mpz_t doi, mpz_t d1, gmp_ui *m1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int *FACTAUX, mpz_t nr2, mpz_t nm2, mpz_t p) {
	for(n = 0; n < k; n++) {
		mpz_set(nm2, d1);
		mpz_set(nr2, doi);

		for(z = 0; FACT[z]; z++)
			mpz_divisible_ui_p(p, FACT[z])?
				MODPSUSM0(p, FACTLEG[z], PRIMP[z], FACTAUX[z], 2, 0, div, sum, div1, sum1, mem, doi, nr2, nm2)
					: MODPSUSM1(FACTLEG[z], PRIMP[z], div1, sum1, nr2, nm2);
		
		CMMS(nr2, nm2, unu, doi, m1[n], Q, F2);
	}
}


void UMODPRIMSUMJOS(gmp_ui nr, gmp_ui nm, mpz_t unu, mpz_t doi, gmp_ui A1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int i, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p) {
	for(; FACT[i]; i++)
		MODPJOS0(p, FACTLEG[i], PRIMP[i], 2, div1, sum1, nr, nm);
	
	CMMJ0(unu, doi, A1, nr, nm, CMMDC(nr, nm, nr%nm), Q, F2);
}


void UMODPRIMSUMJOSUL(mpz_t unu, mpz_t doi, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, gmp_ui A1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int i, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t p) {
	mpz_set_ui(nr2, nr1);
	mpz_set_ui(nm2, nm1);
	for(; FACT[i]; i++)
		MODPJOSM1(p, FACTLEG[i], PRIMP[i], 2, div1, sum1, nr2, nm2);	
	for(i = 0; SFACT[i]; i++)
		MODPJOSMARE(p, SFACTLEG[i], SPRIMP[i], 0, div1, sum1, mem, nr2, nm2);
	
	CMMJ(nr2, nm2, unu, doi, A1, Q, F2);
}


void UMODPRIMSUMJOSM(mpz_t unu, mpz_t doi, mpz_t d1, gmp_ui A1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int i, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, int *FACTAUX, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t nr2, mpz_t nm2, mpz_t p) {
	mpz_set(nr2, doi);
	mpz_set(nm2, d1);
	for(; FACT1[i]; i++)
		MODPJOSM1(p, FACTLEG1[i], PRIMP1[i], 2, div1, sum1, nr2, nm2);	
	for(i = 0; SFACT[i]; i++)
		MODPJOSMARE(p, SFACTLEG[i], SPRIMP[i], 0, div1, sum1, mem, nr2, nm2);
	for(i = 0; FACT[i]; i++)
		MODPJOSM0(p, doi, FACTLEG[i], PRIMP[i], FACTAUX[i], 2, div, sum, div1, sum1, mem, nr2, nm2);
	
	CMMJ(nr2, nm2, unu, doi, A1, Q, F2);
}


void UMODPRIMSUMJOSM0(mpz_t unu, mpz_t doi, mpz_t d1, gmp_ui A1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int i, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int *FACTAUX, mpz_t nr2, mpz_t nm2, mpz_t p) {
	mpz_set(nr2, doi);
	mpz_set(nm2, d1);
	for(; FACT[i]; i++)
		MODPJOSM0(p, doi, FACTLEG[i], PRIMP[i], FACTAUX[i], 2, div, sum, div1, sum1, mem, nr2, nm2);
	
	CMMJ(nr2, nm2, unu, doi, A1, Q, F2);
}


void SUSMODPRIMSUMUL(mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, mpz_t p) {
	VALIDN(unu, d1, d, doi);
	nr1 = mpz_get_ui(doi), nm1 = mpz_get_ui(d1);
	MODPRIMSUMSUSM0(0, 0, k, unu, doi, d1, m1, div, sum, div1, sum1, mem, Q, F2, FACT, FACTLEG, PRIMP, FACTAUX, nr2, nm2, p);
	MODPRIMSUMSUSUL(0, 0, nk, nr1, nm1, unu, doi, m3, div1, sum1, mem, Q, F2, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p);
	MODPRIMSUMSUSM(0, 0, knk, unu, doi, d1, m2, div, sum, div1, sum1, mem, Q, F2, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX2, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p);
}


void JOSMODPRIMSUMUL(int W, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, gmp_ui nr1, gmp_ui nm1, mpz_t p) {
	VALIDN(unu, d1, d, doi);
	nr1 = mpz_get_ui(doi), nm1 = mpz_get_ui(d1);

	
	if(m1 && mpz_divisible_ui_p(unu, m1)) {
		MODPRIMSUMJOSM0(unu, doi, d1, m1, div, sum, div1, sum1, mem, 0, Q, F2, FACT, FACTLEG, PRIMP, FACTAUX, nr2, nm2, p);
	}
	
	
	if(m2 && mpz_divisible_ui_p(unu, m2)) {
		MODPRIMSUMJOSM(unu, doi, d1, m2, div, sum, div1, sum1, mem, 0, Q, F2, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX2, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p);		
	}	
	
	
	if(m3 && mpz_divisible_ui_p(unu, m3)) {
		MODPRIMSUMJOSUL(unu, doi, nr1, nm1, nr2, nm2, m3, div1, sum1, mem, 0, Q, F2, FACT1, FACTLEG1, PRIMP, SFACT, SFACTLEG, SPRIMP, p);
	}
}


void SUSMODPRIMSUM1(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui nr, gmp_ui nm, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, gmp_ui *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
	VALIDN(unu, d1, d, doi);
	MODPRIMSUMSUS(0, 0, mpz_get_ui(doi), mpz_get_ui(d1), nr, nm, W, unu, doi, A2, div1, sum1, Q, F2, FACT, FACTLEG, PRIMP, p);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMSUM2(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t nr2, mpz_t nm2, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui nr, gmp_ui nm, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
	VALIDN(unu, d1, d, doi);
	MODPRIMSUMSUS2(0, 0, W, mpz_get_ui(doi), mpz_get_ui(d1), unu, doi, A2, div1, sum1, Q, F2, FACT, FACTLEG, PRIMP, nr2, nm2, p);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMSUM3(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t nr2, mpz_t nm2, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui nr, gmp_ui nm, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
	VALIDN(unu, d1, d, doi);
	//MODPRIMSUMSUS(0, 0, mpz_get_ui(doi), mpz_get_ui(d1), nr, nm, W, unu, doi, d, A2, div1, sum1, Q, F2, FACT, FACTLEG, PRIMP, p);
	MODPRIMSUMSUS2(0, 0, W, mpz_get_ui(doi), mpz_get_ui(d1), unu, doi, A2, div1, sum1, Q, F2, FACT, FACTLEG, PRIMP, nr2, nm2, p);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}

void SUSMODPRIMSUM4(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t nr2, mpz_t nm2,mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, gmp_ui nr, gmp_ui nm, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	NUMSUMV3(p, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
	VALIDN(unu, d1, d, doi);
	MODPRIMSUMSUSUL(0, 0, W, mpz_get_ui(doi), mpz_get_ui(d1), unu, doi, A2, div1, sum1, mem, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMSUM5(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t nr2, mpz_t nm2, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, gmp_ui nr, gmp_ui nm, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);
	VALIDN(unu, d1, d, doi);
	MODPRIMSUMSUSUL(0, 0, W, mpz_get_ui(doi), mpz_get_ui(d1), unu, doi, A2, div1, sum1, mem, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMSUM6(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui nr, gmp_ui nm, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q, int g) {
	//PURGANTE(C, C1, E);
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
		SUSMODPRIMSUMUL(unu, d, d1, doi, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, nr, nm, 0, 0, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMSUM7(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui nr, gmp_ui nm, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q, int g) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g]);
		SUSMODPRIMSUMUL(unu, d, d1, doi, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, nr, nm, 0, 0, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMSUM8(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, int S, FILE *F2, int *mem, gmp_ui nr, gmp_ui nm, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
	SUSMODPRIMSUMUL(unu, d, d1, doi, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, nr, nm, 0, 0, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIMSUM1(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui nr1, gmp_ui nm1, mpz_t p, gmp_ui *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;

	
	if(mpz_divisible_ui_p(unu, A2)) {

			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SMV(p, d, b, b1, D, H, u, div1, sum1, q[u]);
			VALIDN(unu, d1, d, doi);
			nr1 = mpz_get_ui(doi), nm1 = mpz_get_ui(d1);
		
					
		MODPRIMSUMJOS(nr1, nm1, unu, doi, A2, div1, sum1, 0, Q, F2, FACT, FACTLEG, PRIMP, p);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIMSUM2(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui nr1, gmp_ui nm1, mpz_t p, mpz_t *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;

	
	if(mpz_divisible_ui_p(unu, A2)) {

			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMPURG1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);	
			VALIDN(unu, d1, d, doi);
			nr1 = mpz_get_ui(doi), nm1 = mpz_get_ui(d1);
			}

		MODPRIMSUMJOS(nr1, nm1, unu, doi, A2, div1, sum1, 0, Q, F2, FACT, FACTLEG, PRIMP, p);
	

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIMSUM3(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui nr1, gmp_ui nm1, mpz_t p, mpz_t *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;

	
	if(mpz_divisible_ui_p(unu, A2)) {
	
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);	
			VALIDN(unu, d1, d, doi);
			nr1 = mpz_get_ui(doi), nm1 = mpz_get_ui(d1);
			}

		MODPRIMSUMJOS(nr1, nm1, unu, doi, A2, div1, sum1, 0, Q, F2, FACT, FACTLEG, PRIMP, p);
	

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIMSUM4(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t nm2, mpz_t nr2, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui nr1, gmp_ui nm1, mpz_t p, mpz_t *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;

	
	if(mpz_divisible_ui_p(unu, A2)) {
		
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV3(p, d, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);
			VALIDN(unu, d1, d, doi);
			nr1 = mpz_get_ui(doi), nm1 = mpz_get_ui(d1);
			
		
		MODPRIMSUMJOSUL(unu, doi, nr1, nm1, nr2, nm2, A2, div1, sum1, mem, 0, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIMSUM5(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t nm2, mpz_t nr2, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui nr1, gmp_ui nm1, mpz_t p, mpz_t *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;

	
	if(mpz_divisible_ui_p(unu, A2)) {
		
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);	
			VALIDN(unu, d1, d, doi);
			nr1 = mpz_get_ui(doi), nm1 = mpz_get_ui(d1);
			

			MODPRIMSUMJOSUL(unu, doi, nr1, nm1, nr2, nm2, A2, div1, sum1, mem, 0, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIMSUM6(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1,mpz_t doi, gmp_ui A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;
		while(1) {
			if(!u)
				break;
			if(mpz_divisible_ui_p(unu, A2)) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);			
				JOSMODPRIMSUMUL(W, unu, d, d1, doi, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, 0, 0, p);
				break;
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODPRIMSUM7(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;
		while(1) {
			if(!u)
				break;
			if(mpz_divisible_ui_p(unu, A2)) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				JOSMODPRIMSUMUL(W, unu, d, d1, doi, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, 0, 0, p);
				break;
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}	
}


void JOSMODPRIMSUM8(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;
		while(1) {
			if(!u)
				break;
			if(mpz_divisible_ui_p(unu, A2)) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				JOSMODPRIMSUMUL(W, unu, d, d1, doi, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, 0, 0, p);
				break;
				}
			}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}	
}


void UMODPRIMSUM(char *Q, long PP2, FILE *f1, int &W, int &f, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui nr, gmp_ui nm, int &sus, int &dir, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q, gmp_ui *q0) {
	if(dir) {
		sus < 55? SUSMODPRIMSUM1(Q, PP2, f1, W, b, b1, unu, d, d1, doi, A2, div1, sum1, D, H, F2, nr, nm, FACT, FACTLEG, PRIMP, p, q0, 0)
		: sus < 73? SUSMODPRIMSUM2(Q, PP2, f1, W, b, b1, unu, d, d1, nr2, nm2, doi, A2, div1, sum1, D, H, F2, nr, nm, FACT, FACTLEG, PRIMP, p, q, 0)
			: sus < 163? SUSMODPRIMSUM3(Q, PP2, f1, W, b, b1, unu, d, d1, nr2, nm2, doi, A2, div1, sum1, D, H, F2, nr, nm, FACT, FACTLEG, PRIMP, p, q, 0)
			: sus < 213? SUSMODPRIMSUM4(Q, PP2, f1, W, b, b1, unu, d, d1, nr2, nm2, doi, A2, div1, sum1, mem, D, H, S, F2, nr, nm, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p, q, 0)
			: sus < 223? SUSMODPRIMSUM5(Q, PP2, f1, W, b, b1, C, C1, unu, d, d1, nr2, nm2, doi, A2, div1, sum1, mem, D, E, H, S, F2, nr, nm, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p, q, 0)
				: sus < 243? SUSMODPRIMSUM6(Q, PP2, f1, b, b1, C, C1, unu, d, d1, doi, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, nr, nm, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p, q, 0) 
					: SUSMODPRIMSUM7(Q, PP2, f1, b, b1, C, C1, unu, d, d1, doi, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, nr, nm, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p, q, 0);
		} else {
		sus < 55? JOSMODPRIMSUM1(Q, PP2, f1, W, f, u, b, b1, unu, d, d1, doi, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, 0, 0, p, q0)
		: sus < 73? JOSMODPRIMSUM2(Q, PP2, f1, W, f, u, b, b1, unu, d, d1, doi, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, 0, 0, p, q)
			: sus < 163? JOSMODPRIMSUM3(Q, PP2, f1, W, f, u, b, b1, unu, d, d1, doi, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, 0, 0, p, q)
			: sus < 213? JOSMODPRIMSUM4(Q, PP2, f1, W, f, u, b, b1, unu, d, d1, nm2, nr2, doi, A2, div1, sum1, mem, D, H, S, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, 0, 0, p, q)
			: sus < 223? JOSMODPRIMSUM5(Q, PP2, f1, W, f, u, b, b1, C, C1, unu, d, d1, nm2, nr2, doi, A2, div1, sum1, mem, D, E, H, S, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, 0, 0, p, q)
				: sus < 243? JOSMODPRIMSUM6(Q, PP2, f1, W, 0, b, b1, C, C1, unu, d, d1, doi, A2, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p, q)
					: JOSMODPRIMSUM7(Q, PP2, f1, W, 0, b, b1, C, C1, unu, d, d1, doi, A2, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p, q);
	}
}


//Cum facem la doiari?

//MODPARSUM:
void UDOIMODPJOS(mpz_t unu, gmp_ui j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi1, int doi, gmp_ui &nr, gmp_ui &nm, gmp_ui *FACT, int *FACTLEG, int *PRIMP) {//doi - 1.
MODPDOIJOS(doi, j, nr, nm, sumdoi1);
	for(j = 0; FACT[j]; j++)
		MODPJOS0(unu, FACTLEG[j], PRIMP[j], 2, div1, sum1, nr, nm);
}


void UDOIMODPJOSUL(mpz_t unu, mpz_t d1,gmp_ui j1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi1, int doi, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui *FACT, int *FACTLEG, int *PRIMP) {
MODPDOIJOSUL(doi, j1, nr, nm, nr2, nm2, sumdoi1);
for(; FACT[j1]; j1++)
	MODPJOSM1(unu, FACTLEG[j1], PRIMP[j1], 2, div1, sum1, nr2, nm2);
}


void UDOIMODPJOSM(mpz_t unu, mpz_t doi, gmp_ui j1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sumdoi1, mpz_t sumdoi, int doi1, mpz_t nr2, mpz_t nm2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, int *FACTAUX, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP) {
MODPDOIJOSM(doi1, doi, sumdoi, sumdoi1, nr2, nm2);
for(; FACT1[j1]; j1++)
	MODPJOSM1(unu, FACTLEG1[j1], PRIMP1[j1], 2, div1, sum1, nr2, nm2);
for(j1 = 0; SFACT[j1]; j1++)
	MODPJOSMARE(unu, SFACTLEG[j1], SPRIMP[j1], 0, div1, sum1, mem, nr2, nm2);
for(j1 = 0; FACT[j1]; j1++)
	MODPJOSM0(unu, doi, FACTLEG[j1], PRIMP[j1], FACTAUX[j1], 2, div, sum, div1, sum1, mem, nr2, nm2);
}


void UDOIMODPJOSM0(mpz_t unu, mpz_t doi, gmp_ui j1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sumdoi1, mpz_t sumdoi, int doi1, mpz_t nr2, mpz_t nm2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int *FACTAUX) {
MODPDOIJOSM(doi1, doi, sumdoi, sumdoi1, nr2, nm2);
for(j1 = 0; FACT[j1]; j1++)
	MODPJOSM0(unu, doi, FACTLEG[j1], PRIMP[j1], FACTAUX[j1], 2, div, sum, div1, sum1, mem, nr2, nm2);
}


void UDOIMODPJOSM1(mpz_t unu, mpz_t doi, gmp_ui j1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sumdoi1, mpz_t sumdoi, int doi1, mpz_t nr2, mpz_t nm2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP) {
MODPDOIJOSM(doi1, doi, sumdoi, sumdoi1, nr2, nm2);
for(; FACT[j1]; j1++)
	MODPJOSM1(unu, FACTLEG[j1], PRIMP[j1], 2, div1, sum1, nr2, nm2);
for(j1 = 0; SFACT[j1]; j1++)
	MODPJOSMARE(unu, SFACTLEG[j1], SPRIMP[j1], 0, div1, sum1, mem, nr2, nm2);
}


void UDOIMODPJOSM2(mpz_t unu, mpz_t doi, gmp_ui j1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi1, mpz_t sumdoi, int doi1, mpz_t nr2, mpz_t nm2, gmp_ui *FACT, int *FACTLEG, int *PRIMP) {
MODPDOIJOSM(doi1, doi, sumdoi, sumdoi1, nr2, nm2);
for(; FACT[j1]; j1++)
	MODPJOSM1(unu, FACTLEG[j1], PRIMP[j1], 2, div1, sum1, nr2, nm2);
}


void USEPSUMSUS(mpz_t unu, mpz_t doi, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, char *Q, FILE *F2, gmp_ui *sumdoi1, int j, int n, int doiul, int sep) {//n = 0.
	for(; n < sep; n++) {
		MODPDOISUS(doiul[n], j, nr = nr1, nm = nm1, sumdoi1);
		CMM2S0(unu, doi, doiul[n], nr, nm, CMMDC(nr, nm, nr%nm), Q, F2);
	}
}


void USEPSUMSUS1(mpz_t unu, mpz_t doi, mpz_t nr2, mpz_t nm2, gmp_ui nr1, gmp_ui nm1, char *Q, FILE *F2, gmp_ui *sumdoi1, int j, int n, int doiul, int sep) {//n = 0.
	for(; n < sep; n++) {		
		mpz_set_ui(nr2, nr1);
		mpz_set_ui(nm2, nm1);
		MODPDOISUSUL(doiul[n], j, nr1, nm1, nr2, nm2, sumdoi1);		
		CMM2S(nr2, nm2, unu, doi, doiul[n], Q, F2);
	}
}


void USEPSUMSUS2(mpz_t unu, mpz_t doi, mpz_t nr2, mpz_t nm2, gmp_ui nr1, gmp_ui nm1, char *Q, FILE *F2, mpz_t *sumdoi, gmp_ui *sumdoi1, int j, int n, int doiul, int sep) {//n = 0.
	for(; n < sep; n++) {	
		mpz_set_ui(nr2, nr1);
		mpz_set_ui(nm2, nm1);		
		MODPDOISUSM(doiul[n], doi, j, sumdoi, sumdoi1, nr2, nm2);
		CMM2S(nr2, nm2, unu, doi, doiul[n], Q, F2);
	}
}


void USEPSUMSUS3(mpz_t unu, mpz_t doi, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, char *Q, FILE *F2, mpz_t *sumdoi, gmp_ui *sumdoi1, int doiul, int j, int n, int sep) {//n = 0.
	for(; n < sep; n++) {
		mpz_set_ui(nr2, nr1);
		mpz_set_ui(nm2, nm1);
		MODPDOISUSM(doiul[n], doi, j, sumdoi, sumdoi1, nr2, nm2);		
		CMM2S(nr2, nm2, unu, doi, doiul[n], Q, F2);
	}
}


void USEPSUMJOS(int doiul, mpz_t unu, mpz_t doi, gmp_ui nr, gmp_ui nm, gmp_ui j2, gmp_ui *sumdoi1, char *Q, FILE *F2) {
	MODPDOIJOS(doiul-1, j2, nr, nm, sumdoi1);
	CMM2J0(unu, doi, doiul, nr, nm, CMMDC(nr, nm, nr%nm), Q, F2);
}


void USEPSUMJOS1(int doiul, mpz_t unu, mpz_t doi, gmp_ui nm, gmp_ui nr, mpz_t nr2, mpz_t nm2, mpz_t sumdoi, gmp_ui *sumdoi1, char *Q, FILE *F2) {
	mpz_set_ui(nr2, nr);
	mpz_set_ui(nm2, nm);
	MODPDOIJOSM(doiul-1, doi, sumdoi, sumdoi1, nr2, nm2);
	CMM2J(nr2, nm2, unu, doi, doiul, Q, F2);
}


void USEPSUMJOS2(mpz_t unu, mpz_t doi, mpz_t nr2, mpz_t nm2, gmp_ui nr, gmp_ui nm, int j2, gmp_ui *sumdoi1, int doiul, char *Q, FILE *F2) {
	MODPDOIJOSUL(doiul-1, j2, nr, nm, nr2, nm2, sumdoi1);	
	CMM2J(nr2, nm2, unu, doi, doiul, Q, F2);
}


void UMODPARSUMSUS(int n, int z, gmp_ui nr1, gmp_ui nm1, gmp_ui nr, gmp_ui nm, int f, mpz_t unu, mpz_t doi, gmp_ui *AG, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi1, int doi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, int doiul, int sep) {
	 {
		MODPDOISUS(doi1[n], j, nr = nr1, nm = nm1, sumdoi1);
		
		for(z = 0; FACT[z]; z++)
		mpz_divisible_ui_p(p, FACT[z])?
			MODPSUS0(p, FACTLEG[z], PRIMP[z], div1, sum1, nr, nm, 2, 0)
				: MODPSUS1(FACTLEG[z], PRIMP[z], div1, sum1, nr, nm);
		
		CMMS0(unu, doi, AG[n], nr1, nm1, CMMDC(nr1, nm1, nr1%nm1), Q, F2);
	}

	USEPSUMSUS(unu, doi, nr, nm, nr1, nm1, Q, F2, sumdoi1, j, 0, doiul, sep);
}


void UMODPARSUMSUS1(int n, int z, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, int f, mpz_t unu, mpz_t doi, gmp_ui *AG, int doi1, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sumdoi1, mpz_t *sumdoi, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t p, int doiul, int sep) {
	 {
		mpz_set_ui(nm2, nm1);
		mpz_set_ui(nr2, nr1);
		MODPDOISUSM(doi1[n], doi, j, sumdoi, sumdoi1, nr2, nm2);
		
		for(z = 0; FACT[z]; z++)
		mpz_divisible_ui_p(p, FACT[z])?
			MODPSUSM2(p, FACTLEG[z], PRIMP[z], 2, 0, div1, sum1, nr2, nm2)
				: MODPSUSM1(FACTLEG[z], PRIMP[z], div1, sum1, nr2, nm2);
			
		for(z = 0; FACT[z]; z++)
		mpz_divisible_ui_p(p, SFACT[z])?
			MODPSUSMARE(p, SFACTLEG[z], SPRIMP[z], 0, 0, div1, sum1, mem, nr2, nm2)
				: MODPSUSM1(SFACTLEG[z], SPRIMP[z], div1, sum1, nr2, nm2);
			
		CMMS(nr2, nm2, unu, doi, AG[n], Q, F2);
	}

	USEPSUMSUS2(unu, doi, nr2, nm2, nr1, nm1, Q, F2, sumdoi, sumdoi1, j, 0, doiul, sep);
}


void UMODPARSUMSUS2(int n, int z, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, int f, mpz_t unu, mpz_t doi, gmp_ui *AG, int doi1, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi1, mpz_t *sumdoi, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, int doiul, int sep) {
	 {
		mpz_set_ui(nm2, nm1);
		mpz_set_ui(nr2, nr1);
		MODPDOISUSM(doi1[n], doi, j, sumdoi, sumdoi1, nr2, nm2);
		
		for(z = 0; FACT[z]; z++)
		mpz_divisible_ui_p(p, FACT[z])?
			MODPSUSM2(p, FACTLEG[z], PRIMP[z], 2, 0, div1, sum1, nr2, nm2)
				: MODPSUSM1(FACTLEG[z], PRIMP[z], div1, sum1, nr2, nm2);
				
		CMMS(nr2, nm2, unu, doi, AG[n], Q, F2);
	}

	USEPSUMSUS2(unu, doi, nr2, nm2, nr1, nm1, Q, F2, sumdoi, sumdoi1, j, 0, doiul, sep);
}


void UMODPARSUMSUSM(int n, int z, int knk, mpz_t unu, mpz_t doi, gmp_ui nr1, gmp_ui nm1, gmp_ui *w2, int doi1, int j, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, int *FACTAUX, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t nr2, mpz_t nm2, mpz_t p) {
	 {
		mpz_set_ui(nm2, nm1);
		mpz_set_ui(nr2, nr1);		
		UMODPDOISUSM(doi1[n], doi, j, sumdoi, sumdoi1, nr2, nm2);
		
		for(z = 0; FACT1[z]; z++)
		mpz_divisible_ui_p(p, FACT1[z])?
			MODPSUSM2(p, FACTLEG1[z], PRIMP1[z], 2, 0, div1, sum1, nr2, nm2)
				: MODPSUSM1(FACTLEG1[z], PRIMP1[z], div1, sum1, nr2, nm2);

		for(z = 0; SFACT[z]; z++)
		mpz_divisible_ui_p(p, SFACT[z])?
			MODPSUSMARE(p, SFACTLEG[z], SPRIMP[z], 0, 0, div1, sum1, mem, nr2, nm2)
				: MODPSUSM1(SFACTLEG[z], SPRIMP[z], div1, sum1, nr2, nm2);

		for(z = 0; FACT[z]; z++)
			mpz_divisible_ui_p(p, FACT[z])?
				MODPSUSM0(p, FACTLEG[z], PRIMP[z], FACTAUX[z], 2, 0, div, sum, div1, sum1, mem, doi, nr2, nm2)
					: MODPSUSM1(FACTLEG[z], PRIMP[z], div1, sum1, nr2, nm2);
		
		CMMS(nr2, nm2, unu, doi, w2[n], Q, F2);
	}

	//USEPSUMSUS3(unu, doi, trei, d1, nr2, nm2, Q, F2, sumdoi, sumdoi1, A5, j, 0, sep);
}


void UMODPARSUMSUSM0(int n, int z, int k, mpz_t unu, mpz_t doi, gmp_ui nr1, gmp_ui nm1, gmp_ui *w1, int doi1, int j, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int *FACTAUX, mpz_t nr2, mpz_t nm2, mpz_t p) {
	 {
		mpz_set_ui(nm2, nm1);
		mpz_set_ui(nr2, nr1);
		MODPDOISUSM(doi1[n], doi, j, sumdoi, sumdoi1, nr2, nm2);
		
		for(z = 0; FACT[z]; z++)
		mpz_divisible_ui_p(p, FACT[z])?
			MODPSUSM0(p, FACTLEG[z], PRIMP[z], FACTAUX[z], 2, 0, div, sum, div1, sum1, mem, doi, nr2, nm2)
				: MODPSUSM1(FACTLEG[z], PRIMP[z], div1, sum1, nr2, nm2);
			
		CMMS(nr2, nm2, unu, doi, w1[n], Q, F2);
	}	
}


void UMODPARSUMJOSUL(gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, mpz_t unu, mpz_t doi, gmp_ui AG, gmp_ui j2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi1, int doi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p) {
	DOIMODPJOSUL(p, doi, j2, div1, sum1, sumdoi1, doi1, nr1, nm1, nr2, nm2, FACT, FACTLEG, PRIMP);
	CMMJ(nr2, nm2, unu, doi, AG, Q, F2);
}


void UMODPARSUMJOS(gmp_ui nr1, gmp_ui nm1, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d1, gmp_ui AG, int j2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi1, int doi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p) {
	DOIMODPJOS(p, j2, div1, sum1, sumdoi1, doi1, nr1, nm1, FACT, FACTLEG, PRIMP);
	CMMJ0(unu, doi, AG, nr1, nm1, CMMDC(nr1, nm1, nr1%nm1),  Q, F2);
}


void UMODPARSUMJOSM(mpz_t unu, mpz_t doi, gmp_ui nr1, gmp_ui nm1, gmp_ui AG, int j2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, int doi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, int *FACTAUX, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t nr2, mpz_t nm2, mpz_t p) {
	mpz_set_ui(nr2, nr1);
	mpz_set_ui(nm2, nm1);
	DOIMODPJOSM(p, doi, 0, div, sum, div1, sum1, mem, sumdoi1, sumdoi[j2], doi1, nr2, nm2, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACTAUX, SFACT, SFACTLEG, SPRIMP);
	CMMJ(nr2, nm2, unu, doi, AG, Q, F2);
}


void UMODPARSUMJOSM0(mpz_t unu, mpz_t doi, gmp_ui nr1, gmp_ui nm1, gmp_ui AG, gmp_ui j2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2],int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, int doi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int *FACTAUX, mpz_t nr2, mpz_t nm2, mpz_t p) {
	mpz_set_ui(nr2, nr1);
	mpz_set_ui(nm2, nm1);
	DOIMODPJOSM0(p, doi, 0, div, sum, div1, sum1, mem, sumdoi1, sumdoi[j2], doi1, nr2, nm2, FACT, FACTLEG, PRIMP, FACTAUX);
	CMMJ(nr2, nm2, unu, doi, AG, Q, F2);
}


void UMODPARSUMJOSM1(mpz_t unu, mpz_t doi, gmp_ui nr1, gmp_ui nm1, gmp_ui AG, int j2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, int doi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t nr2, mpz_t nm2, mpz_t p) {
	mpz_set_ui(nr2, nr1);
	mpz_set_ui(nm2, nm1);
	DOIMODPJOSM1(p, doi, 0, div1, sum1, mem, sumdoi1, sumdoi[j2], doi1, nr2, nm2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP);
	CMMJ(nr2, nm2, unu, doi, AG, Q, F2);
}


void UMODPARSUMJOSM2(mpz_t unu, mpz_t doi, gmp_ui nr1, gmp_ui nm1, gmp_ui AG, int j2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *sumdoi, gmp_ui *sumdoi1, int doi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t nr2, mpz_t nm2, mpz_t p) {
	mpz_set_ui(nr2, nr1);
	mpz_set_ui(nm2, nm1);
	DOIMODPJOSM2(p, doi, 0, div1, sum1, sumdoi1, sumdoi[j2], doi1, nr2, nm2, FACT, FACTLEG, PRIMP);
	CMMJ(nr2, nm2, unu, doi, AG, Q, F2);
}


void USUSMODPARSUMUL(mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int doi2, int doi3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, int j, mpz_t p, int doiul, int sep) {
	VALIDNOU1(unu, d1, d, trei, nr1, nm1);
	UMODPARSUMSUSM0(0, 0, k, unu, doi, nr1, nm1, w1, doi1, j, div, sum, div1, sum1, mem, sumdoi, sumdoi1, Q, F2, FACT, FACTLEG, PRIMP, FACTAUX, nr2, nm2, p);
	UMODPARSUMSUSM(0, 0, knk, unu, doi, nr1, nm1, w2, doi2, j, div, sum, div1, sum1, mem, sumdoi, sumdoi1, Q, F2, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX2, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p);
	UMODPARSUMSUS1(0, 0, nr1, nm1, nr2, nm2, nk, unu, doi, w3, doi3, j, div1, sum1, mem, sumdoi1, sumdoi, Q, F2, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP, p, doiul, 0);
	USEPSUMSUS1(unu, doi, nr2, nm2, nr1, nm1, Q, F2, sumdoi1, j, 0, doiul, sep);	
}


void UJOSMODPARSUMUL(int W, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui m1, gmp_ui m2, gmp_ui m3, gmp_ui w1, gmp_ui w2, gmp_ui w3, int doi1, int doi2, int doi3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, gmp_ui &nr1, gmp_ui &nm1, int j2, mpz_t p, gmp_ui A5, int doiul, int sep) {
	VALIDNOU1(unu, d1, d, trei, nr1, nm1);
	
	if(m1 && mpz_divisible_ui_p(p, m1)) {
		UMODPARSUMJOSM0(unu, doi, nr1, nm1, w1, j2, div, sum, div1, sum1, mem, sumdoi, sumdoi1, doi1-1, Q, F2, FACT, FACTLEG, PRIMP, FACTAUX, nr2, nm2, p);
	}

	
	if(m2 && mpz_divisible_ui_p(p, m2)) {
		UMODPARSUMJOSM(unu, doi, nr1,nm1, w2, j2, div, sum, div1, sum1, mem, sumdoi, sumdoi1, doi2-1, Q, F2, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX2, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p);
	}
	
	
	if(m3 && mpz_divisible_ui_p(p, m3)) {
		UMODPARSUMJOSM1(unu, doi, nr1, nm1, w3, j2, div1, sum1, mem, sumdoi, sumdoi1, doi3-1, Q, F2, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p);
	}
	
	if(sep) {		
		for(W = sep-1; W >= 0; --W)
		if(mpz_divisible_ui_p(unu, A5)) {
			USEPSUMJOS1(doiul, unu, doi, nm1, nr1, nr2, nm2, sumdoi[j2], sumdoi1, Q, F2);
		}
	}
}


void USUSMODPARSUM1(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *sumdoi1, int doi1, gmp_ui nr, gmp_ui nm, int j, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, gmp_ui *q, int doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
		SMV(p, d, b, b1, D, H, j, div1, sum1, q[j]);
		VALIDNOU1(unu, d1, d, trei, nr1, nm1);
		MODPARSUMSUS(0, 0, mpz_get_ui(trei), mpz_get_ui(d1), nr, nm, W, unu, doi, AG, j, div1, sum1, sumdoi1, doi1, Q, F2, FACT, FACTLEG, PRIMP, p, doiul, sep);		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
	}


void USUSMODPARSUM2(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *sumdoi1, int doi1, mpz_t nr2, mpz_t nm2, int j, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
	NUMSUMPURG1(p, d, b, b1, D, H, j, div1, sum1, q[j], 0);
	VALIDNOU1(unu, d1, d, trei, nr1, nm1);
	MODPARSUMSUS2(0, 0, mpz_get_ui(trei), mpz_get_ui(d1), nr2, nm2, W, unu, doi, AG, doi1, j, div1, sum1, sumdoi1, q, Q, F2, FACT, FACTLEG, PRIMP, p, doiul, sep);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODPARSUM3(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *sumdoi1, int doi1, mpz_t nr2, mpz_t nm2, int j, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
	NUMSUMV1(p, d, b, b1, D, H, j, div1, sum1, q[j], 0);
	VALIDNOU1(unu, d1, d, trei, nr1, nm1);
	MODPARSUMSUS2(0, 0, mpz_get_ui(trei), mpz_get_ui(d1), nr2, nm2, W, unu, doi, AG, doi1, j, div1, sum1, sumdoi1, q, Q, F2, FACT, FACTLEG, PRIMP, p, doiul, sep);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODPARSUM4(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, gmp_ui *sumdoi1, int doi1, mpz_t nr2, mpz_t nm2, int j, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
	NUMSUMV3(p, d, b, b1, D, H, S, j, div1, sum1, mem, q[j], 0);
	VALIDNOU1(unu, d1, d, trei, nr1, nm1);
	MODPARSUMSUS1(0, 0, mpz_get_ui(trei), mpz_get_ui(d1), nr2, nm2, W, unu, doi, AG, doi1, j, div1, sum1, mem, sumdoi1, q, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p, doiul, sep);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODPARSUM5(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, gmp_ui *sumdoi1, int doi1, mpz_t nr2, mpz_t nm2, int j, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
	NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, j, div1, sum1, mem, q[j], 0);
	VALIDNOU1(unu, d1, d, trei, nr1, nm1);
	MODPARSUMSUS1(0, 0, mpz_get_ui(trei), mpz_get_ui(d1), nr2, nm2, W, unu, doi, AG, doi1, j, div1, sum1, mem, sumdoi1, q, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p, doiul, sep);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODPARSUM6(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int doi2, int doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *sumdoi1, gmp_ui nr, gmp_ui nm, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, int j, mpz_t p, mpz_t *q, int doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
		SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, j, div1, sum1, div, sum, mem, q[j], 0);
		USUSMODPARSUMUL(unu, d, d1, doi, trei, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, sumdoi1, nr, nm, 0, 0, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, j, p, doiul, sep);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
	}


void USUSMODPARSUM7(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int doi2, int doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *sumdoi1, gmp_ui nr, gmp_ui nm, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, int j, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
	SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, j, div1, sum1, div, sum, mem, q[j]);
	USUSMODPARSUMUL(unu, d, d1, doi, trei, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, sumdoi1, nr, nm, 0, 0, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, j, p, doiul, sep);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void USUSMODPARSUM8(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int doi2, int doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, int S, FILE *F2, int *mem, gmp_ui *sumdoi1, gmp_ui nr, gmp_ui nm, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, int j, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
	SUM7(p, d, b, b1, D, H, K, S, j, div1, sum1, div, sum, mem, q[j], 0);
	USUSMODPARSUMUL(unu, d, d1, doi, trei, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, sumdoi1, nr, nm, 0, 0, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, j, p, doiul, sep);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSMODPARSUM1(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *sumdoi1, int doi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui nr1, gmp_ui nm1, mpz_t p, gmp_ui *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	
	if(mpz_divisible_ui_p(unu, AG)) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SMV(p, d, b, b1, D, H, u, div1, sum1, q[u]);
			VALIDNOU1(unu, d1, d, trei, nr1, nm1);			
			nr1 = mpz_get_ui(trei);
			nm1 = mpz_get_ui(d1);
		}
		MODPARSUMJOS(nr1, nm1, unu, doi, trei, d1, AG, u, div1, sum1, sumdoi1, doi1-1, Q, F2, FACT, FACTLEG, PRIMP, p);
	}
	
	
		if(mpz_divisible_ui_p(unu, A5)) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SMV(p, d, b, b1, D, H, u, div1, sum1, q[u]);
				VALIDNOU1(unu, d1, d, trei, nr1, nm1);			
				nr1 = mpz_get_ui(trei);
				nm1 = mpz_get_ui(d1);
				}
				
			USEPSUMJOS(doiul, unu, doi, nr1, nm1, u, sumdoi1, Q, F2);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSMODPARSUM2(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *sumdoi1, int doi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q, int doiul, int sep) {//gmp_ui nr1, nm1;
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
		
	if(mpz_divisible_ui_p(unu, AG)) {

			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMPURG1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
			VALIDNOU1(unu, d1, d, trei, nr1, nm1);
			//nr1 = mpz_get_ui(trei), nm1 = mpz_get_ui(d1);
		}=

		MODPARSUMJOSM2(unu, doi, trei, d1, AG, u, div1, sum1, q, sumdoi1, doi1-1, Q, F2, FACT, FACTLEG, PRIMP, nr2, nm2, p);
}
	
	if(mpz_divisible_ui_p(unu, A5)) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMPURG1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
			VALIDNOU1(unu, d1, d, trei, nr1, nm1);
			}

		USEPSUMJOS1(doiul, unu, doi, nr1, nm1, nr2, nm2, q[u], sumdoi1, Q, F2);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSMODPARSUM3(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *sumdoi1, int doi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q, int doiul, int sep) {//gmp_ui nr1, nm1;
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
		
	if(mpz_divisible_ui_p(unu, AG)) {
		
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));			
			NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
			VALIDNOU1(unu, d1, d, trei, nr1, nm1);
			//nr1 = mpz_get_ui(trei), nm1 = mpz_get_ui(d1);			
		

		MODPARSUMJOSM2(unu, doi, trei, d1, AG, u, div1, sum1, q, sumdoi1, doi1-1, Q, F2, FACT, FACTLEG, PRIMP, nr2, nm2, p);
		//MODPARSUMJOS(nr1, nm1, unu, doi, trei, d1, AG, u, div1, sum1, sumdoi1, doi1-1, Q, F2, FACT, FACTLEG, PRIMP, p);
}
	
	if(mpz_divisible_ui_p(unu, A5)) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));			
			NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
			VALIDNOU1(unu, d1, d, trei, nr1, nm1);
			}

		USEPSUMJOS1(doiul, unu, doi, nr1, nm1, nr2, nm2, q[u], sumdoi1, Q, F2);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSMODPARSUM4(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, gmp_ui *sumdoi1, int doi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	
	if(mpz_divisible_ui_p(unu, AG)) {
		
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));			
			NUMSUMV3(p, d, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);
			VALIDNOU1(unu, d1, d, trei, nr1, nm1);			
		

		MODPARSUMJOSM1(unu, doi, trei, d1, AG, u, div1, sum1, mem, q, sumdoi1, doi1-1, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p);
}
	
	if(mpz_divisible_ui_p(unu, A5)) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));			
			NUMSUMV3(p, d, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);
			VALIDNOU1(unu, d1, d, trei, nr1, nm1);
			u = 1;
			}

		USEPSUMJOS1(doiul, unu, doi, nr1, nm1, nr2, nm2, q[u], sumdoi1, Q, F2);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSMODPARSUM5(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, gmp_ui *sumdoi1, int doi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
		
	if(mpz_divisible_ui_p(unu, AG)) {
		
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));			
			NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);
			VALIDNOU1(unu, d1, d, trei, nr1, nm1);			
		

		MODPARSUMJOSM1(unu, doi, trei, d1, AG, u, div1, sum1, mem, q, sumdoi1, doi1-1, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p);
}
	
	if(mpz_divisible_ui_p(unu, A5)) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));			
			NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);
			VALIDNOU1(unu, d1, d, trei, nr1, nm1);
			u = 1;
			}

		USEPSUMJOS1(doiul, unu, doi, nr1, nm1, nr2, nm2, q[u], sumdoi1, Q, F2);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void UJOSMODPARSUM6(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *AG, gmp_ui m1, gmp_ui m2, gmp_ui m3, gmp_ui w1, gmp_ui w2, gmp_ui w3, int doi1, int doi2, int doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *sumdoi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, gmp_ui nr1, gmp_ui nm1, mpz_t p, mpz_t *q, gmp_ui A5, int doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;

			if(mpz_divisible_ui_p(unu, AG)) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				UJOSMODPARSUMUL(W, unu, d, d1, doi, trei, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, sumdoi1, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, nr1, nm1, u, p, A5, doiul, 0);//sep				
		}
	if(sep) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
			VALIDNOU1(unu, d1, d, trei, nr1, nm1);					
			}		
		
		if(mpz_divisible_ui_p(unu, A5)) {
			USEPSUMJOS1(doiul, unu, doi, nr1, nm1, nr2, nm2, q[u], sumdoi1, Q, F2);
			}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODPARSUM7(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *AG, gmp_ui m1, gmp_ui m2, gmp_ui m3, gmp_ui w1, gmp_ui w2, gmp_ui w3, int doi1, int doi2, int doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *sumdoi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, gmp_ui nr1, gmp_ui nm1, mpz_t p, mpz_t *q, gmp_ui A5, int doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;
		
			if(mpz_divisible_ui_p(unu, AG)) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				UJOSMODPARSUMUL(W, unu, d, d1, doi, trei, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, sumdoi1, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, nr1, nm1, u, p, A5, doiul, 0);
		}
	if(sep) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
			VALIDNOU1(unu, d1, d, trei, nr1, nm1);
			}
		
		if(mpz_divisible_ui_p(unu, A5)) {
			USEPSUMJOS1(doiul, unu, doi, nr1, nm1, nr2, nm2, q[u], sumdoi1, Q, F2);
			}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void UJOSMODPARSUM8(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *AG, gmp_ui m1, gmp_ui m2, gmp_ui m3, gmp_ui w1, gmp_ui w2, gmp_ui w3, int doi1, int doi2, int doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, int S, FILE *F2, int *mem, gmp_ui *sumdoi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, gmp_ui nr1, gmp_ui nm1, mpz_t p, mpz_t *q, gmp_ui A5, int doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;		
			if(mpz_divisible_ui_p(unu, AG)) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				UJOSMODPARSUMUL(W, unu, d, d1, doi, trei, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, sumdoi1, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, nr1, nm1, u, p, A5, doiul, 0);		
		}
	if(sep) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
			VALIDNOU1(unu, d1, d, trei, nr1, nm1);
			}
		
		if(mpz_divisible_ui_p(unu, A5)) {
			USEPSUMJOS1(doiul, unu, doi, nr1, nm1, nr2, nm2, q[u], sumdoi1, Q, F2);
			}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void UMODPARSUM(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A5, gmp_ui *AG, gmp_ui m1, gmp_ui m2, gmp_ui m3, gmp_ui w1, gmp_ui w2, gmp_ui w3, int doi1, int doi2, int doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *sumdoi1, int doi0, gmp_ui nr, gmp_ui nm, int &sus, int &dir, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q, gmp_ui *q0, int doiul, int sep) {
	if(dir) {
		sus < 55? USUSMODPARSUM1(Q, PP2, f1, W, b, b1, unu, d, d1, doi, trei, AG, div1, sum1, D, H, F2, sumdoi1, doi0, nr, nm, 0, FACT, FACTLEG, PRIMP, p, q0, doiul, sep) 
		: sus < 73? USUSMODPARSUM2(Q, PP2, f1, W, b, b1, unu, d, d1, doi, trei, AG, div1, sum1, D, H, F2, sumdoi1, doi0, nr2, nm2, 0, FACT, FACTLEG, PRIMP, p, q, doiul, sep)
			: sus < 163? USUSMODPARSUM3(Q, PP2, f1, W, b, b1, unu, d, d1, doi, trei, AG, div1, sum1, D, H, F2, sumdoi1, doi0, nr2, nm2, 0, FACT, FACTLEG, PRIMP, p, q, doiul, sep)
			: sus < 213? USUSMODPARSUM4(Q, PP2, f1, W, b, b1, unu, d, d1, doi, trei, AG, div1, sum1, mem, D, H, S, F2, sumdoi1, doi0, nr2, nm2, 0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p, q, doiul, sep)
			: sus < 223? USUSMODPARSUM5(Q, PP2, f1, W, b, b1, C, C1, unu, d, d1, doi, trei, AG, div1, sum1, mem, D, E, H, S, F2, sumdoi1, doi0, nr2, nm2, 0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p, q, doiul, sep)
				: sus < 243? USUSMODPARSUM6(Q, PP2, f1, b, b1, C, C1, unu, d, d1, doi, trei, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, sumdoi1, nr, nm, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, 0, p, q, doiul, sep) 
					: USUSMODPARSUM7(Q, PP2, f1, b, b1, C, C1, unu, d, d1, doi, trei, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, sumdoi1, nr, nm, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, 0, p, q, doiul, sep);
		} else {
		sus < 55? UJOSMODPARSUM1(Q, PP2, f1, W, 0, 0, b, b1, unu, d, d1, doi, trei, A5, AG, div1, sum1, D, H, F2, sumdoi1, doi0, FACT, FACTLEG, PRIMP, 0, 0, p, q0, doiul, sep)
		: sus < 73? UJOSMODPARSUM2(Q, PP2, f1, W, 0, 0, b, b1, unu, d, d1, doi, trei, A5, AG, div1, sum1, D, H, F2, sumdoi1, doi0, FACT, FACTLEG, PRIMP, nr2, nm2, p, q, doiul, sep)
			: sus < 163? UJOSMODPARSUM3(Q, PP2, f1, W, 0, 0, b, b1, unu, d, d1, doi, trei, A5, AG, div1, sum1, D, H, F2, sumdoi1, doi0, FACT, FACTLEG, PRIMP, nr2, nm2, p, q, doiul, sep)
			: sus < 213? UJOSMODPARSUM4(Q, PP2, f1, W, 0, 0, b, b1, unu, d, d1, doi, trei, A5, AG, div1, sum1, mem, D, H, S, F2, sumdoi1, doi0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p, q, doiul, sep)
			: sus < 223? UJOSMODPARSUM5(Q, PP2, f1, W, 0, 0, b, b1, C, C1, unu, d, d1, doi, trei, A5, AG, div1, sum1, mem, D, E, H, S, F2, sumdoi1, doi0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p, q, doiul, sep) 
				: sus < 243? UJOSMODPARSUM6(Q, PP2, f1, W, 0, b, b1, C, C1, unu, d, d1, doi, trei, AG, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, sumdoi1, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, 0, 0, p, q, A5, doiul, sep)
					: UJOSMODPARSUM7(Q, PP2, f1, W, 0, b, b1, C, C1, unu, d, d1, doi, trei, AG, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, sumdoi1, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, 0, 0, p, q, A5, doiul, sep);
	}
}


//TOLMODSUM de TOLNUM:
void SUSTOLMODSUM1(char *Q, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *S2, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t sum, mpz_t imp, mpz_t mul, int g, mpz_t p, gmp_ui *q, int c) {
	if(!c) SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);	
	MODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
}


void SUSTOLMODSUM2(char *Q, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *S2, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t sum, mpz_t imp, mpz_t mul, int g, mpz_t p, mpz_t *q, int c) {
	if(!c) NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
	MODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
}


void SUSTOLMODSUM3(char *Q, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *S2, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t sum, mpz_t imp, mpz_t mul, int g, mpz_t p, mpz_t *q, int c) {
	if(!c) NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
	MODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
}


void SUSTOLMODSUM4(char *Q, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *s1, gmp_ui *s2, gmp_ui *s3, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t summ, mpz_t imp, mpz_t mul, int g, mpz_t p, mpz_t *q, int c) {
	if(!c) {
		//PURGANTE(C, C1, E);
		SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
	}
	SUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);
}


void SUSTOLMODSUM5(char *Q, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *s1, gmp_ui *s2, gmp_ui *s3, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t summ, mpz_t imp, mpz_t mul, int g, mpz_t p, mpz_t *q, int c) {
	if(!c) SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g]);
	SUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);
}


void SUSTOLMODSUM6(char *Q, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *s1, gmp_ui *s2, gmp_ui *s3, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t summ, mpz_t imp, mpz_t mul, int g, mpz_t p, mpz_t *q, int c) {
	if(!c) SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g]);
	SUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);
}


void SUSTOLMODSUM7(char *Q, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *s1, gmp_ui *s2, gmp_ui *s3, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t summ, mpz_t imp, mpz_t mul, int g, mpz_t p, mpz_t *q, int c) {
	if(!c) SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
	SUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);
}


void JOSTOLMODSUM1(char *Q, int W, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int g, mpz_t p, gmp_ui *q, int c) {
//if(W > PRAGW) {		
		if(!c) {
			mpz_tdiv_q_2exp(p, unu, g);
			SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
		}
		
		for(W--; W >= 0; --W)
		if(mpz_divisible_ui_p(p, A2)) {
			MODIFJOS1(unu, d, d1, A2, doi, trei, imp, mul, Q, F2, div1, sum1, FACT, FACTLEG, PRIMP, p);
		}
	/*}
else {
		u = 0;
		
		if(mpz_divisible_ui_p(unu, A2)) {
			if(!u) {
				SME(unu, d, b, b1, D, H, g = mpz_scan1(unu, 0), div1, sum1, 2, p);
				u = 1;
				}
				
			MODIFJOS1(unu, d, d1, A2, doi, trei, imp, mul, Q, F2, div1, sum1, FACT, FACTLEG, p);
			}
	}*/
}


void JOSTOLMODSUM2(char *Q, int W, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int g, mpz_t p, mpz_t *q, int c) {
//if(W > PRAGW) {	
	if(!c) {
		mpz_tdiv_q_2exp(p, unu, g);
		NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
	}
	
	for(--W; W >= 0; --W)
	if(mpz_divisible_ui_p(p, A2)) {
		MODIFJOS1(unu, d, d1, A2, doi, trei, imp, mul, Q, F2, div1, sum1, FACT, FACTLEG, PRIMP, p);
	}
	/*}
else {
	u = 0;		
	
	if(mpz_divisible_ui_p(p, A2)) {
		if(!u) {
			NUMSUMV1(p, d, b, b1, D, H, g = mpz_scan1(unu, 0), div1, sum1, q[g]);
			u = 1;
			}
			
		MODIFJOS1(unu, d, d1, A2, doi, trei, imp, mul, Q, F2, div1, sum1, FACT, FACTLEG, p);
		}
	}*/
}


void JOSTOLMODSUM3(char *Q, int W, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int g, mpz_t p, mpz_t *q, int c) {
//if(W > PRAGW) {	
	if(!c) {
		mpz_tdiv_q_2exp(p, unu, g);
		NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
	}
	
	for(W--; W >= 0; --W)
	if(mpz_divisible_ui_p(p, A2)) {
		MODIFJOS1(unu, d, d1, A2, doi, trei, imp, mul, Q, F2, div1, sum1, FACT, FACTLEG, PRIMP, p);
		}
	/*}
else {
	u = 0;		
	
	if(mpz_divisible_ui_p(p, A2)) {
		if(!u) {
			NUMSUMV1(p, d, b, b1, D, H, g = mpz_scan1(unu, 0), div1, sum1, q[g]);
			u = 1;
			}
			
		MODIFJOS1(unu, d, d1, A2, doi, trei, imp, mul, Q, F2, div1, sum1, FACT, FACTLEG, p);
		}
	}*/
}


void JOSTOLMODSUM4(char *Q, int W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, int g, mpz_t p, mpz_t *q, int c) {
//if(W > PRAGW) {
	if(!c) {
		//PURGANTE(C, C1, E);
		mpz_tdiv_q_2exp(p, unu, g);
		SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
	}
	
	JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
/*	u = W;
	while(1) {
			if(!u) break;
			if(mpz_divisible_ui_p(p, A2)) {
				SUMADIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, q);
				JOSMODIFSUMUL(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, p);
				break;
				}
		}*/
	/*}
else {
		u = W;
		while(1) {
			if(!u) break;
			if(mpz_divisible_ui_p(unu, A2)) {
				SUMADIVE1(unu, d, C, C1, b, b1, D, E, H, K, S, g = mpz_scan1(unu, 0), div1, sum1, div, sum, p, q[g]);
				JOSMODIFSUMUL(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, p);
				break;
				}
		}
	}*/
}


void JOSTOLMODSUM5(char *Q, int W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, int g, mpz_t p, mpz_t *q, int c) {
//if(W > PRAGW) {
	if(!c) {
		mpz_tdiv_q_2exp(p, unu, g);
		SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g]);
	}
		JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
	/*}
else {
		u = W;
		while(1) {
			if(!u) break;
			if(mpz_divisible_ui_p(unu, A2)) {
				SUMADIVE(unu, d, C, C1, b, b1, D, E, H, K, S, g = mpz_scan1(unu, 0), div1, sum1, div, sum, p, q[g]);
				JOSMODIFSUMUL(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, p);
				break;
				}
		}
	}*/
}


void JOSTOLMODSUM6(char *Q, int W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, int g, mpz_t p, mpz_t *q, int c) {
//if(W > PRAGW) {
	if(!c) {
		mpz_tdiv_q_2exp(p, unu, g);
		SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g]);
	}
		JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
	/*}
else {
		u = W;
		while(1) {
			if(!u) break;
			if(mpz_divisible_ui_p(unu, A2)) {
				SUMIMENS(unu, d, C, C1, b, b1, D, E, H, S, K, g = mpz_scan1(unu, 0), div1, sum1, div, sum, mem, p, q[g]);
				JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, p);
				break;
				}
		}
	}*/
}


void JOSTOLMODSUM7(char *Q, int W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, int g, mpz_t p, mpz_t *q, int c) {
//if(W > PRAGW) {
	if(!c) {
		mpz_tdiv_q_2exp(p, unu, g);
		SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
	}
		JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
		/*}
else {
		u = W;
		while(1) {
			if(!u) break;
			if(mpz_divisible_ui_p(unu, A2)) {
				NUMESUME(unu, d, b, b1, D, H, K, g = mpz_scan1(unu, 0), div1, sum1, div, sum, mem, p, q[g]);
				JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
				break;
				}
		}
	}*/
}


void TOLMODSUM(char *Q, int &W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *sm, gmp_ui A2, gmp_ui *s1, gmp_ui *s2, gmp_ui *s3, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, int &sus, int &dir, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t imp, mpz_t mul, int g, mpz_t p, mpz_t *q, gmp_ui *q0, int &c) {
	if(dir) {
		if(!c) mpz_tdiv_q_2exp(p, unu, g);
		sus < 55? SUSTOLMODSUM1(Q, W, b, b1, unu, d, d1, doi, sm, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, trei, imp, mul, g, p, q0, c)
		: sus < 73? SUSTOLMODSUM2(Q, W, b, b1, unu, d, d1, doi, sm, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, trei, imp, mul, g, p, q, c) 
			: sus < 213? SUSTOLMODSUM3(Q, W, b, b1, unu, d, d1, doi, sm, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, trei, imp, mul, g, p, q, c) 
				: sus < 243? SUSTOLMODSUM4(Q, b, b1, C, C1, unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, trei, imp, mul, g, p, q, c) 
					: sus < 503? SUSTOLMODSUM5(Q, b, b1, C, C1, unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, trei, imp, mul, g, p, q, c)
						: SUSTOLMODSUM6(Q, b, b1, C, C1, unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, trei, imp, mul, g, p, q, c);
		} else {
		sus < 55? JOSTOLMODSUM1(Q, W, b, b1, imp, mul, unu, d, d1, doi, trei, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, g, p, q0, c) 
		: sus < 73? JOSTOLMODSUM2(Q, W, b, b1, imp, mul, unu, d, d1, doi, trei, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, g, p, q, c) 
			: sus < 213? JOSTOLMODSUM3(Q, W, b, b1, imp, mul, unu, d, d1, doi, trei, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, g, p, q, c) 
				: sus < 243? JOSTOLMODSUM4(Q, W, b, b1, C, C1, imp, mul, unu, d, d1, doi, trei, A2, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, g, p, q, c)
					: sus < 503? JOSTOLMODSUM5(Q, W, b, b1, C, C1, imp, mul, unu, d, d1, doi, trei, A2, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, g, p, q, c) 
						: JOSTOLMODSUM6(Q, W, b, b1, C, C1, imp, mul, unu, d, d1, doi, trei, A2, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, g, p, q, c);
	}
	
	c = 1;
}


//TOLMODSPAR:
void JOSTOLMODSPAR1(char *Q, int W, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, mpz_t *sumdoi, int doi1, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, int doiul, int sep) {
	for(W--; W >= 0; --W)
	if(mpz_divisible_ui_p(unu, AG)) {	
		MODSPARJOS1(p, unu, d, d1, AG, doi, trei, imp, mul, Q, F2, div1, sum1, sumdoi, doi1-1, v, FACT, FACTLEG, PRIMP);
	}
	
	for(sep--; sep >= 0; --sep)
		if(mpz_divisible_ui_p(unu, A5)) {
			USEPJOS(unu, d, d1, doiul, doi, trei, imp, mul, Q, F2, sumdoi, v);
	}
}


void TOLMODSPAR(char *Q, int &W, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A5, gmp_ui *AG, gmp_ui m1, gmp_ui m2, gmp_ui m3, gmp_ui w1, gmp_ui w2, gmp_ui w3, int doi1, int doi2, int doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, mpz_t *sumdoi, int doi0, int *mem, int &sus, int &dir, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui FACT1, int FACTLEG1, int PRIMP1, gmp_ui FACT2, int FACTLEG2, int PRIMP2, gmp_ui FACT3, int FACTLEG3, int PRIMP3, int *FACTAUX, int FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui SFACT2, int SFACTLEG2, int SPRIMP2, mpz_t summ, mpz_t imp, mpz_t mul, int g, mpz_t p, int doiul, int sep) {
	if(dir) {
		sus < 213? MODSPARSUS1(1, W, 0, unu, d, d1, AG, doi, Q, F2, div1, sum1, sumdoi, doi0, g, 0, FACT, FACTLEG, PRIMP, summ, imp, mul, p, doiul, sep) 
			: SUSMODSPARUL(unu, d, d1, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, g, sumdoi, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p, doiul, sep);
	} else {
		sus < 213? JOSTOLMODSPAR1(Q, W, imp, mul, unu, d, d1, doi, trei, A5, AG, div1, sum1, F2, sumdoi, doi0, g, FACT, FACTLEG, PRIMP, p, doiul, sep) 
			: JOSMODSPARUL(0, imp, mul, unu, d, d1, doi, trei, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, sumdoi, g, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, A5, doiul, sep);
		}
}