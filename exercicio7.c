#include <stdio.h>
#include<math.h>
    int main (){
        double r, s, t, T, p, a;
        scanf ("%lf", &r);
        scanf ("%lf", & s);  
        scanf ("%lf", & t);    
        T=(r+s+t)/2;
        p=T*(T-r)*(T-s)*(T-t);
        a=sqrt(p);
        printf ("A AREA DO TRIANGULO E =  %.2lf", a);
    }