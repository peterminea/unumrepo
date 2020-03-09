#include <stdio.h>
#include <math.h>
#include "/NUM.h"
#define N 400

typedef unsigned long long gmp_ui;

void DIVIZ(gmp_ui &c, int h, int &e, int &f, int &l);

void INVERS(int *g) {

for(int h = 0; h < (N>>1); h++) {
	int j = g[h];
	g[h] = g[N - h - 1];
	g[N - h - 1] = j;
	}
}

int main() {

int i[N];//={3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233};

gmp_ui c, d=1, k, m, div[N][42], divdoi[62];
int a, b, e, f, g, h, l;
FILE *F = fopen("/POLSKU.TXT", "r");

for(f = 0; f < N; f++)
	fscanf(F, "%d", &i[f]);	
fclose(F);
INVERS(i);
POLOZKI(i, div, 1U-2U, N, divdoi);
const unsigned int j = 6 * (i[0] / 6) + 6;
scanf("%u %u", &a, &b);

while(1)
	{
	e = 1;
	c = 0;

	while(1) {
		c++;
		if(d % divdoi[c])
			break;
		++e;
		}

	c = d >> (e-1);
	k = 1;
	h = N;

	while(1) {
		if(!h--)
			break;
	
		if(! (c%i[h]) ) {
			f = e;
			//REFORMA PUTERNUM.			
			m = 1;
			
			while(1) {
				e += (f<<1);
				m += 2;
				if(c % div[h][m])
					break;				
			}
			
			if(c % div[h][--m]) {
				m--;
				e -= f;
			}
			
			k *= div[h][m];
			
			if(!(k ^ c))
				goto s1;			
			}
		}

	if(k ^ c) {
		h = j;
		c /= k;
		g = sqrt(c);
		l = 1;

		while(1)
			{
			DIVIZ(c, h-1, e, f, l);
			if(l == c)
				goto s1;
								
			if(h > g)
				break;
			DIVIZ(c, h+1, e, f, l);
			h += 6;
			}		

		e <<= 1;
		}
	s1:

	if( !(e^b) ) {
		printf("%llu ", d);
		if( !(--a) )
			break;
		}
	++d;
	}
	
putchar('\n');
}


void DIVIZ(gmp_ui &c, int h, int &e, int &f, int &l) {
if( !(c % h) )
	{
	f = e;
	//l = h;
	
	while(1)
		{
		e += f;
		l *= h;
		if(c % l)
			break;		
		}
		
	l /= h;
	}
}
