#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr = &a;
    ;
    printf("the value of a %d\n", a);
    printf("the address of a %u\n", ptr);
    // ptr++;
    // ptr--;
    // ptr=ptr-4;
    // ptr=ptr+4;
    printf("the address of a %u\n", ptr);

    return 0;
}