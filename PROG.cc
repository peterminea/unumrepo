#include "/TOLIL.h"

int main(int argc, char **argv) {// /prog FILTRAR2 c sau s.
if(argc < 2)
	return 1;
	
char buf[300];
FILE *FP;
int pnum[20], pn = 0;

PIDOF(argv[1], buf, FP, pnum, pn);

for(int i = 0; i < pn; i++) {
	argc ^ 3? sprintf(buf, "kill %d", pnum[i]) : sprintf(buf, "kill -%s %d", argv[2][0] == 'c'? "CONT" : "STOP", pnum[i]);
	puts(buf);
	system(buf);
	}

return 0;
}
