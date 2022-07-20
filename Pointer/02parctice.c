#include<stdio.h>

int main()
{
    int i=5;
    printf("the value of variable i is %d\n",i);
    printadd(i);
    printf("the address of variable i is %u\n",&i);
    return 0;
}
void printadd(int a)
{
    printf("the address of variable a is %u\n",&a);
}