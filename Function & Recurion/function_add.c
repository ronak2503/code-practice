#include <stdio.h>

int addnumber(int a, int b);


int main()
{
    int n1, n2, sum;

    printf("enter number value::\n");
    scanf("%d%d", &n1, &n2);
    
    sum = addnumber(n1, n2);
    
    printf("sum=%d", sum);
    
    return 0;
}


int addnumber(int a, int b)
{
    int result;
    result = a + b;
    return result;
}