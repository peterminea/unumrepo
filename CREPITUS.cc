#include "/TOLIL.h"
#include <ctype.h>
#include "/TEXTUL.h"
#include "/URC.h"
#include <unistd.h>
#include <sys/types.h>
#include <cstdio>
#include <stdlib.h>
#include <dirent.h>


void IATEXT(int a1, int b1, int &K, int &V, char *S, int *min, int *max) {
	char t[60], *t1, t2[90], t3[90], u;
	int nm = 0;
	int SSP = 0;
	char NAK[1500][90];

	//a1+1, b1+2. 131 cu 162. Cifre de la 131 la 160.
	for(int i1 = 0; i1 < NDISC; i1++) {
		strcpy(t, disc[i1]);
		DIR *dir;
		struct dirent *ent;

		if ((dir = opendir (t)) != NULL) {
			while ((ent = readdir (dir)) != NULL) {
					t1 = strdup(ent->d_name);
					char ext[6] = ".LPKQ", ext1[6] = ".LPKB";
					int ln = strlen(t1), ln2 = (strlen(ext) + strlen(ext1)) / 2;

					if( (ln > ln2) && (!strcmp(&t1[ln-ln2], ext) || !strcmp(&t1[ln-ln2], ext1) ) ) {
							strcpy(t2, t);
							strcat(t2, t1);
							//if(!FILEEXISTS(t2)) 
								//continue;

							long c, PP = LUNGHEZ2(t2);
							if( (PP < 11000L) ) continue;
							if( (PP > 2100000000000L) ) continue;
							int c1, z = 0;

							FILE *f1 = fopen(t2, "r");							
							CALCMINMAX(min[nm], max[nm], f1, PP, S);
							//c = GIACINTO(t2);
							//if( (c < 6553600) )  max[nm] = 0;//600000.
							//if(!max[nm]) {fclose(f1); ++nm; continue;}							
							fclose(f1);

							if( (min[nm] >= a1) && (max[nm] <= b1-2) /*&& (max[nm] > 100) && (min[nm] <= 130)*/) {
								strcpy(t3, t2);
								strcat(t3, "C");								
								strcpy(NAK[SSP++], t2);
								//remove(t2); remove(t3);
								continue;
								//if(!w && PP)
									//PP = MANUCE(f1, t2, PP, S, c, min[nm]-1);
								
								//PP = PREGTEXT(f1, n, dim, PP, min[nm], max[nm], S, t2);*/
								}
							++nm;
							}
					}
				  closedir (dir);
				} else {
				  // could not open directory
				  perror ("VERGOGNATI");
				  continue;// EXIT_FAILURE;
				}
			}
			
// /LKT160.LPT
// /LPP160.LPT
// /media/root/5TB/LIT100.LIT, /media/root/5TB/LIT100.LITT
SORT2(NAK, SSP);
sprintf(t3, "/run/media/root/TB2/LIT%d.LPTB", b1-2);
FILE *f1, *FF = fopen(t3, "a");
long PP;

for(int i = 0; i < SSP; i++) {
	puts(NAK[i]);
	PP = LUNGHEZ2(NAK[i]);
	f1 = fopen(NAK[i], "r");
	//2.5 - 5: BRABALTE.NUM3. 5-10: SPADONU.NUM3. 10-16: APORU.NUM3. Peste 16: GOLANU.NUM3.
	CITR(8210000, FF, f1, PP);
	fclose(f1);
	}

fclose(FF);
}

void ACTUAL(int a1, int b1) {
int min[1500], max[1500], K, V;
FILE *f1, *f2;
char Y[2000];
IATEXT(a1+1, b1+2, K, V, Y, min, max);
}


