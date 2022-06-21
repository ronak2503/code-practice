#include <stdio.h>
int linear(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binary(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;      
}
int main()
{
    int arr[5],ch,a;
    printf("Enter the number :: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int element;
    printf("find element :: ");
    scanf("%d", &element);
    printf("\n1. linear search\n2. binary search\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        a = linear(arr, 5, element);
        printf("the element %d the index %d", element, a);    
        break;
    case 2:
        a = binary(arr, 5, element);
        printf("the element %d the index %d", element, a);
        break;
    default:
        printf("wrong key");
        break;
    }
    return 0;
}