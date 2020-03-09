#include <cstring>
#include "/TOLIL.h"
#include <ctype.h>

mpz_t a[3000000000U];

int main(int argc, char **argv) {
	if(argc != 2) {
		return 1;
	}
	
	LITUAN(a, argv[1]);
	//PUTERVEC();
	/*
	FLIT = fopen("/PUTERITOT.TXT", "r");
	FILE *IJ = fopen("/INDTOTJ.TXT", "w");
	int i = 0, j;
	while(!feof(FLIT)) {
		fgets(Y, 1920, FLIT);
		char *c = Y;
		i++;
		j = 0;
		while(*c) {			
			if (isdigit(*c)) { // Upon finding a digit, ...
				long val = strtol(c, &c, 10); // Read a number, ...
				j++;
				if( (j == 2) && (i < 331)) {				
					fprintf(IJ, "%d\n", val);
				}
			    } else { // Otherwise, move on to the next character.
				c++;
			    }
		}

		if(i < 331) puts(Y);
	}
	
	fclose(IJ);
	fclose(FLIT);*/
	
return 0;
}
