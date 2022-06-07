#include <stdio.h>

void sumandavg(int a, int b, int *sum, float *avg);
int main()
{
    int x, y, sum;
    float avg;
    printf("enter the two value::\n");
    scanf("%d %d", &x, &y);
    sumandavg(x, y, &sum, &avg);
    printf("the value of sum is %d\n", sum);
    printf("the value of avg is %f\n", avg);

    return 0;
}
void sumandavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}
