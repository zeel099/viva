#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
    int data;
    struct node *right;
    struct node *left;
};
struct node *createnode(int data){
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node ));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;

}
void preOrder(struct node *root)
{
    if(root != NULL){
       cout << root->data << " ";
       preOrder(root->left);
       preOrder(root->right);
    }
}
void InOrder(struct node *root)
{
    if(root != NULL){
        InOrder(root->left);
        cout << root->data << " ";
        InOrder(root->right);
    }
    
}
void postOrder(struct node *root)
{
    if(root != NULL){
       postOrder(root->left);
       postOrder(root->right);
       cout << root->data << " ";
    }
    
   
}
int main()
{
    // constructing the root node
    // struct node *p;
    // p = (struct node *)malloc(sizeof(struct node ));
    // p->data = 2;
    // p->left = NULL;
    // p->right = NULL:

    // struct node *p1;
    // p = (struct node *)malloc(sizeof(struct node ));
    // p->data = 3;
    // p->left = NULL;
    // p->right = NULL:

    // struct node *p2;
    // p = (struct node *)malloc(sizeof(struct node ));
    // p->data = 4;
    // p->left = NULL;
    // p->right = NULL:

    // p->left = p1;
    // p->right = p2: 
    

    struct node *p = createnode(2);
    struct node *p1= createnode(4);
    struct node *p2= createnode(6);
    struct node *p3= createnode(8);
    struct node *p4= createnode(10);
      
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    
    preOrder(p);
    cout << endl;
    InOrder(p);
    cout << endl;
    postOrder(p);

    return 0;
}