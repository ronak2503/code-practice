#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlist_sarching(struct node *ptr, int value)
{
    while (ptr != NULL)
    {
        ptr = ptr->next;
        if (ptr->data == value)
        {
            printf("your node|%d|", ptr->data);
        }
    }
}
void linkedlist_traversal(struct node *ptr)
{
    printf("-------------------------------\n");
    while (ptr != NULL)
    {

        printf("|%d|->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
    printf("\n-------------------------------\n");
}
// insertion node
struct node *insertatfirst(struct node *node1, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = node1;
    return ptr;
}
struct node *insertafter(struct node *node1, struct node *prevnode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevnode->next;
    prevnode->next = ptr;
    return node1;
}
struct node *insertatend(struct node *node1, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = node1;
    ptr->data = data;
    ptr->next = node1;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return node1;
}
struct node *insertatindex(struct node *node1, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = node1;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return node1;
}
// deletion node
struct node *deletionfirst(struct node *node1)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr = node1;
    node1 = node1->next;
    free(ptr);
    return node1;
}
struct node *deletionindex(struct node *node1, int index)
{
    struct node *p = node1;
    struct node *q = node1->next;

    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return node1;
}
struct node *deletionend(struct node *node1)
{
    struct node *p = node1;
    struct node *q = node1->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return node1;
}
struct node *deletionbyvalue(struct node *node1, int value)
{
    struct node *p = node1;
    struct node *q = node1->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return node1;
}
int main()
{
    struct node *node1;
    struct node *node2;
    struct node *node3;
    struct node *node4;
    struct node *node5;
    // allocate memory heap
    node1 = (struct node *)malloc(sizeof(struct node));
    node2 = (struct node *)malloc(sizeof(struct node));
    node3 = (struct node *)malloc(sizeof(struct node));
    node4 = (struct node *)malloc(sizeof(struct node));
    node5 = (struct node *)malloc(sizeof(struct node));

    node1->data = 10;
    node1->next = node2;

    node2->data = 11;
    node2->next = node3;

    node3->data = 12;
    node3->next = node4;

    node4->data = 13;
    node4->next = node5;

    node5->data = 14;
    node5->next = NULL;
    printf("linked list before insertion\n");
    linkedlist_traversal(node1);
    linkedlist_sarching(node1, 11);
    // node1 = insertatfirst(node1, 30);
    // node1 = insertatindex(node1, 9 ,3);
    // node1 = insertatend(node1,8);
    // node1 = insertafter(node1, node2, 0 );
    // node1 = deletionfirst(node1);
    // node1 = deletionindex(node1, 1);
    // // node1 = deletionend(node1);
    // node1 = deletionbyvalue(node1, 10);
    // printf("befor");
    // printf("\n");
    // printf("linked list afer insertion\n");
    // linkedlist_traversal(node1);
    return 0;
}
