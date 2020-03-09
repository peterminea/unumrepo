//TOTUL: 111, 32.
#include <stdio.h>
#include "/NUM.h"
#define U 111
//  https://play.google.com/books/reader?id=JwLFDAAAQBAJ&printsec=frontcover&output=reader&hl=ro&pg=GBS.PT127

void TOL() {
FILE *f1, *F2 = fopen("VCN.TXT", "a");
if(ftell(F2))
	return;

double E1 = pow( (double)2, -36);
long double unu, trei, d, d1, g, I1, sumInt[25];
int f, h, L, Y, W, D, e, H, I, R, a3[25];
gmp_ui A, Z, A2[500], b[U], b1[U], j, j1, E, y[25], y1[25], y2[25], divInt[25], div[32][MAX3], sum[32][MAX3], div1[32][MAX3], divdoi[62], sumdoi[62];

W = U;
L = 32;
GEN("/CFT.TXT", b, U, D);
W = COEF1(40, 6, 125, b, D);
//INV(b, C, H, D);//Pentru LOTVEC/LOTVECM, MODIF*, nu.
FACT1(W, A2, f1, I, 40);

UNIFACTOR("/CFVEC.TXT", "/PUTERIVEC.TXT", b, b1, D = U, H = L, div, sum, sumdoi, divdoi, 60, 0);
A = 1000000000;
Z = A*A;
A = Z / 1000;

for(e = 0; e < H; e++)
	b1[e] = b[e] - 1;
e = 0;
f1 = fopen("/N1.TXT", "r");

R = 1;//1 sus, 0 jos.

R? VECUNNUM1(b, b1, y, y1, y2, divInt, sumInt, divdoi, div1, div, unu, trei, d, d1, g, E1, I1, j, j1, E, A2, W, L, Y, U, H, R, f, e, h, a3, f1, F2) 
	: VECUNNUM2(b, b1, y, y1, y2, divInt, sumInt, divdoi, div1, div, unu, trei, d, d1, g, E1, I1, j, j1, E, A2, W, L, Y, U, H, R, f, e, h, a3, f1, F2);
fclose(F2);
printf("%d\n", e);
}


int main() {
TOL();
return 0;
}