#include <stdio.h>
#include "/GMP64.h"
#include "/TEXTUL.h"
#include <stdlib.h>

int main(int argc, char **argv) {
if( (argc < 4) || (argc > 7) ) {
	return 1;
}

FILE *F1, *F2;
gmp_ui P, P1, P2;
char *r;

F1 = fopen(argv[1], "a");//Sursa.
P = ftell(F1);
fclose(F1);
if(!P) {
	remove(argv[1]);
	return 1;
	}
	
F2 = fopen(argv[1], "r");
F1 = fopen(argv[2], argv[3]);//Destinaţia, w, r+ sau a.

if(argc > 4) {
	P1 = strtol(argv[4], &r, 10);
	if(P < P1) 
		return 1;
		
	fseek(F2, P1, SEEK_CUR);	
	if(argc >= 6) {
		P = strtol(argv[5], &r, 10);
		if(argc == 7) {//Numai r+ la destinație.
			P2 = strtol(argv[6], &r, 10);
			fseek(F1, P2, SEEK_SET);
			}
		}

	P -= P1;
	}
	
CITR(P < 8330000? 1000 : 8330000, F1, F2, P);
//fputc('\n', F1);
fclose(F1);
fclose(F2);

return 0;
}
