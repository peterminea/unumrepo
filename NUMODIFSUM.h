//Alten1510 alten
//MODIFSUM:
void MODIFSUS1(gmp_ui mul1, int n, int z, int f, gmp_ui S2, gmp_ui A2, char *Q, FILE *F2, mpz_t p, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t sum, mpz_t imp, mpz_t mul, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *FACT, int *FACTLEG, int *PRIMP) {
 for(z = 0; FACT[z]; z++) {
	if(mpz_divisible_ui_p(p, FACT[z])) {
		MODSUS0(unu, imp, mul, FACTLEG[z], PRIMP[z], 2, div1, sum1);
		continue;
			}
			
		mul1 *= sum1[FACTLEG[z]][PRIMP[z]];
		}

	IMPMUL(mul1, sum, d, imp, mul, unu, doi, d1, Q, F2, A2, S2);	
}


void MODIFSUS2(gmp_ui mul1, int n, int z, int f, gmp_ui S2, gmp_ui A2, char *Q, FILE *F2, mpz_t p, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t sum, mpz_t imp, mpz_t mul, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP) { 
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


void SUSMODIFSUMULE(mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui s1, gmp_ui s2, gmp_ui s3, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p) {
	int n = 0, z;
	gmp_ui mul1 = 1;
	
	//K pure.
		for(z = 0; FACT[z]; z++) {
		if(mpz_divisible_ui_p(p, FACT[z])) {
		  MODUMSUSM0(p, imp, mul, FACTLEG[z], PRIMP[z], FACTAUX[z], 2, div, sum, div1, sum1, mem);//Sau FACTAUX + FACTLEG[z], unde FACTAUX = H-K.
		  continue;
			}

		  mul1 *= sum1[FACTAUX[z]][PRIMP[z]];
		 }

		IMPMUL(mul1, summ, d, imp, mul, unu, doi, d1, Q, F2, m1, s1);
	
	
	mul1 = 1;
	//Amestecate, întâi primele non-K, apoi cele K.	
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

	MODIFSUS2(1, 0, 0, nk, s3, m3, Q, F2, p, unu, doi, d, d1, summ, imp, mul, div1, sum1, mem, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP);//Non K-urile la urmă.
}


void MODIFJOS1(mpz_t unu, mpz_t d, mpz_t d1, gmp_ui A1, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p) {	
	mpz_divexact_ui(doi, unu, A1);
	for(A1 = 0; FACT[A1]; A1++)
		MODJOS0(p, imp, mul, FACTLEG[A1], PRIMP[A1], 2, div1, sum1);	
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);
}


void MODIFJOS2(mpz_t unu, mpz_t d, mpz_t d1, gmp_ui A1, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP,  gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t p) {	
	mpz_divexact_ui(doi, unu, A1);//gmp_ui A2=A1;
	for(A1 = 0; FACT[A1]; A1++) {//printf("%llu %llu %llu %llu %llu FACT %d  ", FACT[A1], PRIMP[A1], A2, A1, div1[FACTLEG[A1]][1], SFACT[0]);
		MODJOS0(p, imp, mul, FACTLEG[A1], PRIMP[A1], 2, div1, sum1);
		}
	//putchar('\n');
	for(A1 = 0; SFACT[A1]; A1++) {//printf("%llu %llu %llu %llu %llu SFACT  ", SFACT[A1], SPRIMP[A1], A2, A1, div1[SFACTLEG[A1]][1]);
		MODJOSMARE(p, imp, mul, SFACTLEG[A1], SPRIMP[A1], 0, div1, sum1, mem);
		}
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);//printf("\n\n");
}


// https://drive.google.com/file/d/1lZYmxlLJ0m_TPZuR7RWc6qNQdjgYH3YH/view?fbclid=IwAR2-H_ky42Z5IVFGBGESqDHXQszo8IAQppgVrqTSwlZeOtTmugUV6gCL9sM
void JOSMODIFSUMULE(int W, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t p) {int A1;

	
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
		MODIFJOS2(unu, d, d1, m3, doi, trei, imp, mul, Q, F2, div1, sum1, mem, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP, p);
	}
}


void SUSMODIFSUM1(char *Q, long PP2, int &W, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui S2, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, gmp_ui *q, int g) {
/*
char t[8][1920];
int i = 1, i1 = 1, i2;
strcpy(t[0], Q);

while(i1) {
	while(i < TMODF) {
		fgets(t[i++], 1920, f1);
		if(!(ftell(f1) ^ PP2)) {
			i1 = 0;
			break;
			}
		}
	
	#pragma omp parallel for schedule(dynamic, 1)
	for(i2 = 0; i2 < i; i2++) {//8 = i
		mpz_set_str(unu, t[i2], 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SMV(p, d, g, div1, sum1, q[g]);//g
		MODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
		}

	i = 0;
	if(!i1) break;
	}

return;*/
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		MODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		mpz_set_str(d, Q, 10);
		fgets(Q, 1920, f1);
	}
}


void SUSMODIFSUM2(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui s1, gmp_ui s2, gmp_ui s3, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int g) {
	//PURGANTE(E);
	/*
	char t[8][1920];
	int i = 1, i1 = 1, i2;
	strcpy(t[0], Q);

	while(i1) {
		while(i < TMODF) {
			fgets(t[i++], 1920, f1);
			if(!(ftell(f1) ^ PP2)) {
				i1 = 0;
				break;
				}
			}
		
		#pragma omp parallel for schedule(dynamic, 1)
		for(i2 = 0; i2 < i; i2++) {//8 = i
			mpz_set_str(unu, t[i2], 10);
			mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, g, div1, sum1, div, sum, mem, q[g], 0);
			SUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, p);	
			}
		i = 0;
		if(!i1) break;
		}

	return;*/
	
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		mpz_set_str(d, Q, 10);
		fgets(Q, 1920, f1);
	}
}


void JOSMODIFSUM1(char *Q, long PP2, int W, FILE *f1, int f, int u, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int g, mpz_t p, gmp_ui *q) {
/*
char t[8][1920];
int i = 1, i1 = 1, i2;
strcpy(t[0], Q);

while(i1) {
	while(i < TMODF) {
		fgets(t[i++], 1920, f1);
		if(!(ftell(f1) ^ PP2)) {
			i1 = 0;
			break;
			}
		}
	
	#pragma omp parallel for schedule(dynamic, 1)
	for(i2 = 0; i2 < i; i2++) {//8 = i
		mpz_set_str(unu, t[i2], 10);
		u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		
		if(mpz_divisible_ui_p(p, A2)) {
			 {							
				SMV(p, d, g, div1, sum1, q[g]);
				u = 1;
				}

			MODIFJOS1(unu, d, d1, A2, doi, trei, imp, mul, Q, F2, div1, sum1, FACT, FACTLEG, PRIMP, p);
			}
		}

	i = 0;
	if(!i1) break;
	}

return;*/
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = 0;
		
		if(mpz_divisible_ui_p(unu, A2)) {
			 {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				}
				
			MODIFJOS1(unu, d, d1, A2, doi, trei, imp, mul, Q, F2, div1, sum1, FACT, FACTLEG, PRIMP, p);
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		mpz_set_str(d, Q, 10);
		fgets(Q, 1920, f1);
		
	}
}


void JOSMODIFSUM2(char *Q, long PP2, int W, int u, FILE *f1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui A2, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t p, mpz_t *q) {
	/*
	char t[8][1920];
	int i = 1, i1 = 1, i2;
	strcpy(t[0], Q);

	while(i1) {
		while(i < TMODF) {
			fgets(t[i++], 1920, f1);
			if(!(ftell(f1) ^ PP2)) {
				i1 = 0;
				break;
				}
			}
		
		#pragma omp parallel for schedule(dynamic, 1)
		for(i2 = 0; i2 < i; i2++) {//8 = i
			mpz_set_str(unu, t[i2], 10);
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV1(p, d, u, div1, sum1, div, sum, mem, q[u], 0);
			JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
			}

		i = 0;
		if(!i1) break;
		}

	return;*/

	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		mpz_set_str(d, Q, 10);
		fgets(Q, 1920, f1);
	}
}


