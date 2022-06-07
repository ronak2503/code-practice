#include<stdio.h>
#include<string.h>
struct employess
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employess facebook [100];
    facebook[0].code = 100;
    facebook[0].salary = 100.45;
    strcpy(facebook[0].name ,"Ronak");
    
    facebook[1].code = 101;
    facebook[1].salary = 100.45;
    strcpy(facebook[1].name ,"harshu");
    
    facebook[0].code = 102;
    facebook[0].salary = 100.45;
    strcpy(facebook[0].name ,"yashwant");
    return 0;
}