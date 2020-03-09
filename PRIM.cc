#include <stdio.h>
#include <cmath>
#include "/PRIM.h"

int main()
{
unsigned long long a;
printf("a:\n");
scanf("%llu", &a);
if(a < 2)
	{
	printf("Sub 2 nu sunt numere prime.\n");
	return 0;
	}
a < 37?
( PRIM(a)? printf("Prim.\n") : printf("Compus.\n") ) :
PRIM1(a, sqrt(a))? printf("Prim.\n") : printf("Compus.\n");

return 0;
}