void MODIFSUM(char *Q, long PP2, int &W, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui sm, gmp_ui s1, gmp_ui s2, gmp_ui s3, gmp_ui A2, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, int &sus, int &dir, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, gmp_ui *q0) {//10 în minus: A3, u1, AK, ANK, NK, m și FD-urile.
	if(dir) {
		sus < 243? SUSMODIFSUM1(Q, PP2, W, f1, unu, d, d1, doi, sm, A2, div1, sum1, F2, FACT, FACTLEG, PRIMP, trei, imp, mul, p, q0, 0)
		: SUSMODIFSUM2(Q, PP2, f1, unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, trei, imp, mul, p, q, 0);
		} else {
		sus < 243? JOSMODIFSUM1(Q, PP2, W, f1, 0, 0, imp, mul, unu, d, d1, doi, trei, A2, div1, sum1, F2, FACT, FACTLEG, PRIMP, 0, p, q0) 
		: JOSMODIFSUM2(Q, PP2, W, 0, f1, imp, mul, unu, d, d1, doi, trei, A2, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, q);
	}
}


//MODSPAR:
void DOISPARJOS(mpz_t unu, mpz_t imp, mpz_t mul, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *sumdoi, int doi, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP) {
	DOIJOS(imp, mul, sumdoi, v, doi);
	for(v = 0; FACT[v]; v++)
		MODJOS0(unu, imp, mul, FACTLEG[v], PRIMP[v], 2, div1, sum1);
}


void DOISPARJOSM(mpz_t unu, mpz_t imp, mpz_t mul, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t *sumdoi, int doi, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, int *FACTAUX, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP) {
	DOIJOS(imp, mul, sumdoi, v, doi);
	for(v = 0; FACT1[v]; v++)
		MODJOS0(unu, imp, mul, FACTLEG1[v], PRIMP1[v], 2, div1, sum1);
	for(v = 0; SFACT[v]; v++)
		MODJOSMARE(unu, imp, mul, SFACTLEG[v], SPRIMP[v], 0, div1, sum1, mem);
	for(v = 0; FACT[v]; v++)
		MODUMJOSM0(unu, imp, mul, FACTLEG[v], PRIMP[v], FACTAUX[v], 2, div, sum, div1, sum1, mem);
}


void DOISPARJOSM0(mpz_t unu, mpz_t imp, mpz_t mul, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, int doi, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int *FACTAUX) {
	DOIJOS(imp, mul, sumdoi, v, doi);
	for(v = 0; FACT[v]; v++)
		MODUMJOSM0(unu, imp, mul, FACTLEG[v], PRIMP[v], FACTAUX[v], 2, div, sum, div1, sum1, mem);
}


void DOISPARJOSMARE(mpz_t unu, mpz_t imp, mpz_t mul, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, int doi, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP) {
	DOIJOS(imp, mul, sumdoi, v, doi);
	for(v = 0; FACT[v]; v++)
		MODJOS0(unu, imp, mul, FACTLEG[v], PRIMP[v], 2, div1, sum1);
	for(v = 0; SFACT[v]; v++)
		MODJOSMARE(unu, imp, mul, SFACTLEG[v], SPRIMP[v], 0, div1, sum1, mem);
}


void MICSEPSUS(mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t sum, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui *sumdoi, int v, int n, int doiul, int sep) {//n = 0.
	 {
		MICDOISUS(imp, mul, sumdoi, v, doiul);		
		mpz_mul_2exp(doi, unu, doiul);
		IMPMUL2(sum, d, imp, mul, doi, d1, Q, F2);		
		}
}


void SEPSUS(mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t sum, mpz_t imp, mpz_t mul, char *Q, FILE *F2, mpz_t *sumdoi, int v, int n, int doiul, int sep) {//n = 0.
	 {
		DOISUS(imp, mul, sumdoi, v, doiul);
		mpz_mul_2exp(doi, unu, doiul);
		IMPMUL2(sum, d, imp, mul, doi, d1, Q, F2);
		}
}


void SEPJOS(mpz_t unu, mpz_t d, mpz_t d1, int doiul, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, mpz_t *sumdoi, int v) {
	mpz_tdiv_q_2exp(doi, unu, doiul);
	DOIJOS(imp, mul, sumdoi, v, --doiul);
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);	
}


void MODSPARSUS1(gmp_ui mul1, int f, int z, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui *AG, mpz_t doi, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *sumdoi, int doi1, int v, int n, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, int doiul, int sep) {
	 {
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
		
	SEPSUS(unu, d, d1, doi, sum, imp, mul, Q, F2, sumdoi, v, 0, doiul, sep);
}


void MODSPARSUS10(gmp_ui mul1, int f, int z, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui *AG, mpz_t doi, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, int doi1, int v, int n, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, int doiul, int sep) {
	 {
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

	SEPSUS(unu, d, d1, doi, sum, imp, mul, Q, F2, sumdoi, v, 0, doiul, sep);
}


void MODSPARSUS2(gmp_ui mul1, int f, int z, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui *AG, mpz_t doi, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t *sumdoi, int doi1, int v, int n, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, int *FACTAUX, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p) {
 {
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


void MODSPARSUS20(gmp_ui mul1, int f, int z, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui *AG, mpz_t doi, char *Q, FILE *F2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, int doi1, int v, int n, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int *FACTAUX, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p) {
	 {
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


void MODSPARJOS1(mpz_t p, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui AG, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *sumdoi, int doi1, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP) {
	mpz_divexact_ui(doi, unu, AG);
	DOISPARJOS(p, imp, mul, div1, sum1, sumdoi, doi1, v, FACT, FACTLEG, PRIMP);
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);	
}


void MODSPARJOS2(mpz_t p, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui AG, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t *sumdoi, int doi1, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, int *FACTAUX, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP) {
	mpz_divexact_ui(doi, unu, AG);
	DOISPARJOSM(p, imp, mul, div1, sum1, div, sum, mem, sumdoi, doi1, v, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACTAUX, SFACT, SFACTLEG, SPRIMP);
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);	
}


void MODSPARJOS20(mpz_t p, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui AG, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, int doi1, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int *FACTAUX) {	
	mpz_divexact_ui(doi, unu, AG);
	DOISPARJOSM0(p, imp, mul, div, sum, div1, sum1, mem, sumdoi, doi1, v, FACT, FACTLEG, PRIMP, FACTAUX);
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);	
}


void MODSPARJOS10(mpz_t p, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui AG, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, int doi1, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP) {
	mpz_divexact_ui(doi, unu, AG);
	DOISPARJOSMARE(p, imp, mul, div1, sum1, mem, sumdoi, doi1, v, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP);
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);
}


void SUSMODSPARUL(mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int *doi2, int *doi3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, int v, mpz_t *sumdoi, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, int doiul, int sep) {
	MODSPARSUS20(1, k, 0, unu, d, d1, w1, doi, Q, F2, div, sum, div1, sum1, mem, sumdoi, doi1, v, 0, FACT, FACTLEG, PRIMP, FACTAUX, summ, imp, mul, p);//K-urile pure.
	MODSPARSUS2(1, knk, 0, unu, d, d1, w2, doi, Q, F2, div1, sum1, div, sum, mem, sumdoi, doi2, v, 0, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX2, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);//Amestecatele.
	MODSPARSUS10(1, nk, 0, unu, d, d1, w3, doi, Q, F2, div1, sum1, mem, sumdoi, doi3, v, 0, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP, summ, imp, mul, p, doiul, sep);//Non K.
}


void JOSMODSPARUL(int W, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui m1, gmp_ui m2, gmp_ui m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int *doi2, int *doi3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t *sumdoi, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t p, gmp_ui *A5, int doiul, int sep) {
	
	if(m1 && mpz_divisible_ui_p(p, m1)) {
		MODSPARJOS20(p, unu, d, d1, w1, doi, trei, imp, mul, Q, F2, div, sum, div1, sum1, mem, sumdoi, doi1-1, v, FACT, FACTLEG, PRIMP, FACTAUX);	
	}
	
	
	if(m2 && mpz_divisible_ui_p(p, m2)) {
		MODSPARJOS2(p, unu, d, d1, w2, doi, trei, imp, mul, Q, F2, div1, sum1, div, sum, mem, sumdoi, doi2-1, v, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX2, SFACT2, SFACTLEG2, SPRIMP2);
	}
	
	
	if(m3 && mpz_divisible_ui_p(p, m3)) {
		MODSPARJOS10(p, unu, d, d1, w3, doi, trei, imp, mul, Q, F2, div1, sum1, mem, sumdoi, doi3-1, v, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP);
	}
	
	
	if(A5 && mpz_divisible_ui_p(unu, A5)) {
		SEPJOS(unu, d, d1, doiul, doi, trei, imp, mul, Q, F2, sumdoi, v);
	}
}


void SUSMODSPAR1(char *Q, long PP2, FILE *f1, int &W, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, mpz_t *sumdoi, int doi1, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, gmp_ui *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, mpz_scan1(unu, 0));
	MODSPARSUS1(1, W, 0, unu, d, d1, AG, doi, Q, F2, div1, sum1, sumdoi, doi1, v, 0, FACT, FACTLEG, PRIMP, summ, imp, mul, p, doiul, sep);	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	mpz_set_str(d, Q, 10);
	fgets(Q, 1920, f1);
	}
}


