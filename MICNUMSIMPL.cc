  #include "/NUM.h"
 #include "/ZVERITON.h"
//De prelucrat NUMSIMPL după modelul PUTERNUM.
// ./numsimpl1 166 203 /run/media/root/8TB/LPT201.TXT a 1
void TOL(char **arg) {//125 cu 1.

if(arg[4][0] < 'c') {
	PREP1(arg);
	return;
}

char t, *p1, Q[1920], TEXT[80], l1[50] = "/URIEROIMER.NUM2";
mpz_t unu, doi, trei, d1;
int D, H, L, f, h, I, R, r, jos = strtol(arg[1], &p1, 10), sus = strtol(arg[2], &p1, 10), josul, susul, mem[600];
gmp_ui M[4000], b[D1], b1[D1], PP, PP1, PP2, e, sumInt[4000], divInt[4000], div1[H1][MAX2], sum1[H1][MAX2], p, q[64], qq[64];
long double a;
FILE *f1, *F2;

if(arg[3][0] == '/')
	strcpy(TEXT, arg[3]);

if(arg[4][0] == 'd') {
	REN3(l1);
}

mpz_init_va(unu, doi, trei, d1, NULL);
MICGENERARE(sus, b, D, H);
VUNIFACTUS(sus, b, b1, D, H, div1, sum1, mem, q, qq, 1);
printf("%d %d %d %d %d %d %d\n EVALDE\n", jos, sus, D1, N0, H1, D, H);
strcpy(TEXT, "/GIGM.TXT");
f = 0;
josul = strtol(arg[7], &p1, 10), susul = strtol(arg[8], &p1, 10);

for(I = 0; (f < 4000) && (I < D); I++)
if( (b[I] > josul) && (b[I] < susul)) {//130.
	divInt[f] = b[I];
	M[f] = b[I] * b[I];
	sumInt[f++] = 1 + b[I];
	}

printf("%d\n", f);
jos += 2, sus += 2;
PP = LUNGHEZ2(TEXT);
printf("%llu\n", PP);
f1 = fopen(TEXT, "r");
PP1 = URC1(f1, jos, Q, t, PP/1000, PP, arg[5][0]);
if(t != 'c') {
	printf("%llu Nu e numărul.\n", ftell(f1));
	//return;
}

rewind(f1);
PP2 = URC1(f1, sus, Q, t, PP/1000, PP, '1');
rewind(f1);
fseek(f1, PP1, SEEK_CUR);

do {
fgets(Q, 1920, f1);
	} while(!CIF(Q, strlen(Q), jos-1, sus+1));//CIF2(Q, strlen(Q)).

if(LUNGHEZ2(l1)) {
	fclose(f1);
	return;
}

F2 = fopen(l1, "w");
r = arg[6][0] == 's'? 1 : 0;
r? printf("Pe sus. ") : printf("Pe jos. ");
printf("\n%llu De scris: %s .\n", ftell(f1), l1);
RECIDENTE(l1, TEXT, jos-2, sus-2, arg[0], arg[5], josul, susul, r);
//omp_set_num_threads(4);
NUMSIMPL(Q, PP2, f1, f, R = f, 0, unu, d1, doi, trei, divInt, sumInt, M, b, b1, div1, sum1, D, H, F2, sus, p, q, qq, p1, a, r);
REN1(l1);
printf("FINE\n");
fclose(f1);
fclose(F2);
mpz_clears(unu, doi, trei, d1, NULL);
}

 
int main(int argc, char **argv) {
	if(argc < 9)
		return 1;
	
	TOL(argv);//argv = ./numsimpl 131 140 /run/media/root/8T/LPTUAN140.LPT a 1 s
return 0;
}
