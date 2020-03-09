#include <stdio.h>
#include <gmp.h>
#include "/TOLIL.h"

class Div {

public:
Div();
~Div();

private:

static const int N = 4896, H = 360, K = 30;

int A, i, j, k;
gmp_ui B[N], d;
mpz_t a, b, c, C[421], E, F;
gmp_ui div1[330][42];
mpz_t div[50][152];

void Int();
void Mpz();

public:

void init();
void calc();

};


Div::Div()
{
}

Div::~Div()
{
mpz_clears(a, b, c, E, F, NULL);
for(i = 0; i < 421; i++)
	mpz_clear(C[i]);
}


void Div::init() {

for(i = 0; i < 50; i++)
for(j = 0; j < 152; j++)
	mpz_init(div[i][j]);

for(i = 0; i < 421; i++)
	mpz_init(C[i]);

FILE *D = fopen("/P2.TXT", "r");
for(i = 0; i < 5317; i++)
	i < N?
		fscanf(D, "%llu", &B[i]) : gmp_fscanf(D, "%Zd", C[i-N]);
	
fclose(D);
mpz_inits(a, b, c, E, F, NULL);
gmp_scanf("%Zd", a);
if(!mpz_cmp_ui(a, 0))
	exit(0);

UNIFACTUS2(1910, B, C, N, 421, H, K, div, div1, 0);//N = D, 421 = E.
j = 0;
}


void Div::Int() {

if(i < K)
	goto s1;

if(i < H)
	goto s2;

if(mpz_divisible_ui_p(a, B[i])) {
	++A;
	mpz_mul_ui(E, E, B[i]);
	}

return;
	
s1:

if(mpz_divisible_ui_p(a, B[i])) {
	d = 1;
	
	while(1) {
		++A;
		++d;
		if(!mpz_divisible_p(a, div[i][d]))
			break;
		}
			
	mpz_mul(E, E, div[i][--d]);		
	}

return;

s2: 
if(mpz_divisible_ui_p(a, B[i])) {
	d = 1;
	k = i - K;

	while(1) {
		++A;
		++d;
		if(!mpz_divisible_ui_p(a, div1[k][d]))
			break;
		}
		
	mpz_mul_ui(E, E, div1[k][--d]);
	}
}


void Div::Mpz() {
if(mpz_divisible_p(a, C[j])) {/*
	mpz_set(c, C[j]);	

	while(1)
		{
		++A;
		mpz_mul(c, c, C[j]);
		if(!mpz_divisible_p(a, c))
			break;
		}
		
	mpz_divexact(c, c, C[j]);*/	
	++A;	
	mpz_mul(E, E, C[j]);
	}
	
++j;
}


void Div::calc() {
A = 1;
i = 0;
i = mpz_scan1(a, 0);
mpz_tdiv_q_2exp(a, a, i);
A += i;

i = 0;
mpz_set_ui(b, A);
mpz_set_ui(E, 1);

	while(1) {
		if( !mpz_cmp(E, a) || (i == 5317) )
			break;
	A = 1;
	(i < N)?
		Int() : Mpz();

	if(A ^ 1)
		mpz_mul_ui(b, b, A);
	++i;
	}
	
if(mpz_cmp(E, a)) {
	printf("PO-ĂTĂR!!! Îți ești permis cu nerușinare să îmi dai aici o PORCHIERIE de număr!\nNu îți calculez nimic. Fă alt număr!\n");
	return;
}	

gmp_printf("Divizori: %Zd.\n", b);
}


int main()
{

Div d;

d.init();
d.calc();
d.~Div();

return 0;
}
