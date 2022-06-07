#include <stdio.h>

void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()
{
    int x , y ;
    printf("enter the value \n");
    scanf("%d %d",&x,&y);
    printf("the value  of x and y before swap is %d and %d \n", x, y);
    // wrong_swap(x, y);
    swap(&x, &y);
    printf("the value  of x and y after swap is %d and %d \n", x, y);
    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}