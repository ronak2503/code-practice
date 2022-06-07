#include<stdio.h>

void main(){
    int num,len = 0 ;
    
    printf("enter the digit :: ");
    scanf("%d",&num);

    int temp = num;
    
    // 6845
    // 6 68 684 6845
    
    while(num != 0)
    {
        // printf("%d\t",num);
        num/=10;
        len++;
    }
    
    num = temp;

    int str[len];

    while(temp != 0)
    {
        str[len] = temp;    
        temp /= 10;
        len--;
    }

    while(num >= 0)
    {
        printf("%d",str[num]);
        num--;
    }


}
