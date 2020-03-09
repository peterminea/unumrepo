#include "/TOLIL.h"//0

int main(int argc, char **argv) {
if(argc < 6) {
	return 1;
}

unsigned long P1, P2, PP;
char *p2, t, w1, Y[2000];
int I, i, j, J, K, V, l, S, p, q, R1, r, X, K1 = 0, a1 = 2 + strtol(argv[2], &p2, 10), b1 = 2 + strtol(argv[3], &p2, 10), disc, mem[600];
gmp_ui b[5400], b2[5400], k, div1[H1][MAX2], sum1[H1][MAX2], sumdoi[64];
mpz_t div[K2][MAX1], sum[K2][MAX1], C[625], C1[625], d, e, D, E, d1, e1, p1, q1[2580], u;
FILE *S1, *S2;

disc = b1-2;
mpz_init_va(d, e, D, d1, e1, E, p1, u, NULL);
for(i = 0; i < 625; i++)
	mpz_inits(C[i], C1[i], NULL);
for(i = 0; i < 5400; i++)
	b2[i] = 1;

INIT(K2, div, sum);
if(disc % 10) disc += 10-(disc%10);
r = disc <= 52? 70 : disc <= 70? 80 : disc <= 210? disc+10 : disc <= 220? disc+20 : disc <= 270? disc+30 : disc <= 300? 300 : 1910;
//printf("%d\n", r);
GENGEN(b, C, i, J, j, l, S, r, r >= 213);
UNIFACTUS(r, b, b2, C, C1, i, J, j, l, div, sum, div1, sum1, mem, q1, sumdoi, 1);
PP = LUNGHEZ2(argv[1]);
if(!PP || !FILEEXISTS(argv[1])) {
	printf("%s nu este.\n", argv[1]);
	return 1;
	} else {
	printf("PP de la %s e %llu.\n", argv[1], PP);
	}

S1 = fopen(argv[1], "r");
S2 = fopen(argv[4], argv[5]);//a sau w.
P1 = PP;
P2 = (((argc == 6) || (argv[6][0] == '1')) && (a1 == NUME(argv[1]) - UNIT(NUME(argv[1]))))? 0 : URC1(S1, a1, Y, t, P1 / 444, P1, (argc < 7? ':' : argv[6][0]));
PP = (strtol(argv[3], &p2, 10) == NUME(argv[1]))? PP : URC1(S1, b1, Y, t, P1 / 444, P1, (argc < 8? ':' : argv[7][0]));
fseek(S1, P2, SEEK_SET);
disc = disc <= 52? 52 : disc <= 70? 70 : disc <= 80? 80 : disc <= 160? 160 : disc <= 210? 210 : disc <= 220? 240 : disc <= 240? 240 : disc <= 500? 500 : 1910;
printf("%llu %lu %d\n", P2, PP, disc);
if(argc == 8) b1++;

switch(disc) {
	case 52:
	
	while(1) {
	fgets(Y, 1920, S1);
	
	if( (strlen(Y) >= a1) && (strlen(Y) < b1) ) {
		mpz_set_str(D, Y, 10);
		mpz_tdiv_q_2exp(p1, D, X = mpz_scan1(D, 0));
		SMV(p1, e1, b, b2, i, j, X, div1, sum1, sumdoi[X]);
		if( (mpz_cmp(e1, D) >= 0) && (VALID(D, d1, e1) == 1) )//VALID4 pentru fondul 2.
			fputs(Y, S2);
			//else
			//gmp_printf("%Zd N %Zd S %Zd d1 %d\n%s %llu\n\n", D, e1, d1, strlen(Y), Y, ftell(S1));
		//
		}

	if(ftell(S1) >= PP)
		break;
	}
	break;
	
	case 70:
	
	while(1) {
	fgets(Y, 1920, S1);

	if( (strlen(Y) >= a1) && (strlen(Y) < b1) ) {
		mpz_set_str(D, Y, 10);
		mpz_tdiv_q_2exp(p1, D, X = mpz_scan1(D, 0));
		NUMSUMPURG1(p1, e1, b, b2, i, j, X, div1, sum1, q1[X], 0);
		if( (mpz_cmp(e1, D) == 1) && (VALID(D, d1, e1) == 1) )//VALID4
			fputs(Y, S2);
	//	else
			//gmp_printf("%Zd N %Zd S %Zd d1 %d\n%s\n\n", D, e1, d1, strlen(Y), Y);
		//
		}
		
	if(ftell(S1) >= PP)
		break;
	}
	break;
	
	case 80:
	
	while(1) {
	fgets(Y, 1920, S1);

	if( (strlen(Y) >= a1) && (strlen(Y) < b1) ) {
		mpz_set_str(D, Y, 10);		
		mpz_tdiv_q_2exp(p1, D, X = mpz_scan1(D, 0));
		NUMSUMV1(p1, e1, b, b2, i, j, X, div1, sum1, q1[X], 0);
		if( (mpz_cmp(e1, D) == 1) && (VALID(D, d1, e1) == 1) )//VALID4
			fputs(Y, S2);
		//else
			//gmp_printf("%Zd N %Zd S %Zd d1 %d\n%s\n\n", D, e1, d1, strlen(Y), Y);
		//
		}
		
	if(ftell(S1) >= PP)
		break;
	}
	break;
	
	case 160:
	
	while(1) {
	fgets(Y, 1920, S1);

	if( (strlen(Y) >= a1) && (strlen(Y) < b1) /*&& !(Y[strlen(Y)-2] & 1)*/) {
		mpz_set_str(D, Y, 10);
		mpz_tdiv_q_2exp(p1, D, X = mpz_scan1(D, 0));
		NUMSUMV1(p1, e1, b, b2, i, j, X, div1, sum1, q1[X], 0);	
		if( (mpz_cmp(e1, D) == 1) && (VALID(D, d1, e1) == 1) )//VALID4
			fputs(Y, S2);
		//else
			//gmp_printf("%Zd N %Zd S %Zd d1 %d\n%s\n\n", D, e1, d1, strlen(Y), Y);
		//
		}
		
	if(ftell(S1) >= PP)
		break;
	}
	break;
	
	case 210:
	
	while(1) {
	fgets(Y, 1920, S1);

	if( (strlen(Y) >= a1) && (strlen(Y) < b1) /*&& !(Y[strlen(Y)-2] & 1)*/) {
		mpz_set_str(D, Y, 10);		
		mpz_tdiv_q_2exp(p1, D, X = mpz_scan1(D, 0));
		NUMSUMV3(p1, e1, b, b2, i, j, S, X, div1, sum1, mem, q1[X], 0);		
		if( (mpz_cmp(e1, D) == 1) && (VALID(D, d1, e1) == 1) )//VALID4
			fputs(Y, S2);
		//else
			//gmp_printf("%Zd N %Zd S %Zd d1 %d\n%s\n\n", D, e1, d1, strlen(Y), Y);
		//
		}
		
	if(ftell(S1) >= PP)
		break;
	}
	break;

/*
	case 220:
	
	while(1) {
	fgets(Y, 1920, S1);

	if( (strlen(Y) >= a1) && (strlen(Y) < b1) && !(Y[strlen(Y)-2] & 1)) {
		mpz_set_str(D, Y, 10);
		mpz_tdiv_q_2exp(p1, D, X = mpz_scan1(D, 0));
		NUMSUMV2(p1, e1, C, C1, b, b2, i, J, j, S, X, div1, sum1, mem, q1[X], 0);

		if( (mpz_cmp(e1, D) == 1) && (VALID(D, d1, e1) == 1) )//VALID4
			fputs(Y, S2);
		//else
			//gmp_printf("%Zd N %Zd S %Zd d1 %d\n%s\n\n", D, e1, d1, strlen(Y), Y);
		//
		}
		
	if(ftell(S1) >= PP)
		break;
	}
	break;*/

	case 240:
	
	while(1) {
	fgets(Y, 1920, S1);

	if( (strlen(Y) >= a1) && (strlen(Y) < b1) ) {
		mpz_set_str(D, Y, 10);
		mpz_tdiv_q_2exp(p1, D, X = mpz_scan1(D, 0));
		SUMDIVV1(p1, e1, C, C1, b, b2, i, J, j, l, S, X, div1, sum1, div, sum, mem, q1[X], 0);	
		if((mpz_cmp(e1, D) == 1) && (VALID(D, d1, e1) == 1)) {
			fputs(Y, S2);
		} //else {//gmp_printf("%Zd N %Zd S %Zd d1 %d\n%s\n\n", D, e1, d1, strlen(Y), Y);
				//return 0;
			//}
	}
	if(ftell(S1) >= PP)
		break;
	}
	break;
	
	case 500:
	
	while(1) {
	fgets(Y, 1920, S1);

	if( (strlen(Y) >= a1) && (strlen(Y) < b1) ) {
		mpz_set_str(D, Y, 10);		
		mpz_tdiv_q_2exp(p1, D, X = mpz_scan1(D, 0));
		SUMDIVV(p1, e1, C, C1, b, b2, i, J, j, l, S, X, div1, sum1, div, sum, mem, q1[X]);
		if((mpz_cmp(e1, D) == 1) && (VALID(D, d1, e1) == 1)) {
			fputs(Y, S2);
			}/* else {
				gmp_printf("%Zd N %Zd S %Zd d1 %d\n%s\n\n", D, e1, d1, strlen(Y), Y);
				//return 0;			
			}*/
		}

	if(ftell(S1) >= PP)
		break;
	}
	break;
	
	case 1910:
	
	while(1) {
	fgets(Y, 1920, S1);

	if( (strlen(Y) >= a1) && (strlen(Y) < b1) ) {
		mpz_set_str(D, Y, 10);
		X = mpz_scan1(D, 0);
		SUMIMENS(D, e1, C, C1, b, b2, i, J, j, l, S, X, div1, sum1, div, sum, mem, p1, q1[X]);
		if((mpz_cmp(e1, D) == 1) && (VALID(D, d1, e1) == 1)) {
			fputs(Y, S2);
			} //else {
				//gmp_printf("%Zd N %Zd S %Zd d1 %d\n%s\n\n", D, e1, d1, strlen(Y), Y);
				//return 0;
			//}
		}

	if(ftell(S1) >= PP)
		break;
	}
	break;
	
	default:
		break;
}

fclose(S1);
fclose(S2);
//printf("%ld are noul fișier și PP era %ld.\n", LUNGHEZ2(argv[4]), PP - P2);
sprintf(Y, "./vecung2 %s", argv[4]);
system(Y);
mpz_clears(d, e, D, d1, e1, E, p1, u, NULL);
for(i = 0; i < 625; i++)
	mpz_clears(C[i], C1[i], NULL);

return 0;
}

//131 3 133 3 135 3 137 2 139 4 141 6 150 155 160.