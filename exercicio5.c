#include <stdio.h>
#include<math.h>
    int main (){
        double a, h, b, r;
        scanf ("%lf", &h);
        scanf ("%lf", &a);
        b=3*a*a*sqrt(3)/2;
        r=b*h/3;
        printf ("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS \n", r);
    }