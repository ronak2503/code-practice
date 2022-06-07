#include<stdio.h>
#include<string.h>
typedef struct employee
{
    char name[10];
    int code;
    char number[10];
}emp ;
void show(emp e1)
{
    printf("the employee name is %s\n",e1.name);
    printf("the employee code is %d\n",e1.code);
    printf("the employee code is %s\n",e1.number);
}
int main()
{
    emp e1;
    emp *ptr;
    ptr = &e1;
    ptr -> code = 100;
    strcpy(ptr -> number ,"7737172852");       
    strcpy(ptr -> name ,"Ronak"); 
    show(e1);      
    
    return 0;
}