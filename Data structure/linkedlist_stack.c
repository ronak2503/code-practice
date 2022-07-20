#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    int *next;
};
struct node *top = NULL;

int isempty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct node *top)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push()
{
    if (isfull(top))
    {
        printf("the stack is overflow\n");
    }
    else
    {
        int data;
        printf("enter the element :: ");
        scanf("\n%d",&data);
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = data;
        n->next = top;
        top = n;
        printf("PUSH opreation is succesfully = %d\n", n->data);
    }
}
void pop()
{
    struct node* n;
    if (isempty(top))
    {
        printf("the stack is underflow\n");
    }
    else
    {
        int x = top->data;
        n = top;
        top = n->next;
        free(n);
        printf("POP opreation is succesfully = %d",x);
    }
}
void peek()
{
    struct node* ptr = top;
    if (isempty(top))
    {
        printf("the stack is empty");
    }
    else
    {
        int i=1;
        printf("| LINKEDLIST STACK|\n");
        while (ptr!=NULL)
        {
            printf("| %d |->",ptr->data);
            ptr = ptr->next;
            i++;
        }
    }
}
int main()
{
    int n , choice;
    char a;
    jump :
    printf("\t\tOpreation stack linked list\t\t\n");
    printf("\n1. PUSH\n2. POP\n3. PEEK \n4. EXIT\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        peek();
        break;
    case 4:
        exit(0);
        break;
    default:
        printf("wrong key press");
        break;
    }
    printf("\ndo you to continue your stack opreation Y anyone else key :: \n");
    a = getch();
    if (a == 'y' || a == 'Y')
    {
        goto jump;
    }
    else
    {
        printf("\nthanks buddy");
    }
    return 0;
}