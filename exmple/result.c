#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int mm , cpro , cf ;
    float total , per ;
    printf("Enter the name --  ");
    gets(name);
    printf("\nEnter the three subject marks out of 100 -- \n");
    printf("C programming -- ");
    scanf("%d",&cpro);
    printf("\nMultimedia -- ");
    scanf("%d",&mm);
    printf("\nComputer Fundamental -- ");
    scanf("%d",&cf);
    total = cf + mm + cpro;
    per = (total * 100)/300;
    printf("\nStudent name is = %s",name);
    printf("C programming = %d\n\n",cpro);
    printf("Mutlimedia = %d\n\n",mm);
    printf("Computer Fundamental = %d\n\n",cf);
    printf("persantage %.2f\n",per);
    if (per >= 64)
    {
        printf("First division");
    }
    else if (per >= 48)
    {
        printf("second division");
    }
    else if (per >= 36)
    {
        printf("third division");
    }
    else
    {
        printf("Fail !!");
    }
    return 0;
}