#include <stdio.h>
#include <stdlib.h>
struct myArrya
{
    int total_size;
    int used_size;
    int *ptr;
};
void creatArrya(struct myArrya *a)
{
    printf("enter the total size ::");
    scanf("%d",&a->total_size);
    printf("\nenter the used size ::");
    scanf("%d",&a->used_size);
    a->ptr = (int *)malloc(a->total_size * sizeof(int));
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
    printf("Enter the element\n");
    for (int i = 0; i < a->used_size; i++)
    {
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}
int main()
{
    struct myArrya marks;
    creatArrya(&marks);
    setval(&marks);
    show(&marks);
    return 0;
}