void SUSMODSPAR2(char *Q, long PP2, FILE *f1, int &W, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F2, int doi1, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, mpz_scan1(unu, 0));
	MODSPARSUS10(1, W, 0, unu, d, d1, AG, doi, Q, F2, div1, sum1, mem, q, doi1, v, 0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, summ, imp, mul, p, doiul, sep);	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	mpz_set_str(d, Q, 10);
	fgets(Q, 1920, f1);
	}
}


void SUSMODSPAR3(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, int v, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);		
		mpz_tdiv_q_2exp(p, unu, v = mpz_scan1(unu, 0));
    	SUSMODSPARUL(unu, d, d1, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, v, q, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p, doiul, sep);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		mpz_set_str(d, Q, 10);
		fgets(Q, 1920, f1);
	}
}


void JOSMODSPAR1(char *Q, long PP2, FILE *f1, int &W, int f, int u, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, mpz_t *sumdoi, int doi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, gmp_ui *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;

	
	if(mpz_divisible_ui_p(unu, AG)) {
		 {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));			
		}
		MODSPARJOS1(p, unu, d, d1, AG, doi, trei, imp, mul, Q, F2, div1, sum1, sumdoi, doi1-1, u, FACT, FACTLEG, PRIMP);
	}
	
	
		if(mpz_divisible_ui_p(unu, A5)) {
			 {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			}
			SEPJOS(unu, d, d1, doiul, doi, trei, imp, mul, Q, F2, sumdoi, u);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	mpz_set_str(d, Q, 10);
	fgets(Q, 1920, f1);
	}
}


void JOSMODSPAR2(char *Q, long PP2, FILE *f1, int &W, int f, int u, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F2, int doi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	
	
	if(mpz_divisible_ui_p(unu, AG)) {
		 {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			}
		MODSPARJOS10(p, unu, d, d1, AG, doi, trei, imp, mul, Q, F2, div1, sum1, mem, q, doi1-1, u, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP);
	}
	
	
		if(mpz_divisible_ui_p(unu, A5)) {
			 {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			}
			SEPJOS(unu, d, d1, doiul, doi, trei, imp, mul, Q, F2, q, u);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	mpz_set_str(d, Q, 10);
	fgets(Q, 1920, f1);
	}
}


void JOSMODSPAR3(char *Q, long PP2, FILE *f1, int W, int u, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, gmp_ui m1, gmp_ui m2, gmp_ui m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t p, mpz_t *q, int doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;		
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));				
		JOSMODSPARUL(0, imp, mul, unu, d, d1, doi, trei, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, u, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, A5, doiul, sep);
		
		if(sep) {
			if(u < 0) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				}
			 
				if(mpz_divisible_ui_p(unu, A5)) {		
					SEPJOS(unu, d, d1, doiul, doi, trei, imp, mul, Q, F2, q, u);
				}
			
		}
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	mpz_set_str(d, Q, 10);
	fgets(Q, 1920, f1);
	}
}


void MODSPARSUM(char *Q, long PP2, FILE *f1, int &W, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, gmp_ui m1, gmp_ui m2, gmp_ui m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *doi0, int doiul, int *mem, int &sus, int &dir, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, gmp_ui *q0, int sep) {
	if(dir) {
		sus < 163? SUSMODSPAR1(Q, PP2, f1, W, unu, d, d1, doi, AG, div1, sum1, F2, q, doi0, 0, FACT, FACTLEG, PRIMP, trei, imp, mul, p, q0, doiul, sep)
			: sus < 223? SUSMODSPAR2(Q, PP2, f1, W, unu, d, d1, doi, AG, div1, sum1, mem, F2, doi0, 0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, trei, imp, mul, p, q, doiul, sep) 
				:  SUSMODSPAR3(Q, PP2, f1, unu, d, d1, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, F2, mem, 0, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, trei, imp, mul, p, q, doiul, sep);
		} else {
		sus < 163? JOSMODSPAR1(Q, PP2, f1, W, 0, 0, imp, mul, unu, d, d1, doi, trei, A5, AG, div1, sum1, F2, q, doi0, FACT, FACTLEG, PRIMP, p, q0, doiul, sep)
			: sus < 223? JOSMODSPAR2(Q, PP2, f1, W, 0, 0, imp, mul, unu, d, d1, doi, trei, A5, AG, div1, sum1, mem, F2, doi0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p, q, doiul, sep) 
				: JOSMODSPAR3(Q, PP2, f1, W, 0, imp, mul, unu, d, d1, doi, trei, A5, AG, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, q, doiul, sep);
		}
}


//MODPRIMSUM:
void MODPRIMSUMSUS(int n, int z, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, int f, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p) {
	 {
		nr = nr1, nm = nm1;
		
		for(z = 0; FACT[z]; z++)
		mpz_divisible_ui_p(p, FACT[z])?
			MODPSUS0(p, FACTLEG[z], PRIMP[z], div1, sum1, nr, nm, 2, 0)
				: MODPSUS1(FACTLEG[z], PRIMP[z], div1, sum1, nr, nm);
		CMMS0(unu, doi, A2, nr, nm, CMMDC(nr, nm, nr%nm), Q, F2);
	}
}


void MODPRIMSUMSUS2(int n, int z, int f, gmp_ui nr, gmp_ui nm, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t nr2, mpz_t nm2, mpz_t p) {
	 {
		mpz_set_ui(nm2, nm);
		mpz_set_ui(nr2, nr);
		
		for(z = 0; FACT[z]; z++)
			mpz_divisible_ui_p(p, FACT[z])?
				MODPSUSM2(p, FACTLEG[z], PRIMP[z], 2, 0, div1, sum1, nr2, nm2)
					: MODPSUSM1(FACTLEG[z], PRIMP[z], div1, sum1, nr2, nm2);
		CMMS(nr2, nm2, unu, doi, A2, Q, F2);
	}
}


void MODPRIMSUMSUSUL(int n, int z, int f, gmp_ui nr, gmp_ui nm, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sum[][MAX1], int *FACTAUX, int *mem, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t nr2, mpz_t nm2, mpz_t p) {//gmp_ui i;
	 {
		mpz_set_ui(nr2, nr);
		mpz_set_ui(nm2, nm);
		
		for(z = 0; FACT[z]; z++)
			mpz_divisible_ui_p(p, FACT[z])?
				MODPSUSM2(p, FACTLEG[z], PRIMP[z], 2, 0, div1, sum1, nr2, nm2)
					: MODPSUSM1(FACTLEG[z], PRIMP[z], div1, sum1, nr2, nm2);		
		for(z = 0; SFACT[z]; z++)
			if(mpz_divisible_ui_p(p, SFACT[z])) {
				MODPSUSMARE(p, SFACTLEG[z], SPRIMP[z], 0, 0, div1, sum1, sum, doi, FACTAUX[z], mem, nr2, nm2);
				}
			else
				MODPSUSM1(SFACTLEG[z], SPRIMP[z], div1, sum1, nr2, nm2);
		//mpz_cmp_ui(nr2, i = mpz_get_ui(nr2))?
		CMMS(nr2, nm2, unu, doi, A2, Q, F2);
		// : CMMS0(unu, doi, A2, i, mpz_get_ui(nm2), 0, Q, F2);
	}
}
/*

void MODPRIMSUMSUSUL1(int n, int z, int f, gmp_ui nr, gmp_ui nm, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t nr2, mpz_t nm2, mpz_t p) {//gmp_ui i;
	while(1) {
		mpz_set_ui(nr2, nr);
		mpz_set_ui(nm2, nm);
		
		for(z = 0; FACT[z]; z++)
			mpz_divisible_ui_p(p, FACT[z])?
				MODPSUSM2(p, FACTLEG[z], PRIMP[z], 2, 0, div1, sum1, nr2, nm2)
					: MODPSUSM1(FACTLEG[z], PRIMP[z], div1, sum1, nr2, nm2);		
		for(z = 0; SFACT[z]; z++)
			if(mpz_divisible_ui_p(p, SFACT[z])) {
				if(!MODPSUSMARE1(p, SFACTLEG[z], SPRIMP[z], 0, 0, div1, sum1, mem, nr2, nm2)) {goto s1;}
				}
			else
				MODPSUSM1(SFACTLEG[z], SPRIMP[z], div1, sum1, nr2, nm2);
		CMMS(nr2, nm2, unu, doi, A2, Q, F2);
	s1:
	if(++n == f)
		break;		
	}
}*/


