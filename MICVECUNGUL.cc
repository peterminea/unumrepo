#include "/NUM.h"
#include "/ACTUALV3.h"
#include <time.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

#define F 16828946344U
#define L 22808

int main(int argc, char **argv) {
if(argc > 6) {
	return 1;
}

ACTUAL(F, NUME(argv[1]), NUME(argv[2]), (argc == 6? argv[5] : new char[80]), NUME(argv[3]), argv[4][0]);
return 0;
}