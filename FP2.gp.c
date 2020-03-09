/*-*- compile-command: "/usr/bin/gcc -c -o FP2.gp.o -O3 -Wall -fno-strict-aliasing -fomit-frame-pointer -I"/usr/local/include" FP2.gp.c && /usr/bin/gcc -o FP2.gp.so -shared -O3 -Wall -fno-strict-aliasing -fomit-frame-pointer ,--export-all-symbols FP2.gp.o -L/usr/local/lib -lpari -Wl,--enable-auto-import"; -*-*/
#include <pari/pari.h>
/*
GP;install("init_FP2","v","init_FP2","./FP2.gp.so");
GP;install("sase","vGGGp","sase","./FP2.gp.so");
*/
void init_FP2(void);
void sase(GEN n, GEN l, GEN s, long prec);
/*End of prototype*/

void
init_FP2(void)	  /* void */
{
  return;
}

void
sase(GEN n, GEN l, GEN s, long prec)	  /* void */
{
  GEN i, j;	  /* int */
  if (typ(n) != t_INT)
    pari_err_TYPE("sase",n);
  if (typ(l) != t_INT)
    pari_err_TYPE("sase",l);
  if (typ(s) != t_INT)
    pari_err_TYPE("sase",s);
  n = icopy(s);
  {
    GEN i;
    for (i = icopy(l); gcmp(i, s) <= 0; i = gaddgs(i, 1))
    {
      j = gsubgs(gpow(n, i, prec), 1);
      pari_printf("%Ps\n", Z_factor(j));
    }
  }
  return;
}

