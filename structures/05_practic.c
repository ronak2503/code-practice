#include<stdio.h>
#include<string.h>
typedef struct bankaccount
{
    char account[10];
    char name[10];
    int dateaccount;
    float amount;
}baccount;

int main()
{
    baccount customer[4];
    for (int  i = 0; i < 4 ; i++)
    {
        printf("%d customer\n",i+1);
        for (int i = 0; i < 4; i++)
        {
            printf("*********************\n");
            printf("customer account\n");
            scanf("%s",&customer[i].account);
            
            printf("customer name\n");
            scanf("%s",&customer[i].name);
                
            printf("customer dateaccount\n");
            scanf("%d",&customer[i].dateaccount);
                
            printf("customer amount\n");
            scanf("%f",&customer[i].amount); 
            printf("*********************\n");
            break;  
        }
    }
    for (int i = 0; i < 4; i++)
    {
        printf("***************END %d customer*****************\n",i+1);
        printf("the account %s\n",customer->account);
        printf("the name %s\n",customer->name);
        printf("the date account %d\n",customer->dateaccount);
        printf("the amount %.1f\n",customer->amount);
    }
    
    
    return 0;
}