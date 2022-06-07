#include <stdio.h>
void tower(int n, char beg, char aux, char end)
{
    if (n >= 1)
    {
        tower(n - 1, beg, end, aux);
        printf("%d Disk move %c to %c\n",n, beg, end);
        tower(n - 1, aux, beg, end);
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