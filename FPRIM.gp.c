/*-*- compile-command: "/usr/local/bin/gcc -c -o FPRIM.gp.o -O3 -Wall -fno-strict-aliasing -fomit-frame-pointer -fPIC -I"/usr/local/include" FPRIM.gp.c && /usr/local/bin/gcc -o FPRIM.gp.so -shared -O3 -Wall -fno-strict-aliasing -fomit-frame-pointer -fPIC -Wl,-shared FPRIM.gp.o -lc -lm"; -*-*/
#include <pari/pari.h>
/*
GP;install("init_FPRIM","v","init_FPRIM","./FPRIM.gp.so");
GP;install("sase","vGGp","sase","./FPRIM.gp.so");
*/
void init_FPRIM(void);
void sase(GEN n, /*long k,*/ GEN s, long prec);
/*End of prototype*/

void
init_FPRIM(void)	  /* void */
{
  pari_sp ltop = avma;
  avma = ltop;
  return;
}//18446744073709549567

void sase(GEN n, /*long k,*/ GEN s, long prec)	  /* void */
{
  pari_sp ltop = avma;
  
  if (typ(n) != t_INT)
    pari_err_TYPE("sase",n);  
//  if (typ(k) != t_INT)
   // pari_err_TYPE("sase",k);
  if (typ(s) != t_INT)
    pari_err_TYPE("sase",s);
    
    //return;
    /*Legat de puterile doiare: Nu la: 334; 349; 353; 355; 356; 358; 359; 361; 363; 367; 374; 381; 387; 388; 391; 393; 394; 397;
    //De la 357 impare; De la 358 pare; 398; 399; 401; 404; 406; 473;*/
	GEN j = gen_0;	  /* int */

	pari_sp btop = avma, st_lim = stack_lim(btop, 1);
	GEN i = gen_0;
	i = gdivgs(s, 4);//De la sfertul puterii.
    
    FILE *F1 = fopen("/FPRIM.TXT", "a");//De la 405 pentru 2. E greu. 
    pari_printf("Puterile din care vrem factori:\n\n");

    for (; gcmp(i, s) <= 0; i = gaddgs(i, 1)) {//1.
      j = gsubgs(gpow(n, i, prec), 1);
      j = Z_factor(j);
      pari_printf("%Ps  %Ps\n", i, j);//Tiv tiv alternativ.
      pari_fprintf(F1, "%Ps\n", j);
      
      if (low_stack(st_lim, stack_lim(btop, 1)))
        gerepileall(btop, 2, &j, &i);
	}
    
    fclose(F1);
  avma = ltop;
  return;
}

