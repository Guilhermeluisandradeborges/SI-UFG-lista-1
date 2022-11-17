#include <stdio.h>
#include<math.h>
#include<string.h>
    int main (){
        int matricula, aux;
        double mc, v; 
        char A;
        scanf ("%d %lf %c\n", &matricula, &mc, &A);
        if (A == 'R')
        {
            v= 5+(0,05*mc);
            printf ("CONTA = %d\n", matricula);
            printf ("VALOR DA CONTA = %.2lf\n", v);
        }
        else if (A == 'C')
        {
            if(mc<=80)
            {
            v=500;
            printf ("CONTA = %d\n", matricula);
            printf ("VALOR DA CONTA = %.2lf\n", v);
            }
            else if(mc>80)
            {
            v= 500+(0,25*mc);
            printf ("CONTA = %d\n", matricula);
            printf ("VALOR DA CONTA = %.2lf\n", v);
            }
        }
        else if (A == 'I')
        {
            if(mc<=100)
            {
            v=800;
            printf ("CONTA = %d\n", matricula);2
            printf ("VALOR DA CONTA = %.2lf\n", v);
            }
            else if(mc>100)
            {
            v=800+(0,04*mc);
            printf ("CONTA = %d\n", matricula);
            printf ("VALOR DA CONTA = %.2lf\n", v);
            }
        }
        
 
        
    }