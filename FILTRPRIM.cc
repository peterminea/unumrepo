#include "/TOLIL.h"


int main(int argc, char **argv) {
	if(argc < 2)
		return 1;
	FILE *F, *F1;
	long D = LUNGHEZ2(argv[1]);
	printf("%ld\n", D);
	char t[40];
	sprintf(t, "%sP", argv[1]);
	F = fopen(argv[1], "r");
	F1 = fopen(t, "w");
	gmp_ui p;
	int i = 0;

	while(1) {
		if(ftell(F) == D)
			break;
		fscanf(F, "%llu", &p);
		if(EPRIM(p)) {
			fprintf(F1, "%llu\n", p);
			i++;
		}
	}

	fclose(F);
	fclose(F1);
	printf("Sunt %d %snumere prime în %s.\n", i, PREP(i), argv[1]);

return 0;
}
