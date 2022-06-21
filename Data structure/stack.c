#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr)
{
    int val;
    printf("Enter the element :: ");
    scanf("%d", &val);
    if (isfull(ptr))
    {
        printf("stack is overflow cannot push %d to the stack", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
        printf("the stack is succesfully pusp\n");
    }
}
int pop(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("stack underflow !\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
void peek(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("\nUnderflow stack\n");
    }
    else
    {
        printf("| INDEX | ELEMENT |\n");
        for (int j = 0; j <= ptr->top; j++)
        {
            printf("-----------\n");
            printf("| %d | %d |\n", j, ptr->arr[j]);
        }
    }
}
void stacktop(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("Stack underflow");
    }
    else
    {
        printf("the stack top value of %d", ptr->arr[ptr->top]);
    }
}
int stackbottom(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("Stack underflow");
    }
    else
    {
        printf("the stack top value of %d", ptr->arr[0]);
    }
}
int main()
{
    int choice;
    char a;
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    printf("Enter the size of stack :: ");
    scanf("%d", &s->size);
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("\t\tstack has been  creat succesfully\n\n");
jump:
    printf("\t\t\tstack operation\n");
    printf("1. PUSP\n2. POP\n3. PEEK\n4. STACK TOP\n5. STACK BOTTOM\n6. EXIT\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        push(s);
        break;
    case 2:
        printf("the value is pop %d\n", pop(s));
        break;
    case 3:
        peek(s);
        break;
    case 4:
        stacktop(s);
        break;
    case 5:
        stackbottom(s);
        break;
    case 6:
        exit(5);
        break;
    default:
        printf("Wrong key press\n");
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
