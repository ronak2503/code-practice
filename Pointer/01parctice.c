#include <stdio.h>

int main()
{
    int a = 45;
    int *ptr;
    ptr = &a;
    printf("the value of varible a is %d\n", a);
    printf("the address of varible a is %u\n", ptr);
    printf("the value of varible a is %d\n", *ptr);
    return 0;
}