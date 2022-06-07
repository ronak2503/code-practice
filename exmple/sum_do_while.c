#include <stdio.h>

int main()
{
    int i, sum = 0;
    scanf("%d", &i);
    do
    {
        sum += i;
    } while (i--);
    printf("your sum is %d \n", sum);
    return 0;
}
