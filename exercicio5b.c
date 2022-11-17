#include <stdio.h>
#include<math.h>
#include<string.h>
    int main ()
    {
        int NM, ND
        double SM, SF, TI, IB, IL, IN,RESULTADO ;
        scanf ("%d %lf %d %lf %lf", &NM, &SM, &ND, &SF, &TI);
        if (SF>=(12*SM))
        {
            IB= SF*0,20;
            IL=IB-(300*ND);
            IN=(TI/100)*SF
            RESULTADO= IN-IL;
            if (RESULTADO<0)
            {
                 printf ("MATRICULA = %d \n", NM);
                 printf ("IMPOSTO BRUTO = %.2lf \n", IB);
                 printf ("IMPOSTO LIQUIDO = %.2lf \n", IL);
                 printf ("RESULTADO = %.2lf", RESULTADO);
                 printf ("IMPOSTO A RECEBER");
            }
            else 
            {
                 printf ("MATRICULA = %d \n", NM);
                 printf ("IMPOSTO BRUTO = %.2lf \n", IB);
                 printf ("IMPOSTO LIQUIDO = %.2lf \n", IL);
                 printf ("RESULTADO = %.2lf", RESULTADO);
                 printf ("IMPOSTO A pagar");
            }

        }
        else if (SF>=(5*SM)&& SF<(12*SM))
        {
            IB= SF*0,08;
            IL=IB-(300*ND);
            IN=(TI/100)*SF
            RESULTADO= IN-IL;
            if (RESULTADO<0)
            {
                 printf ("MATRICULA = %d \n", NM);
                 printf ("IMPOSTO BRUTO = %.2lf \n", IB);
                 printf ("IMPOSTO LIQUIDO = %.2lf \n", IL);
                 printf ("RESULTADO = %.2lf", RESULTADO);
                 printf ("IMPOSTO A RECEBER");
            }
            else 
            {
                 printf ("MATRICULA = %d \n", NM);
                 printf ("IMPOSTO BRUTO = %.2lf \n", IB);
                 printf ("IMPOSTO LIQUIDO = %.2lf \n", IL);
                 printf ("RESULTADO = %.2lf", RESULTADO);
                 printf ("IMPOSTO A pagar");
            }
        }
        else if (SF<(5*SM))
        {
            IB= SF*0,00;
            IL=IB-(300*ND);
            IN=(TI/100)*SF
            RESULTADO= IN-IL;
            if (RESULTADO<0)
            {
                 printf ("MATRICULA = %d \n", NM);
                 printf ("IMPOSTO BRUTO = %.2lf \n", IB);
                 printf ("IMPOSTO LIQUIDO = %.2lf \n", IL);
                 printf ("RESULTADO = %.2lf", RESULTADO);
                 printf ("IMPOSTO A RECEBER");
            }
            else 
            {
                 printf ("MATRICULA = %d \n", NM);
                 printf ("IMPOSTO BRUTO = %.2lf \n", IB);
                 printf ("IMPOSTO LIQUIDO = %.2lf \n", IL);
                 printf ("RESULTADO = %.2lf", RESULTADO);
                 printf ("IMPOSTO A pagar");
            }
        }
    }