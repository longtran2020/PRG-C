#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void my_strrev(char *addr)
{
    int charCount = 0;
    while (*(addr + charCount) != '\0')
    {
        charCount++;
    }
    char tmp;
    for (int i = 0; i < charCount / 2; i++)
    {
        tmp = *(addr + i);
        *(addr + i) = *(addr + charCount - 1 - i);
        *(addr + charCount - 1 - i) = tmp;
    }
}
int main()
{
    char text[] = "lokomotiva";
    puts(text);
    my_strrev(text);
    puts(text);
    strrev(text);
    printf("%s\n", text);
    return 0;
}