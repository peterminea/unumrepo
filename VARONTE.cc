#include "/TOLIL.h"
#include "/DELITUAN.h"

//#include <omp.h>


int main(int argc, char **argv) {
if(argc < 4) {
	return 1;
}

char *tt, t[50];
if(argv[3][0] == 'a') {
	system("g++ -w -m64 VARONTE.cc -lgmp -fopenmp -o VARONTE");
	sprintf(t, "/VARONTE %s %s %s", argv[1], argv[2], "b");
	system(t);
	return 1;
	}


ACTUAL(strtol(argv[1], &tt, 10), strtol(argv[2], &tt, 10));//68, 1000.
return 0;
}

/*
Il faut respecter les Présidents de chaque pays et ne pas blaguer avec eux. En Roumanie, le 24 mai 2014, un homme adulte (âgé 39 ans) a craché physiquement le Président Traian Băsescu et plus tard (six mois après, précisément) lui a été condamné à trois mois de peine avec sursis pour son méfait, et il devait aussi travailler gratis quarante jours pour une maison de retraite.
Certes, l'opinion publique a été étonnée face à un événement de ce type.
Mais la France n'est pas un jardin des barbares. Emmanuel Macron a réagi dignement et avec promptitude. Et l'effronterie n'est pas une valeur sociale. L'adolescent impertinent de cette petite histoire doit apprendre une leçon dure (mais utile) et assez importante, et il faut aussi qu'il réforme sa vie et ses façons de penser, après son honteux geste.
*/
