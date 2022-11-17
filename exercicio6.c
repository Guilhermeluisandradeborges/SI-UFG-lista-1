#include <stdio.h>
#include <math.h>
    int main (){
        int h, m, s, r;
        scanf ("%d", &h);
        scanf ("%d", &m);  
        scanf ("%d", &s);    
        r= (5*3600) + (m*60) + s;
        printf ("O TEMPO EM SEGUNDOS E = %d \n", r);
    }