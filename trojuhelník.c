#include <stdio.h>
#include <math.h>
#include <stdio.h>
int main() {
   int x,y;
   int h = 6;  
   for(x = 1; x <= h; x++) 
   {
      for(y = 1; y <= h-x; y++)
         printf(" ");
 
      for(y = 1; y <= x; y++)
         printf("* ");
 
      printf("\n");
   }
   return 0;
}