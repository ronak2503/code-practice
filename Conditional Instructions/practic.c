#include <stdio.h>

int main()
{
    int a, b, c, d;
    
    printf("enter the four number\n");

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b && a > d && a > c)
  
        printf("%d is big number", a);
 

    else if (b > c  && b > d)
 
        printf("%d is big number", b);
   

    else if (c > d)
   
        printf("%d is big number", c);
 
    else
    
        printf("%d is big number", d);
    

    return 0;
}
