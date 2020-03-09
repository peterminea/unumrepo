#include "/NUM.h"

int main(int argc, char **argv) {
if(argc < 6) {
	return 1;
}

unsigned long P, P1, P2, PP;
char *p2, t, w1, Y[2000];
int I, i, j, J, K, V, l, p, q, R1, r, X, K1 = 0, a1 = 2 + strtol(argv[2], &p2, 10), b1 = 2 + strtol(argv[3], &p2, 10), disc, mem[600];
gmp_ui b[5400], b2[5400], DD, dd, k, p1, div1[H1][MAX2], sum1[H1][MAX2], divdoi[64], sumdoi[64];
mpz_t d, e, D, E, d1, e1, u;
FILE *S1, *S2;

disc = b1-2;//+ 420;
mpz_init_va(d, e, D, d1, e1, E, u, NULL);
for(i = 0; i < 5400; i++)
	b2[i] = 1;

MICGENERARE(disc, b, i, j);
VUNIFACTUS(disc, b, b2, i, j, div1, sum1, mem, sumdoi, divdoi, 1);
PP = LUNGHEZ2(argv[1]);
if(!PP || !FILEEXISTS(argv[1])) {
	printf("%s nu este.\n", argv[1]);
	return 1;
	} else {
	printf("PP de la %s e %llu.\n", argv[1], PP);
	}

S1 = fopen(argv[1], "r");
S2 = fopen(argv[4], argv[5]);//a sau w.
P1 = PP;
PP = (strtol(argv[3], &p2, 10) == NUME(argv[1]))? PP : URC1(S1, b1, Y, t, PP / 100, P1, (argc < 8? ':' : argv[7][0]));
rewind(S1);
fseek(S1, P2, SEEK_CUR);

disc = disc <= 18? 18 : 52;
P2 = URC1(S1, a1, Y, t, PP / 100, P1, (argc < 7? ':' : argv[6][0]));
printf("%llu %lu %d\n", P2, PP, disc);
if(argc == 8) b1++;

P = disc ^ 18? URC1(S1, 20, Y, t, PP / 100, P1, ':') : PP;
rewind(S1);
if(a1 < 20)
	while(1) {
		fgets(Y, 1920, S1);

		if( (strlen(Y) >= a1) && (strlen(Y) < b1) ) {
			DD = strtoul(Y, &p2, 10);
			p1 = DD >> (X = gmp_scan1(DD, divdoi, 0));
			VSMV(p1, dd, b, b2, i, j, X, div1, sum1, sumdoi[X]);
			if( (dd >= DD) && MICVALID(DD, dd) )
				fputs(Y, S2);
				//else
				//gmp_printf("%Zd N %Zd S %Zd d1 %d\n%s %llu\n\n", D, e1, d1, strlen(Y), Y, ftell(S1));
			}

		if(ftell(S1) >= P)
			break;
	}

if(disc ^ 18)
	while(1) {
		fgets(Y, 1920, S1);

		if( (strlen(Y) >= a1) && (strlen(Y) < b1) ) {
			X = NUMPREL0(Y, p2, D, p1, divdoi, 0);
			VSME(p1, e1, b, b2, i, j, X, div1, sum1, sumdoi[X]);
			if( (mpz_cmp(e1, D) >= 0) && (VALID(D, d1, e1) == 1) )
				fputs(Y, S2);
			}

		if(ftell(S1) >= PP)
			break;
	}

fclose(S1);
fclose(S2);
printf("%ld are noul fișier și PP era %ld.\n", LUNGHEZ2(argv[4]), PP - P2);
mpz_clears(d, e, D, d1, e1, E, u, NULL);
sprintf(Y, "./vecung2 %s", argv[4]);
system(Y);
return 0;
}

//131 3 133 3 135 3 137 2 139 4 141 6 150 155 160.
