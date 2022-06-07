#include <stdio.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("| %d  ", arr[i]);
    }
}
void deletion(int arr[], int size )
{
    int index;
    printf("Enter delet index :: \n");
    scanf("%d",&index);
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
}

int insertion(int arr[], int size, int capacity)
{
    int index, element;
    printf("enter yor element :: \n");
    scanf("%d", &element);
    printf("enter the index :: \n");
    scanf("%d", &index);
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int arr[100], size, choice;
    char n;
    printf("How to use storage :: ");
    scanf("%d", &size);
    printf("the element :: ");
    for (int i = 0; i < size; i++)
    {
        scanf(" %d", &arr[i]);
    }
    printf("\t\tArrya operation\t\t");
jump:
{
    printf("\n 1. Display \n 2. Instertion \n 3. Deletion \n 4. exit\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\t\tSelect display :: \t\t");
        display(arr, size);
        break;
    case 2:
        printf("\t\tSelect insertion\t\t\n");
        insertion(arr, size, 100);
        size += 1;
        break;
    case 3:
        printf("\t\tSelect deletion\t\t\n");
        deletion(arr,size);
        size -= 1;
        break;
    default:
        printf("wrong press\n");
        break;
    }
    printf("\nOpreation continue\n");
    n = getch();
    if (n == 'y' || n == 'Y')
        goto jump;
    else
        printf("thanks for watching");
}
    return 0;
}