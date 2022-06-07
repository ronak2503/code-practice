#include <stdio.h>

void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        *ptr++;
    }
}
int main()
{
    char c[100]; 
    printf("enter the string \n");
    gets(c);
    encrypt(c);
    printf("encrypt string is:::%s", c);
    return 0;
}