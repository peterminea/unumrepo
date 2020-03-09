#include "/NUM.h"
#include "/ZVERITON.h"
#define FDIM 1500
//De prelucrat MODIFSUM după modelul PUTERNUM.
// ./MODIFSUM 200 240 /run/media/root/5TB/LPT240.TXT
void TOL(char **arg) {//197 la 200.

if(arg[4][0] < 'c') {
	PREP1(arg);
	return;
}

mpz_t unu, doi, trei, d, d1;
char t, *tt, Q[1920], TEXT[80], l1[50] = "/run/media/root/1TB/PARUFALGEA.NUM2";
int A4[FDIM], mem[600], f, L, W, I, R, r, u1, H2, H3, pp = 0, pp1 = 0, m1, n, p, jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10), D, H;
gmp_ui p1, q[64], q0[64], sum[FDIM], A1[FDIM], A2[FDIM], A3[FDIM], b[D1], b1[D1], div1[1200][MAX2], sum1[1200][MAX2], e = 0, PP, PP1, PP2;
FILE *f1, *F2;
long double a;
gmp_ui FACT[FDIM][5], FD[FDIM];
int FACTLEG[FDIM][5], PRIMP[FDIM][5];
mpz_t summ[FDIM];

for(int i = 0; i < FDIM; i++) 
	mpz_inits(summ[i], NULL);

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(l1);
}

mpz_init_va(unu, doi, trei, d, d1, NULL);
f1 = fopen("/COEFLEG.TXT", "r");
R = 0;
H2 = strtol(arg[8], &tt, 10), H3 = strtol(arg[7], &tt, 10);

while(1) {
	fscanf(f1, "%d", &e);
	if(e > H2)
		break;
	if((e & 1) && !EPRIM(e) && (e > H3)) {//108.
		A2[R++] = e;
	}
}

fclose(f1);
for(e = 0; e < R; e++) printf("%d ", A2[e]);
putchar('\n');
printf("La început R era %d.\n\n", R);
strcpy(TEXT, "/GIGM.TXT");
f = R, r = arg[6][0] == 's'? 1 : 0;
MICGENERARE(sus, b, D, H);
ARANJFACT(0, D, b, b1, u1, f, A1, A2, A3, A4, e, H, 0, r, 0);
VUNIFACTUS(sus, b, b1, D, H, div1, sum1, mem, q, q0, 1);
printf("%d %d %d %d %d %d %d\n EVALDE\n\n%d %d\n\n", jos, sus, D1, N0, H1, D, H, f, u1);
DIVNUM(f, u1, H, H2, b, A2, A3, pp, n, p, D, div1, sum1, d, d1, FACT, FACTLEG, FD, PRIMP);

W = f;
jos += 2, sus += 2;
PP = LUNGHEZ2(TEXT);
f1 = fopen(TEXT, "r");
PP1 = URC1(f1, jos, Q, t, 500000000L, PP, arg[5][0]);//120.
if(t != 'c') {
	printf("%llu Nu e numărul.\n", ftell(f1));
	//return;
}

rewind(f1);
PP2 = URC1(f1, sus, Q, t, 500000000L, PP, '1');
rewind(f1);
fseek(f1, PP1, SEEK_CUR);

do {
	fgets(Q, 1920, f1);	
} while(!CIF(Q, strlen(Q), jos-1, sus+1));

if(LUNGHEZ2(l1)) {
	fclose(f1);
	return;
}

F2 = fopen(l1, "w");
r? printf("Pe sus. ") : printf("Pe jos. ");
printf("\n%llu De scris: %s .\n", ftell(f1), l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], H3, H2, r);
MODIFSUM(Q, PP2, W, f1, u1, b, b1, 0, unu, d, d1, doi, trei, A2, A3, div1, sum1, D, H, F2, sus, r, FACT, FACTLEG, FD, PRIMP, sum, summ, p1, q, q0, tt, a, A4);
fclose(f1);
fclose(F2);
REN1(l1);
printf("FINE\n");
mpz_clears(unu, doi, trei, d, d1, NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

	TOL(argv);
return 0;
}
