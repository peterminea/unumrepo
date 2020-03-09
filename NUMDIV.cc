#include <stdio.h>
#include <math.h>

void CALC3(unsigned long long &d, unsigned long long e, int A, unsigned long &b, unsigned long &f){
	A = 1;//b;
	f = 3;
		
	while(1)
		{
		++A;
		//b += A;
		f *= 3;
		if(e % f)
			break;		
			}
			
	d *= (f / 3);
	b *= A;
}//1*3, 1*5*5, 75 are 2*3 = 6 divizori, 1, 3, 5, 15, 25, 75.
//1*2*4*8, 1*3, 1*5, 120 are 4*2*2 = 16 divizori, 1, 2, 3, 4, 5, 6, 8, 10, 12, 15, 20, 24, 30, 40, 60, 120.
//181 * 11 = 1991
//2^180, 2^10
//Care este primul număr care are 1991 de divizori?
//2^180 * 3^10: prime între ele, unul are 181 de divizori, celălalt 11.
//2^180 este foarte mare, înmulțit cu 59049 va fi și mai mare (3^10 = 59049).
//2^64 * 2^64 * 2^32 * 2^20
//18446744073709551616 * 18446744073709551616 * 265933054396600418304, 20+20+21 de cifre
//59 de cifre, începe cu cifra 9.
//5*7*9*5*4*3 = 18900

//Dar primul număr cu 1990 de divizori?
//2^198 * 3^4 * 5^1.
//Are 63 de cifre și începe cu cifra 1.
//48: 1, 2, 3, 4, 6, 8, 12, 16, 24, 48.

//100 = 2*2*5*5;
//16 * 81 * 35 = 560 * 81 = 45360.
//Al doilea număr cu 100 de divizori? 16 * 81 * 5 * 11 = 880 * 81 = 71280.
//Al treilea? 5 * 13 * 16 * 81 = 1040 * 81 = 84240.
//Al patrulea? 7 * 11 * 16 * 81 = 1232 * 81 = 99792.

//5*7, 5*11, 5*13, 7*11, 5*17, 7*13, 5*19...

//2+2+5+5 = 14; minus 1 din fiecare, ajungem la 10;
//Puterile factorilor primi din număr să fie 4, 4, 1, 1.
//81*625*7*11, cel mai mic număr impar cu 100 de divizori.
//77*81*625 = 6237 * 625 = 779625 * 5 = 3898125
//100: 4, 4, 1, 1 (adică și să aibă doar 4 factori primi impari, cu respectivele puteri).

//14: 2*7. Ajungem la 1 și 6: doi factori primi, la aceste puteri.
//Primul număr cu 14 divizori este 2^6*3, adică 192.
//Următorul este 320.
//Primul impar așa este 3645.
//4 la 3
//Al 31-lea număr prim este: 127.

//2014: 2 * 19 * 53.
//1, 18, 52
//2^52 * 3^18 * 5
//8723933849480476722462720
//(2^53-1) * (3^19 - 1)/2 * 6
//31406161831108114949858418
//1 la 2: crește cu o doime, 2 la 4: crește cu o șesime, 4 la 8: cu o paisprezecime, 8 la 16: cu o treizecime.
//1 la 4: crește cu 3 pătrimi (3/4), 2 la 8: cu o pătrime (3/12), 4 la 16: cu o 3/28ime, 8 la 32: cu o 3/60ime.
//1 la 8: crește cu 7/8, 2 la 16: crește cu 7/24

//3 4
//6 12
//12 28
//24 60
//291359

//3 4
//9 13

//20 42
//60 168

//120 360
//360 1170

//56: 2 + 1/7. 224: 2 + 1/4.

//3.5999999969025898502638748604372
//1.0000000008603917090003086532692
//0.0000000008603917090003086532692
//1162261467 = 3^19

//16 la 8: 1 + 1/30.
//8 la 4: 1 + 1/14.
//(1 + 1/14)*(1 + 1/3) = 1 + 1/3 + 1/14 + 1/42 = 1 + 18/42 = 1 + 3/7.
//1080:

//2 treizecimi înseamnă 61/900.

//1 la 3: crește cu 1/3. 3 la 9: cu 1/12. 9 la 27: cu 1/39. 27 la 81: cu 1/120.
//1 la 9: crește cu 4/9. 3 la 27: crește cu 4/36. 9 la 81: crește cu 4/117.
//1 la 27: cu 13/27. 3 la 81: cu 13/108. 9 la 243: cu 13/351.

//1 la 5: crește cu 1/5 (normal). 5 la 25: cu 1/30. 25 la 125: cu 1/155. 125 la 625: cu 1/780.
//1 la 25: cu 6/25. 5 la 125: cu 6/150. 25 la 625: cu 6/775.
//1 la 125: cu 31/125. 5 la 625: cu 31/780.

//1 la 7: cu 1/7. 7 la 49: cu 1/56. 49 la 343: cu 1/399.
//1 la 49: cu 8/49. 7 la 343: cu 8/392. 49 la 2401: cu 8/2793.
//1 la 343: cu 57/343.


//Abundența crește cu proporții fracționale din ea însăși, nu cu proporții din cifra 1 (de pildă 2 crește la 3 cu o doime din el însuși, nu cu o doime din 1).
//2^20 * 3^12
//557256278016
//2097151 * 797161
//1671766988311

//2.9999966878129994849425312499412
//1.0000011040635524600012230801028

void CALCDIV(unsigned long long c, unsigned long long &d, unsigned long long e, int A, unsigned long &b, unsigned long &f)
{
	if( (d % c) && !(e % c) )
		{
		A = 1;//b
		f = c;
		
		while(1)
			{
			++A;
			//b += A;
			f *= c;
			if(e % f)
				break;
			}
			
		d *= (f / c);
		b *= A;
		}
}

int main()
{
int i, A;
long double a;
unsigned long b=1, f;
unsigned long long c=3, d=1, e;

scanf("%Lf", &a);

while(1)
	{
	d <<= 1;
	if(fmodl(a, d))
		break;
	++b;
	}

e = a / (d>>1);
d = 1;

if(! (e % 3) )
	CALC3(d, e, A, b, f);
	
if(d == e)
	goto s1;

c = 6;
	while(1)
	{
	CALCDIV(--c, d, e, A, b, f);
	if(d == e)
		goto s1;
	++c;
	CALCDIV(++c, d, e, A, b, f);
	c += 5;
	}

s1:
printf("Divizorii lui %.0Lf sunt în număr de:  %lu.\n", a, b);

return 0;
}
