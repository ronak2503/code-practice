#include<stdio.h>

int printname(int khaSe,int khaTak)
{
    printf("My name is Ronak sahu\n");

    if (khaSe < khaTak  )
    {
        khaSe++;
        printname(khaSe,khaTak);
    }
    else
    {
        return 0;
    }  
}

int main()
{
    int khase,khatak;

    printf("Enter the value for khase :: ");
    scanf("%d",&khase);
    
    printf("Enter the value for khatak :: ");
    scanf("%d",&khatak);

    printname(khase,khatak);
    return 0;
}
