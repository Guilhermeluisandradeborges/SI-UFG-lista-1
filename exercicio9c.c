    #include <stdio.h>
    #include<math.h>
    #include<string.h>
        int main (){
            int n, fat,i ;
            scanf("%d", &n);
            fat=1;
            for (i=n; i>1; i--)
            {
            fat=fat*i;
            }
            printf ("%d!  = %d", n, fat);
        }