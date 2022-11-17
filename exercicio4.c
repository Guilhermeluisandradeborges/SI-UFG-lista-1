#include <stdio.h>
    int main (){
        double a, b, c, r;
        scanf ("%lf", &a);
        scanf ("%lf", &b);
        scanf ("%lf", &c);
        r= b*b - 4*a*c;
        printf ("O VALOR DE DELTA E = %.2lf \n", r);
    }