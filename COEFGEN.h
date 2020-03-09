//#include "/ACTUAL.h"
#define Q 20000001

mpz_t d[Q];


void COEFGEN(mpz_t *a, unsigned long g, unsigned long s, unsigned long D, unsigned long R) {
if(D % R)
	return;
mpz_t d1;
mpz_init(d1);
unsigned long e = 0, f, i = 0;

FILE *H = fopen("VEC.TXT", "w");
R = D/R;
for(e = 0; e <= R; e++)
	mpz_init(d[e]);

//for(e = (g>>1);	e; )
	//mpz_swap(a[--e], a[f - e - 1]);
e = 0;

while(1) {
	f = g - s;
	while(1) {
		if(mpz_divisible_p(a[g], a[f])) {
			mpz_divexact(d[e], a[g], a[f]);
			if(!(++e^R))
				goto s1;
			}
		s2:
		if(!f--)
			break;
		}
	
	if( !(--g) )
		break;
	}
s1:
//printf("S%llu\n", e);
HS(d, d1, R);
mpz_set_ui(d[R], 0);

for(e = 0; e < R; e++)
	if(mpz_cmp(d[e+1], d[e]) > 0) {
		gmp_fprintf(H, "%Zd\n", d[e]);
		++i;
		}
D -= R;
e = 0;

if(!D) {
	fclose(H);
	printf("S-au luat %lu de numere.\n", i);
	for(e = 0; e <= R; e++)
		mpz_clear(d[e]);		
	mpz_clear(d1);
	return;
	}
	
goto s2;
}
