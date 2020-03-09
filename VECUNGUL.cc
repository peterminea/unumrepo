#include <gmp.h>
#include <stdio.h>
#include "/TOLIL.h"
#include "/ACTUAL3.h"
#include <time.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>

#define F 16828946344U
#define L 22808


int EXTR(const char *a) {
int i1;//, i2, i3;
if (1 == sscanf(a,
                "%*[^0123456789]%d",
                &i1//,
                //&i2,
                //&i3
                ))
{
    printf("%d\n", i1);
}

return i1;
}


int main(int argc, char **argv) {
if(argc > 7) {
	return 1;
}

ACTUAL(F, NUME(argv[1]), NUME(argv[2]), (argc == 6? argv[5] : new char[80]), NUME(argv[3]), argv[4][0], argv[5][0]);
return 0;
}
