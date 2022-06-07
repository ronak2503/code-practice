#include<stdio.h>

int change(int a);
int main()
{
    int a;
    printf("enter value a  \n");
    scanf("%d",&a);
    a=change(a);
    printf("change your name %d\n",a);

    return 0;
}
int change(int a)
{
    a=89;
    return a;

}