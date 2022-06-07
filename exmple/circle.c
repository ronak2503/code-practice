#include<stdio.h>
#include<math.h>
int main()
{
    int radius;
    float pi = 3.14;
    printf("enter the radius::");
    scanf("%d",&radius);
    printf("the circle of %.5f ",pi * pow(radius,2));
    return 0;
}