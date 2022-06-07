#include<stdio.h>
#include<string.h>
typedef struct complex
{
    int real;
    int complex;
}comp;
void display(comp numcomp)
{
    printf("the real value of %d \n",numcomp.real);
    printf("the complex value of %d \n",numcomp.complex);
}
int main()
{
    comp numcomp[5];
    for (int  i = 0; i < 5; i++)
    {
        printf("enter the real value num %d\n",i+1);
        scanf("%d",&numcomp[i].real);
        printf("enter the complex value num %d\n",i+1);
        scanf("%d",&numcomp[i].complex);
    }
    for (int i = 0; i < 5; i++)
    {
        display(numcomp[i]);
    }    
    return 0;
}