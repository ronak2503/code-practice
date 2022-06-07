#include <stdio.h>
void printtable(int *mul, int number, int table)
{
    printf("the multplication table of %d is \n", number);
    for (int i = 0; i < table; i++)
    {
        mul[i] = number * (i + 1);
    }
    for (int i = 0; i < table; i++)
    {
        printf("%dx%d=%d\n", number, i + 1, mul[i]);
    }
    printf("*******--------*******\n");
}
int main()
{
    int multable[10];
    int number;
    int table = 10;
    printf("enter the number\n");
 
    return 0;
}

