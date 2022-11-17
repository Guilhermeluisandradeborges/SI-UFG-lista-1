#include <stdio.h>
#include<math.h>
#include<string.h>
    int main (){
        double n1, n2, n3, perimetro, area;
        scanf ("%lf %lf %lf", &n1, &n2, &n3);
        if ((n1>(n2-n3) && n1<(n2+n3)) || (n2>(n1-n3) && n2<(n1+n3)) || (n3>(n1-n2) && n3<(n1+n2)))
        {
           perimetro= n1+n2+n3;
           printf ("Perimetro = %.2lf\n", perimetro);
        }
        else 
        {
            area=((n1+n2)*n3)/2;
            printf ("Area = %.2lf\n", area);        
        }
    }