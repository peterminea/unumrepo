#ifndef _URC_H
#define _URC_H

#include "/GMP64.h"


void DEPL(FILE *f1, char &t1, gmp_ui a) {
fseek(f1, a, SEEK_CUR);
do	{
	fscanf(f1, "%c", &t1);
	}
while(t1 ^ '\n');
}


void UDEPL1(FILE *f1, char &t1, gmp_ui a, char *Y) {//Mai departe.
fseek(f1, a, SEEK_CUR);
a = ftell(f1);
fgets(Y, 1920, f1);
fgets(Y, 1920, f1);
if(strlen(Y) < 11)
	do { fgets(Y, 1920, f1); } while(strlen(Y) < 11);
fseek(f1, a - ftell(f1), SEEK_CUR);
}


void UDEPLMIN(FILE *f1, char &t1, gmp_ui a, char *Y) {//Înapoi.
fseek(f1, -a, SEEK_CUR);
fgets(Y, 1920, f1);
if(strlen(Y) < 11)
	do { fgets(Y, 1920, f1); } while(strlen(Y) < 11);
}


void DEPL1(FILE *f1, char &t1, gmp_ui a, char *Y) {//Mai departe.
fseek(f1, a, SEEK_CUR);
a = ftell(f1);
fgets(Y, 1920, f1);
fgets(Y, 1920, f1);
//if(strlen(Y) < 10)
	//do { fgets(Y, 1920, f1); } while(strlen(Y) < 10);
fseek(f1, a - ftell(f1), SEEK_CUR);
}


void DEPLMIN(FILE *f1, char &t1, gmp_ui a, char *Y) {//Înapoi.
fseek(f1, -a, SEEK_CUR);
fgets(Y, 1920, f1);
//if(strlen(Y) < 10)
	//do { fgets(Y, 1920, f1); } while(strlen(Y) < 10);
}


void USUS(FILE *f1, char &w, gmp_ui Q1, char *Q, int a1, gmp_ui PP, char pcif) {
fgets(Q, 1920, f1);
fseek(f1, -strlen(Q), SEEK_CUR);

if(strlen(Q) == a1 && ( (pcif == ':') || (Q[0] > pcif) ) )  {
	//if(pcif ^ ':') {fgets(Q, 1920, f1); fgets(Q, 1920, f1);}
	w = 's';
	return;
}

gmp_ui prag = PP - Q1;

if(pcif == ':') {
	while(1) {
		UDEPL1(f1, w, Q1, Q);

		if( (strlen(Q) >= a1) || (ftell(f1) > prag) ) {
			UDEPLMIN(f1, w, Q1, Q);
			break;
			}
		}

	while( (strlen(Q) < a1) && (PP > ftell(f1)) ) {
		fgets(Q, 1920, f1);
		}

	if( (strlen(Q) == a1))
		fseek(f1, -strlen(Q), SEEK_CUR);
} else {
	while(1) {
		UDEPL1(f1, w, Q1, Q);
		if( ( (strlen(Q) == a1) && (Q[0] >= pcif))
			|| (a1 < strlen(Q))
			|| (ftell(f1) > prag) ) {
				UDEPLMIN(f1, w, Q1, Q);
				break;
			}
		}

	if( (a1 < strlen(Q)) && (ftell(f1) == strlen(Q)) ) {
		rewind(f1);
	}
	else
	while( !( ( (strlen(Q) == a1) && (Q[0] >= pcif) ) || (strlen(Q) > a1) ) && (PP > ftell(f1)) ) {
		fgets(Q, 1920, f1);
		}

	if( ( (strlen(Q) == a1) && (Q[0] == pcif) )) {
		fseek(f1, -strlen(Q), SEEK_CUR);}	
	}
}


void SUS(FILE *f1, char &w, gmp_ui Q1, char *Q, int a1, gmp_ui PP, char pcif) {
fgets(Q, 1920, f1);
fseek(f1, -strlen(Q), SEEK_CUR);

if(strlen(Q) == a1 && ( (pcif == ':') || (Q[0] > pcif) ) )  {
	//if(pcif ^ ':') {fgets(Q, 1920, f1); fgets(Q, 1920, f1);}
	w = 's';
	return;
}

gmp_ui prag = PP - Q1;

if(pcif == ':') {
	while(1) {
		DEPL1(f1, w, Q1, Q);

		if( (strlen(Q) >= a1) || (ftell(f1) > prag) ) {
			DEPLMIN(f1, w, Q1, Q);
			break;
			}
		}

	while( (strlen(Q) < a1) && (PP > ftell(f1)) ) {
		fgets(Q, 1920, f1);
		}

	if( (strlen(Q) == a1))
		fseek(f1, -strlen(Q), SEEK_CUR);
} else {
	while(1) {
		DEPL1(f1, w, Q1, Q);
		if( ( (strlen(Q) == a1) && (Q[0] >= pcif))
			|| (a1 < strlen(Q))
			|| (ftell(f1) > prag) ) {
				DEPLMIN(f1, w, Q1, Q);
				break;
			}
		}

	if( (a1 < strlen(Q)) && (ftell(f1) == strlen(Q)) ) {
		rewind(f1);
	}
	else
	while( !( ( (strlen(Q) == a1) && (Q[0] >= pcif) ) || (strlen(Q) > a1) ) && (PP > ftell(f1)) ) {
		fgets(Q, 1920, f1);
		}

	if( ( (strlen(Q) == a1) && (Q[0] == pcif) )) {
		fseek(f1, -strlen(Q), SEEK_CUR);}
	}
}


