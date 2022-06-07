#include<stdio.h>
float convertceluestemperature(float c)

{
     return ((c * 9.0 / 5.0) + 32.0);
}
int main()
{
    float celsius, fahreheit;
    printf("enter temperature in celsius :");
    scanf("%d",&celsius);
    fahreheit =  convertceluestemperature(celsius);
    printf("%.2f celsius = %.2f fahreheit", celsius,fahreheit);
    return 0;
}