int main(int argc, char **argv) {
if(argc < 4) {
	return 1;
}

char aux[60];

if(argv[3][0] == 'a') {
	system("g++ -w -m64 CREPITUS.cc -lgmp -fopenmp -o CREPITUS");
	sprintf(aux, "./CREPITUS %s %s %s", argv[1], argv[2], "b");
	system(aux);
	exit(0);
}

char *tt;
ACTUAL(strtol(argv[1], &tt, 10), strtol(argv[2], &tt, 10));//68, 1000.
return 0;
}
/*

Hello Mindswarms! This is Peter, a computer programmer from Romania.
I am glad to be able to participate on Your site.
My main interests are IT Software (so programming), IT hardware (stuff like strong computers, their components, new hardware releases from AMD and Intel, RAM memories, disk drives etcetera).
I also like numbers, tasty food like chocolate and not only; I read news on the Internet instead of watching them on TV.
I am also curious about how to earn money from home, by doing things on the Internet, and I started thinking also of any possible freelancing projects (that are programming-related, of course). I find Mindswarms an interesting place too. Of course, giving video surveys is fresh news to me!
I did not travel a lot in my life, however I did some longer-distanced trips on foot. I prefer walking on foot and NOT driving.

So, an elaborated summary of suitable study themes for me would be: IT soft & hardware (programming included), the Internet, modern gadges like smartphones and tablets, also media, food and financial-related themes, since I like the information from the Internet, the good food and the idea of earning online. We might also tackle a bit the foreign languages theme, because I love Italian (that is somehow similar to my Romanian native tongue).

I also listened music and watched programmes online, so let's say I have also some life experience about music. I don't have a favourite genre or musical artist, by the way. Each type of music has its beauties and gems.
I am not that good at sports, since I am rather a lonely person (Me and computers), however I manage to keep my body fit. I said I made trips on foot.
We may also take into account social causes like the poverty, the climate questions, the history. Each person's domain of interests may vary by time.

I would be able to sustain the surveys from my home, outside the worktime.

As a conclusion, I hope my new presence on Mindswarms will be an interesting, fruitful one, to the extent of my interests and abilities in surveys.


/run/media/root/14TB/GIG200.TXT

/numsimpl 190 200 /run/media/root/14TB/GIG200.TXT b 1 s 2 512
sleep 40
/numsimpl 190 200 /run/media/root/14TB/GIG200.TXT b 1 j 2 512
sleep 5
/MODPRIME 190 200 /run/media/root/14TB/GIG200.TXT b 1 s 2 512
sleep 40
/MODPRIME 190 200 /run/media/root/14TB/GIG200.TXT b 1 j 2 512

/HMODIFSUM 190 200 /run/media/root/14TB/GIG200.TXT a 1 s 128 130
sleep 6
/HMODIFSUM 190 200 /run/media/root/14TB/GIG200.TXT b 1 j 128 130



/HMODIFSUM 190 195 /run/media/root/14TB/GIG200.TXT b 1 s 192 256
sleep 90
/HMODIFSUM 190 195 /run/media/root/14TB/GIG200.TXT b 1 j 192 256
sleep 90
sleep 90
/HMODIFSUM 195 200 /run/media/root/14TB/GIG200.TXT b 1 j 192 256



sleep 50


sleep 50
/HMODPRIMSUM 190 200 /run/media/root/14TB/GIG200.TXT b 1 j 64 128
sleep 50
/HMODPRIMSUM 190 200 /run/media/root/14TB/GIG200.TXT b 1 j 256 384
sleep 50
/HMODPRIMSUM 190 200 /run/media/root/14TB/GIG200.TXT b 1 j 384 512

/MODPRIMSUM 190 200 /run/media/root/14TB/GIG200.TXT b 1 s 8 64
sleep 110
/MODPRIMSUM 190 200 /run/media/root/14TB/GIG200.TXT b 1 j 8 64


BUCĂ BUCĂ BUCĂ BUCĂ BUCĂ BUCĂ BUCĂ CANABUCĂ BUCĂ BUCĂ BUCĂ BUCĂ BUCĂ-ZDEȘI!!!


/CREPITUS 160 170 a
/FILTRARM /run/media/root/TB2/LIT170.LPTB 160 170 /run/media/root/TB2/LPT170.LPT w

/NNUMSIMPL 160 170 /run/media/root/TB2/LPT170.LPT b 1 s 2 512
sleep 37
/NNUMSIMPL 160 170 /run/media/root/TB2/LPT170.LPT b 1 j 2 512
/NMODPRIME 160 170 /run/media/root/TB2/LPT170.LPT b 1 s 2 512
sleep 37
/NMODPRIME 160 170 /run/media/root/TB2/LPT170.LPT b 1 j 2 512
/HMODPRIMSUM 160 170 /run/media/root/TB2/LPT170.LPT b 1 s 2 128
sleep 37
/HMODPRIMSUM 160 170 /run/media/root/TB2/LPT170.LPT b 1 s 128 256
sleep 37
/HMODPRIMSUM 160 170 /run/media/root/TB2/LPT170.LPT b 1 s 256 384
sleep 47
/HMODPRIMSUM 160 170 /run/media/root/TB2/LPT170.LPT b 1 s 384 512
sleep 47
/HMODPRIMSUM 160 170 /run/media/root/TB2/LPT170.LPT b 1 j 2 128
sleep 47
/HMODPRIMSUM 160 170 /run/media/root/TB2/LPT170.LPT b 1 j 128 256
sleep 57
/HMODPRIMSUM 160 170 /run/media/root/TB2/LPT170.LPT b 1 j 256 384
sleep 57
/HMODPRIMSUM 160 170 /run/media/root/TB2/LPT170.LPT b 1 j 384 512


/numsimpl 160 170 /N3.NUM b 1 s 2 1000000
sleep 8
/numsimpl 160 170 /N3.NUM b 1 j 2 1000000 

/MODPRIME 160 170 /N3.NUM b 1 s 2 1000000
sleep 5
/MODPRIME 160 170 /N3.NUM b 1 j 2 1000000

/MODPRIMSUM 160 170 /N3.NUM b 1 s 2 2000
sleep 8
/MODPRIMSUM 160 170 /N3.NUM b 1 j 2 2000



/CREPITUS 170 180 a
/FILTRARM /run/media/root/TB2/LIT180.LPTB 160 180 /run/media/root/TB2/LPT180.LPT w

/NNUMSIMPL 160 180 /run/media/root/TB2/LPT180.LPT b 1 s 2 65536
sleep 8
/NNUMSIMPL 160 180 /run/media/root/TB2/LPT180.LPT b 1 j 2 65536
/NMODPRIME 160 180 /run/media/root/TB2/LPT180.LPT b 1 s 2 65536
sleep 8
/NMODPRIME 160 180 /run/media/root/TB2/LPT180.LPT b 1 j 2 65536
/HMODPRIMSUM 160 180 /run/media/root/TB2/LPT180.LPT b 1 s 2 180
sleep 8
/HMODPRIMSUM 160 180 /run/media/root/TB2/LPT180.LPT b 1 s 180 360
sleep 8
/HMODPRIMSUM 160 180 /run/media/root/TB2/LPT180.LPT b 1 s 360 540
sleep 8
/HMODPRIMSUM 160 180 /run/media/root/TB2/LPT180.LPT b 1 s 540 720
sleep 8
/HMODPRIMSUM 160 180 /run/media/root/TB2/LPT180.LPT b 1 j 2 180
sleep 8
/HMODPRIMSUM 160 180 /run/media/root/TB2/LPT180.LPT b 1 j 180 360
sleep 8
/HMODPRIMSUM 160 180 /run/media/root/TB2/LPT180.LPT b 1 j 360 540
sleep 8
/HMODPRIMSUM 160 180 /run/media/root/TB2/LPT180.LPT b 1 j 540 720


/CREPITUS 180 190 a
/FILTRARM /run/media/root/TB2/LIT190.LPTB 180 190 /run/media/root/TB2/LPT190.LPT w

/NNUMSIMPL 180 190 /run/media/root/TB2/LPT190.LPT b 1 s 2 65536
sleep 8
/NNUMSIMPL 180 190 /run/media/root/TB2/LPT190.LPT b 1 j 2 65536
/NMODPRIME 180 190 /run/media/root/TB2/LPT190.LPT b 1 s 2 65536
sleep 8
/NMODPRIME 180 190 /run/media/root/TB2/LPT190.LPT b 1 j 2 65536
/HMODPRIMSUM 180 190 /run/media/root/TB2/LPT190.LPT b 1 s 2 180
sleep 8
/HMODPRIMSUM 180 190 /run/media/root/TB2/LPT190.LPT b 1 s 180 360
sleep 8
/HMODPRIMSUM 180 190 /run/media/root/TB2/LPT190.LPT b 1 s 360 540
sleep 8
/HMODPRIMSUM 180 190 /run/media/root/TB2/LPT190.LPT b 1 s 540 720
sleep 8
/HMODPRIMSUM 180 190 /run/media/root/TB2/LPT190.LPT b 1 j 2 180
sleep 8
/HMODPRIMSUM 180 190 /run/media/root/TB2/LPT190.LPT b 1 j 180 360
sleep 8
/HMODPRIMSUM 180 190 /run/media/root/TB2/LPT190.LPT b 1 j 360 540
sleep 8
/HMODPRIMSUM 180 190 /run/media/root/TB2/LPT190.LPT b 1 j 540 720


/numsimpl 160 300 /N3.TXT a 1 s 2 1000000
/numsimpl 160 300 /N3.TXT b 1 j 2 1000000 

/MODPRIME 160 300 /N3.TXT a 1 s 2 1000000

/MODPRIME 160 300 /N3.TXT b 1 j 2 1000000

/MODPRIMSUM 160 300 /N3.TXT a 1 s 2 3200
/MODPRIMSUM 160 300 /N3.TXT b 1 j 2 3200
sleep 8
/MODPRIMSUM 160 300 /N3.TXT b 1 s 3200 6400
sleep 8
/MODPRIMSUM 160 300 /N3.TXT b 1 j 3200 6400
sleep 8
/MODPRIMSUM 160 300 /N3.TXT b 1 s 6400 10000
sleep 8
/MODPRIMSUM 160 300 /N3.TXT b 1 j 6400 10000


/CREPITUS 190 200 a
/FILTRARM /run/media/root/TB2/LIT200.LPTB 190 200 /run/media/root/TB2/LIT200.LPT w

/NNUMSIMPL 190 220 /run/media/root/TB2/LPT220.LPT b 1 s 2 65536
sleep 8
/NNUMSIMPL 190 220 /run/media/root/TB2/LPT220.LPT b 1 j 2 65536
/NMODPRIME 190 220 /run/media/root/TB2/LPT220.LPT b 1 s 2 655360
sleep 8
/NMODPRIME 190 220 /run/media/root/TB2/LPT220.LPT b 1 j 2 655360
/HMODPRIMSUM 190 220 /run/media/root/TB2/LPT220.LPT b 1 s 2 180
sleep 8
/HMODPRIMSUM 190 220 /run/media/root/TB2/LPT220.LPT b 1 s 180 360
sleep 8
/HMODPRIMSUM 190 220 /run/media/root/TB2/LPT220.LPT b 1 s 360 540
sleep 8
/HMODPRIMSUM 190 220 /run/media/root/TB2/LPT220.LPT b 1 s 540 720
sleep 8
/HMODPRIMSUM 190 220 /run/media/root/TB2/LPT220.LPT b 1 j 2 180
sleep 8
/HMODPRIMSUM 190 220 /run/media/root/TB2/LPT220.LPT b 1 j 180 360
sleep 8
/HMODPRIMSUM 190 220 /run/media/root/TB2/LPT220.LPT b 1 j 360 540
sleep 8
/HMODPRIMSUM 190 220 /run/media/root/TB2/LPT220.LPT b 1 j 540 720


/CREPITUS 200 210 a
/FILTRARM /run/media/root/TB2/LIT210.LPTB 200 210 /run/media/root/TB2/LPT210.LPT w

/NNUMSIMPL 200 210 /run/media/root/TB2/LPT210.LPT b 1 s 2 65536
sleep 8
/NNUMSIMPL 200 210 /run/media/root/TB2/LPT210.LPT b 1 j 2 65536
/NMODPRIME 200 210 /run/media/root/TB2/LPT210.LPT b 1 s 2 65536000
sleep 8
/NMODPRIME 200 210 /run/media/root/TB2/LPT210.LPT b 1 j 2 65536000
/HMODPRIMSUM 200 210 /run/media/root/TB2/LPT210.LPT b 1 s 2 128
sleep 8
/HMODPRIMSUM 200 210 /run/media/root/TB2/LPT210.LPT b 1 s 128 256
sleep 8
/HMODPRIMSUM 200 210 /run/media/root/TB2/LPT210.LPT b 1 s 256 384
sleep 8
/HMODPRIMSUM 200 210 /run/media/root/TB2/LPT210.LPT b 1 s 384 512
sleep 8
/HMODPRIMSUM 200 210 /run/media/root/TB2/LPT210.LPT b 1 j 2 128
sleep 8
/HMODPRIMSUM 200 210 /run/media/root/TB2/LPT210.LPT b 1 j 128 256
sleep 8
/HMODPRIMSUM 200 210 /run/media/root/TB2/LPT210.LPT b 1 j 256 384
sleep 8
/HMODPRIMSUM 200 210 /run/media/root/TB2/LPT210.LPT b 1 j 384 512


/CREPITUS 210 220 a
/FILTRARM /run/media/root/TB2/LIT220.LPTB 210 220 /run/media/root/TB2/LPT220.LPT w

/NNUMSIMPL 210 220 /run/media/root/TB2/LPT220.LPT b 1 s 2 65536
sleep 8
/NNUMSIMPL 210 220 /run/media/root/TB2/LPT220.LPT b 1 j 2 65536
/NMODPRIME 210 220 /run/media/root/TB2/LPT220.LPT b 1 s 2 65536000
sleep 8
/NMODPRIME 210 220 /run/media/root/TB2/LPT220.LPT b 1 j 2 65536000
/HMODPRIMSUM 210 220 /run/media/root/TB2/LPT220.LPT b 1 s 2 180
sleep 8
/HMODPRIMSUM 210 220 /run/media/root/TB2/LPT220.LPT b 1 s 180 360
sleep 8
/HMODPRIMSUM 210 220 /run/media/root/TB2/LPT220.LPT b 1 s 360 540
sleep 8
/HMODPRIMSUM 210 220 /run/media/root/TB2/LPT220.LPT b 1 s 540 720
sleep 8
/HMODPRIMSUM 210 220 /run/media/root/TB2/LPT220.LPT b 1 j 2 180
sleep 8
/HMODPRIMSUM 210 220 /run/media/root/TB2/LPT220.LPT b 1 j 180 360
sleep 8
/HMODPRIMSUM 210 220 /run/media/root/TB2/LPT220.LPT b 1 j 360 540
sleep 8
/HMODPRIMSUM 210 220 /run/media/root/TB2/LPT220.LPT b 1 j 540 720

/RAPIDNUM 210 220 /run/media/root/TB2/LPT220.LPT a 1 s 100 300


/CREPITUS 220 240 a
/FILTRARM /run/media/root/T1T/LIT240.LPTB 220 240 /run/media/root/TB2/LPT240.LPT w

/NNUMSIMPL 220 240 /run/media/root/TB2/LPT240.LPT b 1 s 2 65536
sleep 8
/NNUMSIMPL 220 240 /run/media/root/TB2/LPT240.LPT b 1 j 2 65536
/NMODPRIME 220 240 /run/media/root/TB2/LPT240.LPT b 1 s 2 65536
sleep 8
/NMODPRIME 220 240 /run/media/root/TB2/LPT240.LPT b 1 j 2 65536
/HMODPRIMSUM 220 240 /run/media/root/TB2/LPT240.LPT b 1 s 2 100
sleep 8
/HMODPRIMSUM 220 240 /run/media/root/TB2/LPT240.LPT b 1 s 100 200
sleep 8
/HMODPRIMSUM 220 240 /run/media/root/TB2/LPT240.LPT b 1 s 200 300
sleep 8
/HMODPRIMSUM 220 240 /run/media/root/TB2/LPT240.LPT b 1 s 300 400
sleep 8
/HMODPRIMSUM 220 240 /run/media/root/TB2/LPT240.LPT b 1 j 2 100
sleep 8
/HMODPRIMSUM 220 240 /run/media/root/TB2/LPT240.LPT b 1 j 100 200
sleep 8
/HMODPRIMSUM 220 240 /run/media/root/TB2/LPT240.LPT b 1 j 200 300
sleep 8
/HMODPRIMSUM 220 240 /run/media/root/TB2/LPT240.LPT b 1 j 300 400

/CREPITUS 240 270 a
/FILTRARM /run/media/root/TB2/LIT270.LPTB 240 270 /run/media/root/TB2/LPT270.LPT w

/NNUMSIMPL 240 270 /run/media/root/TB2/LPT270.LPT b 1 s 2 65536
sleep 8
/NNUMSIMPL 240 270 /run/media/root/TB2/LPT270.LPT b 1 j 2 65536
/NMODPRIME 240 270 /run/media/root/TB2/LPT270.LPT b 1 s 2 65536000
sleep 8
/NMODPRIME 240 270 /run/media/root/TB2/LPT270.LPT b 1 j 2 65536000
/HMODPRIMSUM 240 270 /run/media/root/TB2/LPT270.LPT b 1 s 2 180
sleep 8
/HMODPRIMSUM 240 270 /run/media/root/TB2/LPT270.LPT b 1 s 180 360
sleep 8
/HMODPRIMSUM 240 270 /run/media/root/TB2/LPT270.LPT b 1 s 360 540
sleep 8
/HMODPRIMSUM 240 270 /run/media/root/TB2/LPT270.LPT b 1 s 540 720
sleep 8
/HMODPRIMSUM 240 270 /run/media/root/TB2/LPT270.LPT b 1 j 2 180
sleep 8
/HMODPRIMSUM 240 270 /run/media/root/TB2/LPT270.LPT b 1 j 180 360
sleep 8
/HMODPRIMSUM 240 270 /run/media/root/TB2/LPT270.LPT b 1 j 360 540
sleep 8
/HMODPRIMSUM 240 270 /run/media/root/TB2/LPT270.LPT b 1 j 540 720

/prog vecungul s
/prog vecungul c


/CREPITUS 270 300 a
/FILTRARM /run/media/root/TB2/LIT300.LPTB 220 300 /run/media/root/TB2/LPT300.LPT w

/NNUMSIMPL 240 300 /run/media/root/TB2/LPT300.LPT b 1 s 2 65536
sleep 7
/NNUMSIMPL 240 300 /run/media/root/TB2/LPT300.LPT b 1 j 2 65536
/NMODPRIME 240 300 /run/media/root/TB2/LPT300.LPT b 1 s 2 65536000
sleep 6
/NMODPRIME 240 300 /run/media/root/TB2/LPT300.LPT b 1 j 2 65536000
/HMODPRIMSUM 240 300 /run/media/root/TB2/LPT300.LPT b 1 s 2 180
sleep 6
/HMODPRIMSUM 240 300 /run/media/root/TB2/LPT300.LPT b 1 s 180 360
sleep 6
/HMODPRIMSUM 240 300 /run/media/root/TB2/LPT300.LPT b 1 s 360 540
sleep 6
/HMODPRIMSUM 240 300 /run/media/root/TB2/LPT300.LPT b 1 s 540 720
sleep 6
/HMODPRIMSUM 240 300 /run/media/root/TB2/LPT300.LPT b 1 j 2 180
sleep 6
/HMODPRIMSUM 240 300 /run/media/root/TB2/LPT300.LPT b 1 j 180 360
sleep 6
/HMODPRIMSUM 240 300 /run/media/root/TB2/LPT300.LPT b 1 j 360 540
sleep 6
/HMODPRIMSUM 240 300 /run/media/root/TB2/LPT300.LPT b 1 j 540 720




/NNUMSIMPL 270 300 /run/media/root/TB2/LIT300.LPT b 1 s 2 55120
sleep 8
/NNUMSIMPL 270 300 /run/media/root/TB2/LIT300.LPT b 1 j 2 55120
/NMODPRIME 270 300 /run/media/root/TB2/LIT300.LPT b 1 s 2 65536000
sleep 8
/NMODPRIME 270 300 /run/media/root/TB2/LIT300.LPT b 1 j 2 65536000
/HMODPRIMSUM 270 300 /run/media/root/TB2/LIT300.LPT b 1 s 2 1121
sleep 8
/HMODPRIMSUM 270 300 /run/media/root/TB2/LIT300.LPT b 1 s 1121 2242
sleep 8
/HMODPRIMSUM 270 300 /run/media/root/TB2/LIT300.LPT b 1 s 2242 3363
sleep 8
/HMODPRIMSUM 270 300 /run/media/root/TB2/LIT300.LPT b 1 s 3363 4844
sleep 8
/HMODPRIMSUM 270 300 /run/media/root/TB2/LIT300.LPT b 1 j 2 1121
sleep 8
/HMODPRIMSUM 270 300 /run/media/root/TB2/LIT300.LPT b 1 j 1121 2242
sleep 8
/HMODPRIMSUM 270 300 /run/media/root/TB2/LIT300.LPT b 1 j 2242 3363
sleep 8
/HMODPRIMSUM 270 300 /run/media/root/TB2/LIT300.LPT b 1 j 3363 4844



FRATE BUCĂ CANABUCĂ

/run/media/root/14TB/GIG240.TXT

/FILTRAR2 /run/media/root/14TB/GIG240.TXT 210 212 /run/media/root/8T/GIG212.TX w &
/FILTRAR2 /run/media/root/14TB/GIG240.TXT 212 214 /run/media/root/8T/GIG214.TX w &
/FILTRAR2 /run/media/root/14TB/GIG240.TXT 214 216 /run/media/root/8T/GIG216.TX w &
/FILTRAR2 /run/media/root/14TB/GIG240.TXT 216 218 /run/media/root/8T/GIG218.TX w &
/FILTRAR2 /run/media/root/14TB/GIG240.TXT 218 220 /run/media/root/8T/GIG220.TX w &


/HMODIFSUM 174 175 /run/media/root/10TB/GIG180.TXT a 1 s 200 220
/HMODIFSUM 174 175 /run/media/root/10TB/GIG180.TXT b 1 j 200 220

/run/media/root/10TB/GIG200.TXT

/FILTRAR2 /run/media/root/10TB/GIG200.TXT 190 192 /run/media/root/T12/R192.TX w &
/FILTRAR2 /run/media/root/10TB/GIG200.TXT 192 194 /run/media/root/T12/R194.TX w &
/FILTRAR2 /run/media/root/10TB/GIG200.TXT 194 196 /run/media/root/T12/R196.TX w &
/FILTRAR2 /run/media/root/10TB/GIG200.TXT 196 198 /run/media/root/T12/R198.TX w &
/FILTRAR2 /run/media/root/10TB/GIG200.TXT 198 200 /run/media/root/T12/R200.TX w &


/FILTRAR2 /run/media/root/T12/GIG190.TXT 180 182 /run/media/root/12T/R182.TX w &
/FILTRAR2 /run/media/root/T12/GIG190.TXT 182 184 /run/media/root/12T/R184.TX w &
/FILTRAR2 /run/media/root/T12/GIG190.TXT 184 186 /run/media/root/12T/R186.TX w &
/FILTRAR2 /run/media/root/T12/GIG190.TXT 186 188 /run/media/root/12T/R188.TX w &
/FILTRAR2 /run/media/root/T12/GIG190.TXT 188 190 /run/media/root/12T/R190.TX w &

/FILTRAR2 /run/media/root/12T/GIG180.TXT 170 172 /run/media/root/8T/R172.TX w &
/FILTRAR2 /run/media/root/12T/GIG180.TXT 172 174 /run/media/root/8T/R174.TX w &
/FILTRAR2 /run/media/root/12T/GIG180.TXT 174 176 /run/media/root/8T/R176.TX w &
/FILTRAR2 /run/media/root/12T/GIG180.TXT 176 178 /run/media/root/8T/R178.TX w &
/FILTRAR2 /run/media/root/12T/GIG180.TXT 178 180 /run/media/root/8T/R180.TX w &

/FILTRARE /run/media/root/10TB/G200.TXT 198 198 /FOND1990.TXT w 1 4 &
/FILTRARE /run/media/root/10TB/G200.TXT 198 199 /FOND1991.TXT w 4 &
/FILTRARE /run/media/root/10TB/G200.TXT 199 199 /FOND2000.TXT w 1 4 &
/FILTRARE /run/media/root/10TB/G200.TXT 199 200 /FOND2001.TXT w 4 &
*/
