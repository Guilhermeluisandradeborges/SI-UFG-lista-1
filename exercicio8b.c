#include <stdio.h>
#include<math.h>
#include<string.h>
    int main (){
        int a;
        scanf ("%d", &a);
        if (a%4==0 && a%100!=0 && a>1582)
        {
           printf ("ANO BISSEXTO");
        }
        else if (a%400==0 && a>1582)
        {
            printf ("ANO BISSEXTO");        
        }
        else
        {
            printf ("ANO NAO BISSEXTO");
        }
    }