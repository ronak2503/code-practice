#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
void show(struct employee emp)
{
    printf("the employee code is :: %d\n", emp.code);
    printf("the employee salary is :: %.1f\n", emp.salary);
    printf("the employee name is :: %s\n", emp.name);
}
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    ptr->code = 1010;
    ptr->salary = 1000.10;
    strcpy(ptr->name, "ronak");
    show(e1);
    return 0;
}