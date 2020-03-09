#ifndef _DETRITO_H
#define _DETRITO_H

#define MS 5
#define MS1 MS-1

#define MAX1TOT 120
#define MAX11000 100
#define MAX1500 42
#define MAX1300 25
#define MAX1270 25
#define MAX1240 20
#define MAX1M 15

#define HTOT 538
#define DTOT 7229
#define D1910 5394
#define NTOT 8767
#define N1910 5820
#define KTOT 22
#define STOT 47
#define ETOT 1538

#define H420 337
#define D420 3632
#define N420 3655
#define K420 14
#define S420 18

#define H240 291
#define D240 3447
#define N240 3452
#define K240 8
#define S240 10

#define H160 278
#define D160 3410
#define N160 3413
#define K160 0

#define H130 267
#define D130 3383
#define N130 3386
#define K130 0

#define H100 241
#define D100 3348
#define N100 3351
#define K100 0

#define H80 231
#define D80 3338
#define N80 3341
#define K80 0

#define H52 221
#define D52 3339
#define N52 3339
#define K52 0

#define HP 125
#define DP 2705
#define NP 2705
#define KP 0


void DETRITO(char A[][100], char *p, char *pt, int H, int D, int N, int E, int K, int MAX01, int MAX02, int sus, FILE *F, int tot) {
	if(sus >= 421) {
	H = HTOT;
	D = tot? DTOT : D1910;
	N = tot? NTOT : N1910;
	K = KTOT;
	MAX01 = 152;
	MAX02 = 15;
	strcpy(p, tot? "/GIG.TXT" : "/P2.TXT");
	strcpy(pt, "/PUTERITOT.TXT");
	
	} else if(sus >= 241) {
		H = H420;
		D = D420;
		N = N420;
		K = K420;
		MAX01 = 68;
		MAX02 = 12;
		strcpy(p, "/CF420.TXT");
		strcpy(pt, "/PUTERI420.TXT");
	} else if(sus >= 161) {
		H = H240;
		D = D240;
		N = N240;
		K = K240;
		MAX01 = 50;
		MAX02 = 12;
		strcpy(p, "/CF240.TXT");
		strcpy(pt, "/PUTERI240.TXT");
	} else if(sus >= 131) {
		H = H160;
		D = D160;
		N = N160;
		K = K160;
		MAX01 = 42;
		MAX02 = MAX01;
		strcpy(p, "/CF160.TXT");
		strcpy(pt, "/PUTERI160.TXT");
	} else if(sus >= 101) {
		H = H130;
		D = D130;
		N = N130;
		K = K130;
		MAX01 = 38;
		MAX02 = MAX01;
		strcpy(p, "/CF130.TXT");
		strcpy(pt, "/PUTERI130.TXT");
	} else if(sus >= 81) {
		H = H100;
		D = D100;
		N = N100;
		K = K100;
		MAX01 = 32;
		MAX02 = MAX01;
		strcpy(p, "/CF100.TXT");
		strcpy(pt, "/PUTERI100.TXT");
	} else if(sus >= 53) {
		H = H80;
		D = D80;
		N = N80;
		K = K80;
		MAX01 = 30;
		MAX02 = MAX01;
		strcpy(p, "/CF80.TXT");
		strcpy(pt, "/PUTERI80.TXT");
	} else {
		H = H52;
		D = D52;
		N = N52;
		K = K52;
		MAX01 = 28;
		MAX02 = MAX01;
		strcpy(p, "/CF52.TXT");
		strcpy(pt, "/PUTERI52.TXT");	
	}

	E = N - D;

	sprintf(A[0], "#define H1 %d\n", H);
	sprintf(A[1], "#define D1 %d\n", D);
	sprintf(A[2], "#define N0 %d\n", N);
	sprintf(A[3], "#define E1 %d\n", E);
	sprintf(A[4], "#define K2 %d\n", K);
	sprintf(A[5], "#define MAX1 %d\n", MAX01);
	sprintf(A[6], "#define MAX2 %d\n", MAX02);
	sprintf(A[7], "#define PRIME \"%s\"\n", p);
	sprintf(A[8], "#define PUTERI \"%s\"\n", pt);

	F = fopen("/CIF.h", "w");

	for(int i = 0; i < 9; i++) {
		fputs(A[i], F);
		puts(A[i]);
		}

	fclose(F);
}

#endif
