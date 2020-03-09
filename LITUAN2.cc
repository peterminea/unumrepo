#include <cstring>
#include "/TOLIL.h"
#include <ctype.h>
#include <cstdlib>

char A[N1][DIMM];

int main(int argc, char **argv) {
	if(argc < 3) {
		return 1;
	}

FILE *FLIT = fopen(argv[1], "r");

if(argv[2][0] == 'a') {	
	printf("LITUAN2 apelat ca atare, NU de la DILITUAN.\n");
	char S[1920];	
	int min, max;
	long PP = LUNGHEZ2(argv[1]);
	CALCMINMAX(min, max, FLIT, PP, S);
	min++, max += 2;
	PREGTEXT(FLIT, 127000000000U / max, max, PP, min, max, S, argv[1]);
	return 0;
	}
	
LITUAN2(A, FLIT, LN, argv[1], MIN, MAX);
return 0;
}
