#include <stdlib.h>

int PRIM(unsigned long long x) {
if( !(x&1) && (x ^ 2) )
	return 0;

if( !(x%3) && (x ^ 3) )
	return 0;

if( !(x%5) && (x ^ 5) )
	return 0;

if( !(x%7) && (x ^ 7) )
	return 0;

return 1;
}


int PRIM1(unsigned long long x, unsigned long a) {//a = sqrt(x)

if( !(x&1) )
	return 0;

if( !(x%3) )
	return 0;

a += (6 - a%6);

while(1) {
	if( !(x % (a-1)) || !(x % (a+1) ))
		return 0;
	a -= 6;
	if(!a)
		break;
	}
	
return 1;
}


int PRIMUL(gmp_ui &a) {
unsigned long b = sqrt(a);

if( !(a%b) )
	return 0;
if( !(b&1) )
	--b;
	
while(1)
	{
	if(b == 1)
		break;
	if( !(a % b) )
		return 0;
		
	b -= 2;
	}
	
return 1;
}


int EPRIM(unsigned long long a) {
return a < 37? PRIM(a) : PRIM1(a, sqrt(a));
}


void PRIMS(unsigned long long x, int &t) {
if( !(x&1) && (x ^ 2) )
	return;

if( !(x%3) && (x ^ 3) )
	return;

if( !(x%5) && (x ^ 5) )
	return;

if( !(x%7) && (x ^ 7) )
	return;

if ( !(--t) )
	{
	printf("%llu.\n", x);
	exit(0);	
	}
}


void PRIMS1(unsigned long long x, unsigned long a, int &t) {
a += (6 - a%6);

while(1) {
	if( !(x % (a-1)) || !(x % (a+1) ))
		return;
	a -= 6;
	if(!a)
		break;
	}
	
if ( !(--t) ) {
	printf("%llu.\n", x);
	exit(0);	
	}
}


void NPRIM(unsigned long long x, int &t) {
if( !(x&1) && (x ^ 2) )
	return;

if( !(x%3) && (x ^ 3) )
	return;

if( !(x%5) && (x ^ 5) )
	return;

if( !(x%7) && (x ^ 7) )
	return;


printf("%llu ", x);
if ( !(--t) ) {
	putchar('\n');
	exit(0);	
	}
}


int PRIMATOR(gmp_ui a, gmp_ui s) {
if(!(s ^ 1))
	goto s1;

if(!(a % s))
	return 0;

//if( (s < 6) && (!(a % 3) || !(s % 5)) )
	//return 0;
	
if(5 < s) {
	s -= s%6;

	while(1) {
		if( !(a%(s-1)) || !(a% (s+1)) ) 
			return 0;
			//if(! (a% (--s))) return 0;
			//s += 2;
			//if(! (a% (--s))) return 0;
		s -= 6;
		if(!s)
			break;
		}
	}

s1:
printf("%llu ", a);
return 1;
}


void NPRIM1(unsigned long long x, unsigned long a, int &t) {
a += (6 - a%6);

while(1) {
	if( !(x % (a-1)) || !(x % (a+1)) )
		return;
	a -= 6;
	if(!a)
		break;
	}
	
printf("%llu ", x);
if ( !(--t) ) {
	putchar('\n');	
	exit(0);	
	}
}
