#define PRAGW 4000

int IND(mpz_t div[][MAX1], gmp_ui np, int i, int K) {//De la 0 la K.
	while(i < K) {
		if(np == mpz_get_ui(div[i][0]))
			return i;
			i++;
		}
return -1;
}


int IND1(gmp_ui div1[][MAX2], gmp_ui np, int i, int HK) {
	while(i < HK) {
		if(np == div1[i][1])
			return i;
		i++;
		}
return -1;
}


void PREPVEC(gmp_ui div1[][MAX2], gmp_ui *b, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, int D, int H, int s) {
for(s = 0; s < H; s++)
	bex[s] = b[s];

for(s = H; s < D; s++) {
	bex2[s-H] = b[s];
	b1ex2[s-H] = 1 + bex2[H];
	}

QS2(bex, 0, H);
QS2(bex2, 0, D-H);
QS2(b1ex2, 0, D-H);

for(s = 0; s < H; s++)
	fex[s] = IND1(div1, bex[s], 0, H);
}


int DETPUT(gmp_ui div1[][MAX2], int poz, int coef, int i) {//i = 1.
	while(!(coef % div1[poz][i])) i++;
	return --i;
}


int DETPUT1(mpz_t div[][MAX1], int poz, int coef, int i) {//i = 1.
	while(!(coef % mpz_get_ui(div[poz][i]))) i++;
	return --i;
}


int DEP(gmp_ui coef, gmp_ui np) {
gmp_ui s = np;
int i = 1;
while(coef % s == 0) {
	s *= np;
	i++;
	}
	
return --i;
}


void INTDIV(gmp_ui *A2, gmp_ui *A3, int m, int u1, int f, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int &k, int &knk, int &nk) {
	for(int i = 0; i < f; i++) {
		int ek = 0, eknk = 0, enk = 0;
		
		for(int j = 0; j < u1; j++) {
			if((j < m) && !(A2[i] % A3[j])) ek = 1;
			if(ek && (j >= m) && !(A2[i] % A3[j])) eknk = 1;
			if(!ek && (j >= m) && !(A2[i] % A3[j])) enk = 1;
		}
		
		if(!ek && !eknk && enk) m3[nk++] = A2[i];
		if(eknk) m2[knk++] = A2[i];
		if(ek && !eknk) m1[k++] = A2[i];
	}// 0-k, k-k+knk, k+knk-k+knk+nk.	
}


void BOSJOLEY(int f, int lim, int u1, gmp_ui *S2, gmp_ui *A2, gmp_ui *A3, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], int H, int K, int S, int pp, gmp_ui div1[][MAX2], mpz_t div[][MAX1], gmp_ui sum1[][MAX2], mpz_t sum[][MAX1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], int FACTAUX[][MS1], int ek2, int s, int es) {
	int i, i1, j;
	int k = 0, k1, k2;
	
	for(i = 0; i < f; i++) {//pp e H, H extins la MODIFSUM.
		i1 = 0, k1 = 0;
		if(s)
			S2[i] = 1;
		for(j = lim; j < u1; j++) {
			if(!(A2[i] % A3[j])) {
				FACT[i][i1] = A3[j];
				gmp_ui poz = (ek2? IND(div, A3[j], 0, K+S) : IND1(div1, A3[j], 0, pp));
				FACTLEG[i][i1] = poz;
				PRIMP[i][i1] = DEP(A2[i], A3[j]);
				S2[i] *= (ek2? mpz_get_ui(sum[FACTLEG[i][i1]][PRIMP[i][i1]]) : sum1[FACTLEG[i][i1]][PRIMP[i][i1]]);
				
				if(es && (poz >= (pp-K-S)) && (poz < (pp-K))) {//PRIMP1+3. Ori PRIMP la non-K.
					SFACT[i][k1] = A3[j];
					SFACTLEG[i][k1] = poz;
					FACTAUX[i][k1] = poz - (pp-K-S);
					SPRIMP[i][k1] = DEP(A2[i], A3[j]);
					++k1;		
					}
				else
					++i1;
				}
			}

		FACT[i][i1] = 0;
		if(es) SFACT[i][k1] = 0;
		}
}


void DIVNUM(int f, int &u1, int &H, int H2, int &K, int S, gmp_ui *b, gmp_ui *s1, gmp_ui *s2, gmp_ui *s3, gmp_ui *sm, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int &k, int &knk, int &nk, gmp_ui *A2, gmp_ui *A3, int &pp, int &m, int &n, int &p, int D,gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], mpz_t d, mpz_t d1, gmp_ui FACT[][MS], int FACTLEG[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP[][MS1], int PRIMP1[][MS1], int PRIMP2[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX1[][MS1], int FACTAUX2[][MS1], int FACTAUX3[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1]) {
int k2;
gmp_ui z1[2000], z2[2000], z3[2000];
m = 0, n = 0, p = 0;

if(K) {
	for(int i = 0; i < u1; i++) {
		H2 = H;
		if(PREZ3(A3[i], b, H2, H-K)) {
			z1[m++] = A3[i];
		}
	}
}

for(int i = 0; i < u1; i++) {
	H2 = H - K;
	if(PREZ3(A3[i], b, H2, 0)) {
		z2[n++] = A3[i];
	}
}

for(int i = 0; i < u1; i++) {
	H2 = D;
	if(PREZ3(A3[i], b, H2, H)) {
		z3[p++] = A3[i];
	}
}

pp = H;// - K;

for(int i = 0; i < u1; i++) {//Sus la MODIFSUM.
	H2 = D;
	if(PREZ3(A3[i], b, H2, H)) {		
		div1[pp][0] = sum1[pp][0] = 1;
		div1[pp][1] = b[H2], sum1[pp][1] = 1+b[H2];		
		mpz_set_ui(d, b[H2]);
		mpz_add_ui(d1, d, 1);
		k2 = 2;

		while(1) {
			mpz_mul_ui(d, d, b[H2]);
			mpz_mul_ui(d1, d1, b[H2]);
			mpz_add_ui(d1, d1, 1);
			if(mpz_cmp_ui(d1, VERTOITO) > 0)
				break;
			div1[pp][k2] = mpz_get_ui(d);
			sum1[pp][k2++] = mpz_get_ui(d1);
		}
		
		div1[pp][k2] = sum1[pp][k2] = div1[pp][k2+1] = sum1[pp][k2+1] = NPS;		
		++pp;
	}
}


for(int i = 0; i < m; i++) {
	A3[i] = z1[i]; 	
	}

for(int i = 0; i < n; i++) {
	A3[i+m] = z2[i]; 	
	}

for(int i = 0; i < p; i++) { 
	A3[i+m+n] = z3[i];
	}

if(K) {
	INTDIV(A2, A3, m, u1, f, m1, m2, m3, k = 0, knk = 0, nk = 0);
	
	for(int i = 0; i < m; i++) {
		z1[i] = A3[i];
	}
	
	for(int i = m; i < u1; i++) {
		z2[i-m] = A3[i];
	}
	
	BOSJOLEY(k, 0, m, s1, m1, z1, FACT, FACTLEG, PRIMP, H, K, S, pp, div1, div, sum1, sum, SFACT, SFACTLEG, SPRIMP, FACTAUX1, 1, 1, 0);//Numai K-uri pure.
	BOSJOLEY(nk, 0, u1-m, s3, m3, z2, FACT1, FACTLEG1, PRIMP1, H, K, S, pp, div1, div, sum1, sum, SFACT, SFACTLEG, SPRIMP, FACTAUX1, 0, 1, 1);//Non K-uri. S versus non-S.
	BOSJOLEY(knk, 0, m, s2, m2, A3, FACT2, FACTLEG2, PRIMP2, H, K, S, pp, div1, div, sum1, sum, SFACT, SFACTLEG, SPRIMP, FACTAUX1, 1, 1, 0);//Amestecate, partea de K-uri.
	BOSJOLEY(knk, m, u1, s2, m2, A3, FACT3, FACTLEG3, PRIMP3, H, K, S, pp, div1, div, sum1, sum, SFACT2, SFACTLEG2, SPRIMP2, FACTAUX3, 0, 0, 1);//Amestecate, partea de non K-uri.
	
	for(int i = 0; i < k; i++) {
		for(int j = 0; FACT[i][j]; j++) {
			FACTAUX[i][j] = FACTLEG[i][j] + ((H-K-S));
			//gmp_printf("%d %d %llu %Zd UNU\n", FACTAUX[i][j], FACTLEG[i][j], div1[FACTAUX[i][j]][1], div[FACTLEG[i][j]][0]);
			}
		}

	for(int i = 0; i < knk; i++) {
		for(int j = 0; FACT2[i][j]; j++) {
			FACTAUX2[i][j] = FACTLEG2[i][j] + ((H-K-S));//Asta este, din moment ce s-au ales K+S elemente pentru div aici.
			//printf("%d %d TREI\n", FACTAUX2[i][j], FACTLEG2[i][j]);
			}
		}
	
	}//s să fie 1 la primele trei BOSJOLEY-uri, pentru construcția sumei divizorilor compusului. m1 cu s1, m2 cu s2, m3 cu s3, A2 cu sm și s 1 jos.
else
	BOSJOLEY(f, 0, u1, sm, A2, A3, FACT, FACTLEG, PRIMP, H, K, S, pp, div1, div, sum1, sum, SFACT, SFACTLEG, SPRIMP, FACTAUX1, 0, 1, S);
}


void TILOIVER(gmp_ui *AG, gmp_ui *A2, gmp_ui *A1, int &f, gmp_ui *divdoi1, gmp_ui *A5, int &sep) {//sep = 0.
	int i, j;
	
	for(i = 0; i < f; i++)
		AG[i] = A2[i];
	
	for(j = 0; j < f; j++) {
		for(i = 1; !(A2[j] % divdoi1[i]); i++);
		A1[j] = divdoi1[--i];
		
		if(A2[j] == A1[j]) {
			A5[sep++] = A1[j];
			continue;
		}
		
		A2[j] /= A1[j];
	}

	i = 0;
	for(j = 0; j < f; j++)
		if(A2[j] & 1) {
			AG[i] = AG[j];
			A2[i++] = A2[j];
		}
		
	f = i;
	printf("Noul f fără puterile pure de 2 este %d.\n", f);
}


void INTDIVPAR(gmp_ui *A2, gmp_ui *A3, int m, int u1, int f, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int &k, int &knk, int &nk, gmp_ui *A1, gmp_ui *n1, gmp_ui *n2, gmp_ui *n3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, gmp_ui *divdoi, int *doi1, int *doi2, int *doi3) {
	for(int i = 0; i < f; i++) {
		int ek = 0, eknk = 0, enk = 0;
		
		for(int j = 0; j < u1; j++) {			
			if((j < m) && !(A2[i] % A3[j])) ek = 1;
			if(ek && (j >= m) && !(A2[i] % A3[j])) eknk = 1;
			if(!ek && (j >= m) && !(A2[i] % A3[j])) enk = 1;
		}
		
		if(!ek && !eknk && enk) {
			n3[nk] = A1[i];
			w3[nk] = A1[i] * A2[i];//E după TILOIVER.
			doi3[nk] = gmp_scan1(A1[i], divdoi, 0);
			m3[nk++] = A2[i];
			}
			
		if(eknk) {
			n2[knk] = A1[i];
			w2[knk] = A1[i] * A2[i];
			doi2[knk] = gmp_scan1(A1[i], divdoi, 0);
			m2[knk++] = A2[i];
			}
			
		if(ek && !eknk) {
			n1[k] = A1[i];
			w1[k] = A1[i] * A2[i];
			doi1[k] = gmp_scan1(A1[i], divdoi, 0);
			m1[k++] = A2[i];
			}
	}	
}


void DIVPARNUM(int f, int &u1, int &H, int H2, int &K, int S, gmp_ui *b, gmp_ui *A1, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, gmp_ui *n1, gmp_ui *n2, gmp_ui *n3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int &k, int &knk, int &nk, gmp_ui *A2, gmp_ui *A3, int &pp, int &m, int &n, int &p, int D, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], mpz_t d, mpz_t d1, gmp_ui FACT[][MS], int FACTLEG[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP[][MS1], int PRIMP1[][MS1], int PRIMP2[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX1[][MS1], int FACTAUX2[][MS1], int FACTAUX3[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], gmp_ui *divdoi, int *doi, int *doi1, int *doi2, int *doi3, gmp_ui *A5, int *doiul, int sep) {

gmp_ui z1[4000], z2[4000], z3[4000];
m = 0, n = 0, p = 0;
int k2;

if(K) {
	for(int i = 0; i < u1; i++) {
		H2 = H;
		if(PREZ3(A3[i], b, H2, H-K)) {
			z1[m++] = A3[i];
		}
	}
}

for(int i = 0; i < u1; i++) {
	H2 = H - K;
	if(PREZ3(A3[i], b, H2, 0)) {
		z2[n++] = A3[i];
	}
}

for(int i = 0; i < u1; i++) {
	H2 = D;
	if(PREZ3(A3[i], b, H2, H)) {
		z3[p++] = A3[i];
	}
}

pp = H;// - K;

for(int i = 0; i < u1; i++) {
	H2 = D;
	if(PREZ3(A3[i], b, H2, H)) {		
		div1[pp][0] = sum1[pp][0] = 1;
		div1[pp][1] = b[H2], sum1[pp][1] = 1+b[H2];		
		mpz_set_ui(d, b[H2]);
		mpz_add_ui(d1, d, 1);
		k2 = 2;

		while(1) {
			mpz_mul_ui(d, d, b[H2]);
			mpz_mul_ui(d1, d1, b[H2]);
			mpz_add_ui(d1, d1, 1);
			if(mpz_cmp_ui(d1, VERTOITO) > 0)
				break;
			div1[pp][k2] = mpz_get_ui(d);
			sum1[pp][k2++] = mpz_get_ui(d1);
		}
		
		div1[pp][k2] = sum1[pp][k2] = div1[pp][k2+1] = sum1[pp][k2+1] = NPS;		
		++pp;
	}
}
/*
printf("%d\n\n\n", pp);
printf("n, p, m (m = K-uri prime) și totalul u1: %d %d %d %d.\n\n", n, p, m, u1);//n e 15, p 33, m 44: D-H, H-K, K. Se va parcurge de la K.
printf("K: \n");*/

for(int i = 0; i < m; i++) { A3[i] = z1[i]; 
	//printf("%llu ", z1[i]); 
	}
putchar('\n');

printf("H-K: \n");
for(int i = 0; i < n; i++) { A3[i+m] = z2[i]; 
	//printf("%llu ", z2[i]); 
	}
putchar('\n');

printf("D-H: \n");
for(int i = 0; i < p; i++) { A3[i+m+n] = z3[i]; 
	//printf("%llu ", z3[i]);
	}
putchar('\n');

if(K) {
	INTDIVPAR(A2, A3, m, u1, f, m1, m2, m3, k = 0, knk = 0, nk = 0, A1, n1, n2, n3, w1, w2, w3, divdoi, doi1, doi2, doi3);
	//printf("\nȘi acum vin vectorii ceilalți:\n\n\n");
	for(int i = 0; i < m; i++) {
		z1[i] = A3[i];
		//printf("%llu ", z1[i]);
		}
	//printf("(K)\n\n");
	for(int i = m; i < u1; i++) {
		z2[i-m] = A3[i];
		//printf("%llu ", z2[i-m]);
		}
	//printf("(non-K)\n\n");//3*5*23, 3 cu 5 K, 23 non-K. FACT2 ar lua 3, 5, iar FACT3 23.

	BOSJOLEY(k, 0, m, z3, m1, z1, FACT, FACTLEG, PRIMP, H, K, S, pp, div1, div, sum1, sum, SFACT, SFACTLEG, SPRIMP, FACTAUX1, 1, 0, 0);//Numai K-uri pure.
	BOSJOLEY(nk, 0, u1-m, z3, m3, z2, FACT1, FACTLEG1, PRIMP1, H, K, S, pp, div1, div, sum1, sum, SFACT, SFACTLEG, SPRIMP, FACTAUX1, 0, 0, 1);//Non K-uri. S versus non-S.
	BOSJOLEY(knk, 0, m, z3, m2, A3, FACT2, FACTLEG2, PRIMP2, H, K, S, pp, div1, div, sum1, sum, SFACT, SFACTLEG, SPRIMP, FACTAUX1, 1, 0, 0);//Amestecate, partea de K-uri.
	BOSJOLEY(knk, m, u1, z3, m2, A3, FACT3, FACTLEG3, PRIMP3, H, K, S, pp, div1, div, sum1, sum, SFACT2, SFACTLEG2, SPRIMP2, FACTAUX3, 0, 0, 1);//Amestecate, partea de non K-uri.
	
	for(int i = 0; i < k; i++) {
		for(int j = 0; FACT[i][j]; j++) {
			FACTAUX[i][j] = FACTLEG[i][j] + (H-K);
			}
		}
	
	for(int i = 0; i < knk; i++) {
		for(int j = 0; FACT2[i][j]; j++) {
			FACTAUX2[i][j] = FACTLEG2[i][j] + (H-K);
			}
		}
	
	}else {
	for(int i = 0; i < f; i++)
		doi[i] = gmp_scan1(A1[i], divdoi, 0);
	BOSJOLEY(f, 0, u1, z3, A2, A3, FACT, FACTLEG, PRIMP, H, K, S, pp, div1, div, sum1, sum, SFACT, SFACTLEG, SPRIMP, FACTAUX1, 0, 0, S);//exit(0);
	}

for(int i = 0; i < sep; i++)
		doiul[i] = gmp_scan1(A5[i], divdoi, 0);
}


//MODIFSUM:
void MODSUS0(mpz_t unu, mpz_t imp, mpz_t mul, int q, int k, int p, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2]) {//q FACTLEG, k PRIMP.
	for(; mpz_divisible_ui_p(unu, div1[q][p]); p += 2);
	mpz_mul_ui(imp, imp, mpz_divisible_ui_p(unu, div1[q][--p])? sum1[q][p] : sum1[q][--p]);
	mpz_mul_ui(mul, mul, sum1[q][p+k]);
}


void MODSUSMARE(mpz_t unu, mpz_t imp, mpz_t mul, int q, int k, int p, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem) {
	for(p = mem[q]; !mpz_divisible_ui_p(unu, div1[q][p]); p -= 2);
	mpz_mul_ui(imp, imp, mpz_divisible_ui_p(unu, div1[q][++p])? sum1[q][p] : sum1[q][--p]);
	mpz_mul_ui(mul, mul, sum1[q][p+k]);	
}


void MODUMSUSM0(mpz_t unu, mpz_t imp, mpz_t mul, int q, int k, int r, int p, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem) {//p e 2.
	if(mpz_divisible_p(unu, div[q][1]) ) {
		for(; mpz_divisible_p(unu, div[q][p]); p += 2);
		mpz_mul(imp, imp, mpz_divisible_p(unu, div[q][--p])? sum[q][p] : sum[q][--p]);
		mpz_mul(mul, mul, sum[q][p+k]);
		return;
	}

	for(p = mem[r]; !mpz_divisible_ui_p(unu, div1[r][p]); p -= 2);
	mpz_mul_ui(imp, imp, mpz_divisible_ui_p(unu, div1[r][++p])? sum1[r][p] : sum1[r][--p]);
	mpz_mul_ui(mul, mul, sum1[r][p+k]);
}


void MODJOS0(mpz_t unu, mpz_t imp, mpz_t mul, int q, int k, int p, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2]) {//p=2.	
	for(; mpz_divisible_ui_p(unu, div1[q][p]); p += 2);
	mpz_mul_ui(imp, imp, mpz_divisible_ui_p(unu, div1[q][--p])? sum1[q][p] : sum1[q][--p]);
	mpz_mul_ui(mul, mul, sum1[q][p-k]);
}


