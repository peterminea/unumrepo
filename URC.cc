#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include "/URC.h"
#include "/TEXTUL.h"

int main(int argc, char **argv)
{
if( (argc < 4) 
	|| ( (argc > 4) && (strlen(argv[argc-1]) > 1 || strlen(argv[4]) > 1) ))
	return 0;
	
char t, u, v, Q[1920], *r;	
long pas = strtol(argv[1], &r, 10);
if(pas == 0)
	return 0;

const char *TEXT = argv[2];
int jos = strtol(argv[3], &r, 10);
gmp_ui P = LUNGHEZ2(TEXT);
//argv[4] = prima cifră, argv[5] a doua.
FILE *f1 = fopen(TEXT, "r");
u = (argc >= 5? argv[4][0] : ':');
v = (argc == 6? argv[5][0] : ':');

printf("%llu\n", argc == 5? URC1(f1, jos + 2, Q, t, pas, P, u) : URC2(f1, jos + 2, Q, t, pas, P, u, v));
printf("%c %d\n",  Q[0], strlen(Q) - 2);
fclose(f1);
return 0;
}
