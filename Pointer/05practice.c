#include <stdio.h>

int main()
{
    int i;
    int *ptr; 
    int **ptr_ptr;
    printf("enter the value\n");
    scanf("%d", &i);
    ptr = &i;
    ptr_ptr = &ptr;
    printf("the value of i=%d", **ptr_ptr);

    return 0;
}