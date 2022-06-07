#include <stdio.h>

int lenght(char *st)
{
    char *ptr = st;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char st[20];
    printf("enter the value\n");
    gets(st);
    int l = lenght(st);
    printf("the lenght of this string is %d\n", l);
    return 0;
}