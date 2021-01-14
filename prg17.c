#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265359

double deg2rad (double deg)
{
    return deg / 180*PI;
}

int main()
{
    printf("%.5f", deg2rad(360));

    return 0;
}