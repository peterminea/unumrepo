#ifndef _DETRITO_H
#define _DETRITO_H

#define MS 5
#define MS1 MS-1

#define MAX1TOT 120
#define MAX11000 100
#define MAX1500 42
#define MAX1300 28
#define MAX1270 28
#define MAX1240 20
#define MAX1M 15

//#define MAX2TOT 44

#define HTOT 328
#define DTOT 4752
#define D1910 4752
#define NTOT 5178
#define N1910 5178
#define KTOT 13
#define ETOT 426
#define STOT 10//K+S

#define H1000 265
#define D1000 3285
#define N1000 3508
#define E1000 223
#define K1000 11
#define S1000 8

#define H500 140
#define D500 1411
#define N500 1448
#define E500 37
#define K500 3
#define S500 4

#define H420 119//224
#define D420 1133//2945
#define N420 1157//2970
#define K420 3

#define H300 91
#define D300 773
#define N300 780
#define E300 7
#define K300 1
#define S300 3

#define H270 86
#define D270 723
#define N270 730
#define E270 7
#define K270 1
#define S270 2

#define H240 79
#define D240 654
#define N240 659
#define E240 5
#define K240 1
#define S240 2

#define H220 73
#define D220 570
#define N220 575
#define K220 0//3 la 40, putere la limită. Când K nu e 0, de scos opturile din Z.h prin înlocuirea lui <223? cu <23?.
#define S220 3

#define H210 71
#define D210 546
#define N210 549
#define K210 0
#define S210 3

#define H200 69
#define D200 527
#define N200 530
#define K200 0
#define S200 2

#define H190 68
#define D190 489
#define N190 492
#define K190 0
#define S190 2

#define H180 65
#define D180 468
#define N180 471
#define K180 0
#define S180 2

#define H170 63
#define D170 452
#define N170 455
#define K170 0
#define S170 2

#define H160 57
#define D160 402
#define N160 405
#define K160 0

#define H150 53
#define D150 361
#define N150 364
#define K150 0

#define H140 48
#define D140 353
#define N140 356
#define K140 0

#define H130 47
#define D130 313
#define N130 316
#define K130 0

#define H120 44
#define D120 282
#define N120 285
#define K120 0

#define H110 40
#define D110 264
#define N110 267
#define K110 0

#define H100 38
#define D100 246
#define N100 249
#define K100 0

#define H90 35
#define D90 217
#define N90 220
#define K90 0

#define H80 32
#define D80 188
#define N80 191
#define K80 0

#define H70 27
#define D70 156
#define N70 158
#define K70 0

#define H52 22
#define D52 121
#define N52 121
#define K52 0

#define HP 125
#define DP 2705
#define NP 2705
#define KP 0

/*
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
}*/

#endif
