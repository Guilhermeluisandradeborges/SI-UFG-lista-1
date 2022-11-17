#include <stdio.h>
#include<math.h>
#include<string.h>
    int main (){
        int n, n1, n2 ,n3, n4, d, c, um, aux,aux2 ;
        scanf ("%d", &n);
 
        if (n>9999)
        {
           printf ("Numero invalido!");
        }
        else if (n>0 && n<=9999) 
        {
           if (n>0 && n<=9)
           {
               if (n==1)
               {
               printf ("(primeira ordem) %d =, %d, unidade",n, n);
               }
               else
               {
               printf ("(primeira ordem) %d =, %d, unidades",n, n);
               }
           }
           else if (n>9 && n<=99)
           {
               n1=n/10; //dezenas
               n2=n%10;
               d= n1*10;
               if (n1!=1 && n2==1)
               {
               printf ("(segunda ordem) %d = %d dezenas + %d unidade = %d + %d", n ,n1 ,n2, d, n2);
               }
               else if (n1==1 && n2==1)
               {
                   printf ("(segunda ordem) %d = %d dezena + %d unidade = %d + %d", n ,n1 ,n2, d, n2);
               }
               else if (n1==1 && n2!=1)
               {
                   printf ("(segunda ordem) %d = %d dezena + %d unidades = %d + %d", n ,n1 ,n2, d, n2);
               }
               else if (n==1 && n2!=1 && n2!=0)
               {
                   printf ("(segunda ordem) %d = %d dezena + %d unidades = %d + %d", n ,n1 ,n2, d, n2);
               }
               else if (n!=1 && n2==0)
               {
                   printf ("(segunda ordem) %d = %d dezena = %d", n ,n1 , d);
               }
               else
               {
                   printf ("(segunda ordem) %d = %d dezenas + %d unidades = %d + %d", n ,n1 ,n2, d, n2);
               }
               
           }
           else if (n>99 && n<=999)
           {
               n1=n/100; 
               aux=n%100;
               n2=aux/10;
               n3=aux%10;
               c= n1*100;
               d= n2*10;
               if(n1!=1 && n2!=1 && n2!=0 && n3==1)
               {
                  printf ("(terceira ordem) %d = %d centenas + %d dezenas + %d unidade = %d + %d + %d ", n ,n1 ,n2, n3, c, d, n3);
               }
               else if (n1!=1 && n2!=0 && n3==0)
               {
                  printf ("(terceira ordem) %d = %d centenas + %d dezenas = %d + %d ", n ,n1 , n2, c, n2);
               }
               else if (n1!=1 && n2==0 && n3==0)
               {
                  printf ("(terceira ordem) %d = %d centenas = %d ", n ,n1 , c);
               }
               else if (n1!=1 && n2==0 && n3==0)
               {
                  printf ("(terceira ordem) %d = %d centenas = %d ", n ,n1,c);
               }
               else if (n1!=1 && n2==0 && n3!=0)
               {
                  printf ("(terceira ordem) %d = %d centenas + %d unidades = %d + %d  ", n ,n1, n3 ,c, n3);
               }
               else if (n1==1 && n2==0 && n3==1)
               {
                  printf ("(terceira ordem) %d = %d centena + %d unidade = %d + %d ", n ,n1 , n3, c, n3);
               }
               else if (n1==1 && n2!=0 && n2!=1 && n3==0)
               {
                  printf ("(terceira ordem) %d = %d centena = %d ", n ,n1 , c);
               }
               else if (n1==1 && n2==0 && n3==0)
               {
                  printf ("(terceira ordem) %d = %d centena = %d  ", n ,n1 , c);
               }
               else if(n1!=1 && n2==1 && n3==1)
               {
                  printf ("(terceira ordem) %d = %d centenas + %d dezena + %d unidade = %d + %d + %d ", n ,n1 ,n2, n3, c, d, n3);
               }
               else if(n1==1 && n2==1 && n3==1)
               {
                  printf ("(terceira ordem) %d = %d centena + %d dezena + %d unidade = %d + %d + %d ", n ,n1 ,n2, n3, c, d, n3);
               }
               else if(n1!=1 && n2==1 && n3!=1 && n3!=0)
               {
                  printf ("(terceira ordem) %d = %d centenas + %d dezena + %d unidades = %d + %d + %d ", n ,n1 ,n2, n3, c, d, n3);
               }
               else if(n1==1 && n2!=1 && n2!=0 && n3==1)
               {
                  printf ("(terceira ordem) %d = %d centena + %d dezenas + %d unidade = %d + %d + %d ", n ,n1 ,n2, n3, c, d, n3);
               }
               else if(n1==1 && n2!=1 && n2!=0 && n3!=1 && n3!=0)
               {
                  printf ("(terceira ordem) %d = %d centenas + %d dezenas + %d unidade = %d + %d + %d ", n ,n1 ,n2, n3, c, d, n3);
               }
               else if(n1!=1 && n2!=1 && n2!=0 && n3==1)
               {
                  printf ("(terceira ordem) %d = %d centenas + %d dezenas + %d unidade = %d + %d + %d ", n ,n1 ,n2, n3, c, d, n3);
               }
               else
               {
                  printf ("(terceira ordem) %d = %d centenas + %d dezenas + %d unidades = %d + %d + %d ", n ,n1 ,n2, n3, c, d, n3);
               }
           }
            else if (n>999 && n<=9999)
           {
               n1=n/1000; 
               aux=n%1000;
               n2=aux/100;
               aux2=aux%100;
               n3= aux2/10;
               n4= aux2%10;
               um= n1*1000;
               c= n1*100;
               d= n2*10;
               if (n1!=1 && n2!=1 && n2!=0 && n3==1 && n4==1)
               {
               printf ("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezena + %d unidade = %d + %d + %d + %d", n ,n1 ,n2, n3, n4, um, c, d , n4);
               }
               else if (n1!=1 && n2==1 && n3==1 && n4==0)
               {
                printf ("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezena = %d + %d + %d", n ,n1 ,n2, n3, um, c, d);
               }
               else if (n1!=1 && n2==1 && n3==0 && n4==0)
               {
                printf ("(quarta ordem) %d = %d unidades de milhar + %d centena = %d + %d", n ,n1 ,n2, um, c);
               }
               else if (n1!=1 && n2==0 && n3==0 && n4==0)
               {
                printf ("(quarta ordem) %d = %d unidades de milhar = %d", n ,n1, um);
               }
                else if (n1!=1 && n2!=1 && n2!=0 && n3!=0 && n3!=1 && n4==0)
               {
                printf ("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezena = %d + %d + %d", n ,n1 ,n2, n3, um, c, d);
               }
               else if (n1!=1 && n2==1 && n3==1 && n4==1)
               {
                printf ("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezena + %d unidade = %d + %d + %d + %d", n ,n1 ,n2, n3, n4, um, c, d , n4);
               }
               else if (n1==1 && n2==1 && n3==1 && n4==1)
               {
                printf ("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezena + %d unidade = %d + %d + %d + %d", n ,n1 ,n2, n3, n4, um, c, d , n4);
               }
               else if (n1!=1 && n2==1 && n3!=1 && n4==1)
               {
                printf ("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezenas + %d unidade = %d + %d + %d + %d", n ,n1 ,n2, n3, n4, um, c, d , n4);
               }
               else if (n1==1 && n2!=1 && n3==1 && n4==1)
               {
                printf ("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezena + %d unidade = %d + %d + %d + %d", n ,n1 ,n2, n3, n4, um, c, d , n4);
               }
               else if (n1==1 && n2!=1 && n3!=1 && n4==1)
               {
                printf ("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezenas + %d unidade = %d + %d + %d + %d", n ,n1 ,n2, n3, n4, um, c, d , n4);
               }
               else if (n1!=1 && n2!=1 && n3==1 && n4==1)
               {
                printf ("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezena + %d unidade = %d + %d + %d + %d", n ,n1 ,n2, n3, n4, um, c, d , n4);
               }
               else if (n1!=1 && n2!=1 && n3!=1 && n4==1)
               {
                printf ("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezena + %d unidade = %d + %d + %d + %d", n ,n1 ,n2, n3, n4, um, c, d , n4);
               }
               else if (n1!=1 && n2!=1 && n3==1 && n4!=1)
               {
               printf ("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezena + %d unidades = %d + %d + %d + %d", n ,n1 ,n2, n3, n4, um, c, d , n4);
               }
               else if (n1!=1 && n2==1 && n3==1 && n4!=1)
               {
                printf ("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezena + %d unidades = %d + %d + %d + %d", n ,n1 ,n2, n3, n4, um, c, d , n4);
               }
               else if (n1==1 && n2==1 && n3==1 && n4!=1)
               {
                printf ("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezena + %d unidades = %d + %d + %d + %d", n ,n1 ,n2, n3, n4, um, c, d , n4);
               }
               else if (n1!=1 && n2==1 && n3!=1 && n4!=1)
               {
                printf ("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezenas + %d unidadess = %d + %d + %d + %d", n ,n1 ,n2, n3, n4, um, c, d , n4);
               }
               else if (n1==1 && n2!=1 && n3==1 && n4!=1)
               {
                printf ("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezena + %d unidades = %d + %d + %d + %d", n ,n1 ,n2, n3, n4, um, c, d , n4);
               }
               else if (n1==1 && n2!=1 && n3!=1 && n4!=1)
               {
                printf ("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezenas + %d unidades = %d + %d + %d + %d", n ,n1 ,n2, n3, n4, um, c, d , n4);
               }
               else if (n1!=1 && n2!=1 && n3==1 && n4!=1)
               {
                printf ("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezena + %d unidades = %d + %d + %d + %d", n ,n1 ,n2, n3, n4, um, c, d , n4);
               }
               else if (n1!=1 && n2!=1 && n3!=1 && n4!=1)
               {
                printf ("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezena + %d unidades = %d + %d + %d + %d", n ,n1 ,n2, n3, n4, um, c, d , n4);
               }
            }
 
        }
    }
    
    