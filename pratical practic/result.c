#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    int mm, cpro, cf;
    float total, per;
    printf("Enter the name -- ");
    gets(name);
    printf("\nEnter the three subject marks out of 100 -- \n");
    printf("\nC programming -- ");
    scanf("%d", &cpro);
    printf("\nMultimedia -- ");
    scanf("%d", &mm);
    printf("\nComputer Fundamental -- ");
    scanf("%d", &cf);
    total = cf + mm + cpro;
    per = (total * 100) / 300;
    printf("\nStudent name is = %s", name);
    printf("C programming = %d\n\n", cpro);
    printf("Mutlimedia = %d\n\n", mm);
    printf("Computer Fundamental = %d\n\n", cf);
    if (per >= 64)
    {
        printf("First division persantage %.2f", per);
    }
    else if (per >= 48)
    {
        printf("second division persantage %.2f", per);
    }
    else if (per >= 36)
    {
        printf("third division persantage %.2f", per);
    }
    else
    {
        printf("Fail !! persantage %.2f", per);
    }
    return 0;
}