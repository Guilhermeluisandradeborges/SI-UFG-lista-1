#include <stdio.h>
    #include<math.h>
    #include<string.h>
        int main (){
            int T, A, B, n1, n2 ,n3, n4, n5, n6, aux, aux2 ;
            scanf("%d", &T);
            while (T--)
            {
                scanf ("%d %d", &A, &B);
                    A!=B;
                    n1=A/100;
                    aux=A%100;
                    n2=aux/10;
                    n3= aux%10;
                    n4=B/100;
                    aux2=B%100;
                    n5=aux2/10;
                    n6= aux2%10;
                    n1!=0;
                    n2!=0;
                    n3!=0;
                    n4!=0;
                    n5!=0;
                    n6!=0;
                    
                if (n3>n6)
                {
                    printf("%d%d%d\n", n3, n2, n1);
                }
                else if (n6>n3)
                {
                    printf("%d%d%d\n", n6, n5, n4);
                }
                else if (n3==n6 && n2>n5)
                {
                     printf("%d%d%d\n", n3, n2, n1);
                }
                else if (n3==n6 && n5>n2)
                {
                     printf("%d%d%d\n", n6, n5, n4);
                }
                else if (n3==n6 && n5==n2 && n4>n1)
                {
                     printf("%d%d%d\n", n6, n5, n4);
                }
                else if (n3==n6 && n5==n2 && n1>n4)
                {
                     printf("%d%d%d\n", n3, n2, n1);
                }
            }
            
        }