void MODJOSMARE(mpz_t unu, mpz_t imp, mpz_t mul, int q, int k, int p, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem) {
	for(p = mem[q]; !mpz_divisible_ui_p(unu, div1[q][p]); p -= 2);
	mpz_mul_ui(imp, imp, mpz_divisible_ui_p(unu, div1[q][++p])? sum1[q][p] : sum1[q][--p]);
	mpz_mul_ui(mul, mul, sum1[q][p-k]);		
}


void MODUMJOSM0(mpz_t unu, mpz_t imp, mpz_t mul, int q, int k, int r, int p, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem) {
	if(mpz_divisible_p(unu, div[q][1]) ) {
		for(; mpz_divisible_p(unu, div[q][p]); p += 2);
		mpz_mul(imp, imp, mpz_divisible_p(unu, div[q][--p])? sum[q][p] : sum[q][--p]);
		k < p? mpz_mul(mul, mul, sum[q][p-k]) : mpz_mul_ui(mul, mul, sum1[r][mem[r] + p-k]);
		return;
	}

	for(p = mem[r]; !mpz_divisible_ui_p(unu, div1[r][p]); p -= 2);
	mpz_mul_ui(imp, imp, mpz_divisible_ui_p(unu, div1[r][++p])? sum1[r][p] : sum1[r][--p]);
	mpz_mul_ui(mul, mul, sum1[r][p-k]);
}

//FACTLEG, FACTLEG2, +H-K.
void IMPMUL(gmp_ui &mul1, mpz_t sum, mpz_t d, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t doi, mpz_t d1, char *Q, FILE *F2, gmp_ui A2, gmp_ui SM) {
if(mul1 ^ SM) {
	mpz_divexact(sum, d, imp);	
	mpz_mul(sum, sum, mul);
	mpz_set_ui(imp, 1);
	mpz_set_ui(mul, 1);
	
	if(1 ^ mul1) {
		mpz_mul_ui(sum, sum, mul1);
		mul1 = 1;
		}

	goto s1;
	}

mpz_mul_ui(sum, d, mul1);
mul1 = 1;

s1:
mpz_mul_ui(doi, unu, A2);
if(VALID4(doi, d1, sum) == 1) {
	#pragma omp critical
	SCRIE(doi, Q, F2);
	}
}


void IMPMUL2(mpz_t sum, mpz_t d, mpz_t imp, mpz_t mul, mpz_t doi, mpz_t d1, char *Q, FILE *F2) {
	mpz_divexact(sum, d, imp);
	mpz_mul(sum, sum, mul);
	mpz_set_ui(imp, 1);
	mpz_set_ui(mul, 1);
	
	if(VALID4(doi, d1, sum) == 1) {
		#pragma omp critical
		SCRIE(doi, Q, F2);
		}
}


void IMPMUL3(gmp_ui &mul1, mpz_t sum, mpz_t d, mpz_t imp, mpz_t mul, mpz_t doi, mpz_t d1, char *Q, FILE *F2) {
	mpz_divexact(sum, d, imp);
	mpz_mul(sum, sum, mul);
	mpz_set_ui(imp, 1);
	mpz_set_ui(mul, 1);

	if(mul1 ^ 1) {
		mpz_mul_ui(sum, sum, mul1);
		mul1 = 1;
	}
	
	if(VALID4(doi, d1, sum) == 1) {
		#pragma omp critical
		SCRIE(doi, Q, F2);
		}
}


void MODIFSUS1(gmp_ui mul1, int n, int z, int f, gmp_ui *S2, gmp_ui *A2, char *Q, FILE *F2, mpz_t p, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t sum, mpz_t imp, mpz_t mul, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1]) {
for(; n < f; n++) {
for(z = 0; FACT[n][z]; z++) {
	if(mpz_divisible_ui_p(p, FACT[n][z])) {
		MODSUS0(unu, imp, mul, FACTLEG[n][z], PRIMP[n][z], 2, div1, sum1);
		continue;
			}
			
		mul1 *= sum1[FACTLEG[n][z]][PRIMP[n][z]];
		}

	IMPMUL(mul1, sum, d, imp, mul, unu, doi, d1, Q, F2, A2[n], S2[n]);
	}
}


void MODIFSUS2(gmp_ui mul1, int n, int z, int f, gmp_ui *S2, gmp_ui *A2, char *Q, FILE *F2, mpz_t p, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t sum, mpz_t imp, mpz_t mul, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1]) {
for(; n < f; n++) {
for(z = 0; FACT[n][z]; z++) {
	if(mpz_divisible_ui_p(p, FACT[n][z])) {
		MODSUS0(unu, imp, mul, FACTLEG[n][z], PRIMP[n][z], 2, div1, sum1);
		continue;
			}
			
		mul1 *= sum1[FACTLEG[n][z]][PRIMP[n][z]];
		}
		
for(z = 0; SFACT[n][z]; z++) {
	if(mpz_divisible_ui_p(p, SFACT[n][z])) {
		MODSUSMARE(unu, imp, mul, SFACTLEG[n][z], SPRIMP[n][z], 0, div1, sum1, mem);
		continue;
			}
			
		mul1 *= sum1[SFACTLEG[n][z]][SPRIMP[n][z]];
		}

	IMPMUL(mul1, sum, d, imp, mul, unu, doi, d1, Q, F2, A2[n], S2[n]);
	}
}


void SUSMODIFSUMULE(mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *s1, gmp_ui *s2, gmp_ui *s3, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p) {
	int n = 0, z;
	gmp_ui mul1 = 1;
	
	for(; n < k; n++) {//K pure.
		for(z = 0; FACT[n][z]; z++) {
		if(mpz_divisible_ui_p(p, FACT[n][z])) {
		  MODUMSUSM0(p, imp, mul, FACTLEG[n][z], PRIMP[n][z], FACTAUX[n][z], 2, div, sum, div1, sum1, mem);//Sau FACTAUX + FACTLEG[n][z], unde FACTAUX = H-K.
		  continue;
			}

		  mul1 *= sum1[FACTAUX[n][z]][PRIMP[n][z]];
		 }

		IMPMUL(mul1, summ, d, imp, mul, unu, doi, d1, Q, F2, m1[n], s1[n]);
	}
	
	
	for(n = 0, mul1 = 1; n < knk; n++) {//Amestecate, întâi primele non-K, apoi cele K.	
		for(z = 0; FACT3[n][z]; z++) {
		if(mpz_divisible_ui_p(p, FACT3[n][z])) {
			MODSUS0(p, imp, mul, FACTLEG3[n][z], PRIMP3[n][z], 2, div1, sum1);
			continue;
			}
			
			mul1 *= sum1[FACTLEG3[n][z]][PRIMP3[n][z]];
		}
		
		for(z = 0; SFACT2[n][z]; z++) {
		if(mpz_divisible_ui_p(p, SFACT2[n][z])) {
			MODSUSMARE(p, imp, mul, SFACTLEG2[n][z], SPRIMP2[n][z], 0, div1, sum1, mem);
			continue;
			}
			
			mul1 *= sum1[SFACTLEG2[n][z]][SPRIMP2[n][z]];//1, nu 2.
		}
		
		for(z = 0; FACT2[n][z]; z++) {
		if(mpz_divisible_ui_p(p, FACT2[n][z])) {
		  MODUMSUSM0(p, imp, mul, FACTLEG2[n][z], PRIMP2[n][z], FACTAUX2[n][z], 2, div, sum, div1, sum1, mem);
		  continue;
		  }
		
			mul1 *= sum1[FACTAUX2[n][z]][PRIMP2[n][z]];
		}

		IMPMUL(mul1, summ, d, imp, mul, unu, doi, d1, Q, F2, m2[n], s2[n]);
	}
		

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
void JOSMODIFSUMULE(int W, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t p) {int A1;

	for(W = k-1; W >= 0; --W)
	if(mpz_divisible_ui_p(p, m1[W])) {//Pure.
		mpz_divexact_ui(doi, unu, m1[W]);
		for(A1 = 0; FACT[W][A1]; A1++)
			MODUMJOSM0(p, imp, mul, FACTLEG[W][A1], PRIMP[W][A1], FACTAUX[W][A1], 2, div, sum, div1, sum1, mem);//K->0.
		IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);
	}

	for(W = knk-1; W >= 0; --W)
	if(mpz_divisible_ui_p(p, m2[W])) {//Amestecate.
		mpz_divexact_ui(doi, unu, m2[W]);
		for(A1 = 0; FACT3[W][A1]; A1++)
			MODJOS0(p, imp, mul, FACTLEG3[W][A1], PRIMP3[W][A1], 2, div1, sum1);//H->K+S.
		for(A1 = 0; SFACT2[W][A1]; A1++)
			MODJOSMARE(p, imp, mul, SFACTLEG2[W][A1], SPRIMP2[W][A1], 0, div1, sum1, mem);//K+S->K.
		for(A1 = 0; FACT2[W][A1]; A1++)
			MODUMJOSM0(p, imp, mul, FACTLEG2[W][A1], PRIMP2[W][A1], FACTAUX2[W][A1], 2, div, sum, div1, sum1, mem);//K->0.
		
		IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);
	}
	
	for(W = nk-1; W >= 0; --W)
	if(mpz_divisible_ui_p(p, m3[W])) {//Non-K.
		MODIFJOS2(unu, d, d1, m3[W], doi, trei, imp, mul, Q, F2, div1, sum1, mem, FACT1[W], FACTLEG1[W], PRIMP1[W], SFACT[W], SFACTLEG[W], SPRIMP[W], p);
	}
}


void SUSMODIFSUM1(char *Q, long PP2, int &W, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *S2, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, gmp_ui *q, int g) {
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
		SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);//g
		MODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
		}

	i = 0;
	if(!i1) break;
	}

return;*/
	while(1) {
		mpz_set_str(unu, Q, 10);//De aici se face bifurcare între MODIFSUM-uri.
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
		MODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);//Ziceam că A3, u1 și FD sunt în plus.
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODIFSUM2(char *Q, long PP2, int &W, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *S2, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int g) {
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
		NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
		MODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
		}

	i = 0;
	if(!i1) break;
	}

return;*/
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
		MODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODIFSUM3(char *Q, long PP2, int &W, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *S2, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int g) {
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
	
	#pragma omp parallel for private(g) schedule(dynamic, 1)
	for(i2 = 0; i2 < i; i2++) {//8 = i
		mpz_set_str(unu, t[i2], 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
		MODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
		}

	i = 0;
	if(!i1) break;
	}

return;*/
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
		MODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODIFSUM4(char *Q, long PP2, int &W, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *S2, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int g) {
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
	
	#pragma omp parallel for private(g) schedule(dynamic, 1)
	for(i2 = 0; i2 < i; i2++) {//8 = i
		mpz_set_str(unu, t[i2], 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		NUMSUMV3(p, d, b, b1, D, H, S, mem, g, div1, sum1, mem, q[g], 0);
		//MODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
		MODIFSUS2(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, mem, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP);
		}

	i = 0;
	if(!i1) break;
	}

return;*/
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		NUMSUMV3(p, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
		MODIFSUS2(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, mem, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODIFSUM5(char *Q, long PP2, int &W, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *S2, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int g) {
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
	
	#pragma omp parallel for private(g) schedule(dynamic, 1)
	for(i2 = 0; i2 < i; i2++) {//8 = i
		mpz_set_str(unu, t[i2], 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);
		MODIFSUS2(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, mem, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP);
		}

	i = 0;
	if(!i1) break;
	}

return;*/
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);
		//MODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
		MODIFSUS2(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, mem, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODIFSUM6(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *s1, gmp_ui *s2, gmp_ui *s3, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int g) {
	//PURGANTE(C, C1, E);
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
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
			SUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, p);	
			}
		i = 0;
		if(!i1) break;
		}

	return;*/
	
	while(1) {//AK, ANK, NK, m: în plus.
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
		SUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}

void SUSMODIFSUM7(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *s1, gmp_ui *s2, gmp_ui *s3, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int g) {
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
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g]);
			SUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, p);	
			}

		i = 0;
		if(!i1) break;
		}

	return;*/


	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g]);
		SUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);//Opt parametri în minus: AK, ANK, NK, m, FD, FD1, FD2 și FD3.
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODIFSUM8(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *s1, gmp_ui *s2, gmp_ui *s3, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int g) {
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
			SUM7(unu, d, b, b1, D, H, K, g, div1, sum1, div, sum, mem, q[g], 0);
			SUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, p);
			}

		i = 0;
		if(!i1) break;
		}

	return;*/

	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SUM7(unu, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
		SUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODIFSUM1(char *Q, long PP2, int W, FILE *f1, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], int g, mpz_t p, gmp_ui *q) {
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
		
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(p, A2[f])) {
			if(!u) {							
				SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
				u = 1;
				}

			MODIFJOS1(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[f], FACTLEG[f], PRIMP[f], p);
			}
		}

	i = 0;
	if(!i1) break;
	}

return;*/


if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(p, A2[f])) {
			if(!u) {							
				SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
				u = 1;
				}

			MODIFJOS1(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[f], FACTLEG[f], PRIMP[f], p);
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = 0;
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(unu, A2[f])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SMV(p, d, b, b1, D, H, u, div1, sum1, q[u]);
				}
				
			MODIFJOS1(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[f], FACTLEG[f], PRIMP[f], p);
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODIFSUM2(char *Q, long PP2, int W, FILE *f1, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], int g, mpz_t p, mpz_t *q) {

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
		
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(p, A2[f])) {
			if(!u) {							
				NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
				u = 1;
				}

			MODIFJOS1(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[f], FACTLEG[f], PRIMP[f], p);
			}
		}

	i = 0;
	if(!i1) break;
	}

return;*/


if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);		
		u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));	
		
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(p, A2[f])) {
			if(!u) {	
				NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
				u = 1;
				}

			MODIFJOS1(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[f], FACTLEG[f], PRIMP[f], p);
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
else
	while(1) {
		mpz_set_str(unu, Q, 10);		
		u = 0;
		
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(unu, A2[f])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMSUMPURG1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
				}
				
			MODIFJOS1(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[f], FACTLEG[f], PRIMP[f], p);
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODIFSUM3(char *Q, long PP2, int W, FILE *f1, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], int g, mpz_t p, mpz_t *q) {
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
		
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(p, A2[f])) {
			if(!u) {							
				NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
				u = 1;
				}

			MODIFJOS1(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[f], FACTLEG[f], PRIMP[f], p);
			}
		}

	i = 0;
	if(!i1) break;
	}

