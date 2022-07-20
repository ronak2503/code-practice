#include <stdio.h>
struct node
{
    int data;
    int *next;
};
struct node *f = NULL;
struct node *r = NULL;
void peek()
{
    struct node *q = f;
	if (f==NULL || r == NULL)
	{
		printf("queue is empty\n");
	}
    while (q)
    {
        printf("|%d|->", q->data);
        q = q->next;
    }
    printf("NULL");
}
void inqueue()
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    int val;
    printf("enter the number :: ");
    scanf("%d", &val);
    n->data = val;
	n->next = NULL;
    if (f == NULL || r == NULL)
    {
    	f = r = n;
	}
	else
	{	
        r->next = n;
        r = n;
    }
}
void dqueue()
{
    int val;
    struct node *ptr = f;
    if (f == NULL)
    {
        printf("the queue is empty\n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
        printf("the dequeue  is %d", val);
    }
}

int main()
{
    
    char c;
    int n;
    printf("\t\tQueue has been creat succesfully\n\n");
jump:
    printf("\t\t\tLinkedlist Queue operation\n");
    printf("\n1.Inqueue\n2.dequeue\n3.Peek\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        inqueue();
        break;
    case 2:
        dqueue();
        break;
    case 3:
        peek();
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
// #include <stdio.h>
// #include <stdlib.h>

// // Structure to create a node with data and next pointer
// struct node {
// 	int data;
// 	struct node *next;
// };

// struct node *front = NULL;
// struct node *rear = NULL;

// // Enqueue() operation on a queue
// void enqueue(int value) {
// 	struct node *ptr;
// 	ptr = (struct node *)malloc(sizeof(struct node));
// 	ptr->data = value;
// 	ptr->next = NULL;
// 	if ((front == NULL) && (rear == NULL)) {
// 		front = rear = ptr;
// 	} else {
// 		rear->next = ptr;
// 		rear = ptr;
// 	}
// 	printf("Node is Inserted\n\n");
// }

// // Dequeue() operation on a queue
// int dequeue() {
// 	if (front == NULL) {
// 		printf("\nUnderflow\n");
// 		return -1;
// 	} else {
// 		struct node *temp = front;
// 		int temp_data = front->data;
// 		front = front->next;
// 		free(temp);
// 		return temp_data;
// 	}
// }

// // Display all elements of queue
// void display() {
// 	struct node *temp;
// 	if ((front == NULL) && (rear == NULL)) {
// 		printf("\nQueue is Empty\n");
// 	} else {
// 		printf("The queue is \n");
// 		temp = front;
// 		while (temp) {
// 			printf("%d--->", temp->data);
// 			temp = temp->next;
// 		}
// 		printf("NULL\n\n");
// 	}
// }

// int main() {
// 	int choice, value;
// 	printf("\nImplementation of Queue using Linked List\n");
// 	while (choice != 4) {
// 		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
// 		printf("\nEnter your choice : ");
// 		scanf("%d", &choice);
// 		switch (choice) {
// 		case 1:
// 			printf("\nEnter the value to insert: ");
// 			scanf("%d", &value);
// 			enqueue(value);
// 			break;
// 		case 2:
// 			printf("Popped element is :%d\n", dequeue());
// 			break;
// 		case 3:
// 			display();
// 			break;
// 		case 4:
// 			exit(0);
// 			break;
// 		default:
// 			printf("\nWrong Choice\n");
// 		}
// 	}
// 	return 0;
// }
