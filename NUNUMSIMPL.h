void UNUMSIMPLSUS1(char *Q, long PP2, FILE *f1, int f, int W, mpz_t unu, mpz_t doi, gmp_ui divInt, gmp_ui sumInt, gmp_ui j, gmp_ui j1, FILE *F2) {
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


*** Nu chema Fericirea pe nume, că fuge! ***

Să ne imaginăm că un tată „conlocuitor” are, printre copii, o fiică pe nume Fericirea (!).
Și ciocolățica mică se joacă lângă priză, iar „Yasu-Tasu” urlă o dată la ea:
-FERICIREO!!!
Și fata fuge.


*** BANC EVREIESC ***

Lui Șmil i-a murit nevasta și el se întoarce de la înmormântare.
Când să intre în casă, de pe acoperiș poc! o cărămidă în cap.
-Ce e, Rifca, ai și ajuns sus?


*** ALT BANC EVREIESC ***

Rifca îl apostrofează pe Moșe:
-Unde ați fi fost dacă nu ar fi existat femeia...
-Cum unde? În Paradis!


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
			if(!mpz_divisible_ui_p(unu, divInt)  && TRAT(j * sumInt, j1 * divInt)) {
					mpz_mul_ui(doi, unu, divInt);
					SCRIE(doi, Q, F2);
				}
			
		
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j, &j1);
		}
}


void UNUMSIMPLJOS1(char *Q, long PP2, FILE *f1, int f, int W, mpz_t unu, mpz_t doi, gmp_ui M, gmp_ui divInt, gmp_ui sumInt, gmp_ui j, gmp_ui j1, FILE *F2) {
	while(1) {
		mpz_set_str(unu, Q, 10);
		f = W;		
		
			if(!mpz_divisible_ui_p(unu, M) && mpz_divisible_ui_p(unu, divInt) && TRAT(j1 * sumInt, j * divInt)) {
					mpz_divexact_ui(doi, unu, divInt);
					SCRIE(doi, Q, F2);
			}
		
		if(!(ftell(f1) ^ PP2))
			break;
		fseek(f1, 1, SEEK_CUR);
		fgets(Q, 1920, f1);
		fscanf(f1, "%llu%llu", &j, &j1);
		}	
}


void UNUMSIMPL(char *Q, long PP2, FILE *f1, int f, int W, mpz_t unu, mpz_t doi, gmp_ui M, gmp_ui divInt, gmp_ui sumInt, gmp_ui j, gmp_ui j1, FILE *F2, int dir) {
dir? UNUMSIMPLSUS1(Q, PP2, f1, f, W, unu, doi, divInt, sumInt, j, j1, F2) : NUMSIMPLJOS1(Q, PP2, f1, f, W, unu, doi, M, divInt, sumInt, j, j1, F2);
}
