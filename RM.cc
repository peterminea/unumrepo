#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
if(argc < 1)
	return 1;
FILE *F = fopen(argv[1], "w");
fclose(F);
system("sleep 60");
remove(argv[1]);
return 0;
}
