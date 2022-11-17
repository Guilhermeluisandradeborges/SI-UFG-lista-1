#include <stdio.h>
#include<math.h>
#include<string.h>
    int main (){
        int x, y, i ;
        scanf ("%d %d", &x, &y );
        if (x%2!=0)
        {
            printf("O PRIMEIRO NUMERO NAO E PAR\n");
        }
        else{
            for(i = x; i<=x+(2*(y-1)); i+=2)
            {
            printf ("%d ", i);
            }
        }
    }