void MODPRIMSUMSUSM(int n, int z, int knk, gmp_ui nr, gmp_ui nm, mpz_t unu, mpz_t doi, gmp_ui m2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, int *FACTAUX1, int *FACTAUX, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t nr2, mpz_t nm2, mpz_t p) {
	 {
		mpz_set_ui(nr2, nr);
		mpz_set_ui(nm2, nm);
		
		for(z = 0; FACT1[z]; z++)
		mpz_divisible_ui_p(p, FACT1[z])?
			MODPSUSM2(p, FACTLEG1[z], PRIMP1[z], 2, 0, div1, sum1, nr2, nm2)
				: MODPSUSM1(FACTLEG1[z], PRIMP1[z], div1, sum1, nr2, nm2);	
		for(z = 0; SFACT[z]; z++)
			if(mpz_divisible_ui_p(p, SFACT[z])) {
				MODPSUSMARE(p, SFACTLEG[z], SPRIMP[z], 0, 0, div1, sum1, sum, doi, FACTAUX1[z], mem, nr2, nm2);
				}
				else
				MODPSUSM1(SFACTLEG[z], SPRIMP[z], div1, sum1, nr2, nm2);	
		for(z = 0; FACT[z]; z++)
			if(mpz_divisible_ui_p(p, FACT[z])) {
				MODPSUSM0(p, FACTLEG[z], PRIMP[z], FACTAUX[z], 2, 0, div, sum, div1, sum1, mem, doi, nr2, nm2);
				}
				else
					 MODPSUSM1(FACTLEG[z], PRIMP[z], div1, sum1, nr2, nm2);
		CMMS(nr2, nm2, unu, doi, m2, Q, F2);
	}
}


void MODPRIMSUMSUSM0(int n, int z, int k, gmp_ui nr, gmp_ui nm, mpz_t unu, mpz_t doi, gmp_ui m1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int *FACTAUX, mpz_t nr2, mpz_t nm2, mpz_t p) {
	 {
		mpz_set_ui(nr2, nr);
		mpz_set_ui(nm2, nm);

		for(z = 0; FACT[z]; z++)
			if(mpz_divisible_ui_p(p, FACT[z])) {
				MODPSUSM0(p, FACTLEG[z], PRIMP[z], FACTAUX[z], 2, 0, div, sum, div1, sum1, mem, doi, nr2, nm2);
				}
				else
					MODPSUSM1(FACTLEG[z], PRIMP[z], div1, sum1, nr2, nm2);		
	
		CMMS(nr2, nm2, unu, doi, m1, Q, F2);	
	}
}


void MODPRIMSUMJOS(gmp_ui nr, gmp_ui nm, mpz_t unu, mpz_t doi, gmp_ui A1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int i, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p) {
	for(; FACT[i]; i++)
		MODPJOS0(p, FACTLEG[i], PRIMP[i], 2, div1, sum1, nr, nm);
	
	CMMJ0(unu, doi, A1, nr, nm, CMMDC(nr, nm, nr%nm), Q, F2);
}


void MODPRIMSUMJOS2(gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, mpz_t unu, mpz_t doi, gmp_ui A1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int i, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p) {
	mpz_set_ui(nr2, nr);
	mpz_set_ui(nm2, nm);

	for(; FACT[i]; i++)
		MODPJOSM1(p, FACTLEG[i], PRIMP[i], 2, div1, sum1, nr2, nm2);
	
	CMMJ(nr2, nm2, unu, doi, A1, Q, F2);
}


void MODPRIMSUMJOSUL(mpz_t unu, mpz_t doi, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui A1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int i, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t p) {
	mpz_set_ui(nr2, nr);
	mpz_set_ui(nm2, nm);

	for(; FACT[i]; i++)
		MODPJOSM1(p, FACTLEG[i], PRIMP[i], 2, div1, sum1, nr2, nm2);	
	for(i = 0; SFACT[i]; i++)
		MODPJOSMARE(p, SFACTLEG[i], SPRIMP[i], 0, div1, sum1, mem, nr2, nm2);

	CMMJ(nr2, nm2, unu, doi, A1, Q, F2);
}


void MODPRIMSUMJOSM(mpz_t unu, mpz_t doi, gmp_ui A1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int i, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, int *FACTAUX, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, mpz_t p) {
	mpz_set_ui(nr2, nr);
	mpz_set_ui(nm2, nm);

	for(; FACT1[i]; i++)
		MODPJOSM1(p, FACTLEG1[i], PRIMP1[i], 2, div1, sum1, nr2, nm2);	
	for(i = 0; SFACT[i]; i++)
		MODPJOSMARE(p, SFACTLEG[i], SPRIMP[i], 0, div1, sum1, mem, nr2, nm2);
	for(i = 0; FACT[i]; i++)
		MODPJOSM0(p, doi, FACTLEG[i], PRIMP[i], FACTAUX[i], 2, div, sum, div1, sum1, mem, nr2, nm2);
	
	CMMJ(nr2, nm2, unu, doi, A1, Q, F2);
}


void MODPRIMSUMJOSM0(mpz_t unu, mpz_t doi, gmp_ui A1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int i, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int *FACTAUX, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, mpz_t p) {
	mpz_set_ui(nr2, nr);
	mpz_set_ui(nm2, nm);

	for(; FACT[i]; i++)
		MODPJOSM0(p, doi, FACTLEG[i], PRIMP[i], FACTAUX[i], 2, div, sum, div1, sum1, mem, nr2, nm2);
	
	CMMJ(nr2, nm2, unu, doi, A1, Q, F2);
}


void SUSMODPRIMSUMUL(mpz_t unu, mpz_t doi, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, gmp_ui nr, gmp_ui nm, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX1, int *FACTAUX2, int *FACTAUX3, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t nr2, mpz_t nm2, mpz_t p) {
	MODPRIMSUMSUSM0(0, 0, k, nr, nm, unu, doi, m1, div, sum, div1, sum1, mem, Q, F2, FACT, FACTLEG, PRIMP, FACTAUX, nr2, nm2, p);
	MODPRIMSUMSUSM(0, 0, knk, nr, nm, unu, doi, m2, div, sum, div1, sum1, mem, Q, F2, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX3, FACTAUX2, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p);
	MODPRIMSUMSUSUL(0, 0, nk, nr, nm, unu, doi, m3, div1, sum1, sum, FACTAUX1, mem, Q, F2, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p);
	//MODPRIMSUMSUSUL1(0, 0, nk, nr, nm, unu, doi, m3, div1, sum1, mem, Q, F2, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p);
}


