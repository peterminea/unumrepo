#ifndef _TOLVECUN_H
#define _TOLVECUN_H


void TOLULE(mpz_t *K3, mpz_t *K4, gmp_ui *b, int *c, int k, FILE *F1, int b1, char *t);
void TOLULE1(gmp_ui *L3, gmp_ui *L4, gmp_ui *b, int *c, int k, FILE *F1, int b1, char *t);


int MAXPV(int A, int B, int b1, int &D, gmp_ui *b, int *c, mpz_t h, mpz_t *a, mpz_t *K3, mpz_t *K4, char *t) {
gmp_ui i1[U1], j[5300], L3[650], L4[650], m;
int d[U1], e, i, g, k, l;
e = 0;
while(e < D)
	d[e++]=0;
e = 0;
if(b1 > 15) {//160
	while(1) {
		g = A;
		mpz_set_ui(h, b[e]);
		i = 1;
		while(1) {
			if(!mpz_divisible_p(a[g], h))
				goto s1;
					
			while(1) {
				mpz_mul_ui(h, h, b[e]);
				if(!mpz_divisible_p(a[g], h))
					break;
				i += 1;
				}
				
				mpz_divexact_ui(h, h, b[e]);				
			s1:
			if(! (g-- ^ B) )
				break;
			}
		
		d[e] = i;		
		if(!(++e ^ D))
			break;
		}		
	} else {
	while(1)
		{
		g = A;
		m = b[e];		
		i = 1;
		while(1) {
			if(!mpz_divisible_ui_p(a[g], m))
				goto s2;
			//if(m == 2305843009213693951U)
				//gmp_printf("%Zd\n", a[g]);
				
			while(1) {
				m *= b[e];
				if(!mpz_divisible_ui_p(a[g], m))
					break;
				i += 1;
				}

				m /= b[e];				
			s2:
			if(! (g-- ^ B) )
				break;
			}

		d[e] = i;

		if(! (++e^D) )
			break;
		}
	}
	
//printf("%d %llu\n", b1, b[0]);
k = 0;
l = 0;
for(e = 0; e < D; e++)
	if (d[e] > 1) {
		i1[k] = b[e];
		c[k++] = d[e];
		}
	else 
		j[l++] = b[e];
l += k;
for(e = 0; e < l; e++)
e < k? b[e] = i1[e] : b[e] = j[e-k];

sprintf(t, "VPVV%d.TXT", b1);
FILE *F1 = fopen(t, "w");
if(b1 > 160) {
	for(e = 0; e < k; e++) {
		fprintf(F1, "%llu\n", b[e]);
		mpz_ui_pow_ui(K4[e], b[e], c[e]);
		mpz_set(K3[e], K4[e]);
		}

	fclose(F1);
	QS(K4, 0, e, h);
	TOLULE(K3, K4, b, c, k, F1, b1, t);
	}
else {
	for(e = 0; e < k; e++) {
		fprintf(F1, "%llu\n", b[e]);
		PUTERE(L4[e], b[e], c[e]);
		L3[e] = L4[e];
		}
	
	fclose(F1);
	QS2(L4, 0, e);
	TOLULE1(L3, L4, b, c, k, F1, b1, t);
	}

return k;
}


void TOLULE(mpz_t *K3, mpz_t *K4, gmp_ui *b, int *c, int k, FILE *F1, int b1, char *t) {
int i = k-1, j, l = 0;
gmp_ui d[400], e[400];

while(1) {//i = H - 1, l = 0; H-2 cu 1, H-3 cu 2, 0 cu H - 1.
	j = k - CBPOZ(K4, K3[i], 0, k) - 1;
	e[j] = c[i];
	d[j] = b[i];
	l++;
	if(!i--)
		break;
	}
	
	sprintf(t, "PUTERIVV%d.TXT", b1);
	F1 = fopen(t, "w");
for(i = 0; i < l; i++) {
	b[i] = d[i];
	gmp_fprintf(F1, "%llu la puterea %llu este: %Zd.\n", b[i], e[i], K4[l-i-1]);
	}
fclose(F1);
}


void TOLULE1(gmp_ui *L3, gmp_ui *L4, gmp_ui *b, int *c, int k, FILE *F1, int b1, char *t) {
int i = k-1, j, l = 0;
gmp_ui d[400], e[400];

while(1) {
	j = k - CBPOZI(L4, L3[i], 0, k) - 1;
	e[j] = c[i];
	d[j] = b[i];
	l++;
	if(!i--)
		break;
	}
	
sprintf(t, "PUTERIVV%d.TXT", b1);
F1 = fopen(t, "w");
for(i = 0; i < l; i++) {
	b[i] = d[i];
	fprintf(F1, "%llu la puterea %llu este: %llu.\n", b[i], e[i], L4[l-i-1]);
	}
fclose(F1);
}


void TOLVECUN(int J, mpz_t *a, int b1, int B, int G, int &W, gmp_ui *b, mpz_t *C, int *c, int &D, int &E, int &L, const char *Z) {
int i, j;
mpz_t u, K[618], K3[500], K4[500];
FILE *F1;
gmp_ui I[U1];
char t[20];

mpz_init(u);
for(i = 0; i < 618; i++)
	mpz_init(K[i]);

for(i = 0; i < 500; i++)
	mpz_inits(K3[i], K4[i], NULL);

F1 = fopen(Z, "r");

for(i = 0; i < W; i++)
	i < L?
		fscanf(F1, "%llu", &I[i]) : gmp_fscanf(F1, "%Zd", K[i-L]);
fclose(F1);

i = 0;
D = 0;
E = 0;

while(1) {
	j = B;
	while(1) {
		if(mpz_divisible_ui_p(a[j], I[i])) {
			b[D++] = I[i];
			break;
			}
			
		if(!(j-- ^ G))
			break;
		}
		
	if(!(++i ^ L))
		break;	
	}
i = 0;
L = W - L;

while(1) {
	j = B;
	while(1) {
		if(mpz_divisible_p(a[j], K[i])) {
			mpz_set(C[E++], K[i]);
			break;
			}
			
		if(!(j-- ^ G))
			break;		
		}
		
	if(!(++i ^ L))
		break;	
	}

for(i = 0; i < 618; i++)
	mpz_clear(K[i]);

if(J)
	{
	//for(i = 0; i < D; i++)
		//I[i] = b[i] * b[i];

	W = MAXPV(B, G, b1, D, b, c, u, a, K3, K4, t);
	/*
	TOL2(W, D-W, B, G, b, a, c);
	if(E > 0)
		TOL3(E, B, G, C, a);

	*/
	sprintf(t, "CFVV%d.TXT", b1);
	F1 = fopen(t, "w");
	for(i = 0; i < D; i++)
		fprintf(F1, "%llu\n", b[i]);
	for(i = 0; i < E; i++)
		gmp_fprintf(F1, "%Zd\n", C[i]);
	fclose(F1);	
	}

mpz_clear(u);
}


