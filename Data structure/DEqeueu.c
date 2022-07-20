#include<stdio.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isfull(struct queue *ptr)
{
    if (ptr->r == ptr->size -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
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
void inqueuelast(struct queue *ptr)
{
    int val;
    printf("enter the number :: ");
    scanf("%d",&val);
    if (isfull(ptr))
    {
        printf("the queue is overflow\n");
    }
    else
    {
        ptr->f = 0;
        ptr->r++;
        ptr->arr[ptr->r] = val;
        printf("the succesfully inqueue operation %d",val);   
    }
    
}
void inqueuefront(struct queue *ptr)
{
    int val;
    printf("enter the number :: ");
    scanf("%d",&val);
    if (isfull(ptr))
    {
        printf("the queue is overflow\n");
    }
    else
    {
        ptr->f--;
        ptr->arr[ptr->f] = val;
        printf("the succesfully inqueue operation %d",val);   
    }
}
void dequeuefront(struct queue *ptr)
{
    int val;
    if (isempty(ptr))
    {
        printf("the queue is underflow\n");
    }
    else
    {
        val = ptr->arr[ptr->f];
        ptr->f++;
        printf("the succesfully inqueue operation %d\n",val);   
    }
}
void dequeuelast(struct queue *ptr)
{
    int val;
    if (isempty(ptr))
    {
        printf("the queue is underflow\n");
    }
    else
    {
        val = ptr->arr[ptr->r];
        ptr->r--;
        printf("the succesfully inqueue operation %d\n",val);   
    }
}
void peek(struct queue *ptr)
{
    if (isempty(ptr))
    {
        printf("the queue is empty\n");
    }
    else
    {
        printf("| ELEMENT |\n");
        for (int i = ptr->f; i <= ptr->r; i++)
        {
            printf("|  %d  |\n",ptr->arr[i]);
        }
    }
    
}

int main()
{
    struct queue *q = (struct queue*)malloc(sizeof(struct queue));
    q->size = 5;
    q->f = -1;
    q->r = -1;
    q->arr = (int*)malloc(q->size * sizeof(int));
     char c;
    int n;
    printf("\t\tQueue has been creat succesfully\n\n");
jump:
    printf("\t\t\tQueue operation\n");
    printf("\n1.Inqueue last\n2.inqueue front\n3.dequeue last\n4.dequeue front\n5.Peek\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        inqueuelast(q);
        break;
    case 2:
        inqueuefront(q);
        break;
    case 3:
        dequeuelast(q);
        break;
    case 4:
        dequeuefront(q);
        break;
    case 5:
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