return;*/

if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);		
		u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));	
		
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(p, A2[f])) {
			if(!u) {	
				NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
				u = 1;
				}

			MODIFJOS1(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[f], FACTLEG[f], PRIMP[f], p);
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
else
	while(1) {
		mpz_set_str(unu, Q, 10);		
		u = 0;
		
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(unu, A2[f])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
				}
			MODIFJOS1(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[f], FACTLEG[f], PRIMP[f], p);
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODIFSUM4(char *Q, long PP2, int W, FILE *f1, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], int g, mpz_t p, mpz_t *q) {
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
		
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(p, A2[f])) {
			if(!u) {							
				NUMSUMV3(p, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
				u = 1;
				}

			MODIFJOS2(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[f], mem, FACTLEG[f], PRIMP[f], SFACT[f], SFACTLEG[f], SPRIMP[f], p);
			}
		}

	i = 0;
	if(!i1) break;
	}

return;*/
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);		
		u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));	
		
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(p, A2[f])) {
			if(!u) {	
				NUMSUMV3(p, d, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
				u = 1;
				}

			//MODIFJOS1(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[f], FACTLEG[f], PRIMP[f], p);
			MODIFJOS2(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, mem, FACT[f], FACTLEG[f], PRIMP[f], SFACT[f], SFACTLEG[f], SPRIMP[f], p);
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
else
	while(1) {
		mpz_set_str(unu, Q, 10);		
		u = 0;
		
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(unu, A2[f])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMSUMV3(p, d, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);
				}
				
			//MODIFJOS1(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[f], FACTLEG[f], PRIMP[f], p);
			MODIFJOS2(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, mem, FACT[f], FACTLEG[f], PRIMP[f], SFACT[f], SFACTLEG[f], SPRIMP[f], p);
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODIFSUM5(char *Q, long PP2, int W, FILE *f1, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], int g, mpz_t p, mpz_t *q) {
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
		
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(p, A2[f])) {
			if(!u) {							
				NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, q[g], 0);
				u = 1;
				}

			MODIFJOS2(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, mem, FACT[f], FACTLEG[f], PRIMP[f], SFACT[f], SFACTLEG[f], SPRIMP[f], p);
			}
		}

	i = 0;
	if(!i1) break;
	}

return;*/
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);		
		u = 0;
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));	
		
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(p, A2[f])) {
			if(!u) {	
				NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);
				u = 1;
				}
				
			MODIFJOS2(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, mem, FACT[f], FACTLEG[f], PRIMP[f], SFACT[f], SFACTLEG[f], SPRIMP[f], p);
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
else
	while(1) {
		mpz_set_str(unu, Q, 10);		
		u = 0;
		
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(unu, A2[f])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);
				}
				
			MODIFJOS2(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, mem, FACT[f], FACTLEG[f], PRIMP[f], SFACT[f], SFACTLEG[f], SPRIMP[f], p);
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODIFSUM6(char *Q, long PP2, int W, int u, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t p, mpz_t *q) {
	//PURGANTE(C, C1, E);
	
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
			SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
			JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
			}

		i = 0;
		if(!i1) break;
		}

	return;*/
	
	
if(W > PRAGW)	
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
		JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;
		while(1) {
			if(!u) break;
			if(mpz_divisible_ui_p(unu, A2[--u])) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
				break;
				}
		}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODIFSUM7(char *Q, long PP2, int W, int u, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t p, mpz_t *q) {
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
			SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
			JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
			}

		i = 0;
		if(!i1) break;
		}

	return;*/
	



if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);		
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
		JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;
		while(1) {
			if(!u) break;
			if(mpz_divisible_ui_p(unu, A2[--u])) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
				break;
				}
		}	

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODIFSUM8(char *Q, long PP2, int W, int u, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int K, int S, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t p, mpz_t *q) {
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
			SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
			JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);	
			}

		i = 0;
		if(!i1) break;
		}

	return;*/


if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
		JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;
		while(1) {
			if(!u) break;
			if(mpz_divisible_ui_p(unu, A2[--u])) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
				break;
				}
		}
			
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void MODIFSUM(char *Q, long PP2, int &W, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *sm, gmp_ui *s1, gmp_ui *s2, gmp_ui *s3, gmp_ui *A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, int &sus, int &dir, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, gmp_ui *q0) {//10 în minus: A3, u1, AK, ANK, NK, m și FD-urile.
	if(dir) {
		sus < 55? SUSMODIFSUM1(Q, PP2, W, f1, b, b1, unu, d, d1, doi, sm, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, trei, imp, mul, p, q0, 0)
		: sus < 73? SUSMODIFSUM2(Q, PP2, W, f1, b, b1, unu, d, d1, doi, sm, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, trei, imp, mul, p, q, 0) 
			: sus < 163? SUSMODIFSUM3(Q, PP2, W, f1, b, b1, unu, d, d1, doi, sm, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, trei, imp, mul, p, q, 0)
			: sus < 213? SUSMODIFSUM4(Q, PP2, W, f1, b, b1, unu, d, d1, doi, sm, A2, div1, sum1, mem, D, H, S, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, trei, imp, mul, p, q, 0) 
			: sus < 223? SUSMODIFSUM5(Q, PP2, W, f1, b, b1, C, C1, unu, d, d1, doi, sm, A2, div1, sum1, mem, D, E, H, S, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, trei, imp, mul, p, q, 0) 
				: sus < 243? SUSMODIFSUM6(Q, PP2, f1, b, b1, C, C1, unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, trei, imp, mul, p, q, 0) 
					: SUSMODIFSUM7(Q, PP2, f1, b, b1, C, C1, unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, trei, imp, mul, p, q, 0);
		} else {
		sus < 55? JOSMODIFSUM1(Q, PP2, W, f1, 0, 0, b, b1, imp, mul, unu, d, d1, doi, trei, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, 0, p, q0) 
		: sus < 73? JOSMODIFSUM2(Q, PP2, W, f1, 0, 0, b, b1, imp, mul, unu, d, d1, doi, trei, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, 0, p, q) 
			: sus < 163? JOSMODIFSUM3(Q, PP2, W, f1, 0, 0, b, b1, imp, mul, unu, d, d1, doi, trei, A2, div1, sum1, D, H, F2, FACT, FACTLEG, PRIMP, 0, p, q)
			: sus < 213? JOSMODIFSUM4(Q, PP2, W, f1, 0, 0, b, b1, imp, mul, unu, d, d1, doi, trei, A2, div1, sum1, mem, D, H, S, F2, FACT, FACTLEG, PRIMP,  SFACT, SFACTLEG, SPRIMP,0, p, q) 
			: sus < 223? JOSMODIFSUM5(Q, PP2, W, f1, 0, 0, b, b1, C, C1, imp, mul, unu, d, d1, doi, trei, A2, div1, sum1, mem, D, E, H, S, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, 0, p, q) 
				: sus < 243? JOSMODIFSUM6(Q, PP2, W, 0, f1, b, b1, C, C1, imp, mul, unu, d, d1, doi, trei, A2, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, q)
					: JOSMODIFSUM7(Q, PP2, W, 0, f1, b, b1, C, C1, imp, mul, unu, d, d1, doi, trei, A2, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, q);
	}
}


//MODSPAR:
void DOISUS(mpz_t imp, mpz_t mul, mpz_t *sumdoi, int v, gmp_ui j) {//j = indexul de putere de 2.
mpz_mul(imp, imp, sumdoi[v]);
mpz_mul(mul, mul, sumdoi[v+j]);
}


void DOIJOS(mpz_t imp, mpz_t mul, mpz_t *sumdoi, int v, gmp_ui j) {//j = indexul de putere de 2.
mpz_mul(imp, imp, sumdoi[v]);
mpz_mul(mul, mul, sumdoi[v-j]);
}


void MICDOISUS(mpz_t imp, mpz_t mul, gmp_ui *sumdoi, int v, gmp_ui j) {//j = indexul de putere de 2.
mpz_mul_ui(imp, imp, sumdoi[v]);
mpz_mul_ui(mul, mul, sumdoi[v+j]);
}


void MICDOIJOS(mpz_t imp, mpz_t mul, gmp_ui *sumdoi, int v, gmp_ui j) {//j = indexul de putere de 2.
mpz_mul_ui(imp, imp, sumdoi[v]);
mpz_mul_ui(mul, mul, sumdoi[v-j]);
}


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


void MICSEPSUS(mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t sum, mpz_t imp, mpz_t mul, char *Q, FILE *F2, gmp_ui *sumdoi, int v, int n, int *doiul, int sep) {//n = 0.
	for(; n < sep; n++) {
		MICDOISUS(imp, mul, sumdoi, v, doiul[n]);		
		mpz_mul_2exp(doi, unu, doiul[n]);
		IMPMUL2(sum, d, imp, mul, doi, d1, Q, F2);		
		}
}


void SEPSUS(mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t sum, mpz_t imp, mpz_t mul, char *Q, FILE *F2, mpz_t *sumdoi, int v, int n, int *doiul, int sep) {//n = 0.
	for(; n < sep; n++) {
		DOISUS(imp, mul, sumdoi, v, doiul[n]);
		mpz_mul_2exp(doi, unu, doiul[n]);
		IMPMUL2(sum, d, imp, mul, doi, d1, Q, F2);
		}
}


void SEPJOS(mpz_t unu, mpz_t d, mpz_t d1, int doiul, mpz_t doi, mpz_t trei, mpz_t imp, mpz_t mul, char *Q, FILE *F2, mpz_t *sumdoi, int v) {
	mpz_tdiv_q_2exp(doi, unu, doiul);
	DOIJOS(imp, mul, sumdoi, v, --doiul);
	IMPMUL2(trei, d, imp, mul, doi, d1, Q, F2);	
}


void MODSPARSUS1(gmp_ui mul1, int f, int z, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui *AG, mpz_t doi, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *sumdoi, int *doi1, int v, int n, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, int *doiul, int sep) {
	for(n = 0; n < f; n++) {
		DOISUS(imp, mul, sumdoi, v, doi1[n]);

		for(z = 0; FACT[n][z]; z++) {
			if(mpz_divisible_ui_p(unu, FACT[n][z])) {
				MODSUS0(unu, imp, mul, FACTLEG[n][z], PRIMP[n][z], 2, div1, sum1);
				continue;
				}
				
			mul1 *= sum1[FACTLEG[n][z]][PRIMP[n][z]];
			}

		mpz_mul_ui(doi, unu, AG[n]);
		IMPMUL3(mul1, sum, d, imp, mul, doi, d1, Q, F2);
		}
		
	SEPSUS(unu, d, d1, doi, sum, imp, mul, Q, F2, sumdoi, v, 0, doiul, sep);
}


void MODSPARSUS10(gmp_ui mul1, int f, int z, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui *AG, mpz_t doi, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, int *doi1, int v, int n, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], mpz_t sum, mpz_t imp, mpz_t mul, mpz_t p, int *doiul, int sep) {
	for(n = 0; n < f; n++) {
		DOISUS(imp, mul, sumdoi, v, doi1[n]);

		for(z = 0; FACT[n][z]; z++) {
			if(mpz_divisible_ui_p(unu, FACT[n][z])) {
				MODSUS0(unu, imp, mul, FACTLEG[n][z], PRIMP[n][z], 2, div1, sum1);
				continue;
				}

			mul1 *= sum1[FACTLEG[n][z]][PRIMP[n][z]];
			}
			
		for(z = 0; SFACT[n][z]; z++) {
			if(mpz_divisible_ui_p(unu, SFACT[n][z])) {
				MODSUSMARE(unu, imp, mul, SFACTLEG[n][z], SPRIMP[n][z], 0, div1, sum1, mem);
				continue;
				}

			mul1 *= sum1[SFACTLEG[n][z]][SPRIMP[n][z]];
			}

		mpz_mul_ui(doi, unu, AG[n]);
		IMPMUL3(mul1, sum, d, imp, mul, doi, d1, Q, F2);
		}

	SEPSUS(unu, d, d1, doi, sum, imp, mul, Q, F2, sumdoi, v, 0, doiul, sep);
}


void MODSPARSUS2(gmp_ui mul1, int f, int z, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui *AG, mpz_t doi, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t *sumdoi, int *doi1, int v, int n, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], int FACTAUX[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p) {
for(n = 0; n < f; n++) {
	DOISUS(imp, mul, sumdoi, v, doi1[n]);

	for(z = 0; FACT1[n][z]; z++) {
		if(mpz_divisible_ui_p(unu, FACT1[n][z])) {
			MODSUS0(unu, imp, mul, FACTLEG1[n][z], PRIMP1[n][z], 2, div1, sum1);
			continue;
			}
					
	 	mul1 *= sum1[FACTLEG1[n][z]][PRIMP1[n][z]];
		}

	for(z = 0; SFACT[n][z]; z++) {
		if(mpz_divisible_ui_p(unu, SFACT[n][z])) {
			MODSUSMARE(unu, imp, mul, SFACTLEG[n][z], SPRIMP[n][z], 0, div1, sum1, mem);
			continue;
			}
					
	 	mul1 *= sum1[SFACTLEG[n][z]][SPRIMP[n][z]];
		}

	for(z = 0; FACT[n][z]; z++) {
		if(mpz_divisible_ui_p(unu, FACT[n][z])) {
		  MODUMSUSM0(unu, imp, mul, FACTLEG[n][z], PRIMP[n][z], FACTAUX[n][z], 2, div, sum, div1, sum1, mem);
		  continue;
		  }
		  
		  mul1 *= sum1[FACTAUX[n][z]][PRIMP[n][z]];
		 }

		mpz_mul_ui(doi, unu, AG[n]);
		IMPMUL3(mul1, summ, d, imp, mul, doi, d1, Q, F2);
	}
}


