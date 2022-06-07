#include<stdio.h>

int main()  
{
    FILE *ptr;
    ptr = fopen("rj.txt","w");
    putc('r',ptr);
    putc('o',ptr);
    putc('n',ptr);
    putc('a',ptr);
    putc('k',ptr);
    return 0;
}