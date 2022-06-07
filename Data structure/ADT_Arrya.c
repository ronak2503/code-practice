#include <stdio.h>
#include <stdlib.h>
struct myArrya
{
    int total_size;
    int used_size;
    int *ptr;
};
void creatArrya(struct myArrya *a, int tSize, int uSize)
{
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}
void show(struct myArrya *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}
void setval(struct myArrya *a)
{
    int n;
    printf("Enter the element\no");
    for (int i = 0; i < a->used_size; i++)
    {
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}
int main()
{
    struct myArrya marks;
    creatArrya(&marks, 10, 2);
    setval(&marks);
    show(&marks);
    return 0;
}
