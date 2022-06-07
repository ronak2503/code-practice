// #include <stdio.h>

// int main()
// {
//     int a, b;
//     printf("enter two number\n", a, b);
//     scanf("%d %d", &a, &b);
//     printf("a = %d,b = %d\n", a, b);
//     b = a + b;
//     a = b - a;
//     b = b - a;
//     printf("a = %d,b=%d\n", a, b);
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int a, b;
//     printf("enter two number\n", a, b);
//     scanf("%d %d", &a, &b);
//     printf("a = %d,b = %d\n", a, b);
//     b = a * b;
//     a = b / a;
//     b = b / a;
//     printf("a = %d,b = %d\n", a, b);
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int a, b, temp;
//     printf("enter two number\n", a, b);
//     scanf("%d %d", &a, &b);
//     printf("a = %d,b = %d\n", a, b);
//     printf("x = %d ,y = %d\n", a, b);
//     temp = a;
//     a = b;
//     b = temp;
//     printf("x = %d ,y = %d\n", a, b);
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int a, b;
//     printf("enter two number\n", a, b);
//     scanf("%d %d", &a, &b);
//     printf("a = %d,b = %d\n", a, b);
//     b = (a+b)-(a = b);
//     printf("a = %d,b = %d\n", a, b);
//     return 0;
// }
#include <stdio.h>

int main()
{
    int a, b;
    printf("enter two number\n", a, b);
    scanf("%d %d", &a, &b);
    printf("a = %d,b = %d\n", a, b);
    b = a ^ b;
    a = b ^ a;
    b = b ^ a;
    printf("a = %d,b = %d\n", a, b);
    return 0;
}