void JOSMODPRIMSUMUL(int W, mpz_t unu, mpz_t doi, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t nr2, mpz_t nm2, gmp_ui nr1, gmp_ui nm1, mpz_t p) {	
	
	if(m1 && mpz_divisible_ui_p(p, m1)) {
		MODPRIMSUMJOSM0(unu, doi, m1, div, sum, div1, sum1, mem, 0, Q, F2, FACT, FACTLEG, PRIMP, FACTAUX, nr1, nm1, nr2, nm2, p);
	}
	
	
	if(m2 && mpz_divisible_ui_p(p, m2)) {
		MODPRIMSUMJOSM(unu, doi, m2, div, sum, div1, sum1, mem, 0, Q, F2, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX2, SFACT2, SFACTLEG2, SPRIMP2, nr1, nm1, nr2, nm2, p);		
	}
	
	
	if(m3 && mpz_divisible_ui_p(p, m3)) {
		MODPRIMSUMJOSUL(unu, doi, nr1, nm1, nr2, nm2, m3, div1, sum1, mem, 0, Q, F2, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP, p);
	}
}


void SUSMODPRIMSUM1(char *Q, long PP2, FILE *f1, int &W, gmp_ui nr, gmp_ui nm, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));	
	MODPRIMSUMSUS(0, 0, 0, 0, nr, nm, W, unu, doi, A2, div1, sum1, Q, F2, FACT, FACTLEG, PRIMP, p);
	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr, &nm);
	}
}


void SUSMODPRIMSUM2(char *Q, long PP2, FILE *f1, int &W, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	MODPRIMSUMSUS2(0, 0, W, nr, nm, unu, doi, A2, div1, sum1, Q, F2, FACT, FACTLEG, PRIMP, nr2, nm2, p);
	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr, &nm);
	}
}


void SUSMODPRIMSUM3(char *Q, long PP2, FILE *f1, int &W, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sum[][MAX1], int *mem, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, int *FACTAUX, mpz_t p, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	//MODPRIMSUMSUSUL1(0, 0, W, nr, nm, unu, doi, A2, div1, sum1, mem, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p);
	MODPRIMSUMSUSUL(0, 0, W, nr, nm, unu, doi, A2, div1, sum1, sum, FACTAUX, mem, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p);
	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr, &nm);
	}
}


void SUSMODPRIMSUM4(char *Q, long PP2, FILE *f1, gmp_ui nr, gmp_ui nm, mpz_t unu, mpz_t doi, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX1, int *FACTAUX2, int *FACTAUX3, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t nr2, mpz_t nm2, mpz_t p, int g) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, mpz_scan1(unu, 0));
		SUSMODPRIMSUMUL(unu, doi, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, nr, nm, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p);
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu %llu", &nr, &nm);
	}
}


void JOSMODPRIMSUM1(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui nr1, gmp_ui nm1, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;

	
	if(mpz_divisible_ui_p(unu, A2)) {
		 {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));			
			}

		MODPRIMSUMJOS(nr1, nm1, unu, doi, A2, div1, sum1, 0, Q, F2, FACT, FACTLEG, PRIMP, p);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr1, &nm1);
	}
}


void JOSMODPRIMSUM2(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;

	
	if(mpz_divisible_ui_p(unu, A2)) {
		 {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));			
			}

		MODPRIMSUMJOS2(nr1, nm1, nr2, nm2, unu, doi, A2, div1, sum1, 0, Q, F2, FACT, FACTLEG, PRIMP, p);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr1, &nm1);
	}
}


void JOSMODPRIMSUM3(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui nr1, gmp_ui nm1, mpz_t nm2, mpz_t nr2, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, mpz_t p) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;

	
	if(mpz_divisible_ui_p(unu, A2)) {
		 {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			}
		
		MODPRIMSUMJOSUL(unu, doi, nr1, nm1, nr2, nm2, A2, div1, sum1, mem, 0, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr1, &nm1);
	}
}


void JOSMODPRIMSUM4(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t p) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;

		mpz_tdiv_q_2exp(p, unu, mpz_scan1(unu, 0));
		JOSMODPRIMSUMUL(W, unu, doi, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, nr1, nm1, p);
		

		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu %llu", &nr1, &nm1);
		}
}


