#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[10];
}emp;
void show(emp emp1)
{
    printf("the employee code is :: %d\n", emp1.code);
    printf("the employee salary is :: %.1f\n", emp1.salary);
    printf("the employee name is :: %s\n", emp1.name);
}
int main()
{
    emp e1;
    emp *ptr;
    ptr = &e1;
    ptr->code = 10;
    ptr->salary = 1000.10;
    strcpy(ptr->name, "Ronak");
    show(e1);
    return 0;
}