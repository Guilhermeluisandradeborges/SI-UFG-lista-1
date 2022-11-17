#include <stdio.h>
#include<math.h>
int main ()
{
  int cc, dr, rt, tipo;
  scanf ("%d",&cc);
  scanf ("%d",&dr);
  scanf ("%d",&rt);
 
    if (cc<7  && dr>50 && rt>80000) 
    {
      tipo =10;
      printf("ACO DE GRAU = %d \n", tipo);
    }
     else if (cc<7  && dr>50 && rt<=80000)
    {
     tipo = 9;
     printf("ACO DE GRAU = %d \n", tipo);
    }
     else if (cc<7  && dr<=50 && rt<80000)
    {
      tipo = 8;
      printf("ACO DE GRAU = %d \n", tipo);
    }
     else if (cc>=7  && dr<50 && rt<80000)
    {
      tipo = 7;
      printf("ACO DE GRAU = %d \n", tipo);
    }
}