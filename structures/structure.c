#include <stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{   
    int a = 34;
    char b = 'c';
    float d = 54.25;
    struct employee e1;
    e1.code = 100;
    e1.salary = 3452.2;
    strcpy(e1.name,"Ronak");
    printf("%d\n",e1.code);
    printf("%.1f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0;
}