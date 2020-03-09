#include "/ACTUAL.h"
//LIT1050.TXT e de fapt COEFL1.TXT.
#define N 29840
#define U D1910
//49+6207+20069=26325
//6261: 1+1+17+3+6+21+36+27+65+117+245+306+516+456+1135+49+2095+1164+1
//28+57+92+362+822+1591+2144+1165
//177+1184+3735+1165
//1361+4900
//6261
// - 5.5 de 88 de cifre: l-am găsit în mod independent prin mai 2012 și stă în cealaltă parte din N.TXT, la secțiunea descoperiri proprii.
//Cu el, partea de (multi)perfecte și semiperfecte ar fi fost 6262. Și mai sunt semiperfecte noi.


void TEXTUM(const char *t, const char *T, const char *t2, const char *t1) {
FILE *f1, *f2;
mpz_t d;
char t3[40];
mpz_init(d);
strcpy(t3, t1);
strcat(t3, t);
strcat(t3, t2);

f2 = fopen(t3, "r");
if(f2 == NULL) {
	//printf("Nu e.\n");
	return;
	}

printf("%s\n", t3);
char x;
f1 = fopen(T, "a");

while(1) {
	fscanf(f2, "%c", &x);
	if(feof(f2))
		break;

	if( isdigit(x) || (x == '\n') )
		fprintf(f1, "%c", x);
	}

fclose(f1);
fclose(f2);
mpz_clear(d);
}


void TX(const char *T, const char *t2, const char *t1) {
TEXTUM("", T, t2, t1);/*
TEXTUM("NUMERIC/", T, t2, t1);
TEXTUM("NUMERIC/1/", T, t2, t1);
TEXTUM("NUMERIC/1/T/", T, t2, t1);
TEXTUM("NUMERIC/2/", T, t2, t1);
TEXTUM("NUMERIC/3/", T, t2, t1);
TEXTUM("NUMERIC/4/", T, t2, t1);
TEXTUM("NUMERIC/5/", T, t2, t1);*/
}


char V2(mpz_t a, mpz_t *b, int c) {
while(c)
	if(!mpz_cmp(b[--c], a))
		return 0;
//mpz_set(b[c], a);
return 1;
}

char V(gmp_ui a, gmp_ui *b, int c) {
int d=c;

while(d)
	if(b[--d]==a)
		return 0;
//b[c]=a;
return 1;
}


void DIV() {
FILE *J1, *K;
gmp_ui a[32], V1[2000], j;
int i;
mpz_t b;

mpz_init(b);
K = fopen("PA.TXT", "r");

for(j = 0; j < 32; ++j)
	fscanf(K, "%llu", &a[j]);
fclose(K);

QS2(a, 0, j);
K = fopen("REZ.TXT", "r");
J1 = fopen("PA2.TXT", "w");
j = 0;

while(1) {
	gmp_fscanf(K, "%Zd", &b);
	if( feof(K) )
		break;

	for(i = 0; i < 32; i++)
		if(mpz_divisible_ui_p(b, a[i]) && V(a[i], V1, j))
			V1[j++] = a[i];
	}

printf("%llu\n", j);
QS2(V1, 0, j);

for(i = 0; i < j; i++)
	fprintf(J1, "%llu ", V1[i]);

mpz_clear(b);
fclose(K);
fclose(J1);
}


int main(int argc, char **argv) {
if(argc < 2)
	return 0;

gmp_ui b[U], b1[U], j, M[HTOT], div1[H1][MAX2], sum1[H1][MAX2], q0[64];
mpz_t u, C[E1], C1[E1], d, D2, D, E, div[K2][MAX1], sum[K2][MAX1], p, q[2580];
int I, I1, d1, E2, H, K, S, R, r, mem[H1];
long i;
FILE *f1, *f2;

mpz_inits(d, D2, D, E, u, p, NULL);
for(I = 0; I < E1; I++)
	mpz_inits(C[I], C1[I], NULL);
//for(I = 0; I < N+111; ++I)
//	mpz_init(W[I]);

INIT(K2, div, sum);
for(I = 0; I < U; I++)
	b1[I] = 1;
TX("N.TXT", argv[1], "/");
I = 0;
f1 = fopen("/N.TXT", "r");

while(1) {
	gmp_fscanf(f1, "%Zd", d);
	if(feof(f1))
		break;
	//if(!mpz_cmp_ui(d, 1))
		//break;
	++I;
	//if(I>22770)
		//gmp_printf("%Zd\n", d);
	}

fclose(f1);
printf("%d\n", I);
I1 = I;
f2 = fopen("/N.TXT", "r"), f1 = fopen("/P2.TXT", "r");
I = 0;
for(i = 0; i < N1910; ++i)
	(i < U)?
		fscanf(f1, "%llu", &b[i]) : gmp_fscanf(f1, "%Zd", &C[i-U]);
fclose(f1);

for(i = 0; i < I1; ++i)
	gmp_fscanf(f2, "%Zd", &W[i]);
fclose(f2);

d1 = D1910, E2 = N1910 - D1910;
H = H1, K = KTOT;
S = STOT;
INV(b, C, H, d1, E2);
UNIFACTUS(1910, b, b1, C, C1, d1, E2, H, K, div, sum, div1, sum1, mem, q, q0, 1);
f2 = fopen("N4.TXT", "w");

for(i = 0; i < N; i++)
	gmp_fprintf(f2, "%Zd\n", W[i]);
I = N;

for(i = N; i < I1; ++i)
	if(V2(W[i], W, i)) {
		R = mpz_scan1(W[i], 0);
		SUMADIV(W[i], D, C, C1, b, b1, d1, E2, H, K, S, H, div1, sum1, div, sum, mem, q[R]);
		if(VALID(W[i], d, D) == 1) {
			gmp_fprintf(f2, "%Zd\n", W[i]);
			++I;
			}
		//else
		//gmp_printf("%Zd\n", a[i]);
		}
fclose(f2);
//printf("T2 %d\n", I);
I1 = I;

f2 = fopen("N4.TXT", "r");
for(I = 0; I < I1; I++)
	gmp_fscanf(f2, "%Zd", W[I]);
fclose(f2);

QS(W, 0, I1, D2);
f2 = fopen("N3.TXT", "w");
for(I = 0; I < I1; ++I)
	gmp_fprintf(f2, "%Zd\n", W[I]);

fclose(f2);
printf("%d\n", I);

for(I = 0; I < E1; I++)
	mpz_clears(C[I], C1[I], NULL);
mpz_clears(d, D2, D, E, u, p, NULL);

I = remove("N.TXT");
I = rename("N4.TXT", "N.TXT");
return 0;
}
