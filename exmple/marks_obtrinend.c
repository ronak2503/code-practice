#include<stdio.h>

int main()
{
    int marks;
    printf("enter the marks :: ");
    scanf("%d",&marks);
    switch (marks)
    {
    case 91 ... 100:
        printf("GRADE 'A' ");
        break;
    
    case 81 ... 90:
        printf("GRADE 'B' ");
        break;
    
    case 71 ... 80:
        printf("GRADE 'C' ");
        break;
    
    case 61 ... 70:
        printf("GRADE 'D' ");
        break;
    
    case 51 ... 60:
        printf("GRADE 'D' ");
        break;
    
    case 41 ... 50:
        printf("GRADE 'f' ");
        break;
    
    default :
        printf(" fail ");
        break;
    }
    return 0;
}