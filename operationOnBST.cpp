#inlcude <iostream>
#include <stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

}
struct node *createnode(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}
int main()
{
    struct node *p = createnode(10);
    struct node *p1 = createnode(4);
    struct node *p2 = createnode(16);
    struct node *p3 = createnode(2);
    struct node *p4 = createnode(8);
    struct node *p5 = createnode(14);
    struct node *p6 = createnode(18);


//        10
//       /  \
//      4   16
//     / \ /  \
//    2  8 14  18

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;

    
}