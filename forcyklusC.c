#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int h = 30;
   for (int y = 1; y <= h; y++)
   {
      for (int x = 1; x <= y; x++)
      {
         printf("[%i,%i]", x, y);
         printf("*");
      }
      printf("\n");
   }
   return 0;
}