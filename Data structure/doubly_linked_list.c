#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;

};
void linkedlist_traversal(struct node *ptr)
{
    printf("-------------------------------\n");
    printf("NULL");
    while (ptr != NULL)
    {

        printf("<-|%d|->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
    printf("\n-------------------------------\n");
}
int main()
{
    struct node *node1;
    struct node *node2;
    struct node *node3;
    struct node *node4;
    node1 = (struct node *)malloc(sizeof(struct node));
    node2 = (struct node *)malloc(sizeof(struct node));
    node3 = (struct node *)malloc(sizeof(struct node));
    node4 = (struct node *)malloc(sizeof(struct node));
    node1->prev = NULL;
    node1->data = 5;
    node1->next = node2;

    node2->prev = node1;
    node2->data = 10;
    node2->next = node3;

    node3->prev = node2;
    node3->data = 15;
    node3->next = node4;

    node4->prev = node3;
    node4->data = 20;
    node4->next = NULL;

    linkedlist_traversal(node1);
    return 0;
}
