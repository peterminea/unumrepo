#ifndef _TOLVECUN_H
#define _TOLVECUN_H
#include "/GMP64.h"

void TOLULE(mpz_t *K3, mpz_t *K4, gmp_ui *b, int *c, int k, FILE *F1);
void TOLULE1(gmp_ui *L3, gmp_ui *L4, gmp_ui *b, int *c, int k, FILE *F1);

int MAXPV(int A, int B, int b1, int &D, gmp_ui *b, int *c, mpz_t h, mpz_t *a, mpz_t *K3, mpz_t *K4)
{
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
		if(! (++e^D) )
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

FILE *F1 = fopen("VP.TXT", "w");
if(b1 > 160) {
	for(e=0; e<k; e++) {
		fprintf(F1, "%llu\n", b[e]);
		mpz_ui_pow_ui(K4[e], b[e], c[e]);
		mpz_set(K3[e], K4[e]);
		}

	F1.close();
	QS(K4, 0, e, h);
	TOLULE(K3, K4, b, c, k, F1);
	}
else {
	for(e=0; e<k; e++) {
		fprintf(F1, "%llu\n", b[e]);
		PUTERE(L4[e], b[e], c[e]);
		L3[e] = L4[e];
		}
	
	F1.close();
	QS2(L4, 0, e);
	TOLULE1(L3, L4, b, c, k, F1);
	}

return k;
}


void TOLULE(mpz_t *K3, mpz_t *K4, gmp_ui *b, int *c, int k, FILE *F1) {
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
	
F1 = fopen("PUTERI.TXT", "w");
for(i = 0; i < l; i++) {
	b[i] = d[i];
	gmp_fprintf(F1, "%llu la puterea %llu este %Zd.\n", b[i], e[i], K4[l-i-1]);
	}
F1.close();
}


void TOLULE1(gmp_ui *L3, gmp_ui *L4, gmp_ui *b, int *c, int k, FILE *F1) {
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
	
F1 = fopen("PUTERI.TXT", "w");
for(i = 0; i < l; i++) {
	b[i] = d[i];
	fprintf(F1, "%llu la puterea %llu este %llu.\n", b[i], e[i], L4[l-i-1]);
	}
F1.close();
}


void TOLVECUN(int J, mpz_t *a, int b1, int B, int G, int &W, gmp_ui *b, int256 *C, int *c, int &D, int &E, int &L, const char *Z) {
int i, j;
mpz_t u, K[618], K3[500], K4[500];
FILE *F1;
gmp_ui I[U1];

mpz_init(u);
for(i=0; i<618; i++)
	mpz_init(K[i]);

for(i=0; i<500; i++)
	mpz_inits(K3[i], K4[i], NULL);

F1=fopen(Z, "r");

for(i=0; i<W; i++)
	i<L?
		fscanf(F1, "%llu", &I[i]) : gmp_fscanf(F1, "%Zd", K[i-L]);
F1.close();

i=0;
D=0;
E=0;

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
		if(mpz_divisible_p(a[j], K[i]))	{
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

	W = MAXPV(B, G, b1, D, b, c, u, a, K3, K4);
	/*
	TOL2(W, D-W, B, G, b, a, c);
	if(E > 0)
		TOL3(E, B, G, C, a);

	*/
	F1 = fopen("CF.TXT", "w");
	for(i = 0; i < D; i++)
		fprintf(F1, "%llu\n", b[i]);
	for(i = 0; i < E; i++)
		gmp_fprintf(F1, "%Zd\n", C[i]);
	F1.close();
	}

mpz_clear(u);
}


