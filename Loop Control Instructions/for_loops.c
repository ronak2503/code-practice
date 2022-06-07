#include <stdio.h>

int main()
{
    int i = 0, n;
    printf("enter the number\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("the value is %d\n", i + 1);
    }

    return 0;
}
