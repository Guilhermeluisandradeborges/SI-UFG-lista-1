#include <stdio.h>
#include<math.h>
#include<string.h>
    int main (){
        int n, n1, n2 ,n3, n4, aux,aux2 ;
        scanf ("%d", &n);

        if (n>9999)
        {
           printf ("Numero invalido!")
        }
        else if (n>0 && n<=9999)
        {
           if (n>0 && n<=9)
           {
               printf ("(primeira ordem) %d =, %d, unidades",n, n);
           }
           else if (n>9 && n<=99)
           {
               n1=n/10; //dezenas
               n2=n%10;
               printf ("(segunda ordem) %d = %d dezena + %d unidades", n ,n1 ,n2);
           }
           else if (n>99 && n<=999)
           {
               n1=n/100; 
               aux=n%100;
               n2=aux/10;
               n3=aux%10;
               printf ("(terceira ordem) %d = %d centenas + %d dezena + %d unidades", n ,n1 ,n2, n3);
           }
            else if (n>999 && n<=9999)
           {
               n1=n/1000; 
               aux=n%1000;
               n2=aux/100;
               aux2=aux%100;
               n3= aux2/10;
               n4= aux2%10;
               printf ("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezena + %d unidades", n ,n1 ,n2, n3);
           }

        }
    }