void MODSPARSUS20(gmp_ui mul1, int f, int z, mpz_t unu, mpz_t d, mpz_t d1, gmp_ui *AG, mpz_t doi, char *Q, FILE *F2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, int *doi1, int v, int n, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], int FACTAUX[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p) {
	for(n = 0; n < f; n++) {
		DOISUS(imp, mul, sumdoi, v, doi1[n]);

		for(z = 0; FACT[n][z]; z++) {
			if(mpz_divisible_ui_p(unu, FACT[n][z])) {
			  MODUMSUSM0(unu, imp, mul, FACTLEG[n][z], PRIMP[n][z], FACTAUX[n][z], 2, div, sum, div1, sum1, mem);
			  continue;
			  	}
			  		  
		  mul1 *= sum1[FACTAUX[n][z]][PRIMP[n][z]];
		}

		mpz_mul_ui(doi, unu, AG[n]);
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


void SUSMODSPARUL(mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, int v, mpz_t *sumdoi, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, int *doiul, int sep) {
	MODSPARSUS20(1, k, 0, unu, d, d1, w1, doi, Q, F2, div, sum, div1, sum1, mem, sumdoi, doi1, v, 0, FACT, FACTLEG, PRIMP, FACTAUX, summ, imp, mul, p);//K-urile pure.
	MODSPARSUS2(1, knk, 0, unu, d, d1, w2, doi, Q, F2, div1, sum1, div, sum, mem, sumdoi, doi2, v, 0, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX2, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);//Amestecatele.
	MODSPARSUS10(1, nk, 0, unu, d, d1, w3, doi, Q, F2, div1, sum1, mem, sumdoi, doi3, v, 0, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP, summ, imp, mul, p, doiul, sep);//Non K.
}


void JOSMODSPARUL(int W, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t *sumdoi, int v, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t p, gmp_ui *A5, int *doiul, int sep) {
	for(W = k-1; W >= 0; --W)
	if(mpz_divisible_ui_p(p, m1[W])) {
		MODSPARJOS20(p, unu, d, d1, w1[W], doi, trei, imp, mul, Q, F2, div, sum, div1, sum1, mem, sumdoi, doi1[W]-1, v, FACT[W], FACTLEG[W], PRIMP[W], FACTAUX[W]);	
	}
	
	for(W = knk-1; W >= 0; --W)
	if(mpz_divisible_ui_p(p, m2[W])) {
		MODSPARJOS2(p, unu, d, d1, w2[W], doi, trei, imp, mul, Q, F2, div1, sum1, div, sum, mem, sumdoi, doi2[W]-1, v, FACT2[W], FACTLEG2[W], PRIMP2[W], FACT3[W], FACTLEG3[W], PRIMP3[W], FACTAUX2[W], SFACT2[W], SFACTLEG2[W], SPRIMP2[W]);
	}
	
	for(W = nk-1; W >= 0; --W)
	if(mpz_divisible_ui_p(p, m3[W])) {
		MODSPARJOS10(p, unu, d, d1, w3[W], doi, trei, imp, mul, Q, F2, div1, sum1, mem, sumdoi, doi3[W]-1, v, FACT1[W], FACTLEG1[W], PRIMP1[W], SFACT[W], SFACTLEG[W], SPRIMP[W]);
	}
	
	for(W = sep-1; W >= 0; W--)
		if(mpz_divisible_ui_p(unu, A5[W])) {
			SEPJOS(unu, d, d1, doiul[W], doi, trei, imp, mul, Q, F2, sumdoi, v);
	}
}


void SUSMODSPAR1(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, mpz_t *sumdoi, int *doi1, int v, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, gmp_ui *q, int *doiul, int sep) {
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


void SUSMODSPAR2(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int *doi1, int v, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int *doiul, int sep) {
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


void SUSMODSPAR3(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int *doi1, int v, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int *doiul, int sep) {
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


void SUSMODSPAR4(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, int *doi1, int v, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int *doiul, int sep) {
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


void SUSMODSPAR5(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, int *doi1, int v, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int *doiul, int sep) {
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


void SUSMODSPAR6(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, int v, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int *doiul, int sep) {
	//PURGANTE(C, C1, E);
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, v = mpz_scan1(unu, 0));
		SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, v, div1, sum1, div, sum, mem, q[v], 0);
		SUSMODSPARUL(unu, d, d1, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, v, q, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p, doiul, sep);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODSPAR7(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, int v, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int *doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, v = mpz_scan1(unu, 0));
		SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, v, div1, sum1, div, sum, mem, q[v]);
    		SUSMODSPARUL(unu, d, d1, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, v, q, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p, doiul, sep);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void SUSMODSPAR8(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, int S, FILE *F2, int *mem, int v, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, int *doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, v = mpz_scan1(unu, 0));
		SUM7(p, d, b, b1, D, H, K, S, v, div1, sum1, div, sum, mem, q[v], 0);
		SUSMODSPARUL(unu, d, d1, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, v, q, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p, doiul, sep);		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODSPAR1(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, mpz_t *sumdoi, int *doi1, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, gmp_ui *q, int *doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);	
	u = 0;
	
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, AG[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SMV(p, d, b, b1, D, H, u, div1, sum1, q[u]);
		}
		MODSPARJOS1(p, unu, d, d1, AG[f], doi, trei, imp, mul, Q, F2, div1, sum1, sumdoi, doi1[f]-1, u, FACT[f], FACTLEG[f], PRIMP[f]);
	}
	
	for(f = sep-1; f >= 0; --f)
		if(mpz_divisible_ui_p(unu, A5[f])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SMV(p, d, b, b1, D, H, u, div1, sum1, q[u]);
			}
			SEPJOS(unu, d, d1, doiul[f], doi, trei, imp, mul, Q, F2, sumdoi, u);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODSPAR2(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int *doi1, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, mpz_t *q, int *doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, AG[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMPURG1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
			}
		MODSPARJOS1(p, unu, d, d1, AG[f], doi, trei, imp, mul, Q, F2, div1, sum1, q, doi1[f]-1, u, FACT[f], FACTLEG[f], PRIMP[f]);
	}
	
	for(f = sep-1; f >= 0; --f)
		if(mpz_divisible_ui_p(unu, A5[f])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMSUMPURG1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
			}
			SEPJOS(unu, d, d1, doiul[f], doi, trei, imp, mul, Q, F2, q, u);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODSPAR3(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, int *doi1, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, mpz_t *q, int *doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, AG[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
			}
		MODSPARJOS1(p, unu, d, d1, AG[f], doi, trei, imp, mul, Q, F2, div1, sum1, q, doi1[f]-1, u, FACT[f], FACTLEG[f], PRIMP[f]);
	}
	
	for(f = sep-1; f >= 0; --f)
		if(mpz_divisible_ui_p(unu, A5[f])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMSUMV1(p, d, b, b1, D, H, u, div1, sum1, q[u], 0);
			}
			SEPJOS(unu, d, d1, doiul[f], doi, trei, imp, mul, Q, F2, q, u);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODSPAR4(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int H, int S, FILE *F2, int *doi1, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], mpz_t p, mpz_t *q, int *doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, AG[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV3(p, d, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);
			}
		MODSPARJOS10(p, unu, d, d1, AG[f], doi, trei, imp, mul, Q, F2, div1, sum1, mem, q, doi1[f]-1, u, FACT[f], FACTLEG[f], PRIMP[f], SFACT[f], SFACTLEG[f], SPRIMP[f]);
	}
	
	for(f = sep-1; f >= 0; --f)
		if(mpz_divisible_ui_p(unu, A5[f])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMSUMV3(p, d, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);
			}
			SEPJOS(unu, d, d1, doiul[f], doi, trei, imp, mul, Q, F2, q, u);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODSPAR5(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int D, int E, int H, int S, FILE *F2, int *doi1, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], mpz_t p, mpz_t *q, int *doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, AG[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);
			}
		MODSPARJOS10(p, unu, d, d1, AG[f], doi, trei, imp, mul, Q, F2, div1, sum1, mem, q, doi1[f]-1, u, FACT[f], FACTLEG[f], PRIMP[f], SFACT[f], SFACTLEG[f], SPRIMP[f]);
	}
	
	for(f = sep-1; f >= 0; --f)
		if(mpz_divisible_ui_p(unu, A5[f])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				NUMSUMV2(p, d, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);
			}
			SEPJOS(unu, d, d1, doiul[f], doi, trei, imp, mul, Q, F2, q, u);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODSPAR6(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t p, mpz_t *q, int *doiul, int sep) {
//PURGANTE(C, C1, E);
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
		JOSMODSPARUL(0, imp, mul, unu, d, d1, doi, trei, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, u, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, A5, doiul, sep);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;
		while(1) {
			if(!u--)
				break;
			if(mpz_divisible_ui_p(unu, AG[u])) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				JOSMODSPARUL(0, imp, mul, unu, d, d1, doi, trei, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, u, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, A5, doiul, 0);			
			break;
			}
		}
		
		if(sep) {
			if(u < 0) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				}
			while(sep >= 0) {
				if(mpz_divisible_ui_p(unu, A5[sep])) {		
					SEPJOS(unu, d, d1, doiul[sep], doi, trei, imp, mul, Q, F2, q, u);
				}
			sep--;
			}
		}		
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODSPAR7(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t p, mpz_t *q, int *doiul, int sep) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
		JOSMODSPARUL(0, imp, mul, unu, d, d1, doi, trei, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, u, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, A5, doiul, 0);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;
		while(1) {
			if(!u--)
				break;
			if(mpz_divisible_ui_p(unu, AG[u])) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				JOSMODSPARUL(0, imp, mul, unu, d, d1, doi, trei, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, u, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, A5, doiul, sep);			
			break;
			}
		}
		
		if(sep) {
			if(u < 0) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				}
			while(sep >= 0) {
				if(mpz_divisible_ui_p(unu, A5[sep])) {		
					SEPJOS(unu, d, d1, doiul[sep], doi, trei, imp, mul, Q, F2, q, u);
				}
			sep--;
			}
		}
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODSPAR8(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, int K, int S, FILE *F2, int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t p, mpz_t *q, int *doiul, int sep) {
if(W > PRAGW)
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
		JOSMODSPARUL(0, imp, mul, unu, d, d1, doi, trei, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, u, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, A5, doiul, sep);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
else
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;
		while(1) {
			if(!u--)
				break;
			if(mpz_divisible_ui_p(unu, AG[u])) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				JOSMODSPARUL(0, imp, mul, unu, d, d1, doi, trei, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, u, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, A5, doiul, 0);//Unde sep poate fi 0.
			break;
			}
		}
		
		if(sep) {
			if(u < 0) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, d, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				}
			while(sep >= 0) {
				if(mpz_divisible_ui_p(unu, A5[sep])) {		
					SEPJOS(unu, d, d1, doiul[sep], doi, trei, imp, mul, Q, F2, q, u);
				}
			sep--;
			}
		}
		
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void MODSPARSUM(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *doi0, int *doiul, int *mem, int &sus, int &dir, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t imp, mpz_t mul, mpz_t p, mpz_t *q, gmp_ui *q0, int sep) {//sumdoi e q.
	if(dir) {
		sus < 55? SUSMODSPAR1(Q, PP2, f1, W, b, b1, unu, d, d1, doi, AG, div1, sum1, D, H, F2, q, doi0, 0, FACT, FACTLEG, PRIMP, trei, imp, mul, p, q0, doiul, sep) 
		: sus < 73? SUSMODSPAR2(Q, PP2, f1, W, b, b1, unu, d, d1, doi, AG, div1, sum1, D, H, F2, doi0, 0, FACT, FACTLEG, PRIMP, trei, imp, mul, p, q, doiul, sep) 
			: sus < 163? SUSMODSPAR3(Q, PP2, f1, W, b, b1, unu, d, d1, doi, AG, div1, sum1, D, H, F2, doi0, 0, FACT, FACTLEG, PRIMP, trei, imp, mul, p, q, doiul, sep)
			: sus < 213? SUSMODSPAR4(Q, PP2, f1, W, b, b1, unu, d, d1, doi, AG, div1, sum1, mem, D, H, S, F2, doi0, 0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, trei, imp, mul, p, q, doiul, sep) 
			: sus < 223? SUSMODSPAR5(Q, PP2, f1, W, b, b1, C, C1, unu, d, d1, doi, AG, div1, sum1, mem, D, E, H, S, F2, doi0, 0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, trei, imp, mul, p, q, doiul, sep) 
				: sus < 243? SUSMODSPAR6(Q, PP2, f1, b, b1, C, C1, unu, d, d1, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, 0, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, trei, imp, mul, p, q, doiul, sep)
					: SUSMODSPAR7(Q, PP2, f1, b, b1, C, C1, unu, d, d1, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, 0, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, trei, imp, mul, p, q, doiul, sep);
		} else {
		sus < 55? JOSMODSPAR1(Q, PP2, f1, W, 0, 0, b, b1, imp, mul, unu, d, d1, doi, trei, A5, AG, div1, sum1, D, H, F2, q, doi0, FACT, FACTLEG, PRIMP, p, q0, doiul, sep) 
		: sus < 73? JOSMODSPAR2(Q, PP2, f1, W, 0, 0, b, b1, imp, mul, unu, d, d1, doi, trei, A5, AG, div1, sum1, D, H, F2, doi0, FACT, FACTLEG, PRIMP, p, q, doiul, sep) 
			: sus < 163? JOSMODSPAR3(Q, PP2, f1, W, 0, 0, b, b1, imp, mul, unu, d, d1, doi, trei, A5, AG, div1, sum1, D, H, F2, doi0, FACT, FACTLEG, PRIMP, p, q, doiul, sep)
			: sus < 213? JOSMODSPAR4(Q, PP2, f1, W, 0, 0, b, b1, imp, mul, unu, d, d1, doi, trei, A5, AG, div1, sum1, mem, D, H, S, F2, doi0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p, q, doiul, sep) 
			: sus < 223? JOSMODSPAR5(Q, PP2, f1, W, 0, 0, b, b1, C, C1, imp, mul, unu, d, d1, doi, trei, A5, AG, div1, sum1, mem, D, E, H, S, F2, doi0, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p, q, doiul, sep) 
				: sus < 243? JOSMODSPAR6(Q, PP2, f1, W, 0, b, b1, C, C1, imp, mul, unu, d, d1, doi, trei, A5, AG, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, q, doiul, sep)
					: JOSMODSPAR7(Q, PP2, f1, W, 0, b, b1, C, C1, imp, mul, unu, d, d1, doi, trei, A5, AG, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, D, E, H, K, S, F2, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, q, doiul, sep);
		}
}


#define HU ((gmp_ui)(0U)-1) / PRAG
//MODPRIMSUM:
void CMM(mpz_t nr, mpz_t nm, mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui g, gmp_ui h, gmp_ui i, char *Q, FILE *F2) {
	if(!mpz_cmp_ui(nr, g = mpz_get_ui(nr))) {
		h = mpz_get_ui(nm);
		i = CMMDC(g, h, g%h);
		if( (i <= HU && i * PRAG > h) || (i > HU && h/i < PRAG) ) {
			mpz_mul_ui(doi, unu, A2);
			SCRIE(doi, Q, F2);
		} //else {
			//mpz_set_ui(doi, i); mpz_mul_ui(doi, doi, PRAG); if(mpz_cmp_ui(doi, h) > 0) {mpz_mul_ui(doi, unu, A2); SCRIE(doi, Q, F2);}
		//}
	} else {
		mpz_gcd(doi, nr, nm);
		mpz_mul_ui(doi, doi, PRAG);
		if(mpz_cmp(doi, nm) > 0) {
			mpz_mul_ui(doi, unu, A2);
			SCRIE(doi, Q, F2);
		}
	}
}


void CMMS0(mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui nr, gmp_ui nm, gmp_ui i, char *Q, FILE *F2) {
	//i = CMMDC(nr, nm, nr%nm);
	if( (i <= HU && i * PRAG > nm) || (i > HU && nm/i < PRAG) ) {//E valid.
			mpz_mul_ui(doi, unu, A2);
			SCRIE(doi, Q, F2);
		}	
}


void CMMJ0(mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui nr, gmp_ui nm, gmp_ui i, char *Q, FILE *F2) {
	if( (i <= HU && i * PRAG > nm) || (i > HU && nm/i < PRAG) ) {
			mpz_divexact_ui(doi, unu, A2);
			SCRIE(doi, Q, F2);
		}
}


void CMM2S0(mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui nr, gmp_ui nm, gmp_ui i, char *Q, FILE *F2) {
	if( (i <= HU && i * PRAG > nm) || (i > HU && nm/i < PRAG) ) {
			mpz_mul_2exp(doi, unu, A2);
			SCRIE(doi, Q, F2);
		}	
}


void CMM2J0(mpz_t unu, mpz_t doi, gmp_ui A2, gmp_ui nr, gmp_ui nm, gmp_ui i, char *Q, FILE *F2) {
	if( (i <= HU && i * PRAG > nm) || (i > HU && nm/i < PRAG) ) {
			mpz_tdiv_q_2exp(doi, unu, A2);
			SCRIE(doi, Q, F2);
		}
}


void CMMS(mpz_t nr, mpz_t nm, mpz_t unu, mpz_t doi, gmp_ui A2, char *Q, FILE *F2) {//gmp_printf("%Zd %llu %llu BAGRAMENTO\n\n", unu, nr, nm);
mpz_gcd(doi, nr, nm);
mpz_mul_ui(doi, doi, PRAG);

if(mpz_cmp(doi, nm) > 0) {
	mpz_mul_ui(doi, unu, A2);
	SCRIE(doi, Q, F2);
	}
}


void CMMJ(mpz_t nr, mpz_t nm, mpz_t unu, mpz_t doi, gmp_ui A2, char *Q, FILE *F2) {
mpz_gcd(doi, nr, nm);
mpz_mul_ui(doi, doi, PRAG);

if(mpz_cmp(doi, nm) > 0) {
	mpz_divexact_ui(doi, unu, A2);
	SCRIE(doi, Q, F2);
	}
}


void CMM2S(mpz_t nr, mpz_t nm, mpz_t unu, mpz_t doi, gmp_ui A2, char *Q, FILE *F2) {
mpz_gcd(doi, nr, nm);
mpz_mul_ui(doi, doi, PRAG);

if(mpz_cmp(doi, nm) > 0) {
	mpz_mul_2exp(doi, unu, A2);
	SCRIE(doi, Q, F2);
	}
}


void CMM2J(mpz_t nr, mpz_t nm, mpz_t unu, mpz_t doi, gmp_ui A2, char *Q, FILE *F2) {
mpz_gcd(doi, nr, nm);
mpz_mul_ui(doi, doi, PRAG);

if(mpz_cmp(doi, nm) > 0) {
	mpz_tdiv_q_2exp(doi, unu, A2);
	SCRIE(doi, Q, F2);
	}
}


void MODPSUS0(mpz_t unu, int q, gmp_ui k, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &nr, gmp_ui &nm, gmp_ui j, gmp_ui j2) {//Divizibile. j e 2.
	for(; mpz_divisible_ui_p(unu, div1[q][j]); j += 2);
	nm *= (j2 = mpz_divisible_ui_p(unu, div1[q][j--])? sum1[q][j+k] : sum1[q][--j+k]), nr *= (j2 - sum1[q][k-1]);
}


void MODPSUS1(int q, gmp_ui k, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &nr, gmp_ui &nm) {//Nedivizibile.
	nm *= div1[q][k], nr *= sum1[q][k];
}


void MODPSUSM0(mpz_t unu, int q, gmp_ui k, int r, int j, gmp_ui k1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t doi, mpz_t nr2, mpz_t nm2) {//j e 2.
	if(mpz_divisible_p(unu, div[q][1])) {
		for(; mpz_divisible_p(unu, div[q][j]); j += 2);
		mpz_mul(nr2, nr2, mpz_divisible_p(unu, div[q][--j])? sum[q][j+k] : sum[q][--j+k]);
		mpz_sub_ui(doi, sum[q][j+k], sum1[r][k-1]);
		mpz_mul(nm2, nm2, doi);
		return;
	}
	
	for(j = mem[r]; !mpz_divisible_ui_p(unu, div1[r][j]); j -= 2);
	mpz_divisible_ui_p(unu, div1[r][++j])? j = j : j--;
	if(j+k > mem[r]) {
		j -= mem[r];
		mpz_mul(nr2, nr2, sum[q][j+k]);
		mpz_sub_ui(doi, sum[q][j+k], sum1[r][k-1]);
		mpz_mul(nm2, nm2, doi);
		return;
	}

	mpz_mul_ui(nr2, nr2, k1 = sum1[r][j+k]);
	mpz_mul_ui(nm2, nm2, k1 - sum1[r][k-1]);
}


