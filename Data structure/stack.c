#include <stdio.h>
#include<stdlib.h>
#define MAXSIZE 2

struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;

void push(void);
int pop(void);
void display(void);

int main()
{
    int choice;
    int option = 1;
    s.top = -1;

     char c;
    system("cls");
    printf("STACK Operation \n\n");
    printf("1.PUSH\n2.POP\n3.PEEK\n4.EXIT\n");
    printf("Choose Option -- ");
    c = getch();
    if(c == '1')
    {
        system("cls");
        push();
        getch();
    }
    else if(c == '2')
    {
        system("cls");
        pop();
        getch();
    }
    else if(c == '3')
    {
        system("cls");
        peek();
        getch();
    }
    else if(c == '4')
    {
        exit(0);
    }
    printf("\n\nDo You Want To Continue... Press 1 To Confirm. Else Press Any Key ");
    c = getch();
    if(c == '1')
        main();
    return 0;
}


/*  Function to add an element to the stack */
void push()
{
    int num;
    if (s.top == (MAXSIZE - 1))
    {
        printf("Stack is Full\n");
        return;
    }
    else
    {
        printf("Enter the element to be pushed\n");
        scanf("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}
/*  Function to delete an element from the stack */
int pop()
{
    int num;
    if (s.top == -1)
    {
        printf("Stack is Empty\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf("poped element is = %dn", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return (num);
}
/*  Function to display the status of the stack */
void peek()
{
    int i;
    if (s.top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    else
    {
        printf("\n The status of the stack is \n");
        for (i = s.top; i >= 0; i--)
        {
            printf("%d\n", s.stk[i]);
        }
    }
    printf("\n");
}