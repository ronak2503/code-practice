#include <stdio.h>
#include <Math.h>

int main()
{
    int x, y, z, lim;
    printf("ARMSTORONG NUMBER\n");
    printf("Enter the limit :: ");
    scanf("%d", &lim);
    for (int i = 1; i < lim; i++)
    {
        z = 0;
        x = i;
        int temp = x, len = 0;
        while (temp > 0)
        {
            temp = temp / 10;
            len++;
        }
        while (x != 0)
        {
            y = x % 10;
            z = z + pow(y, len);
            x = x / 10;
        }
        if (z == i)
        {
            printf("%d\n", z);
        }
    }
    return 0;
}