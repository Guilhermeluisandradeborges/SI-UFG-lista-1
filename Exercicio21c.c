#include <stdio.h>


int main()
{
    int n1, n2, n3,d=2, N1, N2, N3, MMC=1, D;
    scanf ("%d %d %d", &n1, &n2, &n3);
    N1=n1;
    N2=n2;
    N3=n3;
    while ((N1+N2+N3)!=3)
    {
       while(N1 % d ==0 || N2 % d==0 || N3 % d==0) 
       {
        printf ("%d %d %d :%d\n", N1, N2, N3, d);
       if (N1%d==0)
        {
            N1/=d;
        }
        if (N2%d==0)
        {
            N2/=d;
        }
        if (N3%d==0)
        {
            N3/=d;
        }
        MMC*=d;
       }
        d++;
    }
    printf ("MMC: %d", MMC);
    return 0;
}