#include<stdio.h>
#include<math.h>

int main()
{
   int N1,N2,N3,N4,AUX,tresdigitos,quatrodigitos;
        scanf ("%d" , &tresdigitos);
        N3= tresdigitos % 10;
        AUX= tresdigitos / 10;
        N2 = AUX % 10;
        AUX= AUX/10;
        N1= AUX % 10;
        AUX= N1+(N2*3)+(N3*5);
        N4= AUX % 7;
        quatrodigitos = tresdigitos * 10 + N4;
        printf("O NOVO NUMERO E = %d \n",quatrodigitos);
}

