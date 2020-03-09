#include "/TOLIL.h"


void GIGM() {
		char Y[150], TEXT[50] = "/run/media/root/3TB/GIG52.TXT", t;
		FILE *F1 = fopen(TEXT, "r"), *F2 = fopen("/GIGM.TXT", "w");
		gmp_ui PP = LUNGHEZ2(TEXT), PP1 = URC1(F1, 19, Y, t, 50000000U, PP, ':');
		printf("Totul: %llu, la 19 e: %llu.\n", PP, PP1);
		rewind(F1);
		mpz_t u, v, v1, w;
		int l;
		mpz_inits(u, v, v1, w, NULL);
		mpz_ui_pow_ui(w, 2, 64);
		
		CITR(8200000, F2, F1, PP1);
		rewind(F1);
		fseek(F1, PP1, SEEK_CUR);
		
		while(1) {
			if(ftell(F1) == PP)
				break;

			fgets(Y, 150, F1);
			mpz_set_str(u, Y, 10);
			l = mpz_scan1(u, 0);
			mpz_set_ui(v, 0);
			mpz_setbit(v, l);
			mpz_divexact(v1, u, v);
			if(mpz_cmp(v1, w) < 0) {//v1*v
				//gmp_fprintf(F2, "%Zd*%Zd\n", v1, v);
				fputs(Y, F2);
			}
		}
		
		fclose(F1);
		fclose(F2);
		mpz_clears(u, v, v1, w, NULL);
}

int main(int argc, char **argv) {
GIGM();
return 0;
}