void UNIVEC(mpz_t xe, mpz_t g, int inv, gmp_ui *b, int256 *C, int H, int D, int E, int K, int256 div[][MAX1], int256 sum[][MAX1], gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t unu, mpz_t d, mpz_t trei, gmp_ui lim) {
	char t;
	int sb, d1, i, j, k, ll, PP, ind[360], P[D], P1[D];
	const char PUTERILE[15] = "PUTERI.TXT";
	fstream F1, F2;

	F1.open(PUTERILE, ios::app);
	PP = F1.tellg();
	F1.close();
	F1.open(PUTERILE, ios::in);
	j = 3;
	i = 0;

	while(1) {
		fscanf(F1, "%c", &t);
		if(t == ' ') --j;
		if(!j)	{
			fscanf(F1, "%d", &sb);			
			ind[i++] = sb;
			};

		if(t == '\n')
			j = 3;
			
		if(F1.tellg() == PP)
			break;
	}

	F1.close();
	if(inv) {
	 //INV(b, C, H, D, E);

	 for(i = (H>>1); i; ) {
		int j = ind[--i];
		ind[i] = ind[H-i-1];
		ind[H-i-1] = j;
	 }
	}

	F1.open("/INDPUTVEC.TXT", ios::out);
	F2.open("/INDSUMVEC.TXT", ios::out);

	for(int k = 0; k < K; k++)
	for(int k1 = 0; k1 < MAX1; k1++) {
		mpz_inits(div[k][k1], sum[k][k1], NULL);
		mpz_set_ui(div[k][k1], 1);
		mpz_set_ui(sum[k][k1], 1);
	}

	d1 = inv? H-1 : 0;
	for(i = 0; i < H; i++) {//H descotfactizat.
		mpz_set_ui(xe, 1);
				
		for(j = 0; j < ind[i]; j++) {
			mpz_mul_ui(xe, xe, b[i]);
			mpz_mul_ui(g, xe, b[i]);
			mpz_divexact_ui(g, g, b[i]-1);
			gmp_fprintf(F1, "%Zd ", xe);
			gmp_fprintf(F2, "%Zd ", g);		
			
			if(d1 < K) {
				k = inv? K-d1-1 : d1;
				mpz_set(div[k][j], xe);
				mpz_set(sum[k][j], g);
			} else {
				k = inv? H-d1-1 : d1-K;				
				div1[k][j] = mpz_get_ui(xe);
				sum1[k][j] = mpz_get_ui(g);
			}
		}

		for(; j < ind[i] + 2; j++) {
			if(d1 < K) {
				k = inv? K-d1-1 : d1;
				mpz_set_ui(div[k][j], lim);
				mpz_set_ui(sum[k][j], lim);
			} else {
				k = inv? H-d1-1 : d1-K;
				div1[k][j] = lim;
				sum1[k][j] = lim;
			}
			
			fprintf(F1, "%d ", lim);
			fprintf(F2, "%d ", lim);
		}
			fputc('\n', F1);
			fputc('\n', F2);
			d1 += inv? -1 : +1;
	}

	F1.close();
	F2.close();	

	printf("%d %d %d %d\n", D, K, H, D-H);	
	PUTERI2(PUTERILE, P);

	for(i = 0; i < H; i++) {
		b[i] = i < K? mpz_get_ui(div[i][0]) : div1[i-K][0];
		}
		
	for(i = 0; i < K; i++) {
		P1[i] = inv? P[K-i-1] : P[i];
	}

	for(i = K; i < H; i++) {	
		P1[i] = inv? P[H+K-i-1] : P[i+K];
	}

	for(i = H; i < D; i++)
		P1[i] = P[i];

	putchar('\n');

	for(i = 0; i < K; i++) {
		j = 0;
		while(j < P1[i]) j++;
		
		for(k = j; k >= 1; k--) {
			mpz_set(div[i][k], div[i][k-1]);
			mpz_set(sum[i][k], sum[i][k-1]);
		}
		
		ll = P1[i];
		
		for(k = 1+ll; (k < MAX1-2) ; k++) {
			if(k < 8+ll) {
				mpz_mul(div[i][k], div[i][k-1], div[i][0]);
				mpz_mul(sum[i][k], sum[i][k-1], div[i][0]);
				mpz_add_ui(sum[i][k], sum[i][k], 1);
				++P1[i];
			} else {
				mpz_set_ui(div[i][k], lim);
				mpz_set_ui(sum[i][k], lim);
			}
		}//EXTINDEREA PUTERILOR:
		
		mpz_set_ui(div[i][0], 1);
		mpz_set_ui(sum[i][0], 1);
		mpz_set_ui(div[i][MAX1-2], lim);
		mpz_set_ui(sum[i][MAX1-2], lim);
		mpz_set_ui(div[i][MAX1-1], lim);
		mpz_set_ui(sum[i][MAX1-1], lim);
	}

	mpz_ui_pow_ui(trei, 2, 64);

	for(i = 0; i < H-K; i++) {
		j = 0;
		while(j < P1[i+K]) j++;
			
		for(k = j; k >= 1; k--) {
			div1[i][k] = div1[i][k-1];
			sum1[i][k] = sum1[i][k-1];
		}
		
		ll = P1[i+K];
		j = 1;
		
		for(k = 1+ll; (k < MAX2-2) ; k++) {	
			mpz_set_ui(unu, div1[i][k-1]);
			mpz_mul_ui(unu, unu, div1[i][0]);
			mpz_set_ui(d, sum1[i][k-1]);
			mpz_mul_ui(d, d, div1[i][0]);
			mpz_add_ui(d, d, 1);
			
			if(j && (k < 8+ll) && (mpz_cmp(d, trei) < 0) ) {
				div1[i][k] = mpz_get_ui(unu);
				sum1[i][k] = mpz_get_ui(d);
				++P1[i+K];
			} else {
				j = 0;
				div1[i][k] = lim;
				sum1[i][k] = lim;
			}
		}

		div1[i][0] = 1;
		sum1[i][0] = 1;
		div1[i][MAX2-2] = lim;
		sum1[i][MAX2-2] = lim;
		div1[i][MAX2-1] = lim;
		sum1[i][MAX2-1] = lim;
		}
}