//VECUN:
void BAZ(int &l, long W, long f, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t *A1, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b2, int D, int E, int Y, int m, int S, FILE *F1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t *sumdoi, mpz_t *a, int I, int *c, int U, int N) {

mpz_t trei, patru;
const int M = 288;
double H, J1, g;
FILE *ff, *f1, *G;
int B[M], K[23900], C2, HH1, H2, J, i, R, r, dd;
gmp_ui j, M1[HTOT];
printf("RAZ MEKONEN\n");
mpz_inits(trei, patru, NULL);
SIB(a, I, N, unu);
dd = 0;
R = 0;
d = 0;
printf("RAZ MAKONEN %d %d %d %d\n", D, E, Y, m);
for(i = I; i < N; i++) {
	r = mpz_scan1(a[i], 0);
	SUMIMENS(a[i], doi, C, C1, b, b2, D, E, Y, m, S, r, div1, sum1, div, sum, mem, patru, sumdoi[r]);
	VALIDV(a[i], unu, doi, trei, R);
	K[dd++] = R;
	}

mpz_clears(unu, doi, trei, patru, NULL);
ff = fopen("BAZSUS.TXT", "w");
G = fopen("N2.TXT", "w");
f1 = fopen("/ABUND.TXT", "r");

for(i = 0; i < M; ++i) {
	fscanf(f1, "%d", &B[i]);
	printf("%.6Lf ", (long double)B[i] / 2520.0);
	}

putchar('\n');
fclose(f1);
H = pow((double)2, -40);
C2 = 0;
HH1 = N - I; printf("%d %d %d\n", HH1, N, I);
putchar('\n');
long NEG[200], neg;

while(1) {
	J = B[C2];
	i = 0;
	dd = 0;
	H2 = I;

	while(1) {
		if (J == K[dd]) {
			++i;
			gmp_fprintf(G, "%Zd\n", a[H2]);

			if(i==1) {
				J1 = J/2520.0;
				//printf("%.3lf %d ", J1, C1);
				fprintf(ff, "%s", "Abundenţa ");
				g = modf(2*J1, &g);
				if((g<H)||(1-g<H))
					fprintf(ff, "%.1lf:  ", J1);

				else
				{
				g = modf(4*J1, &g);
				if((g<H)||(1-g<H))
					fprintf(ff, "%.2lf:  ", J1);

				else
				{
				g = modf(8*J1, &g);			
				if((g<H)||(1-g<H))
					fprintf(ff, "%.3lf: ", J1);

				else
				{				
				g = modf(9*J1, &g);			
				if((g<H)||(1-g<H))
				{

				fprintf(ff, "%d.", (int)J1);		
				J1 -= (int)J1;
				J1 = (int)(J1*10);
				fprintf(ff, "(%.0lf): ", J1);
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
				fprintf(ff, "%.0lf/7: ", 7*(J1-(int)J1 ));
				if(J1<1)
					fputs(" ", ff);
				}

				else
				{		
				g = modf(10*J1, &g);
				if((g<H)||(1-g<H))
					fprintf(ff, "%.1lf:  ", J1);
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
	else if(J % 1260) {
		NEG[neg++] = J;
		}
	
	if ( !(++C2 ^ M) )
		break;
	}

fclose(ff);
fclose(G);

if(neg) {
	printf("\nAu rămas de negăsit următoarele %d %sabundențe:\n", neg, PREP(neg));
	gmp_ui neg1;
	
	for(i = 0; i < neg; i++) {
		neg1 = 2520 / CMMDC(NEG[i], 2520, NEG[i] % 2520);
		printf(neg1 == 1? "%.0lf " : (neg1 == 2 || neg1 == 5 || neg1 == 10) ? "%.1lf " : neg1 == 4? "%.2lf " : neg1 == 7? "%.6lf " : "%.3lf ", NEG[i] / 2520.0);
		}
		
	putchar('\n');
	}
}


void VECUN1(int &e, int &l, long W, long f, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t *A1, mpz_t *a, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b2, int D, int E, int Y, int m, int S, FILE *F1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t p, mpz_t *q, int g, char *Q) {
	while(l ^ e) {
			f = W;			
			while(1) {
				if(!f)
					break;
				mpz_mul(d1, a[l], A1[--f]);
				//mpz_tdiv_q_2exp(p, d1, g = mpz_scan1(d1, 0));
				//SUMDIVV(p, doi, C, C1, b, b2, D, E, Y, m, S, g, div1, sum1, div, sum, mem, q[g]);
				g = mpz_scan1(d1, 0);
				SUMADIV(d1, doi, C, C1, b, b2, D, E, Y, m, S, g, div1, sum1, div, sum, mem, q[g]);
				if(VALID(d1, unu, doi) == 1)
					SCRIE(d1, Q, F1);
				}
			l--;
			}
}


void VECUN2(int &e, int &l, long W, long f, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t *A1, mpz_t *a, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b2, int D, int E, int Y, int S, FILE *F1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t p, mpz_t *q, int g, char *Q) {
	while(l ^ e) {
			f = W;
			while(1) {
				if(!f)
					break;
				mpz_mul(d1, a[l], A1[--f]);
				//mpz_tdiv_q_2exp(p, d1, g = mpz_scan1(d1, 0));
				//SUMDIVV(p, doi, C, C1, b, b2, D, E, Y, m, S, g, div1, sum1, div, sum, mem, q[g]);
				g = mpz_scan1(d1, 0);
				SUMA5(d1, doi, C, C1, b, b2, D, E, Y, S, g, div1, sum1, mem, q[g], 0);
				if(VALID(d1, unu, doi) == 1)
					SCRIE(d1, Q, F1);
				}
			l--;
			}
}


void VECUN3(int &e, int &l, long W, long f, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t *A1, mpz_t *a, gmp_ui *b, gmp_ui *b2, int D, int Y, FILE *F1, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t p, mpz_t *q, int g, char *Q) {
	while(l ^ e) {
		f = W;
		while(1) {
			if(!f)
				break;
			mpz_mul(d1, a[l], A1[--f]);
			//mpz_tdiv_q_2exp(p, d1, g = mpz_scan1(d1, 0));
			//NUMSUMV1(p, doi, b, b2, D, Y, g, div1, sum1, q[g], 0);
			g = mpz_scan1(d1, 0);
			SUMA3(d1, doi, b, b2, D, Y, g, div1, sum1, q[g]);
			if(VALID(d1, unu, doi) == 1)
				SCRIE(d1, Q, F1);
			}
		l--;
		}
}


void VECUN4(long W, long V, long f, int &i, int &l, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t *a, mpz_t *A1, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, int *f2, int D, int E, int &H, int &m, int S, int S1, int n, int &s, int Y, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F1, mpz_t p, mpz_t *q, int g, char *Q) {//S=m+S.
	for(; l > H; l--) {
		f = V;		
		LOTVECM(a[l], b, b2, C, C1, y, y1, z, z3, D, E, W, m, S, Y = 0, i = W, s, n = 0, S1 = 0, f2);

		while(1) {
			if(!f--)
				break;
			if(mpz_divisible_p(a[l], A1[f])) {
				mpz_divexact(d1, a[l], A1[f]);
				//mpz_tdiv_q_2exp(p, d1, g = mpz_scan1(d1, 0));
				//SUMADIV22(p, doi, z, z3, y, y1, Y, s, i, n, S1, g, div1, sum1, div, sum, mem, f2, q[g], 0);
				g = mpz_scan1(d1, 0);
				SUMADIV2(d1, doi, z, z3, y, y1, Y, i, s, n, S1, g, div1, sum1, div, sum, mem, f2, q[g], 0);
				if(VALID(d1, unu, doi) == 1)
					SCRIE(d1, Q, F1);
				}
			}
		}
}


void VECUN5(int &W, long V, long f, int &i, int &l, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t *a, mpz_t *A1, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, int *f2, int D, int E, int &H, int S, int S1, int &s, int Y, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F1, mpz_t p, mpz_t *q, int g, char *Q) {
	for(; l > H; l--) {
		f = V;
		LOTVEC(a[l], b, b2, C, C1, y, y1, z, z3, D, E, W, S, Y = 0, i = W, s, S1 = 0, f2);//b, b2, y, y1, C, C1, z, z3.

		while(1) {
			if(!f--)
				break;
			if(mpz_divisible_p(a[l], A1[f])) {
				mpz_divexact(d1, a[l], A1[f]);				
				//mpz_tdiv_q_2exp(p, d1, g = mpz_scan1(d1, 0));
				//NUMSUM2(p, doi, y, y1, Y, i, g, div1, sum1, f2, q[g]);
				g = mpz_scan1(d1, 0);
				VSUMA5(d1, doi, z, z3, y, y1, Y, i, s, g, S1, div1, sum1, mem, f2, q[g], 0, 0);
				if(VALID(d1, unu, doi) == 1)
					SCRIE(d1, Q, F1);
				}
			}
		}
}


void VECUN6(int &W, long V, long f, int &i, int &l, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t *a, mpz_t *A1, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, int *f2, int D, int &H, int &s, int Y, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F1, mpz_t p, mpz_t *q, int g, char *Q) {
	for(; l > H; l--) {
		f = V;
		LOTVEC1(a[l], b, b2, y, y1, D, W, Y = 0, i = W, s, f2);
		
		while(1) {
			if(!f--)
				break;
			if(mpz_divisible_p(a[l], A1[f])) {
				mpz_divexact(d1, a[l], A1[f]);				
				g = mpz_scan1(d1, 0);				
				VSUMA3(d1, doi, y, y1, Y, i, g, div1, sum1, f2, q[g]);
				if(VALID(d1, unu, doi) == 1)
					SCRIE(d1, Q, F1);
				}
			}
		}
}

#define LIMMIN 70
#define LIMMAX 700


void VECGENVEC() {
char Y[100];
system("rm /D.TXT && rm /E.TXT && rm /H.TXT && rm /K.TXT && rm /S.TXT");

for(int i = LIMMIN; i < LIMMAX; i < 300? i+= 10 : i += 200) {
	sprintf(Y, "/vecun 0 %d 1 b", i);
	system(Y);
	sprintf(Y, "/scr /PUTERIVV%d.TXT /PUTERIV%d.TXT w && /scr /CFVV%d.TXT /CFV%d.TXT w", i, i, i, i);
	system(Y);
	}

system("rm /PUTERIVV* && rm /CFVV* && rm /VPVV*");
}


void PREPFIS2(const char *T, int V) {
	FILE *F = fopen(T, "a");
	fprintf(F, "%d\n", V);
	fclose(F);
}


void VECUN(int dir, int V, int f, int W, int L, int i, int l, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t I, mpz_t *a, mpz_t *A1, int b1, int e, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, int *c, int *f2, int D, int E, int H, int m, int S, int n, int s, int Y, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F1, FILE *f1, char *t, mpz_t p, mpz_t *q, char *Q) {
if(dir) {
        if(b1 == 0) {VECGENVEC(); exit(0);}
	W = N1910, L = D1910;
	TOLVECUN(1, a, b1, e-1, 0, W, b, C, c, D, E, L, "/P2.TXT");
	m = PUTEREA2(b1, t, S);
	if(dir == 2) {
		PREPFIS2("/D.TXT", D);
		PREPFIS2("/E.TXT", E);
		PREPFIS2("/H.TXT", W);
		PREPFIS2("/K.TXT", m);
		PREPFIS2("/S.TXT", S);
		exit(0);
	}
	
	
	n = m;
	s = e;
	INV(b, C, W, D, E);
	UNIVEC(b1, b, b2, C, C1, D, E, W, m, S, div, sum, div1, sum1, mem, q, 1);	
	Y = W;
	l = s - 1;
	e = l;
	if(b1 == 1910) {
		BAZ(l, D+E, f, d, d1, unu, doi, A1, C, C1, b, b2, D, E, Y, m, S, F1, div1, sum1, div, sum, mem, q, a, 6261, c, W, e+1);
		exit(0);
		}

	printf("%d\n", W = VC1(a, A1, d, doi, l, 0, 1, 144000, 32));

	while(1) {
		e -= 800;
		printf("%d\n", l);
		n? VECUN1(e, l, W, f, d1, unu, doi, A1, a, C, C1, b, b2, D, E, Y, m, S, F1, div1, sum1, div, sum, mem, p, q, 0, Q)
			: S? VECUN2(e, l, W, f, d1, unu, doi, A1, a, C, C1, b, b2, D, E, Y, S, F1, div1, sum1, mem, p, q, 0, Q) 
				: VECUN3(e, l, W, f, d1, unu, doi, A1, a, b, b2, D, Y, F1, div1, sum1, p, q, 0, Q);
		if(e < 1800)
			break;
		}

	fclose(F1);
	} else {
		l = e - 1;
		H = l;
		printf("%d\n", V = VC1(a, A1, d, doi, l, 0, 1, 400000, 42));

		while(H > 1800) {
			if(l > 10000)
				H = 10000;
			else
				H -= 1000;
			W = N1910;
			L = D1910;
			TOLVECUN(1, a, b1, l, H, W, b, C, c, D, E, L, "/P2.TXT");
			m = PUTEREA2(b1, t, S);
			L = D1 + E1;
			UNIVEC(b1, b, b2, C, C1, D, E, W, m, S, div, sum, div1, sum1, mem, q, 0);
			m? VECUN4(W, V, f, i, l, d1, unu, doi, a, A1, b, b2, y, y1, C, C1, z, z3, f2, D, E, H, m, m+S, 0, n, s, Y, div, sum, div1, sum1, mem, F1, p, q, 0, Q)
				: S? VECUN5(W, V, f, i, l, d1, unu, doi, a, A1, b, b2, y, y1, C, C1, z, z3, f2, D, E, H, S, 0, s, Y, div1, sum1, mem, F1, p, q, 0, Q) 
					: VECUN6(W, V, f, i, l, d1, unu, doi, a, A1, b, b2, y, y1, f2, D, H, s, Y, div1, sum1, F1, p, q, 0, Q);
		}
	}
}


void VECUN7(long W, long V, long f, int &i, int &l, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t *a, gmp_ui *A1, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, int *f2, int D, int E, int &H, int &m, int S, int S1, int n, int &s, int Y, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F1, mpz_t p, mpz_t *q, int g, char *Q) {//S=m+S.
	for(; l > H; l--) {
		f = V;		
		LOTVECM(a[l], b, b2, C, C1, y, y1, z, z3, D, E, W, m, S, Y = 0, i = W, s, n = 0, S1 = 0, f2);

		while(1) {
			if(!f--)
				break;
			mpz_mul_ui(d1, a[l], A1[f]);
			//mpz_tdiv_q_2exp(p, d1, g = mpz_scan1(d1, 0));
			//SUMADIV22(p, doi, z, z3, y, y1, Y, s, i, n, S1, g, div1, sum1, div, sum, mem, f2, q[g], 0);
			g = mpz_scan1(d1, 0);
			SUMADIV2(d1, doi, z, z3, y, y1, Y, i, s, n, S1, g, div1, sum1, div, sum, mem, f2, q[g], 0);
			if(1 > mpz_cmp(doi, d1)) ADAUGPRIM(doi, a[l], div1, sum1, y, bex, bex2, b1ex2, f2, fex, A1[f], Y, s, W, D-W, 1, 0, 0, 0, 0);
			if(VALID(d1, unu, doi) == 1)
				SCRIE(d1, Q, F1);
			}			
		}
}


void VECUN8(int &W, long V, long f, int &i, int &l, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t *a, gmp_ui *A1, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, int *f2, int D, int E, int &H, int S, int S1, int &s, int Y, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F1, mpz_t p, mpz_t *q, int g, char *Q) {
	for(; l > H; l--) {
		f = V;
		LOTVEC(a[l], b, b2, C, C1, y, y1, z, z3, D, E, W, S, Y = 0, i = W, s, S1 = 0, f2);//b, b2, y, y1, C, C1, z, z3.

		while(1) {
			if(!f--)
				break;
			mpz_mul_ui(d1, a[l], A1[f]);			
				//mpz_tdiv_q_2exp(p, d1, g = mpz_scan1(d1, 0));
				//NUMSUM2(p, doi, y, y1, Y, i, g, div1, sum1, f2, q[g]);
				g = mpz_scan1(d1, 0);
				VSUMA5(d1, doi, z, z3, y, y1, Y, i, s, g, S1, div1, sum1, mem, f2, q[g], 0, 0);
				if(1 > mpz_cmp(doi, d1)) ADAUGPRIM(doi, a[l], div1, sum1, y, bex, bex2, b1ex2, f2, fex, A1[f], Y, s, W, D-W, 1, 0, 0, 0, 0);
				if(VALID(d1, unu, doi) == 1)
					SCRIE(d1, Q, F1);
				}			
		}
}


void VECUN9(int &W, long V, long f, int &i, int &l, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t *a, gmp_ui *A1, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, int *f2, int D, int &H, int &s, int Y, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F1, mpz_t p, mpz_t *q, int g, char *Q) {
	for(; l > H; l--) {
		f = V;
		LOTVEC1(a[l], b, b2, y, y1, D, W, Y = 0, i = W, s, f2);
		
		while(1) {
			if(!f--)
				break;
			mpz_mul_ui(d1, a[l], A1[f]);				
			g = mpz_scan1(d1, 0);				
			VSUMA3(d1, doi, y, y1, Y, i, g, div1, sum1, f2, q[g]);
			if(1 > mpz_cmp(doi, d1)) ADAUGPRIM(doi, a[l], div1, sum1, y, bex, bex2, b1ex2, f2, fex, A1[f], Y, s, W, D-W, 1, 0, 0, 0, 0);
			if(VALID(d1, unu, doi) == 1)
				SCRIE(d1, Q, F1);
				}			
		}
}


void VECUN10(long W, long V, long f, int &i, int &l, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t *a, gmp_ui *A1, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, int *f2, int D, int E, int &H, int &m, int S, int S1, int n, int &s, int Y, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F1, mpz_t p, mpz_t *q, int g, char *Q) {//S=m+S.
	for(; l > H; l--) {
		f = V;		
		LOTVECM(a[l], b, b2, C, C1, y, y1, z, z3, D, E, W, m, S, Y = 0, i = W, s, n = 0, S1 = 0, f2);

		while(1) {
			if(!f--)
				break;
			if(mpz_divisible_ui_p(a[l], A1[f])) {
				mpz_divexact_ui(d1, a[l], A1[f]);
				//mpz_tdiv_q_2exp(p, d1, g = mpz_scan1(d1, 0));
				//SUMADIV22(p, doi, z, z3, y, y1, Y, s, i, n, S1, g, div1, sum1, div, sum, mem, f2, q[g], 0);
				g = mpz_scan1(d1, 0);
				SUMADIV2(d1, doi, z, z3, y, y1, Y, i, s, n, S1, g, div1, sum1, div, sum, mem, f2, q[g], 0);
				if(VALID(d1, unu, doi) == 1)
					SCRIE(d1, Q, F1);
				}
			}
		}
}


void VECUN11(long W, long V, long f, int &i, int &l, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t *a, gmp_ui *A1, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, int *f2, int D, int E, int &H, int S, int S1, int &s, int Y, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, FILE *F1, mpz_t p, mpz_t *q, int g, char *Q) {
	for(; l > H; l--) {
		f = V;
		LOTVEC(a[l], b, b2, C, C1, y, y1, z, z3, D, E, W, S, Y = 0, i = W, s, S1 = 0, f2);//b, b2, y, y1, C, C1, z, z3.

		while(1) {
			if(!f--)
				break;
			if(mpz_divisible_ui_p(a[l], A1[f])) {
				mpz_divexact_ui(d1, a[l], A1[f]);			
				//mpz_tdiv_q_2exp(p, d1, g = mpz_scan1(d1, 0));
				//NUMSUM2(p, doi, y, y1, Y, i, g, div1, sum1, f2, q[g]);
				g = mpz_scan1(d1, 0);
				VSUMA5(d1, doi, z, z3, y, y1, Y, i, s, g, S1, div1, sum1, mem, f2, q[g], 0, 0);
				if(VALID(d1, unu, doi) == 1)
					SCRIE(d1, Q, F1);
				}
			}
		}
}


void VECUN12(long W, long V, long f, int &i, int &l, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t *a, gmp_ui *A1, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, int *f2, int D, int &H, int &s, int Y, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], FILE *F1, mpz_t p, mpz_t *q, int g, char *Q) {
	for(; l > H; l--) {
		f = V;
		LOTVEC1(a[l], b, b2, y, y1, D, W, Y = 0, i = W, s, f2);
		
		while(1) {
			if(!f--)
				break;
			if(mpz_divisible_ui_p(a[l], A1[f])) {
				mpz_divexact_ui(d1, a[l], A1[f]);				
				g = mpz_scan1(d1, 0);				
				VSUMA3(d1, doi, y, y1, Y, i, g, div1, sum1, f2, q[g]);
				if(VALID(d1, unu, doi) == 1)
					SCRIE(d1, Q, F1);
				}
			}
		}
}


void VECUN0(int dir, int V, int f, int W, int L, int i, int l, mpz_t d, mpz_t d1, mpz_t unu, mpz_t doi, mpz_t I, mpz_t *a, gmp_ui *A1, int b1, int e, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, int *c, int *f2, int D, int E, int H, int m, int S, int n, int s, int Y, mpz_t div[][MAX1], mpz_t sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, FILE *F1, FILE *f1, char *t, mpz_t p, mpz_t *q, char *Q) {
if(dir) {
	W = N1910, L = D1910;
	TOLVECUN(1, a, b1, e-1, 0, W, b, C, c, D, E, L, "/CFV1910.TXT");
	m = PUTEREA2(b1, t, S), n = m, s = e;
	UNIVEC(b1, b, b2, C, C1, D, E, W, m, S, div, sum, div1, sum1, mem, q, 0);
	PREPVEC(div1, b, bex, bex2, b1ex2, fex, D, W, 0);
	l = s - 1;
	e = l;
	printf("%d\n", V = VC(a, A1, d, l, 0, 1, 42000, (gmp_ui)(0U)-1U));

	while(1) {
		e -= 800;
		printf("%d\n", l);/*
		n? VECUN1(e, l, W, f, d1, unu, doi, A1, a, C, C1, b, b2, D, E, Y, n, S, F1, div1, sum1, div, sum, mem, p, q, 0, Q)
			: S? VECUN2(e, l, W, f, d1, unu, doi, A1, a, C, C1, b, b2, D, E, Y, S, F1, div1, sum1, mem, p, q, 0, Q) 
				: VECUN3(e, l, W, f, d1, unu, doi, A1, a, b, b2, D, Y, F1, div1, sum1, p, q, 0, Q);*/
		
		n? VECUN7(W, V, f, i, l, d1, unu, doi, a, A1, b, b2, y, y1, C, C1, z, z3, f2, D, E, e, n, n+S, 0, m, s, Y, div, sum, div1, sum1, mem, bex, bex2, b1ex2, fex, F1, p, q, 0, Q)
				: S? VECUN8(W, V, f, i, l, d1, unu, doi, a, A1, b, b2, y, y1, C, C1, z, z3, f2, D, E, e, S, 0, s, Y, div1, sum1, mem, bex, bex2, b1ex2, fex, F1, p, q, 0, Q) 
					: VECUN9(W, V, f, i, l, d1, unu, doi, a, A1, b, b2, y, y1, f2, D, e, s, Y, div1, sum1, bex, bex2, b1ex2, fex, F1, p, q, 0, Q);
		if(e < 1800)
			break;
		}

	fclose(F1);
	} else {
		l = e - 1;
		H = l;
		printf("%d\n", V = VC(a, A1, d, l, 0, 1, 42000, (gmp_ui)(0U)-1U));

		while(H > 1800) {
			if(l > 10000)
				H = 10000;
			else
				H -= 1000;
			W = N1910, L = D1910;
			TOLVECUN(1, a, b1, l, H, W, b, C, c, D, E, L, "/CFV1910.TXT");
			m = PUTEREA2(b1, t, S);
			//printf("STOLOJAN\n");
			UNIVEC(b1, b, b2, C, C1, D, E, W, m, S, div, sum, div1, sum1, mem, q, 0);
			m? VECUN10(W, V, f, i, l, d1, unu, doi, a, A1, b, b2, y, y1, C, C1, z, z3, f2, D, E, H, m, m+S, 0, n, s, Y, div, sum, div1, sum1, mem, F1, p, q, 0, Q)
				: S? VECUN11(W, V, f, i, l, d1, unu, doi, a, A1, b, b2, y, y1, C, C1, z, z3, f2, D, E, H, S, 0, s, Y, div1, sum1, mem, F1, p, q, 0, Q) 
					: VECUN12(W, V, f, i, l, d1, unu, doi, a, A1, b, b2, y, y1, f2, D, H, s, Y, div1, sum1, F1, p, q, 0, Q);
		}
	}
}


//VECUNA:
void ABP(mpz_t A, gmp_ui *b, gmp_ui *b2, mpz_t *C, mpz_t e, mpz_t f, double &a2, double &a3, double &a4, double &E2, int &D, int &E, int d1, FILE *F1, gmp_ui div1[][MAX2], mpz_t div[][MAX1], mpz_t p, int *mem, int m) {//Ca un SUMADIV.
register int d, g = mpz_scan1(A, 0);
mpz_tdiv_q_2exp(p, A, g);
mpz_set_ui(f, 1);
a2 = 2 - pow((double)2, -g);
d = d1;
	while(1) {
		if(!m--)
			break;	
		if(!mpz_divisible_ui_p(p, b[--d])) continue;
		if(mpz_divisible_p(p, div[m][g = mem[m] + 1])) {
			for(; mpz_divisible_p(p, div[m][g]); g += 2);
			mpz_mul(f, mpz_divisible_p(p, div[m][--g])? div[m][g] : div[m][--g], f);
			a2 *= (1 + (1 - 1.0L / mpz_get_d(div[m][g])) / b2[d]);
			continue;
		}
		
		for(g--; !mpz_divisible_ui_p(p, div1[m][g]); g -= 2);
		mpz_mul_ui(f, f, mpz_divisible_ui_p(p, div1[m][++g])? div1[m][g] : div1[m][--g]);
		a2 *= (1 + (1 - 1.0L / div1[m][g]) / b2[d]);
		}

	while(1) {
		if(!d--)
			break;		
		if(!mpz_divisible_ui_p(p, b[d])) continue;
		for(g = 2; mpz_divisible_ui_p(p, div1[d][g]); g += 2);
		mpz_mul_ui(f, f, mpz_divisible_ui_p(p, div1[d][--g])? div1[d][g] : div1[d][--g]);
		a2 *= (1 + (1 - 1.0L / div1[d][g]) / b2[d]);
		if(!mpz_cmp(f, p))
			goto s1;
		}
d = D;
	while(1) {
		if(!(d-- ^ d1))
			break;		
		if(mpz_divisible_ui_p(p, b[d])) {
			mpz_mul_ui(f, f, b[d]);
			a2 *= (1 + 1.0L / b[d]);
			if(!mpz_cmp(f, p))
				goto s1;
			}
		}
d = E;
	while(1) {
		if(!d--)
			break;
		if(mpz_divisible_p(A, C[d])) {
			mpz_mul(f, C[d], f);			
			a2 *= (1 + 1.0L / mpz_get_d(C[d]) );
			if(!mpz_cmp(f, p))
				goto s1;
			}
		}
s1:		
if (VALID3(A, a2, a3, a4, E2))
	gmp_fprintf(F1, "%Zd ", A);
}


void ABP1(mpz_t A, gmp_ui *b, gmp_ui *b2, mpz_t *C, mpz_t f, double &a2, double &a3, double &a4, double &E2, int &D, int &E, int d1, FILE *F1, gmp_ui div1[][MAX2], mpz_t p) {//Un soi de SUM.
register int d, g = mpz_scan1(A, 0);
mpz_tdiv_q_2exp(p, A, g);
mpz_set_ui(f, 1);
a2 = 2-pow((double)2, -g);
d = d1;
	while(1) {
		if(!d--)
			break;
		if(!mpz_divisible_ui_p(p, b[d])) continue;
		for(g = 2; mpz_divisible_ui_p(p, div1[d][g]); g += 2);
		mpz_mul_ui(f, f, mpz_divisible_ui_p(p, div1[d][--g])? div1[d][g] : div1[d][--g]);
		a2 *= (1 + (1 - 1.0L / div1[d][g]) / b2[d]);
	}
d = D;
	while(1) {
		if(!(d-- ^ d1))
			break;	
		if(mpz_divisible_ui_p(p, b[d])) {
			mpz_mul_ui(f, f, b[d]);
			a2 *= (1 + 1.0 / b[d]);
			if(!mpz_cmp(f, p))
				goto s1;
			}
		}
d = E;
	while(1) {
		if(!d--)
			break;
		if(mpz_divisible_p(p, C[d])) {
			mpz_mul(f, C[d], f);			
			a2 *= (1 + 1.0L / mpz_get_d(C[d]));
			if(!mpz_cmp(f, p))
				goto s1;
			}
		}
s1:		
if (VALID3(A, a2, a3, a4, E2))
	gmp_fprintf(F1, "%Zd ", A);
}


void ABP2(mpz_t A, gmp_ui *b, gmp_ui *b2, mpz_t *C, mpz_t e, mpz_t f, gmp_ui &s, double &a2, double &a3, double &a4, double &E2, int &D, int &E, int d1, FILE *F1, gmp_ui div1[][MAX2], mpz_t div[][MAX1], mpz_t p, int *mem, int m, int *f2) {
register int d, g = mpz_scan1(A, 0);
mpz_tdiv_q_2exp(p, A, g);
mpz_set_ui(f, 1);
a2 = 2 - pow((double)2, -g);
d = d1;
	while(1) {
		if(!m--)
			break;
		if(!mpz_divisible_ui_p(p, b[--d])) continue;		
		s = f2[d], g = mem[s];
		if(mpz_divisible_p(p, div[s][++g])) {
			for(; mpz_divisible_p(p, div[s][g]); g += 2);
			mpz_mul(f, mpz_divisible_p(p, div[s][--g])? div[s][g] : div[s][--g], f);
			a2 *= (1 + (1 - 1.0L / mpz_get_d(div[s][g])) / b2[d]);
			continue;
		}
		
		for(g--; !mpz_divisible_ui_p(p, div1[s][g]); g -= 2);
		mpz_mul_ui(f, f, mpz_divisible_ui_p(p, div1[s][++g])? div1[s][g] : div1[s][--g]);
		a2 *= (1 + (1 - 1.0L / div1[s][g]) / b2[d]);
		}

	while(1) {
		if(!d--)
			break;
		if(!mpz_divisible_ui_p(p, b[d])) continue;
		for(g = 2, s = f2[d]; mpz_divisible_ui_p(p, div1[s][g]); g += 2);
		if(!mpz_divisible_ui_p(p, div1[s][--g])) g--;
		mpz_mul_ui(f, f, div1[s][g]);
		a2 *= (1 + (1 - 1.0L / div1[s][g]) / b2[d]);			
		}
if(!mpz_cmp(f, p))
	goto s1;
d = D;
	while(1) {
		if(!(d-- ^ d1))
			break;		
		if(mpz_divisible_ui_p(p, b[d])) {
			mpz_mul_ui(f, f, b[d]);
			a2 *= (1 + 1.0L / b[d]);
			if(!mpz_cmp(f, p))
				goto s1;
			}
		}
d = E;
	while(1) {
		if(!d--)
			break;
		if(mpz_divisible_p(p, C[d])) {
			mpz_mul(f, C[d], f);			
			a2 *= (1 + 1.0L / mpz_get_d(C[d]));
			if(!mpz_cmp(f, p))
				goto s1;
			}
		}
s1:
if (VALID3(A, a2, a3, a4, E2))
	gmp_fprintf(F1, "%Zd ", A);
}


void ABP3(mpz_t A, gmp_ui *b, gmp_ui *b2, mpz_t *C, gmp_ui &s, mpz_t f, double &a2, double &a3, double &a4, double &E2, int &D, int &E, int d1, FILE *F1, gmp_ui div1[][MAX2], mpz_t p, int *f2) {
register int d, g = mpz_scan1(A, 0);
mpz_tdiv_q_2exp(p, A, g);
mpz_set_ui(f, 1);
a2 = 2-pow((double)2, -g);
d = d1;
	while(1) {
		if(!d--)
			break;
		if(!mpz_divisible_ui_p(p, b[d])) continue;		
		for(s = f2[d], g = 2; mpz_divisible_ui_p(p, div1[s][g]); g += 2);
		mpz_mul_ui(f, f, mpz_divisible_ui_p(p, div1[s][--g])? div1[s][g] : div1[s][--g]);
		a2 *= (1 + (1 - 1.0L / div1[s][g]) / b2[d]);
	}
d = D;
	while(1) {
		if(!(d-- ^ d1))
			break;	
		if(mpz_divisible_ui_p(p, b[d])) {
			mpz_mul_ui(f, f, b[d]);
			a2 *= (1 + 1.0 / b[d]);
			if(!mpz_cmp(f, p))
				goto s1;
			}
		}
d = E;
	while(1) {
		if(!d--)
			break;
		if(mpz_divisible_p(p, C[d])) {
			mpz_mul(f, C[d], f);			
			a2 *= (1 + 1.0L / mpz_get_d(C[d]));
			if(!mpz_cmp(f, p))
				goto s1;
			}
		}
s1:		
if (VALID3(A, a2, a3, a4, E2))
	gmp_fprintf(F1, "%Zd ", A);
}


void VECUNA1(int D, int E, int H, int Y, int R, int b1, int e, int f, int l, int m, mpz_t *a, mpz_t *A1, gmp_ui *b, gmp_ui *b2, mpz_t *C, mpz_t unu, mpz_t doi, mpz_t d1, double a2, double a3, double a4, double E2, mpz_t div[][MAX1], gmp_ui div1[][MAX2], mpz_t p, int *mem, FILE *F1, int jos, int cant) {
while(1) {
	e -= 1000;
	printf("%d\n", l);
	if(e < jos)
		break;

	for(; l > e; l--) {
		f = cant;		

		while(1) {
			if(!f)
				break;
			mpz_mul(d1, a[l], A1[--f]);
			ABP(d1, b, b2, C, unu, doi, a2, a3, a4, E2, D, E, Y, F1, div1, div, p, mem, m);					
			}
		}
	}
}


void VECUNA2(int D, int E, int H, int Y, int R, int b1, int e, int f, int l, mpz_t *a, mpz_t *A1, gmp_ui *b, gmp_ui *b2, mpz_t *C, mpz_t unu, mpz_t doi, mpz_t d1, double a2, double a3, double a4, double E2, gmp_ui div1[][MAX2], mpz_t p, int *mem, FILE *F1, int jos, int cant) {
while(1) {
	e -= 1000;
	printf("%d\n", l);
	if(e < jos)
		break;

	for(; l > e; l--) {
		f = cant;		

		while(1) {
			if(!f)
				break;
			mpz_mul(d1, a[l], A1[--f]);					
			ABP1(d1, b, b2, C, doi, a2, a3, a4, E2, D, E, Y, F1, div1, p);
			}
		}
	}
}


void VECUNA3(int L, int U, int W, int D, int E, int H, int Y, int S, int S1, int R, int b1, int e, int f, int i, int l, int m, int n, int *c, int *f2, mpz_t *a, mpz_t *A1, gmp_ui s, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, mpz_t unu, mpz_t doi, mpz_t d1, double a2, double a3, double a4, double E2, mpz_t div[][MAX1], gmp_ui div1[][MAX2], mpz_t p, int *mem, FILE *F1, int cant) {
while(H) {
	l > 8000? H = 8000 : H -= 2000;
	W = N1910;
	L = U;
	TOLVECUN(0, a, b1, l, H, W, b, C, c, D, E, L, "/P2.TXT");
	m = PUTEREA1();
	UNIVEC2(b, C, C1, W, D, E, m, div, div1, mem, 0);
	printf("%d %d\n", l, D+E);

	for(;l > H; --l) {
		f = cant;
		//LOTVECM(a[l], y, z, Y = 0, b, C, b2, C1, y1, z3, D, E, W, i, R, S, S1 = 0, m = 0, n = W, f2);
		LOTVECM(a[l], b, b2, C, C1, y, y1, z, z3, D, E, W, m, S, Y = 0, i = W, R, n = 0, S1 = 0, f2);
		
		while(1) {
			if(!f--)
				break;
			if(mpz_divisible_p(a[l], A1[f])) {
				mpz_divexact(d1, a[l], A1[f]);
				ABP2(d1, y, y1, z, unu, doi, s, a2, a3, a4, E2, Y, R, i, F1, div1, div, p, mem, n, f2);
				}
			}		
		}
	}
}


void VECUNA4(int L, int U, int W, int D, int E, int H, int Y, int R, int b1, int e, int f, int i, int l, int m, int *c, int *f2, mpz_t *a, mpz_t *A1, gmp_ui s, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, mpz_t unu, mpz_t doi, mpz_t d1, double a2, double a3, double a4, double E2, mpz_t div[][MAX1], gmp_ui div1[][MAX2], mpz_t p, int *mem, FILE *F1, int cant) {
while(H) {
	l > 8000? H = 8000 : H -= 2000;
	W = N1910;
	L = U;
	TOLVECUN(0, a, b1, l, H, W, b, C, c, D, E, L, "/P2.TXT");
	m = PUTEREA1();	
	UNIVEC2(b, C, C1, W, D, E, m, div, div1, mem, 0);
	printf("%d %d\n", l, D+E);

	for(;l > H; --l) {
		f = cant;
		//LOTVEC(a[l], y, z, Y = 0, b, C, b2, C1, y1, z3, D, E, W, i, R = W, f2);
		//LOTVEC(a[l], b, b2, C, C1, y, y1, z, z3, D, E, W, 0, Y = 0, i = W, R, L, f2);//S cu S1.
		
		while(1) {
			if(!f--)
				break;
			if(mpz_divisible_p(a[l], A1[f])) {
				mpz_divexact(d1, a[l], A1[f]);
				ABP3(d1, y, y1, z, s, doi, a2, a3, a4, E2, Y, R, i, F1, div1, p, f2);
				}
			}		
		}
	}
}


void VECUNA(int L, int U, int W, int D, int E, int H, int N, int Y, int R, int b1, int e, int f, int i, int l, int m, int n, int *c, int *f2, mpz_t *a, mpz_t *A1, gmp_ui s, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, mpz_t xe, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t I, double a2, double a3, double a4, double E2, mpz_t div[][MAX1], gmp_ui div1[][MAX2], mpz_t p, int *mem, FILE *F1, FILE *f1) {
if(L) {
	W = N1910;
	//GEN(U, W, b, C, D, E, "/P2.TXT");
	L = U;
	TOLVECUN(1, a, b1, N-1, 0, W, b, C, c, D, E, L, "/P2.TXT");
	m = PUTEREA1();//Va fi K.
	Y = m;
	INV(b, C, W, D, E);
	UNIVEC2(b, C, C1, W, D, E, m, div, div1, mem, 1);

	for(i = 0; i < D; i++)
			b2[i] = b[i] - 1;

	printf("Puteri de sus pentru ABP: %d.\n", m);
	//W = VC1(a, A1, N-1, 0, 2000, 12, 0, 1);
	//W = COEFG1(444000, 5, b, C, D, E, 7);
	printf("%d %d %d %d\n", W, D, E, Y);
	FFACT(W, A1, f1, I, 2000);
	l = N-1;
	e = l;
	
	b1 > 100? VECUNA1(D, E, H, Y, R, b1, e, f, l, m, a, A1, b, b2, C, unu, doi, d1, a2, a3, a4, E2, div, div1, p, mem, F1, 5000, 2000) 
		: VECUNA2(D, E, H, Y, R, b1, e, f, l, a, A1, b, b2, C, unu, doi, d1, a2, a3, a4, E2, div1, p, mem, F1, 5000, 2000);
	} else {
	l = N-1;
	H = l;
	for(i = 0; i < 16; i++)
		mpz_init(z[i]);
	//W = VC1(a, A1, N-1, 0, 8000, 25, 0, 1);
	printf("%d\n", W);
	FFACT(W, A1, f1, I, 8000);
	
	b1 > 100? VECUNA3(L, U, W, D, E, H, Y, 0, 0, R, b1, e, f, i, l, m, n, c, f2, a, A1, s, b, b2, y, y1, C, C1, z, z3, unu, doi, d1, a2, a3, a4, E2, div, div1, p, mem, F1, 8000) 
		: VECUNA4(L, U, W, D, E, H, Y, R, b1, e, f, i, l, m, c, f2, a, A1, s, b, b2, y, y1, C, C1, z, z3, unu, doi, d1, a2, a3, a4, E2, div, div1, p, mem, F1, 8000);
	}
}


#endif
