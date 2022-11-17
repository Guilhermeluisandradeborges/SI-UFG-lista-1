#include <stdio.h>
    int main(){
       double r,h,a,RS;  
        scanf ("%lf",&r);
        scanf ("%lf",&h);
        a=2*3.14159*r*r + 2*3.14159*r*h;
        RS=100*a;
        printf("O VALOR DO CUSTO E = %.2lf \n", RS);
     }