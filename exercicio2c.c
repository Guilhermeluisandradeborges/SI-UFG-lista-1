#include <stdio.h>
#include<math.h>
#include<string.h>
    int main (){
        int n;
        double C, F;
        scanf ("%d", &n);

        while(n--)
        {
            scanf("%lf",&F);
            C= (5*(F-32))/9;
            printf ("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", F, C ); 
        }
        return 0;
        
    }