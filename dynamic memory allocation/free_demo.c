#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int *ptr2;
    ptr = (int*)malloc(6*sizeof(int));
    for (int i = 0; i < 600; i++)
    {
        ptr2 = (int*)malloc(60*sizeof(int));
        printf("enter the value of %d elment::\n",i+1);
        scanf("%d",&ptr[i]);
    }  
    for (int i = 0; i < 5; i++)
    {
        printf("the value of %d elment is :: %d\n",i,ptr[i]);
    }
    return 0;
}