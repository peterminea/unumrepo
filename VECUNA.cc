#include <cmath>
#include "/TOLIL.h"
#include "/TOLVECUN.h"
#include <time.h>

#define N 10768
#define U 4896


void TOL(char *TEXT, char *josul, char *susul) {

FILE *f1, *F1 = fopen("VCN.TXT", "a");
if( ftell(F1) > 0 )
	fputc('\n', F1);

mpz_t xe, g, p, q, z[36], z3[36], a[N], A1[8000], C[E1], C1[E1], A, Z, d, d1, unu, doi, I, div[K2][MAX1], divd[H1-K2][MAX2];
char *tt;
int mem[50], a1, b1, c[HTOT], f, f2[144], L, Y, W, D, E, S, e, i, l, H, R, m, n, jos = strtol(josul, &tt, 10), sus = strtol(susul, &tt, 10);
gmp_ui b[U], b2[U], y[144], y1[144], s, div1[H1-K2][MAX2], div2[K2][MAX2];
double a2, a3, a4, E2;

mpz_init_va(A, Z, I, xe, g, unu, doi, d, d1, NULL);
E2 = pow((double)2, -32);


for(i = 0; i < K2; i++)
for(e = 0; e < MAX1; e++)
	mpz_init(div[i][e]);
	
for(i = 0; i < H1-K2; i++)
for(e = 0; e < MAX2; e++)
	mpz_init(divd[i][e]);

for(i = 0; i < N; i++)
	mpz_init(a[i]);

for(i = 0; i < 8000; i++)
	mpz_init(A1[i]);

for(i = 0; i < E1; i++)
	mpz_init(C[i]);

for(i = 0; i < 36; i++)
	mpz_inits(z[i], z3[i], NULL);	

mpz_ui_pow_ui(A, 10, a1 = jos);
mpz_ui_pow_ui(Z, 10, b1 = sus);
e = 0;
CIT(f1, a, a1, b1, e, "/N3.TXT");
printf("%d.\n", e);
L = 1;//1 sus, 0 jos.
// void VECUNA(int L, int U, int W, int D, int E, int H, int N, int Y, int R, int b1, int e, int f, int i, int l, int m, int n, int *c, int *f2, mpz_t *a, mpz_t *A1, gmp_ui s, gmp_ui *b, gmp_ui *b2, gmp_ui *y, gmp_ui *y1, mpz_t *C, mpz_t *C1, mpz_t *z, mpz_t *z3, mpz_t xe, mpz_t unu, mpz_t doi, mpz_t d, mpz_t d1, mpz_t I, double a2, double a3, double a4, double E2, mpz_t div[][MAX1], gmp_ui div1[][MAX2], mpz_t p, int *mem, FILE *F1, FILE *f1) {
VECUNA(L, U, W, D, E, H, S, N, Y, R, b1, e, f, i, l, m, n, c, f2, a, A1, s, b, b2, y, y1, C, C1, z, z3, xe, unu, doi, d, d1, I, a2, a3, a4, E2, div, div1, p, mem, F1, f1);//divd, div2.

for(e = 0; e < 8000; e++)
	mpz_clear(A1[e]);

fclose(F1);
mpz_clears(A, Z, xe, g, d, d1, unu, doi, I, p, NULL);
}


int main(int argc, char **argv) {
	if(argc < 3) return 1;
	TOL((argc == 4? argv[3] : new char[80]), (argv[1]), (argv[2]));
return 0;
}