void MODPSUSM1(int q, gmp_ui k, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t nr2, mpz_t nm2) {
	mpz_mul_ui(nr2, nr2, sum1[q][k]);
	mpz_mul_ui(nm2, nm2, div1[q][k]);
}


void MODPSUSM2(mpz_t unu, int q, gmp_ui j1, int j, gmp_ui k, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t nr2, mpz_t nm2) {//j e 2.
	for(; mpz_divisible_ui_p(unu, div1[q][j]); j += 2);
	mpz_divisible_ui_p(unu, div1[q][--j])? j = j : j--;	
	
	mpz_mul_ui(nr2, nr2, k = sum1[q][j+j1--]);
	mpz_mul_ui(nm2, nm2, k - sum1[q][j1]);
}


void MODPSUSMARE(mpz_t unu, int q, gmp_ui j1, int j, gmp_ui k, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sum[][MAX1], mpz_t doi, int f, int *mem, mpz_t nr2, mpz_t nm2) {
	for(j = mem[q]; !mpz_divisible_ui_p(unu, div1[q][j]); j -= 2);
	mpz_divisible_ui_p(unu, div1[q][++j])? j = j : j--;
	if(j+j1 > mem[q]) {
		j -= (mem[q] - j1);
		mpz_mul(nr2, nr2, sum[f][j]);
		mpz_sub_ui(doi, sum[f][j], sum1[q][j1-1]);
		mpz_mul(nm2, nm2, doi); 
		return;
	}

	mpz_mul_ui(nr2, nr2, k = sum1[q][j+j1]);
	mpz_mul_ui(nm2, nm2, k - sum1[q][j1-1]);
}


int MODPSUSMARE1(mpz_t unu, int q, gmp_ui j1, int j, gmp_ui k, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t nr2, mpz_t nm2) {
	for(j = mem[q]; !mpz_divisible_ui_p(unu, div1[q][j]); j -= 2);
	mpz_divisible_ui_p(unu, div1[q][++j])? j = j : j--;
	if(j+j1 > mem[q]) {		
		return 0;
	}

	mpz_mul_ui(nr2, nr2, k = sum1[q][j+j1]);
	mpz_mul_ui(nm2, nm2, k - sum1[q][j1-1]);
	return 1;
}


void MODPJOS0(mpz_t unu, int q, gmp_ui k, gmp_ui j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &nr, gmp_ui &nm) {//j e 2.
		for(; mpz_divisible_ui_p(unu, div1[q][j]); j += 2);
		nm *= (j = mpz_divisible_ui_p(unu, div1[q][--j])? sum1[q][j] : sum1[q][--j]), nr *= (j - sum1[q][k-1]);
}


void MODPJOS1(mpz_t unu, mpz_t SUM, int q, gmp_ui k, gmp_ui j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &nr, gmp_ui &nm, mpz_t nr2, mpz_t nm2) {
		for(; mpz_divisible_ui_p(unu, div1[q][j]); j += 2);
		nm *= (j = mpz_divisible_ui_p(unu, div1[q][--j])? sum1[q][j] : sum1[q][--j]), nr *= (j - sum1[q][k-1]);
		mpz_set_ui(nr2, nr);
		mpz_set_ui(nm2, nm);
}

//j e 2.
void MODPJOSM0(mpz_t unu, mpz_t doi, int q, int j, int r, gmp_ui j1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t nr2, mpz_t nm2) {
		if(mpz_divisible_p(unu, div[q][1])) {
			for(; mpz_divisible_p(unu, div[q][j1]); j1 += 2);
			mpz_mul(nm2, nm2, mpz_divisible_p(unu, div[q][--j1])? sum[q][j1] : sum[q][--j1]);
			mpz_sub_ui(doi, sum[q][j1], sum1[r][--j]);
			mpz_mul(nr2, nr2, doi);
			return;
		}

		for(j1 = mem[r]; !mpz_divisible_ui_p(unu, div1[r][j1]); j1 -= 2);
		mpz_mul_ui(nm2, nm2, mpz_divisible_ui_p(unu, div1[r][++j1])? sum1[r][j1] : sum1[r][--j1]);
		mpz_mul_ui(nr2, nr2, sum1[r][j1] - sum1[r][j-1]);
}


void MODPJOSM1(mpz_t unu, int q, int k, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t nr2, mpz_t nm2) {
		for(; mpz_divisible_ui_p(unu, div1[q][j]); j += 2);
		mpz_mul_ui(nm2, nm2, mpz_divisible_ui_p(unu, div1[q][--j])? sum1[q][j] : sum1[q][--j]);
		mpz_mul_ui(nr2, nr2, sum1[q][j] - sum1[q][k-1]);
}


void MODPJOSMARE(mpz_t unu, int q, gmp_ui k, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t nr2, mpz_t nm2) {
		for(j = mem[q]; !mpz_divisible_ui_p(unu, div1[q][j]); j -= 2);
		mpz_mul_ui(nm2, nm2, mpz_divisible_ui_p(unu, div1[q][++j])? sum1[q][j] : sum1[q][--j]);
		mpz_mul_ui(nr2, nr2, sum1[q][j] - sum1[q][k-1]);
}


void MODPRIMSUMSUS(int n, int z, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, int f, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], char *Q, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p) {
	for(; n < f; n++) {
		nr = nr1, nm = nm1;
		
		for(z = 0; FACT[n][z]; z++)
		mpz_divisible_ui_p(p, FACT[n][z])?
			MODPSUS0(p, FACTLEG[n][z], PRIMP[n][z], div1, sum1, nr, nm, 2, 0)
				: MODPSUS1(FACTLEG[n][z], PRIMP[n][z], div1, sum1, nr, nm);
		CMMS0(unu, doi, A2[n], nr, nm, CMMDC(nr, nm, nr%nm), Q, F2);
	}
}


void MODPRIMSUMSUS2(int n, int z, int f, gmp_ui nr, gmp_ui nm, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], char *Q, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t nr2, mpz_t nm2, mpz_t p) {
	for(n = 0; n < f; n++) {
		mpz_set_ui(nm2, nm);
		mpz_set_ui(nr2, nr);
		
		for(z = 0; FACT[n][z]; z++)
			mpz_divisible_ui_p(p, FACT[n][z])?
				MODPSUSM2(p, FACTLEG[n][z], PRIMP[n][z], 2, 0, div1, sum1, nr2, nm2)
					: MODPSUSM1(FACTLEG[n][z], PRIMP[n][z], div1, sum1, nr2, nm2);
		CMMS(nr2, nm2, unu, doi, A2[n], Q, F2);
	}
}


void MODPRIMSUMSUSUL(int n, int z, int f, gmp_ui nr, gmp_ui nm, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sum[][MAX1], int FACTAUX[][MS1], int *mem, char *Q, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], mpz_t nr2, mpz_t nm2, mpz_t p) {//gmp_ui i;
	for(; n < f; n++) {
		mpz_set_ui(nr2, nr);
		mpz_set_ui(nm2, nm);
		
		for(z = 0; FACT[n][z]; z++)
			mpz_divisible_ui_p(p, FACT[n][z])?
				MODPSUSM2(p, FACTLEG[n][z], PRIMP[n][z], 2, 0, div1, sum1, nr2, nm2)
					: MODPSUSM1(FACTLEG[n][z], PRIMP[n][z], div1, sum1, nr2, nm2);		
		for(z = 0; SFACT[n][z]; z++)
			if(mpz_divisible_ui_p(p, SFACT[n][z])) {
				MODPSUSMARE(p, SFACTLEG[n][z], SPRIMP[n][z], 0, 0, div1, sum1, sum, doi, FACTAUX[n][z], mem, nr2, nm2);
				}
			else
				MODPSUSM1(SFACTLEG[n][z], SPRIMP[n][z], div1, sum1, nr2, nm2);
		//mpz_cmp_ui(nr2, i = mpz_get_ui(nr2))?
		CMMS(nr2, nm2, unu, doi, A2[n], Q, F2);
		// : CMMS0(unu, doi, A2[n], i, mpz_get_ui(nm2), 0, Q, F2);
	}
}

/*
void MODPRIMSUMSUSUL1(int n, int z, int f, gmp_ui nr, gmp_ui nm, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, char *Q, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], mpz_t nr2, mpz_t nm2, mpz_t p) {//gmp_ui i;
	while(1) {
		mpz_set_ui(nr2, nr);
		mpz_set_ui(nm2, nm);
		
		for(z = 0; FACT[n][z]; z++)
			mpz_divisible_ui_p(p, FACT[n][z])?
				MODPSUSM2(p, FACTLEG[n][z], PRIMP[n][z], 2, 0, div1, sum1, nr2, nm2)
					: MODPSUSM1(FACTLEG[n][z], PRIMP[n][z], div1, sum1, nr2, nm2);		
		for(z = 0; SFACT[n][z]; z++)
			if(mpz_divisible_ui_p(p, SFACT[n][z])) {
				if(!MODPSUSMARE1(p, SFACTLEG[n][z], SPRIMP[n][z], 0, 0, div1, sum1, mem, nr2, nm2)) {goto s1;}
				}
			else
				MODPSUSM1(SFACTLEG[n][z], SPRIMP[n][z], div1, sum1, nr2, nm2);
		CMMS(nr2, nm2, unu, doi, A2[n], Q, F2);
	s1:
	if(++n == f)
		break;		
	}
}*/


void MODPRIMSUMSUSM(int n, int z, int knk, gmp_ui nr, gmp_ui nm, mpz_t unu, mpz_t doi, gmp_ui *m2, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, char *Q, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], int FACTAUX1[][MS1], int FACTAUX[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], mpz_t nr2, mpz_t nm2, mpz_t p) {
	for(n = 0; n < knk; n++) {
		mpz_set_ui(nr2, nr);
		mpz_set_ui(nm2, nm);
		
		for(z = 0; FACT1[n][z]; z++)
		mpz_divisible_ui_p(p, FACT1[n][z])?
			MODPSUSM2(p, FACTLEG1[n][z], PRIMP1[n][z], 2, 0, div1, sum1, nr2, nm2)
				: MODPSUSM1(FACTLEG1[n][z], PRIMP1[n][z], div1, sum1, nr2, nm2);	
		for(z = 0; SFACT[n][z]; z++)
			if(mpz_divisible_ui_p(p, SFACT[n][z])) {
				MODPSUSMARE(p, SFACTLEG[n][z], SPRIMP[n][z], 0, 0, div1, sum1, sum, doi, FACTAUX1[n][z], mem, nr2, nm2);
				}
				else
				MODPSUSM1(SFACTLEG[n][z], SPRIMP[n][z], div1, sum1, nr2, nm2);	
		for(z = 0; FACT[n][z]; z++)
			if(mpz_divisible_ui_p(p, FACT[n][z])) {
				MODPSUSM0(p, FACTLEG[n][z], PRIMP[n][z], FACTAUX[n][z], 2, 0, div, sum, div1, sum1, mem, doi, nr2, nm2);
				}
				else
					 MODPSUSM1(FACTLEG[n][z], PRIMP[n][z], div1, sum1, nr2, nm2);
		CMMS(nr2, nm2, unu, doi, m2[n], Q, F2);
	}
}


void MODPRIMSUMSUSM0(int n, int z, int k, gmp_ui nr, gmp_ui nm, mpz_t unu, mpz_t doi, gmp_ui *m1, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, char *Q, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], int FACTAUX[][MS1], mpz_t nr2, mpz_t nm2, mpz_t p) {
	for(n = 0; n < k; n++) {
		mpz_set_ui(nr2, nr);
		mpz_set_ui(nm2, nm);

		for(z = 0; FACT[n][z]; z++)
			if(mpz_divisible_ui_p(p, FACT[n][z])) {
				MODPSUSM0(p, FACTLEG[n][z], PRIMP[n][z], FACTAUX[n][z], 2, 0, div, sum, div1, sum1, mem, doi, nr2, nm2);
				}
				else
					MODPSUSM1(FACTLEG[n][z], PRIMP[n][z], div1, sum1, nr2, nm2);		
		//gmp_printf("%Zd %Zd %Zd %llu %llu FIRARMATAS %d %d %d\n\n", doi, nr2, nm2, nr, nm, m1[n], FACTLEG[0][0], FACTAUX[0][0]);
		CMMS(nr2, nm2, unu, doi, m1[n], Q, F2);
		//gmp_printf("%Zd %Zd %Zd %llu %llu FIRAR MATAS %d %d %d\n\n", doi, nr2, nm2, nr, nm, k, FACTLEG[0][0], FACTAUX[0][0]);
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
//gmp_printf("%Zd %Zd %Zd %llu %llu %d %d TOLLIS\n", unu, nr2, nm2, A1, FACT[0], FACTLEG[0], PRIMP[0]);
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


void SUSMODPRIMSUMUL(mpz_t unu, mpz_t doi, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, gmp_ui nr, gmp_ui nm, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX1[][MS1], int FACTAUX2[][MS1], int FACTAUX3[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t nr2, mpz_t nm2, mpz_t p) {
	MODPRIMSUMSUSM0(0, 0, k, nr, nm, unu, doi, m1, div, sum, div1, sum1, mem, Q, F2, FACT, FACTLEG, PRIMP, FACTAUX, nr2, nm2, p);
	MODPRIMSUMSUSM(0, 0, knk, nr, nm, unu, doi, m2, div, sum, div1, sum1, mem, Q, F2, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX3, FACTAUX2, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p);
	MODPRIMSUMSUSUL(0, 0, nk, nr, nm, unu, doi, m3, div1, sum1, sum, FACTAUX1, mem, Q, F2, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p);
	//MODPRIMSUMSUSUL1(0, 0, nk, nr, nm, unu, doi, m3, div1, sum1, mem, Q, F2, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p);
}


void JOSMODPRIMSUMUL(int W, mpz_t unu, mpz_t doi, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t nr2, mpz_t nm2, gmp_ui nr1, gmp_ui nm1, mpz_t p) {	
	for(W = k-1; W >= 0; --W)
	if(mpz_divisible_ui_p(p, m1[W])) {
		MODPRIMSUMJOSM0(unu, doi, m1[W], div, sum, div1, sum1, mem, 0, Q, F2, FACT[W], FACTLEG[W], PRIMP[W], FACTAUX[W], nr1, nm1, nr2, nm2, p);
	}
	
	for(W = knk-1; W >= 0; --W)
	if(mpz_divisible_ui_p(p, m2[W])) {
		MODPRIMSUMJOSM(unu, doi, m2[W], div, sum, div1, sum1, mem, 0, Q, F2, FACT2[W], FACTLEG2[W], PRIMP2[W], FACT3[W], FACTLEG3[W], PRIMP3[W], FACTAUX2[W], SFACT2[W], SFACTLEG2[W], SPRIMP2[W], nr1, nm1, nr2, nm2, p);		
	}
	
	for(W = nk-1; W >= 0; --W)
	if(mpz_divisible_ui_p(p, m3[W])) {
		MODPRIMSUMJOSUL(unu, doi, nr1, nm1, nr2, nm2, m3[W], div1, sum1, mem, 0, Q, F2, FACT1[W], FACTLEG1[W], PRIMP1[W], SFACT[W], SFACTLEG[W], SPRIMP[W], p);
	}
}


void SUSMODPRIMSUM1(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, int D, int H, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, gmp_ui *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	SMV(p, nm2, b, b1, D, H, g, div1, sum1, q[g]);
	VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
	MODPRIMSUMSUS(0, 0, nr, nm, nr, nm, W, unu, doi, A2, div1, sum1, Q, F2, FACT, FACTLEG, PRIMP, p);
	if(!(ftell(f1) ^ PP2))
		break;
	
	fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMSUM2(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, int D, int H, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	NUMSUMPURG1(p, nm2, b, b1, D, H, g, div1, sum1, q[g], 0);
	VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
	MODPRIMSUMSUS2(0, 0, W, nr, nm, unu, doi, A2, div1, sum1, Q, F2, FACT, FACTLEG, PRIMP, nr2, nm2, p);
	if(!(ftell(f1) ^ PP2))
		break;
	
	fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMSUM3(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, int D, int H, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	NUMSUMV1(p, nm2, b, b1, D, H, g, div1, sum1, q[g], 0);
	VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
	MODPRIMSUMSUS2(0, 0, W, nr, nm, unu, doi, A2, div1, sum1, Q, F2, FACT, FACTLEG, PRIMP, nr2, nm2, p);
	if(!(ftell(f1) ^ PP2))
		break;
	
	fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMSUM4(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, int D, int H, int S, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sum[][MAX1], int *mem, FILE *F2, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], int FACTAUX[][MS1], mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	NUMSUMV3(p, nm2, b, b1, D, H, S, g, div1, sum1, mem, q[g], 0);
	VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
	MODPRIMSUMSUSUL(0, 0, W, nr, nm, unu, doi, A2, div1, sum1, sum, FACTAUX, mem, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p);
	if(!(ftell(f1) ^ PP2))
		break;
	
	fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMSUM5(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int H, int S, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sum[][MAX1], int *mem, FILE *F2, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], int FACTAUX[][MS1], mpz_t p, mpz_t *q, int g) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
	NUMSUMV2(p, nm2, C, C1, b, b1, D, E, H, S, g, div1, sum1, mem, q[g], 0);	
	VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
	//MODPRIMSUMSUSUL1(0, 0, W, nr, nm, unu, doi, A2, div1, sum1, mem, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p);
	MODPRIMSUMSUSUL(0, 0, W, nr, nm, unu, doi, A2, div1, sum1, sum, FACTAUX, mem, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, nr2, nm2, p);
	if(!(ftell(f1) ^ PP2))
		break;
	
	fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMSUM6(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int H, int K, int S, mpz_t unu, mpz_t doi, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX1[][MS1], int FACTAUX2[][MS1], int FACTAUX3[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t p, mpz_t *q, int u) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
		SUMDIVV1(p, nm2, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
		VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
		SUSMODPRIMSUMUL(unu, doi, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, nr, nm, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p);
		if(!(ftell(f1) ^ PP2))
			break;
		
		fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMSUM7(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int H, int K, int S, mpz_t unu, mpz_t doi, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX1[][MS1], int FACTAUX2[][MS1], int FACTAUX3[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t p, mpz_t *q, int g) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SUMDIVV(p, nm2, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g]);
		VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
		SUSMODPRIMSUMUL(unu, doi, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, nr, nm, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p);
		if(!(ftell(f1) ^ PP2))
			break;
		
		fgets(Q, 1920, f1);
	}
}


void SUSMODPRIMSUM8(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, int D, int H, int K, int S, mpz_t unu, mpz_t doi, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX1[][MS1], int FACTAUX2[][MS1], int FACTAUX3[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t p, mpz_t *q, int g) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, g = mpz_scan1(unu, 0));
		SUM7(p, nm2, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
		VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
		SUSMODPRIMSUMUL(unu, doi, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, nr, nm, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, p);
		if(!(ftell(f1) ^ PP2))
			break;
		
		fgets(Q, 1920, f1);
	}
}


void JOSMODPRIMSUM1(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, int D, int H, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, gmp_ui *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;

	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SMV(p, nm2, b, b1, D, H, u, div1, sum1, q[u]);
			VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
			}

		MODPRIMSUMJOS(nr, nm, unu, doi, A2[f], div1, sum1, 0, Q, F2, FACT[f], FACTLEG[f], PRIMP[f], p);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIMSUM2(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, int D, int H, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, mpz_t *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;

	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMPURG1(p, nm2, b, b1, D, H, u, div1, sum1, q[u], 0);
			VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
			}

		MODPRIMSUMJOS2(nr, nm, nr2, nm2, unu, doi, A2[f], div1, sum1, 0, Q, F2, FACT[f], FACTLEG[f], PRIMP[f], p);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIMSUM3(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, int D, int H, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, mpz_t *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;

	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV1(p, nm2, b, b1, D, H, u, div1, sum1, q[u], 0);
			VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
			}
		
		MODPRIMSUMJOS2(nr, nm, nr2, nm2, unu, doi, A2[f], div1, sum1, 0, Q, F2, FACT[f], FACTLEG[f], PRIMP[f], p);
	}

	if(!(ftell(f1) ^ PP2))
		break;	
	fgets(Q, 1920, f1);	
	}
}


void JOSMODPRIMSUM4(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, int D, int H, int S, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F2, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], mpz_t p, mpz_t *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;

	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV3(p, nm2, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);
			VALIDNOU1(unu, doi, nm2, nr2, nr1, nm1);
			}
		
		MODPRIMSUMJOSUL(unu, doi, nr1, nm1, nr2, nm2, A2[f], div1, sum1, mem, 0, Q, F2, FACT[f], FACTLEG[f], PRIMP[f], SFACT[f], SFACTLEG[f], SPRIMP[f], p);
	}

	if(!(ftell(f1) ^ PP2))
		break;	
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIMSUM5(char *Q, long PP2, FILE *f1, int W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int H, int S, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F2, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], mpz_t p, mpz_t *q) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;

	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A2[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV2(p, nm2, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);
			VALIDNOU1(unu, doi, nm2, nr2, nr1, nm1);
			}
		
		MODPRIMSUMJOSUL(unu, doi, nr1, nm1, nr2, nm2, A2[f], div1, sum1, mem, 0, Q, F2, FACT[f], FACTLEG[f], PRIMP[f], SFACT[f], SFACTLEG[f], SPRIMP[f], p);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPRIMSUM6(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int H, int K, int S, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;
		while(1) {
			if(!u)
				break;
			if(mpz_divisible_ui_p(unu, A2[--u])) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, nm2, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				VALIDNOU1(unu, doi, nm2, nr2, nr1, nm1);
				JOSMODPRIMSUMUL(W, unu, doi, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, nr1, nm1, p);
				break;
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;		
		fgets(Q, 1920, f1);
		}
}


