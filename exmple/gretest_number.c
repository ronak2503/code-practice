// #include <stdio.h>

// int main()
// {
//     int a, b, c;
//     printf("enter the number\n");
//     scanf("%d %d %d", &a, &b, &c);
//     printf("****gretest number****\n");
//     printf("%d",a>b?a>c?a:c:b>c?b:c);
//     if (a > b && a > c)
//     {
//         printf("%d",a);
//     }
//     else if (b>c)
//     {
//         printf("%d",b);
//     }
//     else
//     {
//         printf("%d",c);
//     }
//     return 0;
// }

#include <stdio.h>
int greatest(int a, int b, int c, int d)
{
    int max;
    if (a > b && a > c && a > d)
    {
        max = a;
    }
    else if (b > c && b > d)
    {
        max = b;
    }
    else if (c > d)
    {
        max = c;
    }
    else
    {
        max = d;
    }
    return max;
}
int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = greatest(a, b, c, d);
    printf("%d",ans);
    return 0;
}