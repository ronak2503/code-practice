#include <stdio.h>

int compare(char str[], char str2[])
{
    int i = 0;

    while (str[i] != '\0')
    {

        if (str[i] != str2[i])
        {
            printf("Given Strings are not equal!!!");
            return 0;
        }
        i++;
    }

    printf("Given Strings are equal!!!");
    return 0;
}

void main()
{
    char str1[100], str2[100];

    printf("enter the str1 :: ");
    gets(str1);

    printf("enter the str2 :: ");
    gets(str2);

    compare(str1, str2);
}