void UNIVEC2(mpz_t xe, int inv, gmp_ui *b, int256 *C, int H, int D, int E, int K, int256 div[][MAX1], gmp_ui div1[][MAX2], mpz_t unu, mpz_t d, mpz_t trei, gmp_ui lim) {
	char t;
	int sb, d1, i, j, k, ll, PP, ind[360], P[D], P1[D];
	const char PUTERILE[15] = "PUTERI.TXT";
	fstream F1;

	F1.open(PUTERILE, ios::app);
	PP = F1.tellg();
	F1.close();
	F1.open(PUTERILE, ios::in);
	j = 3, i = 0;

	while(1) {
		fscanf(F1, "%c", &t);
		if(t == ' ') --j;
		if(!j)	{
			fscanf(F1, "%d", &sb);			
			ind[i++] = sb;
			};

		if(t == '\n')
			j = 3;
			
		if(F1.tellg() == PP)
			break;
	}

	F1.close();
	if(inv) {
	 for(i = (H>>1); i; ) {
		int j = ind[--i];
		ind[i] = ind[H-i-1];
		ind[H-i-1] = j;
	 }
	}

	for(int k = 0; k < K; k++)
	for(int k1 = 0; k1 < MAX1; k1++) {
		div[k][k1] = 1;
	}

	d1 = inv? H-1 : 0;
	for(i = 0; i < H; i++) {//H descotfactizat.
		xe = 1;
				
		for(j = 0; j < ind[i]; j++) {
			xe *= b[i];

			if(d1 < K) {
				k = inv? K-d1-1 : d1;
				div[k][j] = xe;
			} else {
				k = inv? H-d1-1 : d1-K;				
				div1[k][j] = (xe);
			}
		}

		for(; j < ind[i] + 2; j++) {
			if(d1 < K) {
				k = inv? K-d1-1 : d1;
				div[k][j] = lim;
			} else {
				k = inv? H-d1-1 : d1-K;
				div1[k][j] = lim;
			}		
		}
			d1 += inv? -1 : +1;
	}

	printf("%d %d %d %d\n", D, K, H, D-H);	
	PUTERI2(PUTERILE, P);

	for(i = 0; i < H; i++) {
		b[i] = i < K? mpz_get_ui(div[i][0]) : div1[i-K][0];
		}
		
	for(i = 0; i < K; i++) {
		P1[i] = inv? P[K-i-1] : P[i];
	}

	for(i = K; i < H; i++) {	
		P1[i] = inv? P[H+K-i-1] : P[i+K];
	}

	for(i = H; i < D; i++)
		P1[i] = P[i];

	putchar('\n');

	for(i = 0; i < K; i++) {
		j = 0;
		while(j < P1[i]) j++;
		
		for(k = j; k >= 1; k--) {
			mpz_set(div[i][k], div[i][k-1]);
		}
		
		ll = P1[i];
		
		for(k = 1+ll; (k < MAX1-2) ; k++) {
			if(k < 8+ll) {
				mpz_mul(div[i][k], div[i][k-1], div[i][0]);
				++P1[i];
			} else {
				mpz_set_ui(div[i][k], lim);
			}
		}//EXTINDEREA PUTERILOR:
		
		mpz_set_ui(div[i][0], 1);
		mpz_set_ui(div[i][MAX1-2], lim);
		mpz_set_ui(div[i][MAX1-1], lim);
	}

	mpz_ui_pow_ui(trei, 2, 64);

	for(i = 0; i < H-K; i++) {
		j = 0;
		while(j < P1[i+K]) j++;
			
		for(k = j; k >= 1; k--) {
			div1[i][k] = div1[i][k-1];
		}
		
		ll = P1[i+K];
		j = 1;
		
		for(k = 1+ll; (k < MAX2-2) ; k++) {	
			mpz_set_ui(unu, div1[i][k-1]);
			mpz_mul_ui(unu, unu, div1[i][0]);			
			
			if(j && (k < 8+ll) && (mpz_cmp(d, trei) < 0) ) {
				div1[i][k] = mpz_get_ui(unu);
				++P1[i+K];
			} else {
				j = 0;
				div1[i][k] = lim;
			}
		}

		div1[i][0] = 1;
		div1[i][MAX2-2] = lim;
		div1[i][MAX2-1] = lim;
		}
}

