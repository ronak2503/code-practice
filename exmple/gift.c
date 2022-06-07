#include<stdio.h>

int main()
{
    int subject;

    printf("what subject you passed out ?\n");
    printf("1 Maths\n");
    printf("2 Science\n");
    printf("3 both\n");
    scanf("%d", &subject);

    if (subject<2)
    {
        printf("you are won 15\n");
    }
    else 
    {
        printf("you are won 45\n");
    }
    
    
    return 0;
}