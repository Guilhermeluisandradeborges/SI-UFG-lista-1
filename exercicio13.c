#include<stdio.h>
#include<math.h>

int main()
{
   double a,b,c,d,e,f,z, w;
        scanf ("%lf" , &a);
        scanf ("%lf" , &b);
        scanf ("%lf" , &c);
        scanf ("%lf" , &d);
        scanf ("%lf" , &e);
        scanf ("%lf" , &f);   
        w= ((a*f)-(d*c))/((a*e)-(d*b));
        z= (c- (b*w))/ a;
        printf("O VALOR DE X E = %.2lf \n",z);
        printf("O VALOR DE Y E = %.2lf \n",w);
        
}

