#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size ;
    int f;
    int r;
    int *arr;
};
int isempty(struct queue *ptr)
{
    if (ptr->r == ptr->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct queue *ptr)
{
    if ((ptr->r +1) % ptr->size == ptr->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void inqueue(struct queue *ptr)
{
    int val;
    printf("enter the number :: ");
    scanf("%d", &val);
    if (isfull(ptr))
    {
        printf("the circuler queue is overflow");
    }
    else
    {   
        ptr->arr[ptr->r] = val;
        ptr->r=(ptr->r+1)%ptr->size;
        printf("the inqueue is succesfully");
    }

}
int dequeue(struct queue *ptr)
{
    int val;
    if (isempty(ptr))
    {
        printf("circuler queue is underflow");
    }
    else
    {
        val = ptr->arr[ptr->f];
        ptr->f = (ptr->f + 1) % ptr->size;
        printf("circuler queue is sussesfully dequeue %d ",val);
    }
}

void peek(struct queue *ptr)
{
    int i;
    if (isempty(ptr))
        printf("\nEmpty Queue\n");
    else
    {
        printf("| ELEMENT |\n");
        for (i = ptr->f; i != ptr->r; i = (i + 1) % ptr->size)
        {
            printf("-------\n");
            printf("|  %d  |\n",ptr->arr[i]);
        }
    }
}
int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 5+1;
    q->f = 0;
    q->r = 0;
    q->arr = (int *)malloc(q->size  * sizeof(int));
    char c;
    int n;
    printf("\t\tQueue has been creat succesfully\n\n");
jump:
    printf("\t\t\tcircluer Queue operation\n");
    printf("\n1.Inqueue\n2.dequeue\n3.Peek\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        inqueue(q);
        break;
    case 2:
        dequeue(q);
        break;
    case 3:
        peek(q);
        break;
    default:
        printf("Wrong key press");
        break;
    }
    printf("\ndo you to continue your queue operation Y anyone else key :: \n");
    c = getch();
    if (c == 'Y' || c == 'y')
    {
        goto jump;
    }
    else
    {
        printf("thanks buddy");
    }
    return 0;
}