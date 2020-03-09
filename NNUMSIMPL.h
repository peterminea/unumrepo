void NUMSIMPLSUS1(char *Q, long PP2, FILE *f1, int f, int W, mpz_t unu, mpz_t doi, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui j, gmp_ui j1, FILE *F2) {
/*
gmp_ui nr, nm;

Cică se face că într-o clasă e un băiat numit Gladius.
Și colegii îl tachinează: „Când oi vrea să devin tată, Gladius o să fie fată”

*
Într-o zi, șeful clasei și premiantul clasei se ceartă pe tema lui Gladius.
Șeful zice:
-Ce mai tura-vura? Ia mai lasă. FETELE TREBUIE RESPECTATE!
Premiantul răspunde:
-Da, și eu sunt de acord să ocrotim animalele.

fscanf("%llu %llu", nr, nm);
La NUMSIMPL cu MODPRIM, ajunge asta, dar este rentabil ca LPT-ul (nu GIG-ul) să fie de maxim câteva zeci de GB.
La HMODIFSUM e nevoie de sumă.


mpz_mul_ui(doi, unu, nr);
mpz_divexact_ui(doi, doi, nm);

versus

fgets(Q1, 1920, SS);
mpz_set_str(doi, Q1, 10);
*/
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W;
		
		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(unu, divInt[f])  && TRAT(j * sumInt[f], j1 * divInt[f])) {
					mpz_mul_ui(doi, unu, divInt[f]);
					SCRIE(doi, Q, F2);
				}
			}		
		
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j, &j1);
		}
}


void NUMSIMPLJOS1(char *Q, long PP2, FILE *f1, int f, int W, mpz_t unu, mpz_t doi, gmp_ui *M, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui j, gmp_ui j1, FILE *F2) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W;
		
		while(1) {
			if(!f--)
				break;
			if(!mpz_divisible_ui_p(unu, M[f]) && mpz_divisible_ui_p(unu, divInt[f]) && TRAT(j1 * sumInt[f], j * divInt[f])) {
					mpz_divexact_ui(doi, unu, divInt[f]);
					SCRIE(doi, Q, F2);
			}
		}	
		
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j, &j1);
		}	
}


void NUMSIMPL(char *Q, long PP2, FILE *f1, int f, int W, mpz_t unu, mpz_t doi, gmp_ui *M, gmp_ui *divInt, gmp_ui *sumInt, gmp_ui j, gmp_ui j1, FILE *F2, int dir) {
dir? NUMSIMPLSUS1(Q, PP2, f1, f, W, unu, doi, divInt, sumInt, j, j1, F2) : NUMSIMPLJOS1(Q, PP2, f1, f, W, unu, doi, M, divInt, sumInt, j, j1, F2);
}
