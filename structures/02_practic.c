#include<stdio.h>
#include<string.h>
struct complexnum
{
    int real;
    int img;
};
struct complexnum sumcomplex(struct complexnum a ,struct complexnum b )
{
    struct complexnum c;
    c.real = a.real+b.real; 
    c.img =  a.img+b.img;
    return c;
}
int main()
{
    struct complexnum a = {4,5};
    struct complexnum b = {4,5};
    struct complexnum c = sumcomplex(a,b);
    
    printf("real dim is %d and img dim is %d\n",a.real,a.img);
    printf("real dim is %d and img dim is %d\n",b.real,b.img);
    printf("sumcomplex real dim is %d and img dim is %d\n",c.real,c.img);
    

    return 0;
}