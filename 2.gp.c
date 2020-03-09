/*-*- compile-command: "/usr/bin/gcc -c -o 2.gp.o -O3 -Wall -fno-strict-aliasing -fomit-frame-pointer -I"/usr/local/include" 2.gp.c && /usr/bin/gcc -o 2.gp.so -shared -O3 -Wall -fno-strict-aliasing -fomit-frame-pointer ,--export-all-symbols 2.gp.o -L/usr/local/lib -lpari -Wl,--enable-auto-import"; -*-*/
#include <pari/pari.h>
/*
GP;install("init_2","v","init_2","./2.gp.so");
GP;install("doi","v","doi","./2.gp.so");
*/
void init_2(void);
void doi(void);
/*End of prototype*/

void
init_2(void)	  /* void */
{
  return;
}

void
doi(void)	  /* void */
{
  GEN m = pol_x(fetch_user_var("m")), n = pol_x(fetch_user_var("n")), l = pol_x(fetch_user_var("l"));
  m = stoi(1000000000);
  m = gmulgs(m, 2000);
  n = gen_0;
  l = gdiv(m, gsubgs(m, 1));
  while (gcmp(n, m) <= 0)
  {
    n = gaddgs(n, 26208);
    if (cmpis(numdiv(n), 1000) == 0)
      pari_printf("%Ps!\n", n);
  }
  return;
}

