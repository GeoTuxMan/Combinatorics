/* permutations of n-set */
/* k-arrangements of n-set */
/* k-combinations of an n-set */
/* e.g.: n-set = {1,2,3,4,5} , k =3 */
// k <= n

#include <conio.h>
#include <stdio.h>

long fact(int m);

unsigned n,k;
double p,a,c;

int main()
{
  
  printf("n= ");
  scanf("%u",&n);
  printf("k= ");
  scanf("%u",&k);
  p=fact(n);
  a=fact(n)/fact(n-k);
  c=fact(n)/(fact(k)*fact(n-k));
  printf("\n\nPermutations(%d)=%3.2f\n\n",n,p);
  printf("Arrangements(%d,%d)=%3.2f\n\n",n,k,a);
  printf("Combinations(%d,%d)=%3.2f\n\n",n,k,c);
  
  return 0;
}

long fact(int m)
{
 int i,t;
 if(m==0)
  return 1;
 else
 {
  t=1;
  for(i=1;i<=m;i++)
   t*=i;
 }
 return t;
}
