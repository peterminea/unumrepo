#include "/GMP64.h"
#include <stdio.h>
#include <cmath>
#include "/PRIM.h"

int main(void) {
gmp_ui a;
int t;

printf("t = : ");
scanf("%d", &t);

if(t) {
	t -= PRIMATOR(2, 1);
	if(t) {
		t -= PRIMATOR(3, 1);
		if(t) {
			a = 6;
			while(1) {
				t -= PRIMATOR(--a, sqrt(a));
				if(!t)
					goto s1;
				a += 2;
				t -= PRIMATOR(a, sqrt(a));
				if(!t)
					goto s1;
				a += 5;
			}
		}
	}
}

s1:

putchar('\n');
return 0;
}
