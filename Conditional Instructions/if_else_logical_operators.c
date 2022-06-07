#include <stdio.h>

int main()
{
    int age;
    int vippass = 0;

    printf("enter the age \n");
    scanf("%d", &age);
    if ((age <= 70 && age >= 18) || (vippass == 1))
    {
        printf("you are above and below 70, you can drive \n");
    }
    else
    {

        printf("you cannot drive\n");
    }

    return 0;
}