void JOSMODPRIMSUM7(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int H, int K, int S, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;
		while(1) {
			if(!u)
				break;
			if(mpz_divisible_ui_p(unu, A2[--u])) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, nm2, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				VALIDNOU1(unu, doi, nm2, nr2, nr1, nm1);
				JOSMODPRIMSUMUL(W, unu, doi, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, nr1, nm1, p);
				break;
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void JOSMODPRIMSUM8(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, int D, int H, int K, int S, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui nm, gmp_ui nr, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t p, mpz_t *q) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;
		while(1) {
			if(!u)
				break;
			if(mpz_divisible_ui_p(unu, A2[--u])) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, nm2, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
				JOSMODPRIMSUMUL(W, unu, doi, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, nr, nm, p);
				break;
				}
			}

		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
}


void MODPRIMSUM(char *Q, long PP2, FILE *f1, int &W, int &f, int &u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int H, int K, int S, mpz_t unu, mpz_t doi, gmp_ui *A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui nr, gmp_ui nm, int &sus, int &dir, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX1[][MS1], int FACTAUX2[][MS1], int FACTAUX3[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q, gmp_ui *q0) {
	if(dir) {
		sus < 55? SUSMODPRIMSUM1(Q, PP2, f1, W, b, b1, D, H, unu, doi, A2, div1, sum1, F2, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, p, q0, 0)
		: sus < 73? SUSMODPRIMSUM2(Q, PP2, f1, W, b, b1, D, H, unu, doi, A2, div1, sum1, F2, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, p, q, 0)
			: sus < 163? SUSMODPRIMSUM3(Q, PP2, f1, W, b, b1, D, H, unu, doi, A2, div1, sum1, F2, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, p, q, 0)
			: sus < 213? SUSMODPRIMSUM4(Q, PP2, f1, W, b, b1, D, H, S, unu, doi, A2, div1, sum1, sum, mem, F2, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, FACTAUX1, p, q, 0)
			: sus < 223? SUSMODPRIMSUM5(Q, PP2, f1, W, b, b1, C, C1, D, E, H, S, unu, doi, A2, div1, sum1, sum, mem, F2, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, FACTAUX1, p, q, 0)
				: sus < 243? SUSMODPRIMSUM6(Q, PP2, f1, b, b1, C, C1, D, E, H, K, S, unu, doi, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, F2, mem, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, q, 0) 
					: SUSMODPRIMSUM7(Q, PP2, f1, b, b1, C, C1, D, E, H, K, S, unu, doi, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, F2, mem, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, q, 0);
		} else {
		sus < 55? JOSMODPRIMSUM1(Q, PP2, f1, W, f, u, b, b1, D, H, unu, doi, A2, div1, sum1, F2, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, p, q0)
		: sus < 73? JOSMODPRIMSUM2(Q, PP2, f1, W, f, u, b, b1, D, H, unu, doi, A2, div1, sum1, F2, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, p, q)
			: sus < 163? JOSMODPRIMSUM3(Q, PP2, f1, W, f, u, b, b1, D, H, unu, doi, A2, div1, sum1, F2, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, p, q)
			: sus < 213? JOSMODPRIMSUM4(Q, PP2, f1, W, f, u, b, b1, D, H, S, unu, doi, A2, div1, sum1, mem, F2, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p, q)
			: sus < 223? JOSMODPRIMSUM5(Q, PP2, f1, W, f, u, b, b1, C, C1, D, E, H, S, unu, doi, A2, div1, sum1, mem, F2, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p, q)
				: sus < 243? JOSMODPRIMSUM6(Q, PP2, f1, W, u, b, b1, C, C1, D, E, H, K, S, unu, doi, A2, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, F2, mem, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, q)
					: JOSMODPRIMSUM7(Q, PP2, f1, W, u, b, b1, C, C1, D, E, H, K, S, unu, doi, A2, m1, m2, m3, k, knk, nk, div, sum, div1, sum1, F2, mem, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, q);
	}
}


//Cum facem la doiari?

//MODPARSUM:
void MODPDOISUS(gmp_ui j, gmp_ui j2, gmp_ui &nr, gmp_ui &nm, gmp_ui *sumdoi1) {//j = 2, j2 = mpz_scan1(unu, 0).
nr *= sumdoi1[j+j2], nm *= sumdoi1[--j];
}


void MODPDOISUSUL(gmp_ui j, gmp_ui j2, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui *sumdoi1) {
nr *= sumdoi1[j+j2], nm *= sumdoi1[--j];
mpz_set_ui(nr2, nr);
mpz_set_ui(nm2, nm);
}


void MODPDOISUSM(gmp_ui j, mpz_t doi, gmp_ui j2, mpz_t *sumdoi, gmp_ui *sumdoi1, mpz_t nr2, mpz_t nm2) {
mpz_mul(nr2, nr2, sumdoi[j+j2]);
mpz_sub_ui(doi, sumdoi[j+j2], sumdoi1[--j]);
mpz_mul(nm2, nm2, doi);
//nr = mpz_get_ui(nr2);
//nm = mpz_get_ui(nm2);
}


void MODPDOIJOS(gmp_ui a, gmp_ui j1, gmp_ui &nr, gmp_ui &nm, gmp_ui *sumdoi1) {
nm *= sumdoi1[j1], nr *= (sumdoi1[j1] - sumdoi1[a]);
}


void MODPDOIJOSUL(gmp_ui a, gmp_ui j1, gmp_ui &nr, gmp_ui &nm, mpz_t nr2, mpz_t nm2, gmp_ui *sumdoi1) {
nm *= sumdoi1[j1], nr *= (sumdoi1[j1] - sumdoi1[a]);
mpz_set_ui(nr2, nr);
mpz_set_ui(nm2, nm);
}


// 32*3 = 96, 8*3 = 24, 63-15 sau 63-7? 252/96 versus 60/24; 63/24 sau 60/24; 63/24 * 60/63 = 60/24, dar 60 = 63-3, divizorul era 4.
void MODPDOIJOSM(gmp_ui a, mpz_t doi, mpz_t sumdoi, gmp_ui *sumdoi1, mpz_t nr2, mpz_t nm2) {
mpz_mul(nm2, nm2, sumdoi);
mpz_sub_ui(doi, sumdoi, sumdoi1[a]);
mpz_mul(nr2, nr2, doi);
}


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


void SEPSUMSUS(mpz_t unu, mpz_t doi, gmp_ui nr, gmp_ui nm, gmp_ui nr1, gmp_ui nm1, char *Q, FILE *F2, gmp_ui *sumdoi1, int j, int n, int *doiul, int sep) {//n = 0.
	for(; n < sep; n++) {
		MODPDOISUS(doiul[n], j, nr = nr1, nm = nm1, sumdoi1);
		CMM2S0(unu, doi, doiul[n], nr, nm, CMMDC(nr, nm, nr%nm), Q, F2);
	}
}


void SEPSUMSUS1(mpz_t unu, mpz_t doi, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, char *Q, FILE *F2, gmp_ui *sumdoi1, int j, int n, int *doiul, int sep) {
	for(; n < sep; n++) {
		mpz_set_ui(nr2, nr1);
		mpz_set_ui(nm2, nm1);
		MODPDOISUSUL(doiul[n], j, nr1, nm1, nr2, nm2, sumdoi1);		
		CMM2S(nr2, nm2, unu, doi, doiul[n], Q, F2);
	}
}


void SEPSUMSUS2(mpz_t unu, mpz_t doi, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, char *Q, FILE *F2, mpz_t *sumdoi, gmp_ui *sumdoi1, int j, int n, int *doiul, int sep) {
	for(; n < sep; n++) {	
		mpz_set_ui(nr2, nr1);
		mpz_set_ui(nm2, nm1);		
		MODPDOISUSM(doiul[n], doi, j, sumdoi, sumdoi1, nr2, nm2);
		CMM2S(nr2, nm2, unu, doi, doiul[n], Q, F2);
	}
}


void SEPSUMSUS3(mpz_t unu, mpz_t doi, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, char *Q, FILE *F2, mpz_t *sumdoi, gmp_ui *sumdoi1, int *doiul, int j, int n, int sep) {//n = 0.
	for(; n < sep; n++) {
		mpz_set_ui(nr2, nr1);
		mpz_set_ui(nm2, nm1);
		MODPDOISUSM(doiul[n], doi, j, sumdoi, sumdoi1, nr2, nm2);		
		CMM2S(nr2, nm2, unu, doi, doiul[n], Q, F2);
	}
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


void MODPARSUMSUS(int n, int z, gmp_ui nr1, gmp_ui nm1, gmp_ui nr, gmp_ui nm, int f, mpz_t unu, mpz_t doi, gmp_ui *AG, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi1, int *doi1, char *Q, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, int *doiul, int sep) {
	for(n = 0; n < f; n++) {
		MODPDOISUS(doi1[n], j, nr = nr1, nm = nm1, sumdoi1);
		
		for(z = 0; FACT[n][z]; z++)
		mpz_divisible_ui_p(p, FACT[n][z])?
			MODPSUS0(p, FACTLEG[n][z], PRIMP[n][z], div1, sum1, nr, nm, 2, 0)
				: MODPSUS1(FACTLEG[n][z], PRIMP[n][z], div1, sum1, nr, nm);
		
		CMMS0(unu, doi, AG[n], nr1, nm1, CMMDC(nr1, nm1, nr1%nm1), Q, F2);
	}

	SEPSUMSUS(unu, doi, nr, nm, nr1, nm1, Q, F2, sumdoi1, j, 0, doiul, sep);
}


void MODPARSUMSUS1(int n, int z, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, int f, mpz_t unu, mpz_t doi, gmp_ui *AG, int *doi1, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sum[][MAX1], int *mem, gmp_ui *sumdoi1, mpz_t *sumdoi, char *Q, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], int FACTAUX[][MS1], mpz_t p, int *doiul, int sep) {
	for(n = 0; n < f; n++) {
		mpz_set_ui(nm2, nm1);
		mpz_set_ui(nr2, nr1);
		MODPDOISUSM(doi1[n], doi, j, sumdoi, sumdoi1, nr2, nm2);
		
		for(z = 0; FACT[n][z]; z++)
		mpz_divisible_ui_p(p, FACT[n][z])?
			MODPSUSM2(p, FACTLEG[n][z], PRIMP[n][z], 2, 0, div1, sum1, nr2, nm2)
				: MODPSUSM1(FACTLEG[n][z], PRIMP[n][z], div1, sum1, nr2, nm2);
			
		for(z = 0; FACT[n][z]; z++)
		mpz_divisible_ui_p(p, SFACT[n][z])?
			MODPSUSMARE(p, SFACTLEG[n][z], SPRIMP[n][z], 0, 0, div1, sum1, sum, doi, FACTAUX[n][z], mem, nr2, nm2)
				: MODPSUSM1(SFACTLEG[n][z], SPRIMP[n][z], div1, sum1, nr2, nm2);
			
		CMMS(nr2, nm2, unu, doi, AG[n], Q, F2);
	}

	SEPSUMSUS2(unu, doi, nr1, nm1, nr2, nm2, Q, F2, sumdoi, sumdoi1, j, 0, doiul, sep);
}


void MODPARSUMSUS2(int n, int z, gmp_ui nr1, gmp_ui nm1, mpz_t nr2, mpz_t nm2, int f, mpz_t unu, mpz_t doi, gmp_ui *AG, int *doi1, int j, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *sumdoi1, mpz_t *sumdoi, char *Q, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, int *doiul, int sep) {
	for(n = 0; n < f; n++) {
		mpz_set_ui(nm2, nm1);
		mpz_set_ui(nr2, nr1);
		MODPDOISUSM(doi1[n], doi, j, sumdoi, sumdoi1, nr2, nm2);
		
		for(z = 0; FACT[n][z]; z++)
		mpz_divisible_ui_p(p, FACT[n][z])?
			MODPSUSM2(p, FACTLEG[n][z], PRIMP[n][z], 2, 0, div1, sum1, nr2, nm2)
				: MODPSUSM1(FACTLEG[n][z], PRIMP[n][z], div1, sum1, nr2, nm2);
				
		CMMS(nr2, nm2, unu, doi, AG[n], Q, F2);
	}

	SEPSUMSUS2(unu, doi, nr1, nm1, nr2, nm2, Q, F2, sumdoi, sumdoi1, j, 0, doiul, sep);
}


void MODPARSUMSUSM(int n, int z, int knk, mpz_t unu, mpz_t doi, gmp_ui *w2, int *doi1, int j, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, char *Q, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], int FACTAUX[][MS1], int FACTAUX1[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, mpz_t p) {
	for(n = 0; n < knk; n++) {
		mpz_set_ui(nr2, nr);
		mpz_set_ui(nm2, nm);	
		MODPDOISUSM(doi1[n], doi, j, sumdoi, sumdoi1, nr2, nm2);
		
		for(z = 0; FACT1[n][z]; z++)
		mpz_divisible_ui_p(p, FACT1[n][z])?
			MODPSUSM2(p, FACTLEG1[n][z], PRIMP1[n][z], 2, 0, div1, sum1, nr2, nm2)
				: MODPSUSM1(FACTLEG1[n][z], PRIMP1[n][z], div1, sum1, nr2, nm2);

		for(z = 0; SFACT[n][z]; z++)
		mpz_divisible_ui_p(p, SFACT[n][z])?
			MODPSUSMARE(p, SFACTLEG[n][z], SPRIMP[n][z], 0, 0, div1, sum1, sum, doi, FACTAUX1[n][z], mem, nr2, nm2)
				: MODPSUSM1(SFACTLEG[n][z], SPRIMP[n][z], div1, sum1, nr2, nm2);

		for(z = 0; FACT[n][z]; z++)
			mpz_divisible_ui_p(p, FACT[n][z])?
				MODPSUSM0(p, FACTLEG[n][z], PRIMP[n][z], FACTAUX[n][z], 2, 0, div, sum, div1, sum1, mem, doi, nr2, nm2)
					: MODPSUSM1(FACTLEG[n][z], PRIMP[n][z], div1, sum1, nr2, nm2);
		
		CMMS(nr2, nm2, unu, doi, w2[n], Q, F2);
	}

	//SEPSUMSUS3(unu, doi, trei, d1, nr2, nm2, Q, F2, sumdoi, sumdoi1, A5, j, 0, sep);
}


void MODPARSUMSUSM0(int n, int z, int k, mpz_t unu, mpz_t doi, gmp_ui *w1, int *doi1, int j, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, char *Q, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], int FACTAUX[][MS1], gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, mpz_t p) {
	for(n = 0; n < k; n++) {
		mpz_set_ui(nr2, nr);
		mpz_set_ui(nm2, nm);
		MODPDOISUSM(doi1[n], doi, j, sumdoi, sumdoi1, nr2, nm2);
		
		for(z = 0; FACT[n][z]; z++)
		mpz_divisible_ui_p(p, FACT[n][z])?
			MODPSUSM0(p, FACTLEG[n][z], PRIMP[n][z], FACTAUX[n][z], 2, 0, div, sum, div1, sum1, mem, doi, nr2, nm2)
				: MODPSUSM1(FACTLEG[n][z], PRIMP[n][z], div1, sum1, nr2, nm2);
			
		CMMS(nr2, nm2, unu, doi, w1[n], Q, F2);
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


void SUSMODPARSUMUL(mpz_t unu, mpz_t doi, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, gmp_ui nr, gmp_ui nm, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX1[][MS1], int FACTAUX2[][MS1], int FACTAUX3[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t nr2, mpz_t nm2, int j, mpz_t p, int *doiul, int sep) {
	MODPARSUMSUSM0(0, 0, k, unu, doi, w1, doi1, j, div, sum, div1, sum1, mem, sumdoi, sumdoi1, Q, F2, FACT, FACTLEG, PRIMP, FACTAUX, nr, nm, nr2, nm2, p);
	MODPARSUMSUSM(0, 0, knk, unu, doi, w2, doi2, j, div, sum, div1, sum1, mem, sumdoi, sumdoi1, Q, F2, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX2, FACTAUX3, SFACT2, SFACTLEG2, SPRIMP2, nr, nm, nr2, nm2, p);
	MODPARSUMSUS1(0, 0, nr, nm, nr2, nm2, nk, unu, doi, w3, doi3, j, div1, sum1, sum, mem, sumdoi1, sumdoi, Q, F2, FACT1, FACTLEG1, PRIMP1, SFACT, SFACTLEG, SPRIMP, FACTAUX1, p, doiul, 0);
	SEPSUMSUS1(unu, doi, nr, nm, nr2, nm2, Q, F2, sumdoi1, j, 0, doiul, sep);
}


void JOSMODPARSUMUL(int W, mpz_t unu, mpz_t doi, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, char *Q, FILE *F2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t *sumdoi, gmp_ui *sumdoi1, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t nr2, mpz_t nm2, gmp_ui &nr1, gmp_ui &nm1, int j2, mpz_t p, gmp_ui *A5, int *doiul, int sep) {
	for(W = k-1; W >= 0; --W)
	if(mpz_divisible_ui_p(p, m1[W])) {
		MODPARSUMJOSM0(unu, doi, w1[W], j2, div, sum, div1, sum1, mem, sumdoi, sumdoi1, doi1[W]-1, Q, F2, FACT[W], FACTLEG[W], PRIMP[W], FACTAUX[W], nr1, nm1, nr2, nm2, p);
	}

	for(W = knk-1; W >= 0; --W)
	if(mpz_divisible_ui_p(p, m2[W])) {
		MODPARSUMJOSM(unu, doi, w2[W], j2, div, sum, div1, sum1, mem, sumdoi, sumdoi1, doi2[W]-1, Q, F2, FACT2[W], FACTLEG2[W], PRIMP2[W], FACT3[W], FACTLEG3[W], PRIMP3[W], FACTAUX2[W], SFACT[W], SFACTLEG[W], SPRIMP[W], nr1, nm1, nr2, nm2, p);
	}
	
	for(W = nk-1; W >= 0; --W)
	if(mpz_divisible_ui_p(p, m3[W])) {
		MODPARSUMJOSM1(unu, doi, w3[W], j2, div1, sum1, mem, sumdoi, sumdoi1, doi3[W]-1, Q, F2, FACT1[W], FACTLEG1[W], PRIMP1[W], SFACT[W], SFACTLEG[W], SPRIMP[W], nr1, nm1, nr2, nm2, p);
	}
	
	if(sep) {
		mpz_set_ui(nr2, nr1);
		mpz_set_ui(nm2, nm1);
		for(W = sep-1; W >= 0; --W)
		if(mpz_divisible_ui_p(unu, A5[W])) {
			SEPSUMJOS1(doiul[W], unu, doi, nr1, nm1, nr2, nm2, sumdoi[j2], sumdoi1, Q, F2);
		}
	}
}


void SUSMODPARSUM1(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, int D, int H, mpz_t unu, mpz_t doi, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *sumdoi1, int *doi1, int j, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, gmp_ui *q, int *doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
		SMV(p, nm2, b, b1, D, H, j, div1, sum1, q[j]);
		VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
		MODPARSUMSUS(0, 0, nr, nm, nr, nm, W, unu, doi, AG, j, div1, sum1, sumdoi1, doi1, Q, F2, FACT, FACTLEG, PRIMP, p, doiul, sep);		
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
	}


void SUSMODPARSUM2(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, int D, int H, mpz_t unu, mpz_t doi, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *sumdoi1, int *doi1, int j, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, mpz_t *q, int *doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
	NUMSUMPURG1(p, nm2, b, b1, D, H, j, div1, sum1, q[j], 0);
	VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
	MODPARSUMSUS2(0, 0, nr, nm, nr2, nm2, W, unu, doi, AG, doi1, j, div1, sum1, sumdoi1, q, Q, F2, FACT, FACTLEG, PRIMP, p, doiul, sep);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODPARSUM3(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, int D, int H, mpz_t unu, mpz_t doi, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *sumdoi1, int *doi1, int j, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, mpz_t *q, int *doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
	NUMSUMV1(p, nm2, b, b1, D, H, j, div1, sum1, q[j], 0);
	VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
	MODPARSUMSUS2(0, 0, nr, nm, nr2, nm2, W, unu, doi, AG, doi1, j, div1, sum1, sumdoi1, q, Q, F2, FACT, FACTLEG, PRIMP, p, doiul, sep);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODPARSUM4(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, int D, int H, int S, mpz_t unu, mpz_t doi, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sum[][MAX1], int *mem, FILE *F2, gmp_ui *sumdoi1, int *doi1, int j, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], int FACTAUX[][MS1], mpz_t p, mpz_t *q, int *doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
	NUMSUMV3(p, nm2, b, b1, D, H, S, j, div1, sum1, mem, q[j], 0);
	VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
	MODPARSUMSUS1(0, 0, nr, nm, nr2, nm2, W, unu, doi, AG, doi1, j, div1, sum1, sum, mem, sumdoi1, q, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, FACTAUX, p, doiul, sep);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODPARSUM5(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int H, int S, mpz_t unu, mpz_t doi, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sum[][MAX1], int *mem, FILE *F2, gmp_ui *sumdoi1, int *doi1, int j, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], int FACTAUX[][MS1], mpz_t p, mpz_t *q, int *doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
	NUMSUMV2(p, nm2, C, C1, b, b1, D, E, H, S, j, div1, sum1, mem, q[j], 0);
	VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
	MODPARSUMSUS1(0, 0, nr, nm, nr2, nm2, W, unu, doi, AG, doi1, j, div1, sum1, sum, mem, sumdoi1, q, Q, F2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, FACTAUX, p, doiul, sep);
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void SUSMODPARSUM6(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int H, int K, int S, mpz_t unu, mpz_t doi, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui *sumdoi1, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX1[][MS1], int FACTAUX2[][MS1], int FACTAUX3[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], int j, mpz_t p, mpz_t *q, int *doiul, int sep) {	
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
		SUMDIVV1(p, nm2, C, C1, b, b1, D, E, H, K, S, j, div1, sum1, div, sum, mem, q[j], 0);
		VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
		SUSMODPARSUMUL(unu, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, sumdoi1, nr, nm, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, j, p, doiul, sep);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
	}


void SUSMODPARSUM7(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int H, int K, int S, mpz_t unu, mpz_t doi, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui *sumdoi1, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX1[][MS1], int FACTAUX2[][MS1], int FACTAUX3[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], int j, mpz_t p, mpz_t *q, int *doiul, int sep) {	
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
		SUMDIVV(p, nm2, C, C1, b, b1, D, E, H, K, S, j, div1, sum1, div, sum, mem, q[j]);
		VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
		SUSMODPARSUMUL(unu, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, sumdoi1, nr, nm, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, j, p, doiul, sep);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
	}
	
	
void SUSMODPARSUM8(char *Q, long PP2, FILE *f1, gmp_ui *b, gmp_ui *b1, int D, int H, int K, int S, mpz_t unu, mpz_t doi, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui *sumdoi1, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX1[][MS1], int FACTAUX2[][MS1], int FACTAUX3[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], int j, mpz_t p, mpz_t *q, int *doiul, int sep) {	
	while(1) {
		mpz_set_str(unu, Q, 10);
		mpz_tdiv_q_2exp(p, unu, j = mpz_scan1(unu, 0));
		SUM7(p, nm2, b, b1, D, H, K, S, j, div1, sum1, div, sum, mem, q[j], 0);
		VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
		SUSMODPARSUMUL(unu, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, sumdoi1, nr, nm, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, j, p, doiul, sep);
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
		}
	}


void JOSMODPARSUM1(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, int D, int H, mpz_t unu, mpz_t doi, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *sumdoi1, int *doi1, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, gmp_ui *q, int *doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, AG[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SMV(p, nm2, b, b1, D, H, u, div1, sum1, q[u]);
			VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
		}
		MODPARSUMJOS(nr, nm, unu, doi, AG[f], u, div1, sum1, sumdoi1, doi1[f]-1, Q, F2, FACT[f], FACTLEG[f], PRIMP[f], p);
	}
	
	for(f = sep-1; f >= 0; --f)
		if(mpz_divisible_ui_p(unu, A5[f])) {
			if(!u) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SMV(p, nm2, b, b1, D, H, u, div1, sum1, q[u]);
				VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
				}
				
			SEPSUMJOS(doiul[f], unu, doi, nr, nm, u, sumdoi1, Q, F2);
	}
	
	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPARSUM2(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, int D, int H, mpz_t unu, mpz_t doi, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *sumdoi1, int *doi1, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, mpz_t *q, int *doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)	
	if(mpz_divisible_ui_p(unu, AG[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMPURG1(p, nm2, b, b1, D, H, u, div1, sum1, q[u], 0);
			VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
		}

		MODPARSUMJOSM2(unu, doi, AG[f], u, div1, sum1, q, sumdoi1, doi1[f]-1, Q, F2, FACT[f], FACTLEG[f], PRIMP[f], nr, nm, nr2, nm2, p);		
}
	for(f = sep-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A5[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMPURG1(p, nm2, b, b1, D, H, u, div1, sum1, q[u], 0);
			VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
			}

		SEPSUMJOS1(doiul[f], unu, doi, nr, nm, nr2, nm2, q[u], sumdoi1, Q, F2);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPARSUM3(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, int D, int H, mpz_t unu, mpz_t doi, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, gmp_ui *sumdoi1, int *doi1, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, mpz_t *q, int *doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, AG[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV1(p, nm2, b, b1, D, H, u, div1, sum1, q[u], 0);
			VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
		}

		MODPARSUMJOSM2(unu, doi, AG[f], u, div1, sum1, q, sumdoi1, doi1[f]-1, Q, F2, FACT[f], FACTLEG[f], PRIMP[f], nr, nm, nr2, nm2, p);
}
	for(f = sep-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A5[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV1(p, nm2, b, b1, D, H, u, div1, sum1, q[u], 0);
			VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
			}

		SEPSUMJOS1(doiul[f], unu, doi, nr, nm, nr2, nm2, q[u], sumdoi1, Q, F2);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPARSUM4(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, int D, int H, int S, mpz_t unu, mpz_t doi, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F2, gmp_ui *sumdoi1, int *doi1, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], mpz_t p, mpz_t *q, int *doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, AG[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV3(p, nm2, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);
			VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
		}

		MODPARSUMJOSM1(unu, doi, AG[f], u, div1, sum1, mem, q, sumdoi1, doi1[f]-1, Q, F2, FACT[f], FACTLEG[f], PRIMP[f], SFACT[f], SFACTLEG[f], SPRIMP[f], nr, nm, nr2, nm2, p);
}
	for(f = sep-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A5[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV3(p, nm2, b, b1, D, H, S, u, div1, sum1, mem, q[u], 0);
			VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
			}

		SEPSUMJOS1(doiul[f], unu, doi, nr, nm, nr2, nm2, q[u], sumdoi1, Q, F2);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPARSUM5(char *Q, long PP2, FILE *f1, int &W, int f, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int H, int S, mpz_t unu, mpz_t doi, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F2, gmp_ui *sumdoi1, int *doi1, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], mpz_t p, mpz_t *q, int *doiul, int sep) {
while(1) {
	mpz_set_str(unu, Q, 10);
	u = 0;
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, AG[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV2(p, nm2, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);
			VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
		}

		MODPARSUMJOSM1(unu, doi, AG[f], u, div1, sum1, mem, q, sumdoi1, doi1[f]-1, Q, F2, FACT[f], FACTLEG[f], PRIMP[f], SFACT[f], SFACTLEG[f], SPRIMP[f], nr, nm, nr2, nm2, p);
}

	for(f = sep-1; f >= 0; --f)
	if(mpz_divisible_ui_p(unu, A5[f])) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			NUMSUMV2(p, nm2, C, C1, b, b1, D, E, H, S, u, div1, sum1, mem, q[u], 0);
			VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
			}

		SEPSUMJOS1(doiul[f], unu, doi, nr, nm, nr2, nm2, q[u], sumdoi1, Q, F2);
	}

	if(!(ftell(f1) ^ PP2))
		break;
	fgets(Q, 1920, f1);
	}
}


void JOSMODPARSUM6(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int H, int K, int S, mpz_t unu, mpz_t doi, gmp_ui *AG, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui *sumdoi1, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t p, mpz_t *q, gmp_ui *A5, int *doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;
		while(1) {
			if(!u) break;
			if(mpz_divisible_ui_p(unu, AG[--u])) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV1(p, nm2, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
				JOSMODPARSUMUL(W, unu, doi, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, sumdoi1, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, nr, nm, u, p, A5, doiul, 0);
				break;
				}
		}
	if(sep) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV1(p, nm2, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
			VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
			}
			
		for(; sep >= 0; --sep)
		if(mpz_divisible_ui_p(unu, A5[sep])) {
			SEPSUMJOS1(doiul[sep], unu, doi, nr, nm, nr2, nm2, q[u], sumdoi1, Q, F2);
			}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODPARSUM7(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int H, int K, int S, mpz_t unu, mpz_t doi, gmp_ui *AG, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui *sumdoi1, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t p, mpz_t *q, gmp_ui *A5, int *doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;
		while(1) {
			if(!u) break;
			if(mpz_divisible_ui_p(unu, AG[--u])) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUMDIVV(p, nm2, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
				VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
				JOSMODPARSUMUL(W, unu, doi, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, sumdoi1, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, nr, nm, u, p, A5, doiul, 0);
				break;
				}
		}
	if(sep) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUMDIVV(p, nm2, C, C1, b, b1, D, E, H, K, S, u, div1, sum1, div, sum, mem, q[u]);
			VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
			}
		
		for(; sep >= 0; --sep)
		if(mpz_divisible_ui_p(unu, A5[sep])) {
			SEPSUMJOS1(doiul[sep], unu, doi, nr, nm, nr2, nm2, q[u], sumdoi1, Q, F2);
			}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void JOSMODPARSUM8(char *Q, long PP2, FILE *f1, int W, int u, gmp_ui *b, gmp_ui *b1, int D, int H, int K, int S, mpz_t unu, mpz_t doi, gmp_ui *AG, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui *sumdoi1, gmp_ui nr, gmp_ui nm, mpz_t nr2, mpz_t nm2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t p, mpz_t *q, gmp_ui *A5, int *doiul, int sep) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		u = W;
		while(1) {
			if(!u) break;
			if(mpz_divisible_ui_p(unu, AG[--u])) {
				mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
				SUM7(p, nm2, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
				VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
				JOSMODPARSUMUL(W, unu, doi, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, q, sumdoi1, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, nr2, nm2, nr, nm, u, p, A5, doiul, 0);
				break;
				}
		}
	if(sep) {
		if(!u) {
			mpz_tdiv_q_2exp(p, unu, u = mpz_scan1(unu, 0));
			SUM7(p, nm2, b, b1, D, H, K, S, u, div1, sum1, div, sum, mem, q[u], 0);
			VALIDNOU1(unu, doi, nm2, nr2, nr, nm);
			}

		for(; sep >= 0; --sep)
		if(mpz_divisible_ui_p(unu, A5[sep])) {
			SEPSUMJOS1(doiul[sep], unu, doi, nr, nm, nr2, nm2, q[u], sumdoi1, Q, F2);
			}
		}
		if(!(ftell(f1) ^ PP2))
			break;
		fgets(Q, 1920, f1);
	}
}


void MODPARSUM(char *Q, long PP2, FILE *f1, int &W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int H, int K, int S, mpz_t unu, mpz_t doi, gmp_ui *A5, gmp_ui *AG, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, int *mem, gmp_ui *sumdoi1, int *doi0, gmp_ui nr, gmp_ui nm, int &sus, int &dir, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX1[][MS1], int FACTAUX2[][MS1], int FACTAUX3[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t nr2, mpz_t nm2, mpz_t p, mpz_t *q, gmp_ui *q0, int *doiul, int sep) {
	if(dir) {
		sus < 55? SUSMODPARSUM1(Q, PP2, f1, W, b, b1, D, H, unu, doi, AG, div1, sum1, F2, sumdoi1, doi0, 0, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, p, q0, doiul, sep) 
		: sus < 73? SUSMODPARSUM2(Q, PP2, f1, W, b, b1, D, H, unu, doi, AG, div1, sum1, F2, sumdoi1, doi0, 0, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, p, q, doiul, sep)
			: sus < 163? SUSMODPARSUM3(Q, PP2, f1, W, b, b1, D, H, unu, doi, AG, div1, sum1, F2, sumdoi1, doi0, 0, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, p, q, doiul, sep)
			: sus < 213? SUSMODPARSUM4(Q, PP2, f1, W, b, b1, D, H, S, unu, doi, AG, div1, sum1, sum, mem, F2, sumdoi1, doi0, 0, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, FACTAUX1, p, q, doiul, sep)
			: sus < 223? SUSMODPARSUM5(Q, PP2, f1, W, b, b1, C, C1, D, E, H, S, unu, doi, AG, div1, sum1, sum, mem, F2, sumdoi1, doi0, 0, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, FACTAUX1, p, q, doiul, sep)
				: sus < 243? SUSMODPARSUM6(Q, PP2, f1, b, b1, C, C1, D, E, H, K, S, unu, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, F2, mem, sumdoi1, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, 0, p, q, doiul, sep) 
					: SUSMODPARSUM7(Q, PP2, f1, b, b1, C, C1, D, E, H, K, S, unu, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, F2, mem, sumdoi1, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX1, FACTAUX2, FACTAUX3, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, 0, p, q, doiul, sep);
		} else {
		sus < 55? JOSMODPARSUM1(Q, PP2, f1, W, 0, 0, b, b1, D, H, unu, doi, A5, AG, div1, sum1, F2, sumdoi1, doi0, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, p, q0, doiul, sep)
		: sus < 73? JOSMODPARSUM2(Q, PP2, f1, W, 0, 0, b, b1, D, H, unu, doi, A5, AG, div1, sum1, F2, sumdoi1, doi0, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, p, q, doiul, sep)
			: sus < 163? JOSMODPARSUM3(Q, PP2, f1, W, 0, 0, b, b1, D, H, unu, doi, A5, AG, div1, sum1, F2, sumdoi1, doi0, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, p, q, doiul, sep)
			: sus < 213? JOSMODPARSUM4(Q, PP2, f1, W, 0, 0, b, b1, D, H, S, unu, doi, A5, AG, div1, sum1, mem, F2, sumdoi1, doi0, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p, q, doiul, sep)
			: sus < 223? JOSMODPARSUM5(Q, PP2, f1, W, 0, 0, b, b1, C, C1, D, E, H, S, unu, doi, A5, AG, div1, sum1, mem, F2, sumdoi1, doi0, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, SFACT, SFACTLEG, SPRIMP, p, q, doiul, sep) 
				: sus < 243? JOSMODPARSUM6(Q, PP2, f1, W, 0, b, b1, C, C1, D, E, H, K, S, unu, doi, AG, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, F2, mem, sumdoi1, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, q, A5, doiul, sep)
					: JOSMODPARSUM7(Q, PP2, f1, W, 0, b, b1, C, C1, D, E, H, K, S, unu, doi, AG, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, div, sum, div1, sum1, F2, mem, sumdoi1, nr, nm, nr2, nm2, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, q, A5, doiul, sep);
	}
}


//TOLMODSUM de TOLNUM:
void SUSTOLMODSUM1(char *Q, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *S2, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t sum, mpz_t imp, mpz_t mul, int g, mpz_t p, gmp_ui *q, int c) {
	if(!c) SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);	
	MODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
}


void SUSTOLMODSUM2(char *Q, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *S2, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t sum, mpz_t imp, mpz_t mul, int g, mpz_t p, mpz_t *q, int c) {
	if(!c) NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
	MODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
}


void SUSTOLMODSUM3(char *Q, int &W, gmp_ui *b, gmp_ui *b1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *S2, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t sum, mpz_t imp, mpz_t mul, int g, mpz_t p, mpz_t *q, int c) {
	if(!c) NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
	MODIFSUS1(1, 0, 0, W, S2, A2, Q, F2, p, unu, doi, d, d1, sum, imp, mul, div1, sum1, FACT, FACTLEG, PRIMP);
}


void SUSTOLMODSUM4(char *Q, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *s1, gmp_ui *s2, gmp_ui *s3, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, int g, mpz_t p, mpz_t *q, int c) {
	if(!c) {
		//PURGANTE(C, C1, E);
		SUMDIVV1(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
	}
	SUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);
}


void SUSTOLMODSUM5(char *Q, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *s1, gmp_ui *s2, gmp_ui *s3, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, int g, mpz_t p, mpz_t *q, int c) {
	if(!c) SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g]);
	SUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);
}