/*
void SUMADIV2(mpz_t A, mpz_t B, int256 *C, int256 *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1], int *f2) {
mpz_set_ui(B, 0);
mpz_setbit(B, ++d);
mpz_sub_ui(B, B, 1);
d = H;

while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(A, b[--d])) {
		VERIFSUM(A, B, 2, div[f2[d]], sum[f2[d]]);
		}
	}

while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(A, b[d])) {
		VERIFSUM2(A, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(A, b[D]))	{
		mpz_mul_ui(B, B, b1[D]);
		if(mpz_cmp(B, A) == 1)
			return;
		}
	}

while(1) {
	if(!E--)
		break;
	if(mpz_divisible_p(A, C[E])) {
		mpz_mul(B, B, C1[E]);
		if(mpz_cmp(B, A) == 1)
			return;
		}
	}
}


void SUMADIV3(mpz_t A, mpz_t B, int256 *C, int256 *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1], int *f2) {
mpz_set_ui(B, 0);
mpz_setbit(B, ++d);
mpz_sub_ui(B, B, 1);
d = H;

while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(A, b[--d])) {
		VERIFSUM(A, B, 2, div[f2[d]], sum[f2[d]]);
		}
	}

while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(A, b[d])) {
		VERIFSUM2(A, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(A, b[D]))	{
		mpz_mul_ui(B, B, b1[D]);
		if(mpz_cmp(B, A) == 1)
			return;
		}
	}

while(1) {
	if(!E--)
		break;
	mpz_mul(B, B, C1[E]);	
	}
}


void SUMADIV4(mpz_t A, mpz_t B, int256 *C, int256 *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1], int *f2) {//Necesită PURGANTE.
mpz_set_ui(B, 0);
mpz_setbit(B, ++d);
mpz_sub_ui(B, B, 1);
if( !(d ^ 89) || !(d ^ 107) || !(d ^ 127) ) mpz_mul_2exp(B, B, d);
d = H;

while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(A, b[--d])) {
		VERIFSUM(A, B, 2, div[f2[d]], sum[f2[d]]);
		}
	}

while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(A, b[d])) {
		VERIFSUM2(A, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(A, b[D]))	{
		mpz_mul_ui(B, B, b1[D]);
		if(mpz_cmp(B, A) == 1)
			return;
		}
	}

while(1) {
	if(!E--)
		break;
	if(mpz_divisible_p(A, C[E])) {
		mpz_mul(B, B, C1[E]);
		if(mpz_cmp(B, A) == 1)
			return;
		}
	}
}


void SUMADIV5(mpz_t A, mpz_t B, int256 *C, int256 *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int256 div[][MAX1], int256 sum[][MAX1], int *f2) {
mpz_set_ui(B, 0);
mpz_setbit(B, ++d);
mpz_sub_ui(B, B, 1);
if( !(d ^ 89) || !(d ^ 107) || !(d ^ 127) ) mpz_mul_2exp(B, B, d);
d = H;

while(1) {
	if(!K--)
		break;
	if(!(A % b[--d])) {
		VERIFSUM(A, B, 2, div[f2[d]], sum[f2[d]]);
		}
	}

while(1) {
	if(!d--)
		break;
	if(!(A % b[d])) {
		VERIFSUM2(A, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(!(A % b[D]))	{
		B *= b1[D];
		if(B > A)
			return;
		}
	}

while(1) {
	if(!E--)
		break;
	B *= C1[E];
	}
}
*/

