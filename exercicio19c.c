#include <stdio.h>
 
 
int main() {
  int n, ctt1, ctt2, h;
 
  scanf("%d" , &n);
 
  while(n>0){
    for (h = 1; h <= n; h++) {
   
    ctt1=1;
    while ( ctt1 < h ) {
        ctt2 = ctt1; 
      
        while (ctt1*ctt1 + ctt2*ctt2 < h*h)
            ctt2++;
                if (ctt1*ctt1 + ctt2*ctt2 == h*h){
                    printf("hipotenusa = %d, catetos %d e %d\n", h, ctt1, ctt2);
                   
      }
      ctt1++;
    }
  }
  break;
  }
  
  return 0;
}