void SUSTOLMODSUM6(char *Q, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *s1, gmp_ui *s2, gmp_ui *s3, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, int g, mpz_t p, mpz_t *q, int c) {
	if(!c) SUMDIVV(p, d, C, C1, b, b1, D, E, H, K, S, g, div1, sum1, div, sum, mem, q[g]);
	SUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);
}


void SUSTOLMODSUM7(char *Q, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *s1, gmp_ui *s2, gmp_ui *s3, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, int g, mpz_t p, mpz_t *q, int c) {
	if(!c) SUM7(p, d, b, b1, D, H, K, S, g, div1, sum1, div, sum, mem, q[g], 0);
	SUSMODIFSUMULE(unu, d, d1, doi, s1, s2, s3, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p);
}


void JOSTOLMODSUM1(char *Q, int W, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], int g, mpz_t p, gmp_ui *q, int c) {
//if(W > PRAGW) {		
		if(!c) {
			mpz_tdiv_q_2exp(p, unu, g);
			SMV(p, d, b, b1, D, H, g, div1, sum1, q[g]);
		}
		
		for(W--; W >= 0; --W)
		if(mpz_divisible_ui_p(p, A2[W])) {
			MODIFJOS1(unu, d, d1, A2[W], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[W], FACTLEG[W], PRIMP[W], p);
		}
	/*}
else {
		u = 0;
		for(f = W-1; f >= 0; --f)
		if(mpz_divisible_ui_p(unu, A2[f])) {
			if(!u) {
				SME(unu, d, b, b1, D, H, g = mpz_scan1(unu, 0), div1, sum1, 2, p);
				u = 1;
				}
				
			MODIFJOS1(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[f], FACTLEG[f], p);
			}
	}*/
}


