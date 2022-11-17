#include <stdio.h>
#include<math.h>
#include<string.h>
    int main ()
    {
          int n, n1, n2, n3, n4, n5, aux, aux1, aux2,aux3;
          scanf ("%d", &n);

        if (n>99999)
        {
            printf ("NUMERO INVALIDO")

        }
        else if (n<=99999 && n>9999)
        {
                 n1=n/10000;
                 aux=n%10000;
                 n2=aux/1000;
                 aux1=aux%1000;
                 n3= aux1/100;
                 aux2= aux1%100;
                 n4= aux2/10;
                 n5=aux2%10;
                 if (n1==n5 && n2==n4)
                 {
                    printf("PALINDROMO")
                 }
                 else
                 {
                    printf( "NAO PALINDROMO");
                 }

            
        }
        else if (n<=9999 && n>999)
        {
            printf ("NUMERO INVALIDO");
        }
        else if (n>99 && n<=999)
        {
                 n1=n/100;
                 aux=n%100;
                 n2=aux/10;
                 aux1=aux%10;
                 n3= aux1;
                 if (n1==n3)
                 {
                    printf("PALINDROMO")
                 }
                 else
                 {
                    printf( "NAO PALINDROMO");
                 }
        }

        
    }