#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlist_traversal(struct node *node1)
{
    struct node *ptr = node1;
    do
    {
        printf("|%d|->", ptr->data);
        ptr = ptr->next;
    } while (ptr != node1);
}
struct node *insertatfirst(struct node *node1, int data)
{
    struct node *ptr ;
    ptr->data = data;
    struct node *p = node1->next;
    while (p->next != node1)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = node1;
    node1 = ptr;
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
    node5->next = node1;
    printf("circuler linked list before insertion\n");
    linkedlist_traversal(node1);
    insertatfirst(node1, 2);
    printf("\ncirculer linked list after insertion\n");
    linkedlist_traversal(node1);
    return 0;
}