void NUMSUM2(int512 A, int512 B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2) {
mpz_set_ui(B, 0);
mpz_setbit(B, ++d);
mpz_sub_ui(B, B, 1);
if( (d == 89) || (d == 107) || (d == 127) ) {
	B <<= d;
	}

d = H;
while(1) {
	if(!d--)
		break;
	if(!(A % b[d])) {
		VERIFSUM2(A, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(!(A % b[D]))	{
		B *= b1[D];
		if(B > A)
			return;
		}
	}
}


void SM1(int512 A, int512 B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, gmp_ui e) {//e = 2.
mpz_set_ui(B, (e<<d) - 1);
d = H;
	
while(1) {
	if(!d--)
		break;
	if(!(A % b[d])) {
		VERIFSUM2(A, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}

if(B > A)
	return;

while(1) {
	if(!(D-- ^ H))
		break;
	if(!(A % b[D]))	{
		B *= b1[D];
		if(B > A)
			return;
		}
	}
}


void ABP(//Ca un SUMADIV.
mpz_t A, gmp_ui *b, gmp_ui *b2, int256 *C, mpz_t e, mpz_t f, double &a2, double &a3, double &a4, double &E2, int &D, int &E, int d1, FILE *F1, gmp_ui div1[][MAX2], int256 div[][MAX1], int m) {

register int d, g = mpz_scan1(A, 0);
mpz_set_ui(f, 0);
mpz_setbit(f, g);
a2 = 2 - pow((double)2, -g);
d = d1;
	while(1) {
		if(!m--)
			break;	
		if((A % b[--d])) continue;		
		g = 2;		
		while(!(A % div[m][g])) g += 2;
		if ((A % div[m][--g])) g--;
		f *= div[m][g];
		a2 *= (1 + (1 - 1.0L / mpz_get_d(div[m][g])) / b2[d]);
		}

	while(1) {
		if(!d--)
			break;		
		if((A % b[d])) continue;
		g = 2;		
		while(!(A % div1[d][g])) g += 2;
		if((A % div1[d][--g])) g--;
		f *= div1[d][g];
		a2 *= (1 + (1 - 1.0L / div1[d][g]) / b2[d]);			
		}
d = D;
	while(1) {
		if(!(d-- ^ d1))
			break;		
		if(!(A % b[d])) {
			f *= b[d];
			a2 *= (1 + 1.0L / b[d]);
			if(f == A)
				goto s1;
			}
		}
d = E;
	while(1) {
		if(!d--)
			break;
		if(!(A % C[d])) {
			f *= C[d];		
			a2 *= (1 + 1.0L / mpz_get_d(C[d]) );
			if(f == A)
				goto s1;
			}
		}
s1:		
if (VALID3(A, a2, a3, a4, E2))
	gmp_fprintf(F1, "%Zd ", A);
}


void ABP1(//Un soi de SUM.
mpz_t A, gmp_ui *b, gmp_ui *b2, int256 *C, mpz_t f, double &a2, double &a3, double &a4, double &E2, int &D, int &E, int d1, FILE *F1, gmp_ui div1[][MAX2]) {

register int d, g = mpz_scan1(A, 0);
mpz_set_ui(f, 0);
mpz_setbit(f, g);
a2 = 2-pow((double)2, -g);
d = d1;
	while(1) {
		if(!d--)
			break;
		if(!mpz_divisible_ui_p(A, b[d])) continue;
		g = 2;		
		while(mpz_divisible_ui_p(A, div1[d][g])) g += 2;
		if(!mpz_divisible_ui_p(A, div1[d][--g])) g--;
		mpz_mul_ui(f, f, div1[d][g]);
		a2 *= (1 + (1 - 1.0L / div1[d][g]) / b2[d]);
	}
d = D;
	while(1) {
		if(!(d-- ^ d1))
			break;	
		if(mpz_divisible_ui_p(A, b[d])) {
			mpz_mul_ui(f, f, b[d]);
			a2 *= (1 + 1.0 / b[d]);
			if(!mpz_cmp(f, A))
				goto s1;
			}
		}
d = E;
	while(1) {
		if(!d--)
			break;
		if(mpz_divisible_p(A, C[d])) {
			mpz_mul(f, C[d], f);			
			a2 *= (1 + 1.0L / mpz_get_d(C[d]));
			if(!mpz_cmp(f, A))
				goto s1;
			}
		}
s1:		
if (VALID3(A, a2, a3, a4, E2))
	gmp_fprintf(F1, "%Zd ", A);
}


void ABP2(
mpz_t A, gmp_ui *b, gmp_ui *b2, int256 *C, mpz_t e, mpz_t f, gmp_ui &s, double &a2, double &a3, double &a4, double &E2, int &D, int &E, int d1, FILE *F1, gmp_ui div1[][MAX2], int256 div[][MAX1], int m, int *f2) {

register int d, g = mpz_scan1(A, 0);
mpz_set_ui(f, 0);
mpz_setbit(f, g);
a2 = 2 - pow((double)2, -g);
d = d1;
	while(1) {
		if(!m--)
			break;

		if(!mpz_divisible_ui_p(A, b[--d])) continue;		
		g = 2;
		s = f2[d];
		while(mpz_divisible_p(A, div[s][g])) g += 2;
		if (!mpz_divisible_p(A, div[s][--g])) g--;
		mpz_mul(f, div[s][g], f);
		a2 *= (1 + (1 - 1.0L / mpz_get_d(div[s][g])) / b2[d]);
		}

	while(1) {
		if(!d--)
			break;

		if(!mpz_divisible_ui_p(A, b[d])) continue;
		g = 2;
		s = f2[d];
		while(mpz_divisible_ui_p(A, div1[s][g])) g += 2;
		if(!mpz_divisible_ui_p(A, div1[s][--g])) g--;
		mpz_mul_ui(f, f, div1[s][g]);
		a2 *= (1 + (1 - 1.0L / div1[s][g]) / b2[d]);			
		}
d = D;
	while(1) {
		if(!(d-- ^ d1))
			break;		
		if(mpz_divisible_ui_p(A, b[d])) {
			mpz_mul_ui(f, f, b[d]);
			a2 *= (1 + 1.0L / b[d]);
			if(!mpz_cmp(f, A))
				goto s1;
			}
		}
d = E;
	while(1) {
		if(!d--)
			break;
		if(mpz_divisible_p(A, C[d])) {
			mpz_mul(f, C[d], f);			
			a2 *= (1 + 1.0L / mpz_get_d(C[d]));
			if(!mpz_cmp(f, A))
				goto s1;
			}
		}
s1:
if (VALID3(A, a2, a3, a4, E2))
	gmp_fprintf(F1, "%Zd ", A);
}


void ABP3(
mpz_t A, gmp_ui *b, gmp_ui *b2, int256 *C, gmp_ui &s, mpz_t f, double &a2, double &a3, double &a4, double &E2, int &D, int &E, int d1, FILE *F1, gmp_ui div1[][MAX2], int *f2) {

register int d, g = mpz_scan1(A, 0);
mpz_set_ui(f, 0);
mpz_setbit(f, g);
a2 = 2-pow((double)2, -g);
d = d1;
	while(1) {
		if(!d--)
			break;

		if(!mpz_divisible_ui_p(A, b[d])) continue;
		g = 2;
		s = f2[d];
		while(mpz_divisible_ui_p(A, div1[s][g])) g += 2;
		if(!mpz_divisible_ui_p(A, div1[s][--g])) g--;
		mpz_mul_ui(f, f, div1[s][g]);
		a2 *= (1 + (1 - 1.0L / div1[s][g]) / b2[d]);

	}
d = D;
	while(1) {
		if(!(d-- ^ d1))
			break;	
		if(mpz_divisible_ui_p(A, b[d])) {
			mpz_mul_ui(f, f, b[d]);
			a2 *= (1 + 1.0 / b[d]);
			if(!mpz_cmp(f, A))
				goto s1;
			}
		}
d = E;
	while(1) {
		if(!d--)
			break;
		if(mpz_divisible_p(A, C[d])) {
			mpz_mul(f, C[d], f);			
			a2 *= (1 + 1.0L / mpz_get_d(C[d]));
			if(!mpz_cmp(f, A))
				goto s1;
			}
		}
s1:		
if (VALID3(A, a2, a3, a4, E2))
	gmp_fprintf(F1, "%Zd ", A);
}


#endif
