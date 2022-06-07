#include <stdio.h>

int main()
{
    int i = 10, n;
    printf("****multiplication****\n");
    scanf("%d", &n);
    for (i = 10; i; i--)
    {
        printf("%dx%d=%d\n", n, i,n * i);
    }
 
    return 0;
}
