#include <stdio.h>
#include<math.h>
#include<string.h>
    int main ()
    {
        double a, b, c, x1, x2, delta;
        scanf ("%lf %lf %lf", &a, &b, &c);
        delta = (pow(b,2) - 4 * a * c);
            x1 = (-b + sqrt(delta))/(2 * a);
            x2 = (-b - sqrt(delta))/ (2 * a);
        
        if (delta>0)
        {
            if (x1>x2)
            {
            printf ("RAIZES DISTINTAS \n");
            printf ("X1 = %.2lf\n",x2);
            printf ("X2 = %.2lf",x1);
            }
            else
            {
            printf ("RAIZES DISTINTAS \n");
            printf ("X1 = %.2lf\n",x1);
            printf ("X2 = %.2lf",x2);
            }
        }
        else if (delta==0)
        {
            printf ("RAIZ UNICA \n");
            printf ("X1 = %.2lf",x1);

        }
        else if (delta<0)
        {
            printf ("RAIZES IMAGINARIAS \n");
        }
    }