void MODPRIMSUM(char *Q, long PP2, FILE *f1, int &W, int &f, int &u, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui m1, gmp_ui m2, gmp_ui m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui nr, gmp_ui nm, int &sus, int &dir, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX1, int *FACTAUX2, int *FACTAUX3, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q, gmp_ui *q0) {
	if(dir) {
		sus < 55? SUSMODPRIMSUM1(Q, PP2, f1, W, nr, nm, unu, doi, A2, div1, sum1, F2, FACT, FACTLEG, PRIMP, p, 0)
		: sus < 163? SUSMODPRIMSUM2(Q, PP2, f1, W, nr, nm, nr2, nm2, unu, doi, A2, div1, sum1, F2, FACT, FACTLEG, PRIMP, p, 0)
			: sus < 223? SUSMODPRIMSUM3(Q, PP2, f1, W, nr, nm, nr2, nm2, unu, doi, A2, div1, sum1, sum, mem, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, FACTAUX1, p, 0)
				: SUSMODPRIMSUM4(Q, PP2, f1, nr, nm, unu, doi, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p, 0);
		} else {
		sus < 55? JOSMODPRIMSUM1(Q, PP2, f1, W, f, u, nr, nm, unu, doi, A2, div1, sum1, F2, FACT, FACTLEG, PRIMP, p)
		: sus < 163? JOSMODPRIMSUM2(Q, PP2, f1, W, f, u, nr, nm, nr2, nm2, unu, doi, A2, div1, sum1, F2, FACT, FACTLEG, PRIMP, p)
			: sus < 223? JOSMODPRIMSUM3(Q, PP2, f1, W, f, u, nr, nm, nr2, nm2, unu, doi, A2, div1, sum1, mem, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p)
			: JOSMODPRIMSUM4(Q, PP2, f1, W, u, nr, nm, nr2, nm2, unu, doi, A2, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
	}
}


//Cum facem la doiari?

//MODPARSUM:
void DOIMODPJOS(mpz_t unu, gmp_ui j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi1, int doi, gmp_ui &nr, gmp_ui &nm, gmp_ui *FACT, int *FACTLEG, int *PRIMP) {//doi - 1.
MODPDOIJOS(doi, j, nr, nm, sumdoi1);
	for(j = 0; FACT[j]; j++)
		MODPJOS0(unu, FACTLEG[j], PRIMP[j], 2, div1, sum1, nr, nm);
}


void DOIMODPJOSUL(mpz_t unu, mpz_t d1,gmp_ui j1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi1, int doi, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui *FACT, int *FACTLEG, int *PRIMP) {
MODPDOIJOSUL(doi, j1, nr, nm, nr2, nm2, sumdoi1);
for(; FACT[j1]; j1++)
	MODPJOSM1(unu, FACTLEG[j1], PRIMP[j1], 2, div1, sum1, nr2, nm2);
}


void DOIMODPJOSM(mpz_t unu, mpz_t doi, gmp_ui j1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sumdoi1, mpz_t sumdoi, int doi1, mpz_t nr2, mpz_t nm2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, int *FACTAUX, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP) {
MODPDOIJOSM(doi1, doi, sumdoi, sumdoi1, nr2, nm2);
for(; FACT1[j1]; j1++)
	MODPJOSM1(unu, FACTLEG1[j1], PRIMP1[j1], 2, div1, sum1, nr2, nm2);
for(j1 = 0; SFACT[j1]; j1++)
	MODPJOSMARE(unu, SFACTLEG[j1], SPRIMP[j1], 0, div1, sum1, mem, nr2, nm2);
for(j1 = 0; FACT[j1]; j1++)
	MODPJOSM0(unu, doi, FACTLEG[j1], PRIMP[j1], FACTAUX[j1], 2, div, sum, div1, sum1, mem, nr2, nm2);
}


void DOIMODPJOSM0(mpz_t unu, mpz_t doi, gmp_ui j1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sumdoi1, mpz_t sumdoi, int doi1, mpz_t nr2, mpz_t nm2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int *FACTAUX) {
MODPDOIJOSM(doi1, doi, sumdoi, sumdoi1, nr2, nm2);
for(j1 = 0; FACT[j1]; j1++)
	MODPJOSM0(unu, doi, FACTLEG[j1], PRIMP[j1], FACTAUX[j1], 2, div, sum, div1, sum1, mem, nr2, nm2);
}


void DOIMODPJOSM1(mpz_t unu, mpz_t doi, gmp_ui j1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *sumdoi1, mpz_t sumdoi, int doi1, mpz_t nr2, mpz_t nm2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP) {
MODPDOIJOSM(doi1, doi, sumdoi, sumdoi1, nr2, nm2);
for(; FACT[j1]; j1++)
	MODPJOSM1(unu, FACTLEG[j1], PRIMP[j1], 2, div1, sum1, nr2, nm2);
for(j1 = 0; SFACT[j1]; j1++)
	MODPJOSMARE(unu, SFACTLEG[j1], SPRIMP[j1], 0, div1, sum1, mem, nr2, nm2);
}


void DOIMODPJOSM2(mpz_t unu, mpz_t doi, gmp_ui j1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi1, mpz_t sumdoi, int doi1, mpz_t nr2, mpz_t nm2, gmp_ui *FACT, int *FACTLEG, int *PRIMP) {
MODPDOIJOSM(doi1, doi, sumdoi, sumdoi1, nr2, nm2);
for(; FACT[j1]; j1++)
	MODPJOSM1(unu, FACTLEG[j1], PRIMP[j1], 2, div1, sum1, nr2, nm2);
}


void SEPSUMSUS(mpz_t unu, mpz_t doi, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, char *Q, FILE *F2, gmp_ui *sumdoi1, int j, int n, int doiul, int sep) {//n = 0.
		MODPDOISUS(doiul, j, nr = nr1, nm = nm1, sumdoi1);
		CMM2S0(unu, doi, doiul, nr, nm, CMMDC(nr, nm, nr%nm), Q, F2);
}


void SEPSUMSUS1(mpz_t unu, mpz_t doi, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, char *Q, FILE *F2, gmp_ui *sumdoi1, int j, int n, int doiul, int sep) {
		mpz_set_ui(nr2, nr1);
		mpz_set_ui(nm2, nm1);
		MODPDOISUSUL(doiul, j, nr1, nm1, nr2, nm2, sumdoi1);		
		CMM2S(nr2, nm2, unu, doi, doiul, Q, F2);
}


void SEPSUMSUS2(mpz_t unu, mpz_t doi, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, char *Q, FILE *F2, mpz_t *sumdoi, gmp_ui *sumdoi1, int j, int n, int doiul, int sep) {
	mpz_set_ui(nr2, nr1);
	mpz_set_ui(nm2, nm1);		
	MODPDOISUSM(doiul, doi, j, sumdoi, sumdoi1, nr2, nm2);
	CMM2S(nr2, nm2, unu, doi, doiul, Q, F2);
}


void SEPSUMSUS3(mpz_t unu, mpz_t doi, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, char *Q, FILE *F2, mpz_t *sumdoi, gmp_ui *sumdoi1, int doiul, int j, int n, int sep) {//n = 0.
	mpz_set_ui(nr2, nr1);
	mpz_set_ui(nm2, nm1);
	MODPDOISUSM(doiul, doi, j, sumdoi, sumdoi1, nr2, nm2);		
	CMM2S(nr2, nm2, unu, doi, doiul, Q, F2);
}


void SEPSUMJOS(int doiul, mpz_t unu, mpz_t doi, gmp_ui nr, gmp_ui nm, gmp_ui j2, gmp_ui *sumdoi1, char *Q, FILE *F2) {
	MODPDOIJOS(doiul-1, j2, nr, nm, sumdoi1);
	CMM2J0(unu, doi, doiul, nr, nm, CMMDC(nr, nm, nr%nm), Q, F2);
}


void SEPSUMJOS1(int doiul, mpz_t unu, mpz_t doi, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, mpz_t sumdoi, gmp_ui *sumdoi1, char *Q, FILE *F2) {
	mpz_set_ui(nr2, nr);
	mpz_set_ui(nm2, nm);
	MODPDOIJOSM(doiul-1, doi, sumdoi, sumdoi1, nr2, nm2);
	CMM2J(nr2, nm2, unu, doi, doiul, Q, F2);
}


void SEPSUMJOS2(mpz_t unu, mpz_t doi, mpz_t nr2, mpz_t nm2, gmp_ui nr, gmp_ui nm, int j2, gmp_ui *sumdoi1, int doiul, char *Q, FILE *F2) {
	MODPDOIJOSUL(doiul-1, j2, nr, nm, nr2, nm2, sumdoi1);	
	CMM2J(nr2, nm2, unu, doi, doiul, Q, F2);
}


void MODPARSUMSUS(int n, int z, gmp_ui nr1, gmp_ui nm1, gmp_ui nr, gmp_ui nm, int f, mpz_t unu, mpz_t doi, gmp_ui *AG, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi1, int doi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, int doiul, int sep) {	 
	MODPDOISUS(doi1, j, nr = nr1, nm = nm1, sumdoi1);
	
	for(z = 0; FACT[z]; z++)
	mpz_divisible_ui_p(p, FACT[z])?
		MODPSUS0(p, FACTLEG[z], PRIMP[z], div1, sum1, nr, nm, 2, 0)
			: MODPSUS1(FACTLEG[z], PRIMP[z], div1, sum1, nr, nm);
	
	CMMS0(unu, doi, AG, nr1, nm1, CMMDC(nr1, nm1, nr1%nm1), Q, F2);
	SEPSUMSUS(unu, doi, nr, nm, nr1, nm1, Q, F2, sumdoi1, j, 0, doiul, sep);
}


void MODPARSUMSUS1(int n, int z, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, int f, mpz_t unu, mpz_t doi, gmp_ui *AG, int doi1, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sum[][MAX1], int *mem, gmp_ui *sumdoi1, mpz_t *sumdoi, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, int *FACTAUX, mpz_t p, int doiul, int sep) {
	mpz_set_ui(nm2, nm1);
	mpz_set_ui(nr2, nr1);
	MODPDOISUSM(doi1, doi, j, sumdoi, sumdoi1, nr2, nm2);
	
	for(z = 0; FACT[z]; z++)
	mpz_divisible_ui_p(p, FACT[z])?
		MODPSUSM2(p, FACTLEG[z], PRIMP[z], 2, 0, div1, sum1, nr2, nm2)
			: MODPSUSM1(FACTLEG[z], PRIMP[z], div1, sum1, nr2, nm2);
		
	for(z = 0; FACT[z]; z++)
	mpz_divisible_ui_p(p, SFACT[z])?
		MODPSUSMARE(p, SFACTLEG[z], SPRIMP[z], 0, 0, div1, sum1, sum, doi, FACTAUX[z], mem, nr2, nm2)
			: MODPSUSM1(SFACTLEG[z], SPRIMP[z], div1, sum1, nr2, nm2);
		
	CMMS(nr2, nm2, unu, doi, AG, Q, F2);
	SEPSUMSUS2(unu, doi, nr1, nm1, nr2, nm2, Q, F2, sumdoi, sumdoi1, j, 0, doiul, sep);
}


void MODPARSUMSUS2(int n, int z, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, int f, mpz_t unu, mpz_t doi, gmp_ui *AG, int doi1, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi1, mpz_t *sumdoi, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, int doiul, int sep) {	 
	mpz_set_ui(nm2, nm1);
	mpz_set_ui(nr2, nr1);
	MODPDOISUSM(doi1, doi, j, sumdoi, sumdoi1, nr2, nm2);
	
	for(z = 0; FACT[z]; z++)
	mpz_divisible_ui_p(p, FACT[z])?
		MODPSUSM2(p, FACTLEG[z], PRIMP[z], 2, 0, div1, sum1, nr2, nm2)
			: MODPSUSM1(FACTLEG[z], PRIMP[z], div1, sum1, nr2, nm2);
			
	CMMS(nr2, nm2, unu, doi, AG, Q, F2);
	SEPSUMSUS2(unu, doi, nr1, nm1, nr2, nm2, Q, F2, sumdoi, sumdoi1, j, 0, doiul, sep);
}


void MODPARSUMSUSM(int n, int z, int knk, mpz_t unu, mpz_t doi, gmp_ui *w2, int doi1, int j, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, int *FACTAUX, int *FACTAUX1, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, mpz_t p) {	 
	mpz_set_ui(nr2, nr);
	mpz_set_ui(nm2, nm);	
	MODPDOISUSM(doi1, doi, j, sumdoi, sumdoi1, nr2, nm2);
	
	for(z = 0; FACT1[z]; z++)
	mpz_divisible_ui_p(p, FACT1[z])?
		MODPSUSM2(p, FACTLEG1[z], PRIMP1[z], 2, 0, div1, sum1, nr2, nm2)
			: MODPSUSM1(FACTLEG1[z], PRIMP1[z], div1, sum1, nr2, nm2);

	for(z = 0; SFACT[z]; z++)
	mpz_divisible_ui_p(p, SFACT[z])?
		MODPSUSMARE(p, SFACTLEG[z], SPRIMP[z], 0, 0, div1, sum1, sum, doi, FACTAUX1[z], mem, nr2, nm2)
			: MODPSUSM1(SFACTLEG[z], SPRIMP[z], div1, sum1, nr2, nm2);

	for(z = 0; FACT[z]; z++)
		mpz_divisible_ui_p(p, FACT[z])?
			MODPSUSM0(p, FACTLEG[z], PRIMP[z], FACTAUX[z], 2, 0, div, sum, div1, sum1, mem, doi, nr2, nm2)
				: MODPSUSM1(FACTLEG[z], PRIMP[z], div1, sum1, nr2, nm2);
	
	CMMS(nr2, nm2, unu, doi, w2, Q, F2);
	//SEPSUMSUS3(unu, doi, trei, d1, nr2, nm2, Q, F2, sumdoi, sumdoi1, A5, j, 0, sep);
}


void MODPARSUMSUSM0(int n, int z, int k, mpz_t unu, mpz_t doi, gmp_ui *w1, int doi1, int j, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int *FACTAUX, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, mpz_t p) {
	 {
		mpz_set_ui(nr2, nr);
		mpz_set_ui(nm2, nm);
		MODPDOISUSM(doi1, doi, j, sumdoi, sumdoi1, nr2, nm2);
		
		for(z = 0; FACT[z]; z++)
		mpz_divisible_ui_p(p, FACT[z])?
			MODPSUSM0(p, FACTLEG[z], PRIMP[z], FACTAUX[z], 2, 0, div, sum, div1, sum1, mem, doi, nr2, nm2)
				: MODPSUSM1(FACTLEG[z], PRIMP[z], div1, sum1, nr2, nm2);
			
		CMMS(nr2, nm2, unu, doi, w1, Q, F2);
	}	
}


void MODPARSUMJOSUL(gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, mpz_t unu, mpz_t doi, gmp_ui AG, gmp_ui j2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi1, int doi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p) {
	DOIMODPJOSUL(p, doi, j2, div1, sum1, sumdoi1, doi1, nr1, nm1, nr2, nm2, FACT, FACTLEG, PRIMP);
	CMMJ(nr2, nm2, unu, doi, AG, Q, F2);
}


void MODPARSUMJOS(gmp_ui nr1, gmp_ui nm1, mpz_t unu, mpz_t doi, gmp_ui AG, int j2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi1, int doi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p) {
	DOIMODPJOS(p, j2, div1, sum1, sumdoi1, doi1, nr1, nm1, FACT, FACTLEG, PRIMP);
	CMMJ0(unu, doi, AG, nr1, nm1, CMMDC(nr1, nm1, nr1%nm1),  Q, F2);
}


void MODPARSUMJOSM(mpz_t unu, mpz_t doi, gmp_ui AG, int j2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, int doi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, int *FACTAUX, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, mpz_t p) {
	mpz_set_ui(nr2, nr);
	mpz_set_ui(nm2, nm);
	DOIMODPJOSM(p, doi, 0, div, sum, div1, sum1, mem, sumdoi1, sumdoi[j2], doi1, nr2, nm2, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACTAUX, SFACT, SFACTLEG, SPRIMP);
	CMMJ(nr2, nm2, unu, doi, AG, Q, F2);
}


void MODPARSUMJOSM0(mpz_t unu, mpz_t doi, gmp_ui AG, gmp_ui j2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2],int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, int doi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, int *FACTAUX, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, mpz_t p) {
	mpz_set_ui(nr2, nr);
	mpz_set_ui(nm2, nm);
	DOIMODPJOSM0(p, doi, 0, div, sum, div1, sum1, mem, sumdoi1, sumdoi[j2], doi1, nr2, nm2, FACT, FACTLEG, PRIMP, FACTAUX);
	CMMJ(nr2, nm2, unu, doi, AG, Q, F2);
}


