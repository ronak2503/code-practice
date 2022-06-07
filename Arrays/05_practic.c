#include<stdio.h>
#include<conio.h>

int printtable(int *mul,int num,int n)
{
    printf("the multplication table of %d is \n",num);
    for(int i=0;i<n;i++)
    {
        mul[i]=num*(i+1);
    }
    for(int i=0;i<n;i++)
    {
        printf("%dx%d=%d\n",num,i+1,mul[i]);
    }
    printf("*******--------*******\n");
}


int main()
{
    int multable[3][10];
    int num,to;
    char choise;
    
    //label
    jump:
        
        printf("enter the number for :: ");
        scanf("%d",&num);
        
        printf("enter the number to :: ");
        scanf("%d",&to);
        
        printtable(multable[0],num,to);

        printf("Do you want to print more tables if yes then type (y,Y):: \n");
        choise = getch();

        if(choise == 'y' || choise == 'Y')
            goto jump;

        else{
            printf("Thanks Buddy !!!");
            return 0;
        }
}