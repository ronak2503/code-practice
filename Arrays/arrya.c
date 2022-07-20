// #include <stdio.h>

// int arrya(int a[5])
// {
//     int s = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         s = s + a[i];
//     }
//     return s;
// }
// int main()
// {
//     int a[5];
//     printf("enter the number\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("All element sum %d", arrya(a));
//     return 0;
// }
// #include<stdio.h>

// int big(int a[5])
// {
//     int max = a[0];
//     int maxindex = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     }
//     return max;
// }
// int main()
// {
//     int a[5];
//     printf("enter the number\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("the big number %d",big(a));
//     return 0;
// }
// #include<stdio.h>

// void rotate(int a[5])
// {
//     int temp;
//     temp = a[4];
//     for (int i = 4; i >= 0 ; i--)
//     {
//         a[i+1]=a[i];
//     }
//     a[0]=temp;
// }
// void rotaten(int a[5],int n) 
// {
//     while (n--)
//     {
//         rotate(a);
//     }

// }
// int main()
// {
//     int a[5],n;
//     printf("enter the number\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     printf("\n");
//     printf("Enter the rotate times\n");
//     scanf("%d",&n);
//     rotaten(a,n);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     return 0;
// }
#include <stdio.h>
void sorting(int n[5])
{
    int temp, j;
    for (int i = 1; i < 5; i++)
    {
        temp = n[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (n[j] > temp)
            {
                n[j + 1] = n[j];
            }
            else
            {
                break;
            }
        }
        n[j + 1] = temp;
    }
}   

int main()
{
    int n[5];
    printf("enter the number ::");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }
    sorting(n);
    printf("\nthe sorting arrya\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", n[i]);
    }
    return 0;
}
