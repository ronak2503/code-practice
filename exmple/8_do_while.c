#include <stdio.h>

int main()
{
    int num, i = 2;
    printf("enter a number\n");
    scanf("%d", &num);
    if (num == 0 || num == 1)
    {
        printf("is not prime number\n");
        return 0;
    }
    do
    {
        if (num * i == 0)
        {
            printf("is not prime number\n");
            break;
        }
        i++;
    } while (i <= num);
    if (i == num)
    {
        printf("%d is prime number\n", num);
    }

    return 0;
}
