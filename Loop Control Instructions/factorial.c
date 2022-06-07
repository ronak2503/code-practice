#include <stdio.h>

int main()
{
    int n, fact = 1;

    printf("Enter number n :: ");

    scanf("%d", &n);

    int i = n;

    while (n )
    {
        fact *= n;
        n--;
    }

    printf("the value of factorial %d is %d\n", i, fact);
    return 0;
}
