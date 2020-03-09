#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "/GMP64.h"
#include "/PRIM.h"

int main()
{
unsigned long long b=2, c=6;
unsigned long C;
int a;

printf("PRIMELE A NUMERE PRIME\n");

scanf("%d", &a);
if(a < 1)
	return 0;
	
NPRIM(2, a);
NPRIM(3, a);

while(1)
	{
	NPRIM(c-1, a);
	NPRIM(c+1, a);
	c += 6;
	if(c == 42)			
		goto s1;		
	}

s1:
while(1)
	{
	NPRIM1(--c, sqrt(c), a);
	c += 2;
	NPRIM1(c, sqrt(c), a);
	c += 5;
	}

return 0;
}
