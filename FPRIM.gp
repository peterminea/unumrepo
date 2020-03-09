sase(n:int, l:int, s:int) = 
{
/*n e numărul prim, L-s e intervalul puterii: de exemplu la n = 3, I = 4 și s = 8, se iau puterile lui 3 de la 4 la 8: 81, 243, 729, 2187; 80/2, 242/2, 728/2, 2186/2 în ce factori primi se împart.*/
my(i:int, j:int);
for(i=l, s, j = (n^i-1)/(n-1); print(n, "^", i, " duce la împărțirea în puteri de factori primi:  ", factor(j)))
}
