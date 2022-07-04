#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
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
void push(struct stack *ptr, char c)
{
    if (isfull(ptr))
    {
        printf("The stack is overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = c;
    }
}
char pop(struct stack *ptr)
{
    if (isfull(ptr))
    {
        return -1;
    }
    else
    {
        char c = ptr->arr[ptr->top];
        ptr->top--;
        return c;
    }
}
char match(char a, char b)
{
    if (a=='{' && b=='}')
    {
        return 1;
    }
    if (a=='(' && b==')')
    {
        return 1;
    }
    if (a=='[' && b==']')
    {
        return 1;
    }
    
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));;
    sp->size = 10;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char poped;
    char exp[100];
    printf("enter the expresion :: ");
    gets(exp);
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '('||exp[i] == '['|| exp[i] =='{' )
        {
            push(sp, exp[i]);
        }
        else if (exp[i] == ')'||exp[i] == ']'|| exp[i] =='}')
        {
            if (isempty(sp))
            {
                printf("parenthes is balance");
            }
            poped=pop(sp);
            if (!match(poped,exp[i]))
            {
                printf("parenthes is balance");
            }
            
        }
    }
    if (isempty(sp))
    {
        printf("parenthes is balance");
    }
    else
    {
        printf("parenthes is not balance");
    }
    return 0;
}
