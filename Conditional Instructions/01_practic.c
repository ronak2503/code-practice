#include <stdio.h>

int main()
{
    int maths, physics, chemistry;
    float total;
    printf("enter marks maths\n");
    scanf("%d", &maths);
    printf("enter marks physics\n");
    scanf("%d", &physics);
    printf("enter marks chemistry\n");
    scanf("%d", &chemistry);
    total = maths + physics + chemistry / 3;
    if ((total < 40) || maths < 33 || physics < 33 || chemistry < 33)     
    {
        printf("your total percentage is %f and you are fail\n", total);
    }
    else
    {
        printf("your total percentage is %f and you are pass\n", total);
    }
    return 0;
}
