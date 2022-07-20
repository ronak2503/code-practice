#include <stdio.h>
void tower(int n, char A, char B, char C)
{
    if (n >= 1)
    {
        tower(n - 1, A, C, B);
        printf("%d Disk move %c to %c\n",n, A, C);
        tower(n - 1, B, A, C);
    }
}
int main()
{
   int a;
   printf("enter the number\n");
   scanf("%d",&a);
   tower(a,'A','B','C');
   return 0;
}