void MODPARSUMJOSM1(mpz_t unu, mpz_t doi, gmp_ui AG, int j2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, int doi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, mpz_t p) {
	mpz_set_ui(nr2, nr);
	mpz_set_ui(nm2, nm);
	DOIMODPJOSM1(p, doi, 0, div1, sum1, mem, sumdoi1, sumdoi[j2], doi1, nr2, nm2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP);
	CMMJ(nr2, nm2, unu, doi, AG, Q, F2);
}


void MODPARSUMJOSM2(mpz_t unu, mpz_t doi, gmp_ui AG, int j2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *sumdoi, gmp_ui *sumdoi1, int doi1, char *Q, FILE *F2, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, mpz_t p) {
	mpz_set_ui(nr2, nr);
	mpz_set_ui(nm2, nm);
	DOIMODPJOSM2(p, doi, 0, div1, sum1, sumdoi1, sumdoi[j2], doi1, nr2, nm2, FACT, FACTLEG, PRIMP);
	CMMJ(nr2, nm2, unu, doi, AG, Q, F2);
}


void SUSMODPARSUMUL(mpz_t unu, mpz_t doi, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int *doi2, int *doi3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, gmp_ui nr, gmp_ui nm, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX1, int *FACTAUX2, int *FACTAUX3, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t nr2, mpz_t nm2, int j, mpz_t p, int doiul, int sep) {
	MODPARSUMSUSM0(0, 0, k, unu, doi, w1, doi1, j, div, sum, div1, sum1, mem, sumdoi, sumdoi1, Q, F2, FACT, FACTLEG, PRIMP, FACTAUX, nr, nm, nr2, nm2, p);
	MODPARSUMSUSM(0, 0, knk, unu, doi, w2, doi2, j, div, sum, div1, sum1, mem, sumdoi, sumdoi1, Q, F2, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX2, FACTAUX3, SFACT2, SFACTLEG2, SPRIMP2, nr, nm, nr2, nm2, p);
	MODPARSUMSUS1(0, 0, nr, nm, nr2, nm2, nk, unu, doi, w3, doi3, j, div1, sum1, sum, mem, sumdoi1, sumdoi, Q, F2, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP, FACTAUX1, p, doiul, 0);
	SEPSUMSUS1(unu, doi, nr, nm, nr2, nm2, Q, F2, sumdoi1, j, 0, doiul, sep);
}


void JOSMODPARSUMUL(int W, mpz_t unu, mpz_t doi, gmp_ui m1, gmp_ui m2, gmp_ui m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int *doi2, int *doi3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t nr2, mpz_t nm2, gmp_ui &nr1, gmp_ui &nm1, int j2, mpz_t p, gmp_ui *A5, int doiul, int sep) {
	if(m1 && mpz_divisible_ui_p(p, m1)) {
		MODPARSUMJOSM0(unu, doi, w1, j2, div, sum, div1, sum1, mem, sumdoi, sumdoi1, doi1-1, Q, F2, FACT, FACTLEG, PRIMP, FACTAUX, nr1, nm1, nr2, nm2, p);
	}
	
	if(m2 && mpz_divisible_ui_p(p, m2)) {
		MODPARSUMJOSM(unu, doi, w2, j2, div, sum, div1, sum1, mem, sumdoi, sumdoi1, doi2-1, Q, F2, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX2, SFACT, SFACTLEG, SPRIMP, nr1, nm1, nr2, nm2, p);
	}	
	
	if(m3 && mpz_divisible_ui_p(p, m3)) {
		MODPARSUMJOSM1(unu, doi, w3, j2, div1, sum1, mem, sumdoi, sumdoi1, doi3-1, Q, F2, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP, nr1, nm1, nr2, nm2, p);
	}
	
	if(A5 && mpz_divisible_ui_p(unu, A5)) {
		SEPSUMJOS1(doiul, unu, doi, nr1, nm1, nr2, nm2, sumdoi[j2], sumdoi1, Q, F2);
	}
}


