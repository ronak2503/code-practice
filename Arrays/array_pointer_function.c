#include<stdio.h>
// void printarray(int *ptr,int n)
// {
//     for(int i=0; i<n;i++)
//     {
//         printf("the value of element %d is %d\n",i+1,*(ptr+i));
//     }
// }
void printarray(int *ptr,int n)
{
    for(int i=0; i<n;i++)
    {
        printf("the value of element %d is %d\n",i+1,ptr[i]);
    }
    ptr[2]=100; 
}
int main()
{
    int arr[] ={45,458,45,63};
    printarray(arr,4);
    printf("%d\n",arr[2]);
    return 0;
}