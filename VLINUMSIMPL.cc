 #include <stdio.h>
 #include <gmp.h>
 #include "/GMP64.h"
 #include "/VLITOLIL.h"
 #include "/VLIZ.h"
 
//De prelucrat NUMSIMPL după modelul PUTERNUM.
// ./numsimpl1 166 203 /run/media/root/8TB/LPT201.TXT
void TOL(char *TEXT, char *josul, char *susul) {
char t, *p1, G[1920], Q[1920], l1[50] = "/run/media/root/5TB/CALCEROSIS.NUM2";
int320 C[E1], C1[E1];
int256 div[K2][MAX1], sum[K2][MAX1];
int512 unu, doi, trei, d, d1;
int D, E, H, K, L, f, h, Y, l, I, R, r, jos = strtol(josul, &p1, 10), sus = strtol(susul, &p1, 10), v = 1048577;
gmp_ui A1[4000], A2[4000], M[4000], b[D1], b1[D1], PP, PP1, PP2, e, j, j1, sumInt[4000], divInt[4000], div1[H1-K2][MAX2], sum1[H1-K2][MAX2];

fstream f1, f2;
/*
mpz_init_va(unu, doi, trei, d, d1, NULL);
INIT(K2, div, sum);
for(int i = 0; i < E1; i++) {
	mpz_inits(C[i], C1[i], NULL);
}*/
//GENERARE(sus, b, C, D, H, E, K, I, L, K2);//GENERARE și GENERARE2 fără INV() după ele, îl au în ele.
GENERARE2(sus, b, C, D, H, E, K, I, L, sus > 160);
UNIFACTUS(sus, b, b1, C, C1, D, E, H, K, div, sum, div1, sum1, 1);
printf("%d %d %d %d %d %d %d\n%d %d %d %d EVALDE\n", jos, sus, D1, E1, N0, H1, K2, D, E, H, K);
TXT(sus, TEXT);
f = 0;

for(I = 0; (f < 2) && (I < D); I++)
if( (b[I] > 392) && (b[I] < 420)) {
	divInt[f] = b[I];
	M[f] = b[I] * b[I];
	A2[f++] = 1 + b[I];
	}

printf("%d\n", f);
jos += 2, sus += 2;
f1.open(TEXT, ios::append);
PP = ftell(f1);
f1.close();
printf("%llu\n", PP);
f1.open(TEXT, ios::in);
PP1 = URC1(f1, jos, Q, t, 500000000L, PP, '1');
if(t != 'c') {
	printf("%llu Nu e numărul.\n", ftell(f1));
	//return;
}

rewind(f1);
PP2 = URC1(f1, sus, Q, t, 500000000L, PP, '1');
rewind(f1);
fseek(f1, PP1, SEEK_CUR);

f1.seekg (0, f1.end);
int length = f1.tellg();
f1.seekg (0, f1.beg);

do {
fgets(Q, 1920, f1);
	} while(!CIF(Q, strlen(Q), jos-1, sus+1));//CIF2(Q, strlen(Q)).
F2 = fopen(l1, "a");
if(ftell(F2)) {
	fclose(F2);
	return;
	}
fclose(F2);

F2 = fopen(l1, "w");
printf("\n%llu De scris: %s .\n", ftell(f1), l1);
r = 1;//1 sus, 0 jos.
NUMSIMPL(Q, PP2, f1, f, R = f, 0, unu, d, d1, doi, trei, divInt, sumInt, A1, M, A2, b, b1, C, C1, div, sum, div1, sum1, D, E, H, K, j, j1, v, G, F2, sus, r);
printf("FINE\n");
f1.close();
F2.close();

mpz_clears(unu, doi, trei, d, d1, NULL);
for(e = 0; e < 618; e++)
	mpz_clears(C[e], C1[e], NULL);
}

 
int main(int argc, char **argv) {
	if(argc < 3) return 1;
	TOL((argc == 4? argv[3] : new char[80]), (argv[1]), (argv[2]));
return 0;
}
