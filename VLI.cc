#include "/VLI.h"

typedef unsigned long long gmp_ui;

#define N 59

//2 la puterea 512 - 1 este cam 1.34 * 10 la 154, are 155 de cifre.
//Cele trei numere prime din CF160 sunt încadrabile în int128.
//Dar și cele mai mari numere prime din P2.TXT / PRIME2.TXT intră în int512; mai mari decât int256, dar în int512.
//La int128 ar intra CF-urile până la 160, chiar și 240 și 420 (de la ultimul lipsește 2^127 - 1). Dar nici GIG52 nu poate intra de tot.
//La int256 (78 de cifre), ar intra GIG52.TXT.
//Numerele cu peste 154-155 de cifre sigur nu pot fi folosite la VLI, rămân mepezetele.
//GIG52 ar intra la 192bit, GIG80 la 320, GIG100 la 384, GIG130 la 448.

void conv(fstream &F1, char *s, int320 &d) {
	F1>>s;
	int t = strlen(s);
	
	for(int i = 0; i < t; i++) {
		d = d * 10 + (int)(s[i] - 48);
	}
}


int main(int argc, char **argv) {

int128 a(2), b(3);
cout<<a+b<<endl;

int128 c, c1;
c[0] = 1;
c[1] = 2;
cout<<c<<" "<<c[0]<<" "<<c[1]<<endl;
cout<<"ARIBI "<<endl;
int320 vec[N];
//int320 matr[N][3];
fstream F1("/run/media/root/10TB/GIG80.TXT", ios::in);
int128 d(2), e;
char s[125];

for(int i = 0; i < N; i++) {
	conv(F1, s, vec[i] = 0);
	cout<<vec[i]<<endl;
	}

F1.close();

fstream F2("/VLI.TXT", ios::out);
F2<<vec[0]<<endl;
F2.close();

gmp_ui t = (gmp_ui)(1U-2U);
c = t;
c *= t;
//c %= c;
//c = c%c;
if(c%c < 1) c /= c;

int256 cc(3);
multiply_extend(cc, c, c);
//cc = cc/c;
cout<<c+1<<" " <<cc<<endl;
c = 40;
c1 = 10;
VLIGCD(c, c1, c%c1);
cout<<c<<" "<<c1<<endl;
c ^= c1;
c1 = c^c1;
c ^= c1;
cout<<c<<" "<<c1<<endl;
c1 = c * t;

if(c % d > 0) t++;

return 0;
}
