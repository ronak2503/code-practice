#include <stdio.h>

int main()
{
    int i = 0;
    printf("do while loops break \n");
    do
    {
        printf("%d\n", i);
        if (i == 7)
        {
            break;
        }
        i++;
    } while (i < 10);
    printf("for loops break \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        if (i == 7)
        {
            break;
        }
    }
    printf("while loops break \n");
    while (i < 10)
    {
        i++;
        printf("%d\n");
        if (i == 5)
        {
            break;
        }

        
    }

    return 0;
}
