#include "/TOLIL.h"
#include "/TOLVECUN.h"
#define U DTOT
#define K0 KTOT


int main() {
mpz_t a, g, un, doi, tr, pa, p, q[580], j[1533], j1[1533], k[K0], z3[K0], div[H1][MAX1], sum[H1][MAX1];
gmp_ui q0[64], c[U], c1[U], g1, g2, q1[64], y[340], y1[340], div1[H1][MAX2], sum1[H1][MAX2], LG = LUNGHEZ2("/COEFLEG.TXT");
int mem[600], D, E, e, f, h, m, n, R, i, r, r1, s, S, prag, f2[340];
FILE *f1, *GIC;
double z;
char t;

INIT(H1, div, sum);

mpz_inits(a, g, un, doi, tr, pa, p, NULL);
for(e = 0; e < 1533; e++)
	mpz_inits(j[e], j1[e], NULL);

for(e = 0; e < K0; e++)
	mpz_inits(k[e], z3[e], NULL);

gmp_scanf("%Zd", &a);
mpz_ui_pow_ui(g, 10, 210);
mpz_ui_pow_ui(un, 10, 50);

if (mpz_cmp (a, g) > 0) {
	GEN(D = U, NTOT, c, j, e, f, "/CFV1910.TXT");//e=5293, f=618. e = D, f = E.
	h = HTOT;
	i = KTOT;
	E = E1;
	prag = 1910;
	}
else if(mpz_cmp (a, un) > 0) {
	GEN(D = D210, N210, c, j, e, f, "/CFV210.TXT");
	h = H210;
	i = 0;//K200;
	E = 0;
	prag = 210;
	} else {
	GEN(D = D52, N52, c, j, e, f, "/CFV52.TXT");
	h = H52;
	i = 0;
	E = 0;
	prag = 52;
	}

INTEROGARE(t);

if(t == 'a')
	goto s1;
else
	goto s2;

s1:
INV(c, j, h, e, f);
g1 = 1;
UNIFACTUS(prag, c, c1, j, j1, e, f, h, i, div, sum, div1, sum1, mem, q, q0, 1);
GIC = fopen("/COEFLEG.TXT", "r");

if(prag == 210) {
	//PURGANTE(j, j1, E);
	while(1) {
		fscanf(GIC, "%llu", &g1);
		mpz_mul_ui(g, a, g1);
		mpz_tdiv_q_2exp(p, g, n = mpz_scan1(g, 0));
		NUMSUMV1(p, doi, c, c1, e, h, n, div1, sum1, q[n], 0);
		if(VALID2(g, un, doi, tr, z))
			gmp_printf("%Zd %.6lf\n", g, --z);
		if(ftell(GIC) == LG)
			break;
		}

	while(1) {
		mpz_add(g, g, a);
		mpz_tdiv_q_2exp(p, g, n = mpz_scan1(g, 0));
		NUMSUMV1(p, doi, c, c1, e, h, n, div1, sum1, q[n], 0);
		if(VALID2(g, un, doi, tr, z))
			gmp_printf("%Zd %.6lf\n", g, --z);
		}		
} else if(prag ^ 52) {
	while(1) {
		fscanf(GIC, "%llu", &g1);
		mpz_mul_ui(g, a, g1);
		mpz_tdiv_q_2exp(p, g, n = mpz_scan1(g, 0));
		SUMIMENS1(p, doi, j, j1, c, c1, e, f, h, i, n, div1, sum1, div, sum, mem, q[n]);
		if(VALID2(g, un, doi, tr, z))
			gmp_printf("%Zd %.6lf\n", g, --z);
		if(ftell(GIC) == LG)
			break;	
	}

	while(1) {
		mpz_add(g, g, a);
		mpz_tdiv_q_2exp(p, g, n = mpz_scan1(g, 0));
		SUMIMENS1(p, doi, j, j1, c, c1, e, f, h, i, n, div1, sum1, div, sum, mem, q[n]);
		if(VALID2(g, un, doi, tr, z))
			gmp_printf("%Zd %.6lf\n", g, --z);
	}
} else {
	while(1) {
		fscanf(GIC, "%llu", &g1);
		mpz_mul_ui(g, a, g1);
		mpz_tdiv_q_2exp(p, g, n = mpz_scan1(g, 0));
		SMV(p, doi, c, c1, e, h, n, div1, sum1, q0[n]);
		if(VALID2(g, un, doi, tr, z))
			gmp_printf("%Zd %.6lf\n", g, --z);
		if(ftell(GIC) == LG)
			break;	
	}

	while(1) {
		mpz_add(g, g, a);
		mpz_tdiv_q_2exp(p, g, n = mpz_scan1(g, 0));
		SMV(p, doi, c, c1, e, h, n, div1, sum1, q0[n]);
		if(VALID2(g, un, doi, tr, z))
			gmp_printf("%Zd %.6lf\n", g, --z);
	}
}

fclose(GIC);

s2:
UNIFACTUS(prag, c, c1, j, j1, e, f, h, i, div, sum, div1, sum1, mem, q, q0, 0);
GIC = fopen("/COEFLEG.TXT", "r");

//if(prag == 240) PURGANTE(j, j1, E);
prag ^ 1910? LOTVEC(a, y, k, e, c, j, c1, j1, y1, z3, D, E, h, r, f, f2) : LOTVECM(a, y, k, e, c, j, c1, j1, y1, z3, D, E, h, r, i, r1, f, f2);
g1 = 0;
mpz_ui_pow_ui(g, 2, 64);

if(prag == 1910) {
	while(1) {
		fscanf(GIC, "%llu", &g1);
		if(mpz_divisible_ui_p(a, g1))	{
		//if(mpz_divisible_ui_p(a, ++g1)) {
			mpz_divexact_ui(pa, a, g1);			
			mpz_tdiv_q_2exp(p, pa, n = mpz_scan1(pa, 0));
			SUMADIVV3(p, doi, k, z3, y, y1, e, f, r, r1, n, div1, sum1, div, sum, q[n], mem, f2, 0);
			if(VALID2(pa, un, doi, tr, z))
				gmp_printf("%Zd %.6lf\n", pa, --z);
			if(ftell(GIC) == LG) {
				//mpz_set_ui(g, g1);
				break;
				}
			}
	//if (!g1)
	//	break;//Nu ajunge la 18.446 miliarde de miliarde.
	}

	while(1) {
		if(mpz_divisible_p(a, g)) {
			mpz_divexact(pa, a, g);
			mpz_tdiv_q_2exp(p, pa, n = mpz_scan1(pa, 0));
			SUMADIVV3(p, doi, k, z3, y, y1, e, f, r, r1, n, div1, sum1, div, sum, q[n], mem, f2, 0);
			if(VALID2(pa, un, doi, tr, z))
				gmp_printf("%Zd %.6lf\n", pa, --z);
			}
		mpz_add_ui(g, g, 1);
		}
} else if(prag == 210) {
	while(1) {
		fscanf(GIC, "%llu", &g1);
		if(mpz_divisible_ui_p(a, g1)) {		
			mpz_divexact_ui(pa, a, g1);
			mpz_tdiv_q_2exp(p, pa, n = mpz_scan1(pa, 0));
			//SUMADIVV5(p, doi, k, z3, y, y1, e, f, r, r1, n, div1, sum1, div, sum, q[n], mem, f2, 0, 0);
			NUMSUM3(p, doi, y, y1, e, r, n, div1, sum1, q[n], f2, 0);
			if(VALID2(pa, un, doi, tr, z))
				gmp_printf("%Zd %.6lf\n", pa, --z);
			if(ftell(GIC) == LG) {
				//mpz_set_ui(g, g1);
				break;
				}
			}
	}

	while(1) {
		if(mpz_divisible_p(a, g)) {
			mpz_divexact(pa, a, g);
			mpz_tdiv_q_2exp(p, pa, n = mpz_scan1(pa, 0));
			//SUMADIVV4(p, doi, k, z3, y, y1, e, f, r, r1, n, div1, sum1, div, sum, q[n], mem, f2, 0, 0);
			NUMSUM3(p, doi, y, y1, e, r, n, div1, sum1, q[n], f2, 0);
			if(VALID2(pa, un, doi, tr, z))
				gmp_printf("%Zd %.6lf\n", pa, --z);
			}
		mpz_add_ui(g, g, 1);
		}
} else {printf("PRAG 52\n");
	while(1) {
		fscanf(GIC, "%llu", &g1);
		if(mpz_divisible_ui_p(a, g1)) {
			mpz_divexact_ui(pa, a, g1);
			mpz_tdiv_q_2exp(p, pa, n = mpz_scan1(pa, 0));	
			SMV1(p, doi, y, y1, e, h, n, div1, sum1, q0[n], f2);
			if(VALID2(pa, un, doi, tr, z))
				gmp_printf("%Zd %.6lf\n", pa, --z);
			if(ftell(GIC) == LG) {
				goto n1;
				}
			}
	}

	while(1) {
		if(mpz_divisible_p(a, g)) {
			mpz_divexact(pa, a, g);
			mpz_tdiv_q_2exp(p, pa, n = mpz_scan1(pa, 0));
			SMV1(p, doi, y, y1, e, h, n, div1, sum1, q0[n], f2);
			if(VALID2(pa, un, doi, tr, z))
				gmp_printf("%Zd %.6lf\n", pa, --z);
			}
		mpz_add_ui(g, g, 1);
		}
}

n1:
fclose(GIC);
return 0;
}
