#include <stdio.h>

int add(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
int sub(int a, int b)
{
    int result;

    result = a - b;
    result = -(result);
    return result;
}
int div(int a, int b)
{
    int result;
    result = a / b;      
    return result;
}
int multi(int a, int b)
{
    int result;
    result = a * b;   
    return result;
}
int mod(int a, int b)
{
    int result;
    result = a % b;
    return result;
}
int main()
{
    int n1, n2;
    printf("enter a value n1::\n");
    scanf("%d", &n1);

    printf("enter a value n2::\n");
    scanf("%d", &n2);

    printf("add sum=%d\n",add(n1, n2));
    printf("sub sum=%d\n",sub(n1, n2));
    printf("div sum=%d\n",div(n1, n2));
    printf("multi sum=%d\n",multi(n1, n2));
    printf("mod sum=%d\n",mod(n1, n2));

    return 0;
}
