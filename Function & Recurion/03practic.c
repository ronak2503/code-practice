#include <stdio.h>
float force(float mass);
int main()
{
    float m;
    printf("enter the value of mass in kgs\n");
    scanf("%f", &m);
    printf("the value of froce in newton if is %f\n", force(m));
    return 0;
}

float force(float mass)
{
    float result = mass * 9.8;
    return result;
}
