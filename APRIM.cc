#include <stdio.h>
#include <math.h>
#include "/PRIM.h"

int main()
{
unsigned long long b=2, c=6;
unsigned long C;

int a;
scanf("%d", &a);
if(a < 1)
	return 0;

printf("Al %d-lea număr prim: ", a);

PRIMS(2, a);
PRIMS(3, a);

while(1)
	{
	PRIMS(c-1, a);
	PRIMS(c+1, a);
	c += 6;
	if(c == 42)			
		goto s1;		
	}

s1:
while(1)
	{
	PRIMS1(--c, sqrt(c), a);
	c += 2;
	PRIMS1(c, sqrt(c), a);
	c += 5;
	}

return 0;
}
