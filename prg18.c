#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int lucas(int n)
{
    if (n == 0)
        return 2;
    if (n == 1)
        return 1;

    return lucas(n - 1) + lucas(n - 2);
}

int main()
{
   int n = 15;
   printf("%i", lucas(n));

   return 0;
}