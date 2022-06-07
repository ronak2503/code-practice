#include <stdio.h>


int main()
{
    int i=1, n;
    printf("****multiplication****\n");
    scanf("%d", &n);
    for (i = 1; i <= 10; ++i)
    {
        printf("%dX%d=%d\n", n, i, n * i);
    }

    return 0;
}
