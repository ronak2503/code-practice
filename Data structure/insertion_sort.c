#include<stdio.h>
void insertion_sort(int a[])
{
    int key,j;
    for (int i = 1; i < 5; i++)
    {
        key = a[i];
        j = i-1;
        while (j>=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}
int main()
{
    int a[5];
    printf("enter the number ::");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    insertion_sort(a);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}