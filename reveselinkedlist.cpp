#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};
struct node *Reverse(struct node *head)
{
    struct node *current,*prev,*next;
    current = head;
    prev = NULL;
    while( current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
void LinkedlistTraversal( struct node *ptr)
{
    while ( ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 2;
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = NULL;

    LinkedlistTraversal(head);
    cout << endl;
    head = Reverse(head);
    LinkedlistTraversal(head);
}