#include <stdio.h>
#include<math.h>
    int main (){
        double m, a, t, v, s, w;
        scanf ("%lf", &m);
        scanf ("%lf", &a);  
        scanf ("%lf", & t);    
        v=a*t*3.6;
        s=(a*t*t)/2;
        w= (m*1000*a*t*a*t/2);
        printf ("VELOCIDADE =  %.2lf\n", v);
        printf ("ESPACO PERCORRIDO =  %.2lf\n", s);
        printf ("TRABALHO REALIZADO =  %.2lf\n", w);
        return 0;
    }