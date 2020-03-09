#include "/TOLIL0.h"


int main(int argc, char **argv) {
if(argc < 6) {
	return 1;
}//TOLIL0 cu GENERARE2.

unsigned long P1, P2, PP;
char *p2, t, w1, Y[2000];
int I, i, j, J, K, V, l, p, q, R1, r, X, K1 = 0, a1 = 2 + strtol(argv[2], &p2, 10), b1 = 2 + strtol(argv[3], &p2, 10), disc, mem[600];
gmp_ui b[5400], b2[5400], k, div1[H1][MAX2], sum1[H1][MAX2], sumdoi[64];
mpz_t div[H1][MAX1], sum[H1][MAX1], C[625], C1[625], d, e, D, E, /*d1, e1, p1,*/ q1[2580], u;
FILE *S1, *S2;

disc = b1-2;//+ 420;
mpz_init_va(d, e, D, E, u, NULL);
for(i = 0; i < 625; i++)
	mpz_inits(C[i], C1[i], NULL);
for(i = 0; i < 5400; i++)
	b2[i] = 1;

INIT(H1, div, sum);
//GENERARE(disc, b, C, i, j, J, l, I, V, 50);//i = D, J = E, j = H, l = K.
GENERARE2(disc, b, C, i, j, J, l, I, V, (b1 >= 213));//i = D, J = E, j = H, l = K.
UNIFACTUS(disc, b, b2, C, C1, i, J, j, l, div, sum, div1, sum1, mem, q1, sumdoi, 1);
for(r = 0; r < 64; r++)
	sumdoi[r] = mpz_get_ui(q1[r]);

PP = LUNGHEZ2(argv[1]);
if(!PP || !FILEEXISTS(argv[1])) {
	printf("%s nu este.\n", argv[1]);
	return 1;
	} else {
	printf("PP de la %s e %llu.\n", argv[1], PP);
	}

S1 = fopen(argv[1], "r");
S2 = fopen(argv[4], argv[5]);//a sau w.
P2 = URC1(S1, a1, Y, t, PP / 444, PP, (argc < 7? ':' : argv[6][0]));
P1 = PP;
PP = (strtol(argv[3], &p2, 10) == NUME(argv[1]))? PP : URC1(S1, b1, Y, t, P1 / 444, P1, (argc < 8? ':' : argv[7][0]));
disc = disc <= 52? 52 : disc <= 70? 70 : disc <= 210? 210 : disc <= 240? 240 : disc <= 500? 500 : 1910;//160 pe vechi, nu 200.
printf("%llu %lu %d\n", P2, PP, disc);
fseek(S1, P2-PP, SEEK_CUR);
if(argc == 8) b1++;

mpz_t ns[JG], p1[JG], d1[JG], e1[JG];
for(X = 0; X < JG; X++) mpz_inits(ns[X], d1[X], e1[X], p1[X], NULL);
int k1;

switch(disc) {
	case 52:
	
	while(1) {
		JAVRIL(k, k1, Y, S1, a1, b1, ns);
	
		#pragma omp parallel num_threads(k1)
		#pragma omp single nowait
		for(k = 0; k < k1; k++) {	
			SMVPAR(ns[k], d1[k], e1[k], p1[k], S2, b, b2, i, j, div1, sum1, sumdoi, Y, mpz_scan1(ns[k], 0));
		}

	if(ftell(S1) == PP)
		break;
	}
	break;
	
	case 70:
	
	while(1) {
		JAVRIL(k, k1, Y, S1, a1, b1, ns);
	
		#pragma omp parallel num_threads(k1)
		#pragma omp single nowait
		for(k = 0; k < k1; k++) {
			PURG1PAR(ns[k], d1[k], e1[k], p1[k], S2, b, b2, i, j, div1, sum1, q1, Y, mpz_scan1(ns[k], 0));
		}
		
	if(ftell(S1) == PP)
		break;
	}
	break;
	
	case 210:
	
	while(1) {	
		JAVRIL(k, k1, Y, S1, a1, b1, ns);
		
		#pragma omp parallel num_threads(k1)
		#pragma omp single nowait
		for(k = 0; k < k1; k++) {
			SUMVPAR(ns[k], d1[k], e1[k], p1[k], S2, b, b2, i, j, div1, sum1, q1, Y, mpz_scan1(ns[k], 0));
		}
		
	if(ftell(S1) == PP)
		break;
	}
	break;

	case 240:
	
	while(1) {
		JAVRIL(k, k1, Y, S1, a1, b1, ns);
		
		#pragma omp parallel num_threads(k1)
		#pragma omp single nowait
		for(k = 0; k < k1; k++) {
			DIVV1PAR(ns[k], d1[k], e1[k], p1[k], S2, b, b2, i, j, div1, sum1, q1, C, C1, div, sum, mem, J, l, Y, mpz_scan1(ns[k], 0));		
			}

	if(ftell(S1) == PP)
		break;
	}
	break;
	
	case 500:
	
	while(1) {
		JAVRIL(k, k1, Y, S1, a1, b1, ns);
		
		#pragma omp parallel num_threads(k1)
		#pragma omp single nowait
		for(k = 0; k < k1; k++) {
			DIVVPAR(ns[k], d1[k], e1[k], p1[k], S2, b, b2, i, j, div1, sum1, q1, C, C1, div, sum, mem, J, l, Y, mpz_scan1(ns[k], 0));
			}

	if(ftell(S1) == PP)
		break;
	}
	break;
	
	case 1910:
	
	while(1) {
		JAVRIL(k, k1, Y, S1, a1, b1, ns);
		
		#pragma omp parallel num_threads(k1)
		#pragma omp single nowait
		for(k = 0; k < k1; k++) {
			IMENSPAR(ns[k], d1[k], e1[k], p1[k], S2, b, b2, i, j, div1, sum1, q1, C, C1, div, sum, mem, J, l, Y, mpz_scan1(ns[k], 0));
			}

	if(ftell(S1) == PP)
		break;
	}
	break;
	
	default:
		break;
}

fclose(S1);
fclose(S2);
mpz_clears(d, e, D, E, u, NULL);
for(i = 0; i < 625; i++)
	mpz_clears(C[i], C1[i], NULL);
for(i = 0; i < JG; i++)
	mpz_clears(d1[i], e1[i], p1[i], NULL);
//CUR(S2, argv[4]);
	
sprintf(Y, "./vecung2 %s", argv[4]);
system(Y);
return 0;
}
