#include<stdio.h>
#include<math.h>

int main()
{
   int N1,N2,N3,N4,RS;
        scanf ("%d" , &RS);
        N1= RS/100;
        N2= (RS % 100)/50;
        N3= ((RS % 100) % 50)/10;
        N4= ((RS % 100) % 50) % 10 ;
        printf("NOTAS DE 100 = %d \n", N1);
        printf("NOTAS DE 50 = %d \n", N2);
        printf("NOTAS DE 10 = %d \n", N3);
        printf("MOEDAS DE 1 = %d \n", N4);


}

