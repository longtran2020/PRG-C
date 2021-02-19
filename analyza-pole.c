#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int p [10];
    int soucet = 0;
    int i;
    srand(time(0));

    for (i=0; i<10; i++)
    {
        p[i] = rand()%100+1;
    }

    int max = p(0);
    int min = p(0);
    int prumer;
    int prumer1;

    for(i=0;i<10;i++)
    {
        printf("p[%d] = %d\n",i,p[i]);
    }

    for(i=0;i<10;i++)
    {
     if (min > p[i]
        min = p[i]);
     if (max > p[i]
        max = p[i]);
     soucet += p[i];
    } 

    printf("\n\n\nmaximum = %d",max);
    printf("\nminimum = %d", min);
    printf("\nSoucet = %d",soucet);
    printf("\nprumer = %.2d",soucet/(double)10);
    printf("\nprumer max a min hodnoty = %.2d",(soucet-max-min)/(double) 8);

    return 0;
}
