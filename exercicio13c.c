    #include <stdio.h>
    #include<math.h>
    #include<string.h>
        int main (){
            int N, i, K, s ;
            scanf("%d", &N);
            if (N>=0)
            {
                if (N>1 && N<=3)
                {
                    printf ("PRIMO");
                }
                else if (N%2==0)
                {
                    printf ("NAO PRIMO");
                }
                else if (N%3==0)
                {
                    printf ("NAO PRIMO");
                }
                else if (N%5==0)
                {
                    printf ("NAO PRIMO");
                }
                else if (N%7==0)
                {
                    printf ("NAO PRIMO");
                }
                else if (N>=0 && N<=1)
                {
                    printf ("NAO PRIMO");
                }
                else 
                {
                    printf ("PRIMO");
                }
            }
            
            else 
            {
                printf ("Numero invalido!");
            }
        }