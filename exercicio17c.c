#include <stdio.h>

int main()
{
    int m, n, x, y; 
    int matriz [x][y];
    scanf ("%d", &x);
    scanf ("%d", &y);
    for (m=1; m<=x; m++){
        for (n=1; n<=y; n++)
        {
            if (n<m)
            {
                if (n>1)
            {
                printf("-(%d,%d)", m, n);
            }
            else
            {
                    printf("(%d,%d)", m, n);
            }
            }
        }
        printf ("\n");
    }
    return 0;
}
