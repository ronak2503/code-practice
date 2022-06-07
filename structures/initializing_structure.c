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
    // struct employee ronak ={100, 455.55,"ronak"};
    // printf("code is %d: \n",ronak .code);
    // printf("salary is %.1f: \n",ronak .salary);
    // printf("name is %s: \n",ronak .name);
    struct employee ronak = {0};
    printf("code is %d: \n",ronak .code);
    printf("salary is %.1f: \n",ronak .salary);
    printf("name is %s: \n",ronak .name);

    return 0;
}