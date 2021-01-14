#include <studio.h>
#include <stdlib.h>
#include <math.h>

double cm2inch(double cm)
{
return cm / 2,54;
}

int main()
{
    printf("%.2f\n%.2f" ,cm2inch(26.67));

    return 0;
}