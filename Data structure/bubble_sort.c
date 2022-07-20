#include<stdio.h>
void sorting(int a[])
{
    int  temp;
    int isSorted = 0;
    for (int i = 0; i < 4; i++)
    {
        printf("Working for pass number %d\n",i+1);
        isSorted = 1;
        for (int j = 0; j < 4-i ; j++)
        {
            if (a[j]>a[j+1])
            {
               temp = a[j];
               a[j] = a[j+1];
               a[j+1] = temp;
               isSorted = 0;
            }   
        }
        if (isSorted)
        {
            return;
        }
    }
}
int main()
{
    int a[5];
    printf("enter the number\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("%d  ",a[j]);
    }
    printf("\n");
    sorting(a);
    for (int j = 0; j < 5; j++)
    {
        printf("%d  ",a[j]);
    }
    return 0;
}