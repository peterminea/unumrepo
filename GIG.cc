#include <stdio.h>
#define N 400
#include <fstream>
#include <math.h>
#include <gmp.h>
#include "/NUM.h"

typedef unsigned long long gmp_ui;

using namespace std;

void FDIV(gmp_ui &J, gmp_ui i, unsigned long int &d, unsigned long int &h, int &j, long double &e);


int main() {
fstream F;
long double a, c, e, f;
int g[N], j, k, l;
gmp_ui i, J, L, h[N][42], divdoi[62];
unsigned long int d, h1;//MASANORI TAKAHASHI = KITARO

scanf("%Lf", &a);
f = a;
F.open("/POLSKU.TXT", fstream::in);
for(j = 0; j < N; ++j)
	F >> g[j];
F.close();

for(h1 = 0; h1 < (N>>1); h1++) {
	j = g[h1];
	g[h1] = g[N - h1 - 1];
	g[N - h1 - 1] = j;
	}

POLOZKI(g, h, 1U-2U, N, divdoi);
l  = 6 + 6 * (g[0] / 6);

while(1) {
	e = 1;
	J = 1;
	while(1) {
		if(fmodl(f, divdoi[J]))
			break;
		J++;
		}

	c = 2 - 2.0 / divdoi[J--];
	J = f / (divdoi[J]);
	L = 1;

	h1 = N;
	while(1) {
		if(!h1--)//De pus vectorul de puteri duble + inversarea lor
			break;
			
		if( !(J%g[h1]) ) {
			i = 2;
			while(!(J % h[h1][i])) i += 2;
			if(J % h[h1][--i]) i--;
			i = h[h1][i];
			L *= i;
			c*= (1 + (1 - 1.0 / i) / (g[h1] - 1) );
			if(! (L ^ J) )
				goto s1;
			}
		}
		
	if(L ^ J) {
		i = l;
		J /= L;
		k = sqrt(J);
		h1 = 1;
		
		while(1) {
			FDIV(J, i-1, d, h1, j, e);
				
			if(!(h1 ^ J)) {
				c *= e;
				goto s1;
				}
				
			if (i > k)
				break;
				
			FDIV(J, i+1, d, h1, j, e);			
			i += 6;
			}			

			c *= (e + (e*h1) / J);			
		}	
s1:
	if(c > 5)
		printf("%.0Lf %.5Lf\n", f, c);
	f += a;
	}

return 0;
}


void FDIV(gmp_ui &J, gmp_ui i, unsigned long int &d, unsigned long int &h, int &j, long double &e)
{
if(! (J%i) ) {
	d = i;
	j = 1;
				
	while(1) {
		d *= i;
		if(J % d)
			break;
		j = 0;
		}
	d /= i;
	h *= d;

	j?
		e += e/i : e*=(1+ (1-1.0/d) / (--i) );
	}
}
