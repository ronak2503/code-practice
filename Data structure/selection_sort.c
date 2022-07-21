#include<stdio.h>
void selection_sort(int a[])
{
    int index,temp;
    for (int i = 0; i < 4; i++)
    {
        printf("the passing value %d\n",i+1);
        index = i;
        for (int j = i+1; j < 5; j++)
        {
            if (a[j] < a[index])
            {
                index = j;
            }
        }
        temp = a[i];
        a[i] = a[index];
         
        a[index] = temp;
    }
    
}
int main()
{
    int a[5];
    printf("enter the number :: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    selection_sort(a);
    for (int j = 0; j < 5; j++)
    {
        printf("%d ",a[j]);
    }
    return 0;
}