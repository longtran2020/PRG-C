#include <stdlib.h>
#include <math.h> 
#include <stdio.h>


int main()
{
    int a[100];
    int i, n, temp;
    printf("Zadejte prosím celkový počet prvků: ");
    scanf("%d", & n);

    for(i = 0; i < n; i++)
    {
        printf("cislo %d: ", i + 1);
        scanf("%d", & a[i]);
    }
    for(i = 0; i < n / 2; i++) 
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    printf("cislo které byli serazeni opacne: \n");

    for (i = 0; i <n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}