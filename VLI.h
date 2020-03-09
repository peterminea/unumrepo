#include "vli/integer.hpp"
#include "vli/polynomial.hpp"
#include <iostream>
#include <fstream>

using namespace std;
using namespace vli;

typedef integer<128> int128;
typedef integer<192> int192;
typedef integer<256> int256;
typedef integer<320> int320;
typedef integer<384> int384;
typedef integer<448> int448;
typedef integer<512> int512;


void CONV512(fstream &F1, char *s, int512 &d) {
	F1>>s;
	int t = strlen(s);	
	for(int i = 0; i < t; i++) {
		d = d * 10 + (int)(s[i] - 48);
	}
}


void CONV256(fstream &F1, char *s, int256 &d) {
	F1>>s;
	int t = strlen(s);	
	for(int i = 0; i < t; i++) {
		d = d * 10 + (int)(s[i] - 48);
	}
}


void DOI(int512 A, int512 &B, int512 *divdoi, int512 *sumdoi, int d) {//d = 1;
	while(A % divdoi[d] < 1) d += 2;
	if(A % divdoi[--d] > 0) d--;
	B = sumdoi[d];
}


int DOISCAN(int512 A, int512 *divdoi, int d) {//d = 1;
	while(A % divdoi[d] < 1) d += 2;
	if(A % divdoi[--d] > 0) d--;
	return d;
}


void VLIGCD(int128 a, int128 &b, int128 c) {
while(1) {
  if(c < 1)
	return;
    a = b;//a e 65, apoi 52
    b = c;//b e 52, apoi 13
    c = a % b;//c e 13, apoi 0	
  }  
}


void DOIARU(int256 *divdoi, int256 *sumdoi) {
int256 a(1);

for(int r = 0; r < 540; r++) {
	a = 1;
	a<<=r;
	divdoi[r] = a;
	sumdoi[r] = (divdoi[r] + divdoi[r]) - 1;
	}
}
