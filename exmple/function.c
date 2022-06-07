//takes nothing return nothing
// #include<stdio.h>
// void sum()
// {
//     int a,b,c;
//     printf("enter the number\n");
//     scanf("%d %d",&a,&b);
//     c=a+b;
//     printf("%d",c);
// }
// int main()
// {
//     sum();
//     return 0;
// }

//takes someting return nothing
// #include<stdio.h>
// void sum(int a, int b)
// {
//     int c;
//     c=a+b;
//     printf("%d",c);
// }
// int main()
// {
//     int a,b;
//     printf("enter the number\n");
//     scanf("%d %d",&a,&b);
//     sum(a,b);
//     return 0;
// }

//takes nothing return someting
// #include<stdio.h>
// int sum()
// {
//     int a,b,c;
//     printf("enter the number\n");
//     scanf("%d %d",&a,&b);
//     c=a+b;
//     return c;
// }
// int main()
// {
//     int s;
//     s=sum();
//     printf("%d",s);
//     return 0;
// }
 
//takes something return something
#include<stdio.h>
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int a,b,s;
    printf("enter the number\n");
    scanf("%d %d",&a,&b);
    s=sum(a,b);
    printf("%d",s);
    return 0;
}
 