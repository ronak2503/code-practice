#include <stdio.h>

void dencrypted(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        *ptr++;
    }
}
int main()
{
    char c[100]; 
    printf("enter the string \n");
    gets(c);
    dencrypted(c);
    printf("dencrypted string is:::%s", c);
    return 0;
}