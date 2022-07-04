#include <stdio .h>
int main()
{
    int n, temp, rev;
    printf("Enter the number :: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    if (temp == rev)
    {
        printf("the number is palimdrome %d", temp);
    }
    else
    {
        printf("the number is not palimdrome %d", temp);
    }
    return 0;
}
