#include<stdio.h>

int main()
{
    int i=1;
    for(int i = 1;i<=10;i++)
    {
        printf("%d\n",i);
    }
    while (i<=10)
    {
        printf("%d\n",i);
        i++;
    }
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=10);
    return 0;
}