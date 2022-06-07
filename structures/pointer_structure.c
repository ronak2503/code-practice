#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    (*ptr).code = 1010;
    // ptr->code=1010; 
    (*ptr).salary = 10000.52;
    strcpy((*ptr).name , "ronak");
    printf("%d\n",e1.code);    
    printf("%.1f\n",e1.salary);    
    printf("%s\n",e1.name);    
    return 0;
}