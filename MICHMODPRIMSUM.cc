 #include "/NUM.h"
 #include "/ZVERITON.h"
#define FDIM 2000
//De prelucrat MODPRIMSUM după modelul PUTERNUM.


void TOL(char **arg) {

if(arg[4][0] < 'c') {//84 88
	PREP1(arg);
	return;
}

mpz_t unu, doi, trei, d, d1, d2, d3, d4, nr2, nm2;
gmp_ui p1, b[D1], b1[D1], div1[800][MAX2], sum1[800][MAX2], PP, PP1, PP2, A1[FDIM], A2[FDIM], A3[FDIM], e, b2[D1], q1[64], q0[64];
FILE *f1, *F2;
char t, *tt, TEXT[80], Q[1920], l1[50] = "/BIOLIS.NUM2";
int mem[600], H2, H3, L, A4[FDIM], pp = 0, pp1 = 0, m, n, p, D, H, f, W, I, R, r, u, u1, jos = strtol(arg[1], &tt, 10), sus = strtol(arg[2], &tt, 10);
gmp_ui FACT[FDIM][5], FD[FDIM];
int FACTLEG[FDIM][5], PRIMP[FDIM][5];
gmp_ui nr[800], nm[800];
long double a;
mpz_t nmnm[FDIM], nrnr[FDIM];
for(int i = 0; i < FDIM; i++) mpz_inits(nmnm[i], nrnr[i], NULL);

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);
	
if(arg[4][0] == 'd') {
	REN3(l1);
}

mpz_init_va(unu, doi, trei, d, d1, d2, d3, d4, nr2, nm2, NULL);
f1 = fopen("/COEFLEG.TXT", "r");
R = 0;
H2 = 4000, H3 = 3950;

while(1) {	
	fscanf(f1, "%llu", &e);
	if(e > H2)
		break;
	if( (e & 1) && !EPRIM(e) && (e > H3)) {
		A2[R++] = e;
	}
}

fclose(f1);
for(e = 0; e < R; e++) printf("%d ", A2[e]);
putchar('\n');
printf("La început R era %d.\n\n", R);
strcpy(TEXT, "/GIGM.TXT");
MICGENERARE(sus, b, D, H);
printf("%d %d %d %d\n%d %d EVALDE\n", jos, sus, D1, H1, D, H);
f = R, r = arg[6][0] == 's'? 1 : 0;
ARANJFACT(0, D, b, b1, u1, f, A1, A2, A3, A4, e, H, 0, r, 1);
VUNIFACTUS(sus, b, b1, D, H, div1, sum1, mem, q1, q0, 1);
printf("\n%d %d\n\n", f, u1);//A2 are cele 80. A3 ia din b. A3 trebuie să își ia puterile din div, div1, sum, sum1.
DIVNUM(f, u1, H, H2, b, A2, A3, pp, n, p, D, div1, sum1, d, d1, FACT, FACTLEG, FD, PRIMP);

W = f;
jos += 2, sus += 2;
PP = LUNGHEZ2(TEXT);
f1 = fopen(TEXT, "r");
PP1 = URC1(f1, jos, Q, t, 500000000L, PP, arg[5][0]);
if(t != 'c') {
	printf("Nu e numărul.\n");
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
printf("De scris: %s .\n", l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], H3, H2, r);
MODPRIMSUM(Q, PP2, f1, W, f, u, u1, b, b1, 0, unu, d, d1, doi, trei, A2, A3, div1, sum1, D, H, F2, nr, nm, sus, r, FACT, FACTLEG, FD, PRIMP, p1, q1, q0, tt, a, A4);
fclose(f1);
fclose(F2);
REN1(l1);
printf("FINE\n");
mpz_clears(unu, doi, trei, d, d1, d2, d3, d4, nm2, nr2, p1, NULL);
}

 
int main(int argc, char **argv) {
if(argc < 9)
	return 1;

TOL(argv);
return 0;
}
