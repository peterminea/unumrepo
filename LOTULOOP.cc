#include <gmp.h>
#include <stdio.h>

class LOTUL
{

public:
LOTUL();
~LOTUL();

void init();
void calc();
static const int N=300;

private:

void prim(unsigned long int i);

int g[N];
mpz_t a,b,c,d,f,K;
mpq_t A, B;

double J2, J3;
unsigned long int e, i, k, l;
int h, j, J1;

};



LOTUL::LOTUL()
{
}


LOTUL::~LOTUL()
{
mpz_clears(a, b, c, d, f, K, NULL);
mpq_clears(A, B, NULL);
}


void LOTUL::init()
{
mpz_inits(a, b, c, d, f, K, NULL);
mpq_inits(A, B, NULL);

gmp_scanf("%Zd", &a);
scanf("%lf", &J2);

FILE *F=fopen("/GILIPOLLAN/POLSKU.TXT","r");
for(h=0; h<N; h++)
fscanf(F, "%d", &g[h]);
fclose(F);

mpz_set(f, a);
J1=6+6*(g[N-1]/6);

}


void LOTUL::calc()
{
while(1)
	{
	mpz_set(b, f);
	h=0;	
	
	while(mpz_divisible_2exp_p(b, 1))
	mpz_tdiv_q_2exp(b, b, 1);
	mpz_divexact(c,f,b);
	mpz_mul_ui(c, c, 2);
	mpz_sub_ui(c, c, 1);
	
	while(mpz_cmp_ui(b,1)>0)
	{
	if(mpz_divisible_ui_p(b, g[h]))
		{
		i=g[h];
		mpz_set(d, b);
		j=0;

		while(mpz_divisible_ui_p(b, i))
			{
			mpz_divexact_ui(b, b, i);++j;
			}
		if(j==1)
			mpz_mul_ui(c, c, ++i);
		else
			{
			mpz_divexact(d, d, b);
			mpz_set(K, d);
			mpz_sub_ui(d, d, 1);
			mpz_divexact_ui(d, d, --i);
			mpz_add(d, d, K);
			mpz_mul(c, c, d);
			}
		}

	++h;
	if(h==N)
		break;
	}

if(mpz_cmp_ui(b, 1)>0)
	{
		e=1;
		i=J1;
		while(1)
		{
			prim(i-1);
			prim(i+1);
			if(mpz_cmp_ui(b, 1)==0)
				break;		
			i+=6;
		}
mpz_mul_ui(c, c, e);
	}
				
	mpq_set_z(A, c);	
	mpq_set_z(B, f);
	mpq_div(A, A, B);

	J3=mpq_get_d(A)-1;
	
	if(J3>J2)
	gmp_printf("%Zd %.5lf\n", f, J3);
	
mpz_add(f, f, a);
}

}


void LOTUL::prim(unsigned long int i)
{

if(mpz_divisible_ui_p(b, i))
			{
			l=mpz_get_ui(b);
			j=0;
			k=l;

			while(l%i==0)
				{
				l/=i;
				++j;
				}
		
		if(j==1)
			e*=(++i);
		else
			{				
			k/=l;
			e*=(k+(k-1)/(i-1));
			}

		mpz_set_ui(b, l);			
			}
}



int main()
{
LOTUL l;

l.init();
l.calc();
l.~LOTUL();

return 0;
}