void JOSTOLMODSUM2(char *Q, int W, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], int g, mpz_t p, mpz_t *q, int c) {
//if(W > PRAGW) {	
	if(!c) {
		mpz_tdiv_q_2exp(p, unu, g);
		NUMSUMPURG1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
	}
	
	for(--W; W >= 0; --W)
	if(mpz_divisible_ui_p(p, A2[W])) {
		MODIFJOS1(unu, d, d1, A2[W], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[W], FACTLEG[W], PRIMP[W], p);
	}
	/*}
else {
	u = 0;		
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(p, A2[f])) {
		if(!u) {
			NUMSUMV1(p, d, b, b1, D, H, g = mpz_scan1(unu, 0), div1, sum1, q[g]);
			u = 1;
			}
			
		MODIFJOS1(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[f], FACTLEG[f], p);
		}
	}*/
}


void JOSTOLMODSUM3(char *Q, int W, gmp_ui *b, gmp_ui *b1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int H, FILE *F2, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], int g, mpz_t p, mpz_t *q, int c) {
//if(W > PRAGW) {	
	if(!c) {
		mpz_tdiv_q_2exp(p, unu, g);
		NUMSUMV1(p, d, b, b1, D, H, g, div1, sum1, q[g], 0);
	}
	
	for(W--; W >= 0; --W)
	if(mpz_divisible_ui_p(p, A2[W])) {
		MODIFJOS1(unu, d, d1, A2[W], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[W], FACTLEG[W], PRIMP[W], p);
		}
	/*}
else {
	u = 0;		
	for(f = W-1; f >= 0; --f)
	if(mpz_divisible_ui_p(p, A2[f])) {
		if(!u) {
			NUMSUMV1(p, d, b, b1, D, H, g = mpz_scan1(unu, 0), div1, sum1, q[g]);
			u = 1;
			}
			
		MODIFJOS1(unu, d, d1, A2[f], doi, trei, imp, mul, Q, F2, div1, sum1, FACT[f], FACTLEG[f], p);
		}
	}*/
}


void JOSTOLMODSUM4(char *Q, int W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], int g, mpz_t p, mpz_t *q, int c) {
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
			if(mpz_divisible_ui_p(p, A2[--u])) {
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
			if(mpz_divisible_ui_p(unu, A2[--u])) {
				SUMADIVE1(unu, d, C, C1, b, b1, D, E, H, K, S, g = mpz_scan1(unu, 0), div1, sum1, div, sum, p, q[g]);
				JOSMODIFSUMUL(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, p);
				break;
				}
		}
	}*/
}


void JOSTOLMODSUM5(char *Q, int W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], int g, mpz_t p, mpz_t *q, int c) {
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
			if(mpz_divisible_ui_p(unu, A2[--u])) {
				SUMADIVE(unu, d, C, C1, b, b1, D, E, H, K, S, g = mpz_scan1(unu, 0), div1, sum1, div, sum, p, q[g]);
				JOSMODIFSUMUL(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, p);
				break;
				}
		}
	}*/
}


void JOSTOLMODSUM6(char *Q, int W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], int g, mpz_t p, mpz_t *q, int c) {
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
			if(mpz_divisible_ui_p(unu, A2[--u])) {
				SUMIMENS(unu, d, C, C1, b, b1, D, E, H, S, K, g = mpz_scan1(unu, 0), div1, sum1, div, sum, mem, p, q[g]);
				JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, p);
				break;
				}
		}
	}*/
}


void JOSTOLMODSUM7(char *Q, int W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A2, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], int g, mpz_t p, mpz_t *q, int c) {
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
			if(mpz_divisible_ui_p(unu, A2[--u])) {
				NUMESUME(unu, d, b, b1, D, H, K, g = mpz_scan1(unu, 0), div1, sum1, div, sum, mem, p, q[g]);
				JOSMODIFSUMULE(W, unu, d, d1, doi, trei, imp, mul, m1, m2, m3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p);
				break;
				}
		}
	}*/
}


void TOLMODSUM(char *Q, int &W, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *sm, gmp_ui *A2, gmp_ui *s1, gmp_ui *s2, gmp_ui *s3, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int D, int E, int H, int K, int S, FILE *F2, int *mem, int &sus, int &dir, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t imp, mpz_t mul, int g, mpz_t p, mpz_t *q, gmp_ui *q0, int &c) {
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
void JOSTOLMODSPAR1(char *Q, int W, mpz_t imp, mpz_t mul, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, mpz_t *sumdoi, int *doi1, int v, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], mpz_t p, int *doiul, int sep) {
	for(W--; W >= 0; --W)
	if(mpz_divisible_ui_p(unu, AG[W])) {	
		MODSPARJOS1(p, unu, d, d1, AG[W], doi, trei, imp, mul, Q, F2, div1, sum1, sumdoi, doi1[W]-1, v, FACT[W], FACTLEG[W], PRIMP[W]);
	}
	
	for(sep--; sep >= 0; --sep)
		if(mpz_divisible_ui_p(unu, A5[sep])) {
			SEPJOS(unu, d, d1, doiul[sep], doi, trei, imp, mul, Q, F2, sumdoi, v);
	}
}


void TOLMODSPAR(char *Q, int &W, mpz_t unu, mpz_t d, mpz_t d1, mpz_t doi, mpz_t trei, gmp_ui *A5, gmp_ui *AG, gmp_ui *m1, gmp_ui *m2, gmp_ui *m3, gmp_ui *w1, gmp_ui *w2, gmp_ui *w3, int *doi1, int *doi2, int *doi3, int k, int knk, int nk, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F2, mpz_t *sumdoi, int *doi0, int *mem, int &sus, int &dir, gmp_ui FACT[][MS], int FACTLEG[][MS1], int PRIMP[][MS1], gmp_ui FACT1[][MS], int FACTLEG1[][MS1], int PRIMP1[][MS1], gmp_ui FACT2[][MS], int FACTLEG2[][MS1], int PRIMP2[][MS1], gmp_ui FACT3[][MS], int FACTLEG3[][MS1], int PRIMP3[][MS1], int FACTAUX[][MS1], int FACTAUX2[][MS1], gmp_ui SFACT[][MS], int SFACTLEG[][MS1], int SPRIMP[][MS1], gmp_ui SFACT2[][MS], int SFACTLEG2[][MS1], int SPRIMP2[][MS1], mpz_t summ, mpz_t imp, mpz_t mul, int g, mpz_t p, int *doiul, int sep) {
	if(dir) {
		sus < 213? MODSPARSUS1(1, W, 0, unu, d, d1, AG, doi, Q, F2, div1, sum1, sumdoi, doi0, g, 0, FACT, FACTLEG, PRIMP, summ, imp, mul, p, doiul, sep) 
			: SUSMODSPARUL(unu, d, d1, doi, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, g, sumdoi, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, summ, imp, mul, p, doiul, sep);
	} else {
		sus < 213? JOSTOLMODSPAR1(Q, W, imp, mul, unu, d, d1, doi, trei, A5, AG, div1, sum1, F2, sumdoi, doi0, g, FACT, FACTLEG, PRIMP, p, doiul, sep) 
			: JOSMODSPARUL(0, imp, mul, unu, d, d1, doi, trei, m1, m2, m3, w1, w2, w3, doi1, doi2, doi3, k, knk, nk, Q, F2, div1, sum1, div, sum, mem, sumdoi, g, FACT, FACTLEG, PRIMP, FACT1, FACTLEG1, PRIMP1, FACT2, FACTLEG2, PRIMP2, FACT3, FACTLEG3, PRIMP3, FACTAUX, FACTAUX2, SFACT, SFACTLEG, SPRIMP, SFACT2, SFACTLEG2, SPRIMP2, p, A5, doiul, sep);
		}
}
