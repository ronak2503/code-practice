// #include <stdio.h>

//  Recursion :- When the Function calls itself.

// int printTable(int num, int i)
// {
//     printf("%d*%d=%d\n", num, i, (num * i));
//     if (i < 10)
//     {
//         i++;
//         printTable(num, i);
//     }
//     else
//     return 0;
// }
// int main()
// {
//     int num;
//     printf("Enter the number :: ");
//     scanf("%d", &num);
//     printTable(num, 1);
//     return 0;
// }
// #include<stdio.h>
// int add(int a)
// {
//     if(a==1||a==0)
//     {
//         return 1;
//     }
//     return a*add(a-1);
// }
// int main()
// {
//     int a;
//     printf("enter the number\n");
//     scanf("%d",&a);
//     printf("%d===%d",a,add(a));

//     return 0;
// }
// #include <stdio.h>
// int even(int a)
// {
//     if (a == 1)
//     {
//         return 2;
//     }
//     else
//     {
//         return 2 * a + even(a - 1);
//     }
// }
// int main()
// {
//     int a;
//     printf("enter the number :: ");
//     scanf("%d", &a);
//     printf("%d ", even(a));

//     return 0;
// }
// #include <stdio.h>
// int sumsquer(int a)
// {
//     if (a == 1)
//     {
//         return 2;
//     }
//     else
//     {
//         return 2 * a + sumsquer(a - 1);
//     }
// }
// int main()
// {
//     int a;
//     printf("enter the number :: ");
//     scanf("%d", &a);
//     printf("%d ", sumsquer(a));

//     return 0;
// }

// #include <stdio.h>
// int digitsum(int a)
// {
//     int r = 0, x;
//     if (a == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         r = digitsum(a / 10);
//         x = x + r;
//         return x;
//     }
// }
// int main()
// {
//     int a;
//     printf("enter the number\n");
//     scanf("%d", &a);
//     int i = digitsum(a);
//     printf("%d ", i);
// }

// #include <stdio.h>
// double power(double a, double b)
// {
//     if (b == 0)
//     {
//         return 1;
//     }
//     if (b > 0)
//     {
//         return a * power(a, b - 1);
//     }
//     else
//     {
//         return 1 / a * power(a, b + 1);
//     }
// }
// int main()
// {
//     int a, b;
//     printf("enter the number\n");
//     scanf("%d %d", &a, &b);
//     printf("%d power %d is %lf", a, b, power(a, b));
// }

// #include <stdio.h>

// int decimal_binary(int n)
// {
//     if (n == 0)
//         return 0;
//     else
//         return (n % 2) + 10 * decimal_binary(n / 2);
// }

// int main()
// {
//     int no;
//     printf("Enter a decimal number\n");
//     scanf("%d", &no);
//     printf("Decimal(%d) = Binary(%d)\n", no, decimal_binary(no));
//     return 0;
// }

