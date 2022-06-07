#include<stdio.h>

int main()
{
    int n;
    printf("enter the month number\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("january = 31");
        break;
    
    case 2:
        printf("february = 28");
        break;
    
    case 3:
        printf("march = 31");
        break;
    
    case 4:
        printf("april = 30");
        break;
    
    case 5:
        printf("may = 31");
        break;
    
    case 6:
        printf("june = 30");
        break;
    
    case 7:
        printf("july = 31");
        break;
    
    case 8:
        printf("august = 30");
        break;
    
    case 9:
        printf("september = 31");
        break;
    
    case 10:
        printf("october = 30");
        break;
    
    case 11:
        printf("november = 31");
        break;
    
    case 12:
        printf("december = 30");
        break;

    default:
    printf("it not extist");
        break;
    }
    return 0;
}