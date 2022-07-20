#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isempty(struct queue *ptr)
{
    if (ptr->r == -1)
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
    if (ptr->r == ptr->size - 1)
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
        printf("the queue is cannot inqueue %d to the queue",val);
    }
    else
    {
        ptr->f = 0;
        ptr->r++;
        ptr->arr[ptr->r] = val;
        printf("inqueue is succesfully");
    }
}
void dequeue(struct queue *ptr)
{
    int temp;
    if (isempty(ptr))
    {
        printf("the queue is underflow");
    }
    else
    {
        int val = ptr->arr[ptr->f];
        ptr->f++;
        printf("\ndequeue is succesfully %d", val);        
    }
}
void peek(struct queue *ptr)
{
    if (isempty(ptr))
    {
        printf("the queue is underflow");
    }
    else
    {
        printf("| INDEX | ELEMENT |\n");
        for (int i = ptr->f; i <= ptr->r;i++)
        {
            printf("---------------\n");
            printf("|  %d  |  %d  |\n",i+1,ptr->arr[i]);
        }
        
    }
}
void queuetop(struct queue *ptr)
{
    if (isempty(ptr))
    {
        printf("the queue is underflow");
    }
    else
    {
        printf("the queue is top value %d",ptr->arr[ptr->f]);
    }
}
void queuelast(struct queue *ptr)
{
    if (isempty(ptr))
    {
        printf("the queue is underflow");
    }
    else
    {
        printf("the queue is last value %d",ptr->arr[ptr->r]);
    }
}
void main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    printf("enter the size of queue :: ");
    scanf("%d",&q->size);
    q->f = q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
    char c;
    int n;
    printf("\t\tQueue has been creat succesfully\n\n");
jump:
    printf("\t\t\tQueue operation\n");
    printf("\n1.Inqueue\n2.dequeue\n3.Peek\n4.Queue top\n5.Queue last\n");
    scanf("%d",&n);
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
    case 4:
        queuetop(q);
        break;
    case 5:
        queuelast(q);
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
}