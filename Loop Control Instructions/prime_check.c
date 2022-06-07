#include <stdio.h>

int main()
{
    int a, b, x, i;
    printf("enter two number\n ");
    scanf("%d %d", &a, &b);     
    for (x = a ; x <= b ; x++)
    {
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                break;
            }
        }
        if (i == x)
        {
            printf("%d\n", x);
        }
    }

    return 0;
}
