#include <stdio.h>
#include<math.h>
#include<string.h>
    int main (){
        double salario, salarioComReajuste;
        scanf ("%lf", &salario);
        if (salario<=300)
        {
            salarioComReajuste= salario*1.5;
            printf ("SALARIO COM REAJUSTE = %.2lf \n", salarioComReajuste);
        }
        else
        {
            salarioComReajuste= salario*1.3;
            printf ("SALARIO COM REAJUSTE = %.2lf \n", salarioComReajuste);
        }
    }