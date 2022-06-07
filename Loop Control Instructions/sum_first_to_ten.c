#include <stdio.h>

int main()
{
    int i, sum = 0;

    scanf("%d",&i);
    i++;

    while (i--)
    {
        sum += i;
    }

    printf("your sum is (1to10) %d", sum);

    return 0;
}
