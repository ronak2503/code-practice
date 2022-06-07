#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("how many integers do want  to enter::\n");
    scanf("%d",&n);
    ptr = (int*)malloc(5*sizeof(int));
    for (int  i = 0; i < n; i++)
    {
        printf("enter the value of %d element \n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the value of %d elment is :: %d\n",i,ptr[i]);
    }
    
    return 0;
}