void SUS2(FILE *f1, char &w, gmp_ui Q1, char *Q, int a1, gmp_ui PP, char pcif, char pcif2) {
fgets(Q, 1920, f1);
fseek(f1, -strlen(Q), SEEK_CUR);

if(strlen(Q) == a1 
	&& ( (pcif == ':') 
		|| (Q[0] > pcif) 
		|| ((Q[0] == pcif) && ((pcif2 == ':') || (Q[1] > pcif2))))) {
	w = 's';
	return;
}

gmp_ui prag = PP - Q1;

if(pcif == ':') {
	while(1) {
		DEPL1(f1, w, Q1, Q);

		if( (strlen(Q) >= a1) || (ftell(f1) > prag) ) {
			DEPLMIN(f1, w, Q1, Q);
			break;
			}
		}

	while( (strlen(Q) < a1) && (PP > ftell(f1)) ) {
		fgets(Q, 1920, f1);
		}

	if( (strlen(Q) == a1))
		fseek(f1, -strlen(Q), SEEK_CUR);
} else {
	if(pcif2 ^ ':')
		while(1) {
			DEPL1(f1, w, Q1, Q);
			if(((strlen(Q) == a1) && ((Q[0] > pcif) || ((Q[0] == pcif) && (Q[1] >= pcif2))))
				|| (a1 < strlen(Q))
				|| (ftell(f1) > prag) ) {
					DEPLMIN(f1, w, Q1, Q);
					break;
				}
			}
	else
		while(1) {
			DEPL1(f1, w, Q1, Q);
			if(((strlen(Q) == a1) && (Q[0] >= pcif))
				|| (a1 < strlen(Q))
				|| (ftell(f1) > prag)) {
					DEPLMIN(f1, w, Q1, Q);
					break;
				}
		}

	if( (a1 < strlen(Q)) && (ftell(f1) == strlen(Q)) ) {
		rewind(f1);
	}
	else if(pcif2 == ':')
		while(!(((strlen(Q) == a1) && (Q[0] >= pcif)) || (strlen(Q) > a1)) && (PP > ftell(f1))) {
			fgets(Q, 1920, f1);
			}
	else
		while(!(((strlen(Q) == a1) && (((Q[0] == pcif) && (Q[1] >= pcif2)) || (Q[0] > pcif))) || (strlen(Q) > a1) ) 
			&& (PP > ftell(f1))) {
			fgets(Q, 1920, f1);
			}

	if( (strlen(Q) == a1)
		&& (Q[0] == pcif)
		&& (pcif2 == ':'? (1==1) : (Q[1] == pcif2))) {
		fseek(f1, -strlen(Q), SEEK_CUR);}
	}
}


