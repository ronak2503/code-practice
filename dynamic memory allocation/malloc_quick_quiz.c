#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr;
    ptr = (float*)malloc(5*sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        printf("enter the value of %d elment::\n");
        scanf("%f",&ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the value of %d elment is :: %.1f\n",i,ptr[i]);
    }
    
    return 0;
}