void SUSMODPARSUM1(char *Q, long PP2, FILE *f1, int &W, mpz_t unu, mpz_t doi, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *sumdoi1, int doi1, gmp_ui nr, gmp_ui nm, int j, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, gmp_ui *q, int doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
		MODPARSUMSUS(0, 0, nr, nm, nr, nm, W, unu, doi, AG, j, div1, sum1, sumdoi1, doi1, Q, F2, FACT, FACTLEG, PRIMP, p, doiul, sep);		
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu %llu", &nr, &nm);
		}
	}


void SUSMODPARSUM2(char *Q, long PP2, FILE *f1, int &W, mpz_t unu, mpz_t doi, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *sumdoi1, int doi1, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, int j, gmp_ui *FACT, int *FACTLEG, int *PRIMP, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
	MODPARSUMSUS2(0, 0, nr, nm, nr2, nm2, W, unu, doi, AG, doi1, j, div1, sum1, sumdoi1, q, Q, F2, FACT, FACTLEG, PRIMP, p, doiul, sep);
	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr, &nm);
	}
}


void SUSMODPARSUM3(char *Q, long PP2, FILE *f1, int &W, mpz_t unu, mpz_t doi, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sum[][MAX1], int *mem, FILE *F2, gmp_ui *sumdoi1, int doi1, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, int j, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, int *FACTAUX, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
	MODPARSUMSUS1(0, 0, nr, nm, nr2, nm2, W, unu, doi, AG, doi1, j, div1, sum1, sum, mem, sumdoi1, q, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, FACTAUX, p, doiul, sep);
	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr, &nm);
	}
}


void SUSMODPARSUM4(char *Q, long PP2, FILE *f1, mpz_t unu, mpz_t doi, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui *sumdoi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX1, int *FACTAUX2, int *FACTAUX3, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, int j, mpz_t p, mpz_t *q, int doiul, int sep) {	
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));		
		SUSMODPARSUMUL(unu, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, sumdoi1, nr, nm, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, j, p, doiul, sep);
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu %llu", &nr, &nm);
		}
	}


void JOSMODPARSUM1(char *Q, long PP2, FILE *f1, int &W, int f, int u, mpz_t unu, mpz_t doi, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *sumdoi1, int doi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui nr, gmp_ui nm, mpz_t p, gmp_ui *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	
	if(mpz_divisible_ui_p(unu, AG)) {		
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		MODPARSUMJOS(nr, nm, unu, doi, AG, u, div1, sum1, sumdoi1, doi1-1, Q, F2, FACT, FACTLEG, PRIMP, p);
	}	
	
		if(mpz_divisible_ui_p(unu, A5)) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));				
				}
				
			SEPSUMJOS(doiul, unu, doi, nr, nm, u, sumdoi1, Q, F2);
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr, &nm);
	}
}


void JOSMODPARSUM2(char *Q, long PP2, FILE *f1, int &W, int f, int u, mpz_t unu, mpz_t doi, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *sumdoi1, int doi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
		
	if(mpz_divisible_ui_p(unu, AG)) {
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		MODPARSUMJOSM2(unu, doi, AG, u, div1, sum1, q, sumdoi1, doi1-1, Q, F2, FACT, FACTLEG, PRIMP, nr, nm, nr2, nm2, p);
	}
	
	if(mpz_divisible_ui_p(unu, A5)) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			}

		SEPSUMJOS1(doiul, unu, doi, nr, nm, nr2, nm2, q[u], sumdoi1, Q, F2);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr, &nm);
	}
}


void JOSMODPARSUM3(char *Q, long PP2, FILE *f1, int &W, int f, int u, mpz_t unu, mpz_t doi, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F2, gmp_ui *sumdoi1, int doi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q, int doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
		u = 0;
	
	if(mpz_divisible_ui_p(unu, AG)) {
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		MODPARSUMJOSM1(unu, doi, AG, u, div1, sum1, mem, q, sumdoi1, doi1-1, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, nr, nm, nr2, nm2, p);
}
	
	if(mpz_divisible_ui_p(unu, A5)) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			}

		SEPSUMJOS1(doiul, unu, doi, nr, nm, nr2, nm2, q[u], sumdoi1, Q, F2);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fseek(f1, 1, SEEK_CUR);
	fgets(Q, 1920, f1);
	fscanf(f1, "%llu %llu", &nr, &nm);
	}
}


void JOSMODPARSUM4(char *Q, long PP2, FILE *f1, int W, int u, mpz_t unu, mpz_t doi, gmp_ui *AG, gmp_ui m1, gmp_ui m2, gmp_ui m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui *sumdoi1, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX2, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q, gmp_ui *A5, int doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;
		while(1) {
			if(!u) break;
			if(mpz_divisible_ui_p(unu, AG[--u])) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				JOSMODPARSUMUL(W, unu, doi, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, sumdoi1, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, nr, nm, u, p, A5, doiul, 0);
				break;
				}
		}
	if(sep) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));			
			}

		mpz_set_ui(nr2, nr);
		mpz_set_ui(nm2, nm);
		for(; sep >= 0; --sep)
		if(mpz_divisible_ui_p(unu, A5)) {
			SEPSUMJOS1(doiul, unu, doi, nr, nm, nr2, nm2, q[u], sumdoi1, Q, F2);
			}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu %llu", &nr, &nm);
	}
}


void MODPARSUM(char *Q, long PP2, FILE *f1, int &W, mpz_t unu, mpz_t doi, gmp_ui *A5, gmp_ui *AG, gmp_ui m1, gmp_ui m2, gmp_ui m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui *sumdoi1, int *doi0, gmp_ui nr, gmp_ui nm, int &sus, int &dir, gmp_ui *FACT, int *FACTLEG, int *PRIMP, gmp_ui *FACT1, int *FACTLEG1, int *PRIMP1, gmp_ui *FACT2, int *FACTLEG2, int *PRIMP2, gmp_ui *FACT3, int *FACTLEG3, int *PRIMP3, int *FACTAUX, int *FACTAUX1, int *FACTAUX2, int *FACTAUX3, gmp_ui *SFACT, int *SFACTLEG, int *SPRIMP, gmp_ui *SFACT2, int *SFACTLEG2, int *SPRIMP2, mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q, gmp_ui *q0, int doiul, int sep) {
	if(dir) {
		sus < 55? SUSMODPARSUM1(Q, PP2, f1, W, unu, doi, AG, div1, sum1, F2, sumdoi1, doi0, nr, nm, 0, FACT, FACTLEG, PRIMP, p, q0, doiul, sep) 
		: sus < 163? SUSMODPARSUM2(Q, PP2, f1, W, unu, doi, AG, div1, sum1, F2, sumdoi1, doi0, nr, nm, nr2, nm2, 0, FACT, FACTLEG, PRIMP, p, q, doiul, sep)
			: sus < 223? SUSMODPARSUM3(Q, PP2, f1, W, unu, doi, AG, div1, sum1, sum, mem, F2, sumdoi1, doi0, nr, nm, nr2, nm2, 0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, FACTAUX1, p, q, doiul, sep)
			: SUSMODPARSUM4(Q, PP2, f1, unu, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, F2, mem, sumdoi1, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr, nm, nr2, nm2, 0, p, q, doiul, sep);
		} else {
		sus < 55? JOSMODPARSUM1(Q, PP2, f1, W, 0, 0, unu, doi, A5, AG, div1, sum1, F2, sumdoi1, doi0, FACT, FACTLEG, PRIMP, nr, nm, p, q0, doiul, sep)
		: sus < 163? JOSMODPARSUM2(Q, PP2, f1, W, 0, 0, unu, doi, A5, AG, div1, sum1, F2, sumdoi1, doi0, FACT, FACTLEG, PRIMP, nr, nm, nr2, nm2, p, q, doiul, sep)
			: sus < 223? JOSMODPARSUM3(Q, PP2, f1, W, 0, 0, unu, doi, A5, AG, div1, sum1, mem, F2, sumdoi1, doi0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, nr, nm, nr2, nm2, p, q, doiul, sep)
			: JOSMODPARSUM4(Q, PP2, f1, W, 0, unu, doi, AG, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, F2, mem, sumdoi1, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr, nm, nr2, nm2, p, q, A5, doiul, sep);
	}
}