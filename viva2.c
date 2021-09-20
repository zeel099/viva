#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}
int linkedlistTraversal(struct node *ptr)
{
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node ));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 14;
    third->next = fourth;

    third->data = 16;
    third->next = NULL;

    linkedlistTraversal(head);
}