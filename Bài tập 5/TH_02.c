#include <stdio.h>
 int main(){
   int n, tong = 0;
   printf ("nhap so nguyen n bat ky : ");
   scanf ("%d", &n);
   for (int i = 0; i < n; i++){
       tong = tong + i+1;
   }
     printf (" tong can tim %d ", tong);
   return 0;
   }
