#include <stdio.h>
int postive_num(int arr[],int n)
{
    int postivecount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            postivecount++;
        }
    }
    return postivecount;
}
int nagtive_num(int arr[],int n)
{
    int nagtivecount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            nagtivecount++;
        }
    }
    return nagtivecount;
}    
int main()
{
    int array[5]; 
    int n = 5;
    printf("enter the postive number and nagtive number\n");      
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&array[i]);
    }
    
    postive_num(array,n);
    printf("the number of postive element in the arrey is %d\n",postive_num(array,n));
    nagtive_num(array,n);
    printf("the number of nagtive element in the arrey is %d\n",nagtive_num(array,n));
    return 0;
}