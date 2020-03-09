export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib
rm vecun
rm vecun1
rm vecuna
rm NUMERIC0
rm NUMERICMOD
rm NUMERICMODPAR
rm NUMERICUL
rm ABIVIRO
rm NUMERICPAR
rm numsimpl
rm numsum
rm sumred
rm MODPRIMSUM
rm MODPARSUM
rm MODIFSUM
rm MODSPAR
rm HMODSPAR
rm MODPRIM
rm MODSPRIM
rm SUMM
rm FACTORMSUB
rm FACTORSUB
rm FACTORSUBM
rm FACTMSUB
rm FACTSUB
rm FACTSUBM
rm RAPIDNUM
rm HMODIFSUM
rm CIRCENTE
rm PARONTE
rm CREPITUS
rm MODPRIME
rm MODPRIMULE
rm MODSPRIME
rm MODSPRIMULE
rm reconst
rm rep
rm PROGNUM
#rm ALFOLDRE
rm FILTRARM
rm FILTRAREM
rm VECUNSUB
rm VECSUB
rm SCLEPAMORIS
rm FILTRARE
rm FILTRAR2
rm dist
rm LITUAN
rm LITUANUL*
rm scr
rm scr2
rm urc
rm MARGINALE
rm ERMETE
rm ERMETE0
rm ERMETE1
rm ERMETE2
rm stingerea
rm nnumsimpl
rm NMODPRIME
rm NMODPRIMULE
rm HMODPRIMSUM
rm NMODSPAR
rm NMODIFSUM
rm SORTFIL
g++ -m64 -L /usr/local/lib VECUN.cc -o vecun -lgmp -fopenmp -lm
g++ -m64 -L /usr/local/lib VECUN1.cc -o vecun1 -lgmp -fopenmp -lm
g++ -m64 -L /usr/local/lib VECUNA.cc -o vecuna -lgmp -fopenmp
g++ -m64 -L /usr/local/lib NUMERICUL.cc -o NUMERICUL -lgmp -fopenmp
g++ -m64 -L /usr/local/lib NUMERIC.cc -o NUMERIC0 -lgmp -fopenmp
g++ -m64 -L /usr/local/lib NUMERICMOD.cc -o NUMERICMOD -lgmp -fopenmp
g++ -m64 -L /usr/local/lib NUMERICMODPAR.cc -o NUMERICMODPAR -lgmp -fopenmp
g++ -m64 -L /usr/local/lib ABIVIRO.cc -o ABIVIRO -lgmp -fopenmp
g++ -m64 -L /usr/local/lib NUMERICPAR.cc -o NUMERICPAR -lgmp -fopenmp
g++ -m64 -L /usr/local/lib NUMSIMPL.cc -o numsimpl -lgmp -fopenmp
g++ -m64 -L /usr/local/lib NUMSUM.cc -o numsum -lgmp -fopenmp
g++ -m64 -L /usr/local/lib SUMRED.cc -o sumred -lgmp -fopenmp
g++ -m64 -L /usr/local/lib MODPRIMSUM.cc -o MODPRIMSUM -lgmp -fopenmp
g++ -m64 -L /usr/local/lib MODIFSUM.cc -o MODIFSUM -lgmp -fopenmp
g++ -m64 -L /usr/local/lib HMODIFSUM.cc -o HMODIFSUM -lgmp -fopenmp
g++ -m64 -L /usr/local/lib MODSPAR.cc -o MODSPAR -lgmp -fopenmp
g++ -m64 -L /usr/local/lib HMODSPAR.cc -o HMODSPAR -lgmp -fopenmp
g++ -m64 -L /usr/local/lib MODPARSUM.cc -o MODPARSUM -lgmp -fopenmp
g++ -m64 -L /usr/local/lib MODPRIM.cc -o MODPRIM -lgmp -fopenmp
g++ -m64 MODPRIME.cc -lgmp -fopenmp -o MODPRIME
g++ -m64 MODPRIMULE.cc -lgmp -fopenmp -o MODPRIMULE
g++ -m64 -L /usr/local/lib MODSPRIM.cc -o MODSPRIM -lgmp -fopenmp
g++ -m64 MODSPRIME.cc -lgmp -fopenmp -o MODSPRIME
g++ -m64 MODSPRIMULE.cc -lgmp -fopenmp -o MODSPRIMULE
g++ -m64 -L /usr/local/lib SUMM.cc -o SUMM -lgmp -fopenmp
g++ -m64 -L /usr/local/lib FACTORMSUB.cc -lgmp -fopenmp -lRandom -o FACTORMSUB
g++ -m64 -L /usr/local/lib FACTORSUB.cc -lgmp -fopenmp -lRandom -o FACTORSUB
g++ -m64 -L /usr/local/lib FACTORSUBM.cc -lgmp -fopenmp -lRandom -o FACTORSUBM
g++ -m64 -L /usr/local/lib SCLEPAMORIS.cc -lgmp -fopenmp -lRandom -o SCLEPAMORIS
g++ -m64 -L /usr/local/lib VECUNSUB.cc -lgmp -fopenmp -lRandom -o VECUNSUB
g++ -m64 -L /usr/local/lib VECSUB.cc -lgmp -fopenmp -lRandom -o VECSUB
g++ -m64 -L /usr/local/lib FACTMSUB.cc -lgmp -fopenmp -lRandom -o FACTMSUB
g++ -m64 -L /usr/local/lib FACTSUB.cc -lgmp -fopenmp -lRandom -o FACTSUB
g++ -m64 -L /usr/local/lib FACTSUBM.cc -lgmp -fopenmp -lRandom -o FACTSUBM
g++ -m64 -L /usr/local/lib RAPIDNUM.cc -lgmp -fopenmp -o RAPIDNUM
g++ -m64 CIRCENTE.cc -lgmp -fopenmp -o CIRCENTE
g++ -m64 PARONTE.cc -lgmp -fopenmp -o PARONTE
g++ -m64 CREPITUS.cc -lgmp -fopenmp -o CREPITUS
g++ -m64 RECONST.cc -lgmp -fopenmp -o reconst
g++ -m64 PROGNUM.cc -lgmp -fopenmp -o PROGNUM
#g++ -m64 ALFOLDRE.cc -lgmp -fopenmp -o ALFOLDRE
g++ -m64 FILTRARM.cc -lgmp -fopenmp -o FILTRARM
g++ -m64 FILTRAREM.cc -lgmp -fopenmp -o FILTRAREM
g++ -m64 REP.cc -lgmp -fopenmp -o rep
g++ -m64 FILTRAR0.cc -lgmp -fopenmp -o FILTRARE
g++ -m64 FILTRAR2.cc -lgmp -fopenmp -o FILTRAR2
g++ -m64 DIST.cc -lgmp -fopenmp -o dist
g++ -m64 LITUAN.cc -lgmp -fopenmp -o LITUAN
g++ -m64 LITUAN.cc -lgmp -fopenmp -o LITUANUL
g++ -m64 LITUAN2.cc -lgmp -fopenmp -o LITUANULE
g++ -m64 SCR.cc -lgmp -fopenmp -o scr
g++ -m64 SCR2.cc -lgmp -fopenmp -o scr2
g++ -m64 URC.cc -lgmp -fopenmp -o urc
g++ -m64 MARGINALE.cc -lgmp -fopenmp -o MARGINALE
g++ -m64 ERMETE.cc -lgmp -fopenmp -o ERMETE
g++ -m64 ERMETE0.cc -lgmp -fopenmp -o ERMETE0
g++ -m64 ERMETE1.cc -lgmp -fopenmp -o ERMETE1
g++ -m64 ERMETE2.cc -lgmp -fopenmp -o ERMETE2
g++ -m64 VECUNG2.cc -lgmp -fopenmp -o vecung2
gcc -w STINGEREA.c -o stingerea
g++ -m64 -L /usr/local/lib NNUMSIMPL.cc -o nnumsimpl -lgmp -fopenmp
g++ -m64 -L /usr/local/lib NMODPRIME.cc -o NMODPRIME -lgmp -fopenmp
g++ -m64 -L /usr/local/lib NMODSPAR.cc -o NMODSPAR -lgmp -fopenmp
g++ -m64 -L /usr/local/lib NMODIFSUM.cc -o NMODIFSUM -lgmp -fopenmp
g++ -m64 -L /usr/local/lib NMODPRIMULE.cc -o NMODPRIMULE -lgmp -fopenmp
g++ -m64 -L /usr/local/lib HMODPRIMSUM.cc -o HMODPRIMSUM -lgmp -fopenmp
g++ -m64 -L /usr/local/lib HMODPARSUM.cc -o HMODPARSUM -lgmp -fopenmp
g++ -m64 -L /usr/local/lib NMODPARSUM.cc -o NMODPARSUM -lgmp -fopenmp
g++ -m64 SORTFIL.cc -lgmp -fopenmp -o SORTFIL
