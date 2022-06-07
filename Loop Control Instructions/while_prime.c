#include <stdio.h>

int main()
{
    int n, i = 2;
    printf("enter number \n");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("not prime number\n");
        return 0;
    }
    while (i < n)
    {
        
        if (n % i == 0)
        {
            printf("%d is  not prime number\n", n);
            return 0;
        i++;
        }
    }
    printf("%d is prime number\n", n);

    return 0;
}