void USUS2(FILE *f1, char &w, gmp_ui Q1, char *Q, int a1, gmp_ui PP, char pcif, char pcif2) {
fgets(Q, 1920, f1);
fseek(f1, -strlen(Q), SEEK_CUR);

if(strlen(Q) == a1 
	&& ( (pcif == ':') 
		|| (Q[0] > pcif) 
		|| ((Q[0] == pcif) && ((pcif2 == ':') || (Q[1] > pcif2))))) {
	w = 's';
	return;
}

gmp_ui prag = PP - Q1;

if(pcif == ':') {
	while(1) {
		UDEPL1(f1, w, Q1, Q);

		if( (strlen(Q) >= a1) || (ftell(f1) > prag) ) {
			UDEPLMIN(f1, w, Q1, Q);
			break;
			}
		}

	while( (strlen(Q) < a1) && (PP > ftell(f1)) ) {
		fgets(Q, 1920, f1);
		}

	if( (strlen(Q) == a1))
		fseek(f1, -strlen(Q), SEEK_CUR);
} else {
	if(pcif2 ^ ':')
		while(1) {
			UDEPL1(f1, w, Q1, Q);
			if(((strlen(Q) == a1) && ((Q[0] > pcif) || ((Q[0] == pcif) && (Q[1] >= pcif2))))
				|| (a1 < strlen(Q))
				|| (ftell(f1) > prag) ) {
					UDEPLMIN(f1, w, Q1, Q);
					break;
				}
			}
	else
		while(1) {
			UDEPL1(f1, w, Q1, Q);
			if(((strlen(Q) == a1) && (Q[0] >= pcif))
				|| (a1 < strlen(Q))
				|| (ftell(f1) > prag)) {
					UDEPLMIN(f1, w, Q1, Q);
					break;
				}
		}

	if( (a1 < strlen(Q)) && (ftell(f1) == strlen(Q)) ) {
		rewind(f1);
	}
	else if(pcif2 == ':')
		while(!(((strlen(Q) == a1) && (Q[0] >= pcif)) || (strlen(Q) > a1)) && (PP > ftell(f1))) {
			fgets(Q, 1920, f1);
			}
	else
		while(!(((strlen(Q) == a1) && (((Q[0] == pcif) && (Q[1] >= pcif2)) || (Q[0] > pcif))) || (strlen(Q) > a1) ) 
			&& (PP > ftell(f1))) {
			fgets(Q, 1920, f1);
			}

	if( (strlen(Q) == a1)
		&& (Q[0] == pcif)
		&& (pcif2 == ':'? (1==1) : (Q[1] == pcif2))) {
		fseek(f1, -strlen(Q), SEEK_CUR);}
	}
}


gmp_ui URC(FILE *F1, int a1, char *Q, char &t, gmp_ui pas, gmp_ui PP, char pcif) {
	SUS(F1, t, pas, Q, a1, PP, pcif);

	if(((strlen(Q) == a1) && (pcif == ':'? 1==1 : Q[0] == pcif)))	{
		t = 'c';
		} else {
		fseek(F1, -strlen(Q), SEEK_CUR);
		}

	printf("%lu\n", ftell(F1));	
	return ftell(F1);
}


gmp_ui URC1(FILE *F1, int a1, char *Q, char &t, gmp_ui pas, gmp_ui PP, char pcif) {
	SUS(F1, t, pas, Q, a1, PP, pcif);

	if(!( (strlen(Q) == a1) && (pcif == ':'? 1==1 : Q[0] == pcif))) {
		if(PP ^ ftell(F1) && (t != 's'))
			fseek(F1, -strlen(Q), SEEK_CUR);

		if(strlen(Q) ^ a1) {
			//printf("Rezultat 0.\n");
			t = 'n';
			}
		}

	return ftell(F1);
}


gmp_ui UURC1(FILE *F1, int a1, char *Q, char &t, gmp_ui pas, gmp_ui PP, char pcif) {
	USUS(F1, t, pas, Q, a1, PP, pcif);

	if(!( (strlen(Q) == a1) && (pcif == ':'? 1==1 : Q[0] == pcif))) {
		if(PP ^ ftell(F1) && (t != 's'))
			fseek(F1, -strlen(Q), SEEK_CUR);

		if(strlen(Q) ^ a1) {
			//printf("Rezultat 0.\n");
			t = 'n';
			}
		}

	return ftell(F1);
}


gmp_ui URC2(FILE *F1, int a1, char *Q, char &t, gmp_ui pas, gmp_ui PP, char pcif, char scif) {
	SUS2(F1, t, pas, Q, a1, PP, pcif, scif);

	if(!((strlen(Q) == a1) 
		&& (pcif == ':'? 1==1 : Q[0] == pcif)
		&& (scif == ':'? 1==1 : Q[1] == scif)
		)) {
		if(PP ^ ftell(F1))
			fseek(F1, -strlen(Q), SEEK_CUR);

		if(strlen(Q) ^ a1) {
			t = 'n';
			}
		}

	return ftell(F1);
}


gmp_ui UURC2(FILE *F1, int a1, char *Q, char &t, gmp_ui pas, gmp_ui PP, char pcif, char scif) {
	USUS2(F1, t, pas, Q, a1, PP, pcif, scif);

	if(!((strlen(Q) == a1) 
		&& (pcif == ':'? 1==1 : Q[0] == pcif)
		&& (scif == ':'? 1==1 : Q[1] == scif)
		)) {
		if(PP ^ ftell(F1))
			fseek(F1, -strlen(Q), SEEK_CUR);

		if(strlen(Q) ^ a1) {
			t = 'n';
			}
		}

	return ftell(F1);
}
#endif
