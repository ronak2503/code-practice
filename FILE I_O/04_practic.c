#include <stdio.h>
#include <string.h>

int main()
{
    char name1[100], name2[100], salary1[100], salary2[100];
    FILE *ptr;
    printf("employee name and salary\n");

    printf("enter the name1::\n");
    gets(name1);

    printf("enter the salary1::\n");
    gets(salary1);

    printf("enter the name2::\n");
    gets(name2);

    printf("enter the salary2::\n");
    gets(salary2);

    ptr = fopen("ronaksahu.txt", "w");
    fprintf(ptr, "employee name and salary\n");

    fprintf(ptr, "%s \n %s \n", name1, salary1);
    fprintf(ptr, "%s \n %s \n", name2, salary2);
    fclose(ptr);
    return 0;
}