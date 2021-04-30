#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x = 0;

    if (x > 0)
    {
        printf("%i je kladne cislo.", x);
    }
    else if (x < 0)
    {
       print("%i je zaporne cislo.", x);
    }
    else
    {
        printf("%i je nula.", x);
    }
    
   return 0;
}