 #include "/TOLIL.h"
 #include "/MODIFSUM.h"
 #include "/TOLVECUN.h"
//De prelucrat VECUN după modelul PUTERNUM.

//./vecun 0 161 1 a

void TOL(char *TEXT, char **arg) {//VECUN doar cu factori de legătură mpz_t, VECUN1 doar cu gmp_ui + ADAUGPRIM. Sau invers.
char *p1;
int r;

if(arg[4][0] == 'a') {
	system("g++ -w -m64 VECUN1.cc -lgmp -fopenmp -o vecun1");
	sprintf(TEXT, "./vecun1 %s %s %s %s", arg[1], arg[2], arg[3], "b");
	LIM(arg, r = 0, 0, NUME2(strtol(arg[2], &p1, 10)));
	system(TEXT);
	exit(0);
}

r = strtol(arg[3], &p1, 10);
gmp_ui A1[42000];
char tt[50], Q[1920];
FILE *f1, *F1 = r? fopen("VCN.TXT", "w") : fopen("VCN1.TXT", "w");

if(ftell(F1))
	fputs("\n", F1);

mpz_t a[30000], z[100], z3[100], A, d, d1, unu, doi, trei, c1, I, C1[EV+5], C[EV+5], div[KV+5][MAX1], sum[KV+5][MAX1], p, q[2580];
int mem[HV+5], f2[HV+5], a1, b1, c[HV+5], L, Y, D, E, e, H, i, l, m, n, s, S, W, V, f, jos = strtol(arg[1], &p1, 10), sus = strtol(arg[2], &p1, 10);
gmp_ui b[D1], div1[HV+5][MAX2], sum1[HV+5][MAX2], b2[DV], j, y[300], y1[300];
gmp_ui bex[HV+5], bex2[DV-HV+5], b1ex2[DV-HV+5];
int fex[HV+5];

INIT(KV+5, div, sum);

//printf("%d %d %d %d %d %d %d\n", jos, sus, D1, E1, N0, H1, K2); 
for(i = 0; i < HV+5; i++) {
	f2[i] = 1;

for(j = 0; j < MAX2; j++) {
	div1[i][j] = sum1[i][j] = 1;
		}
	}

for(i = 0; i < 300; i++) {
	y1[i] = 1;
	}

for(i = 0; i < 100; i++) {
	mpz_inits(z[i], z3[i], NULL);
	}

mpz_init_va(A, I, unu, doi, trei, d, c1, d1, p, NULL);
for(i = 0; i < 30000; i++)
	mpz_init(a[i]);

for(i = 0; i < EV+5; i++)
	mpz_inits(C[i], C1[i], NULL);

e = 0;
b1 = sus;
sus ^ 1910?
	CIT(f1, a, a1 = jos, b1, e, "/N3.TXT") :
	CIT1(f1, a, a1 = jos, e, "/N.TXT");
//CITLIM1(f1, A1, a1 = jos, e, "/N.TXT", 250000000L, 1351983988534U, 0L, 100000);
printf("%d\n", e);
PUTDOI(a, e-1, 0);
/*mpz_ui_pow_ui(g, 2, 64);

for(int i = 1; i < e; i++) {
	mpz_ui_pow_ui(xe, 2, mpz_scan1(a[i], 0));
	mpz_divexact(xe, a[i], xe);
	if(mpz_cmp(xe, g) >= 0) mpz_set(a[i], a[i-1]);
}*/

if(r && !(sus % 10) && (sus ^ 1910)) {
	//printf("Nu așa se caută în sus la VECUN.\n");
	//return;
}


VECUN0(r, V, f, W, L, i, l, d, d1, unu, doi, I, a, A1, b1, e, b, b2, y, y1, C, C1, z, z3, c, f2, D, E, H, L, S, m, n, s, div, sum, div1, sum1, mem, bex, bex2, b1ex2, fex, F1, f1, tt, p, q, Q);
fclose(F1);
r? system("./vecung2 VCN.TXT") : system("./vecung2 VCN1.TXT");
mpz_clears(A, d, d1, unu, doi, trei, c1, I, p, q, NULL);
for(e = 0; e < EV+5; e++)
	mpz_clears(C[e], C1[e], NULL);
}

 
int main(int argc, char **argv) {
	if(argc < 5) return 1;
	TOL((argc > 5? argv[5] : new char[80]), argv);
return 0;
}
