#include<stdio.h>
#include<stdlib.h>
struct node {
    char data ;
    struct node *left;
    struct node *right;

};

struct node * MakeNode(char x)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}

void PreOrderTraversal(struct node * tree)
{
    if(tree!=NULL)
    {
        printf("\t%c",tree->data);
        PreOrderTraversal(tree->left);
        PreOrderTraversal(tree->right);

    }
}
void InOrderTraversal(struct node * tree)
{
    if(tree!=NULL)
    {
        InOrderTraversal(tree->left);
        printf("\t%c",tree->data);
        
        InOrderTraversal(tree->right);

    }
}

void PostOrderTraversal(struct node * tree)
{
    if(tree!=NULL)
    {

        PostOrderTraversal(tree->left);
        PostOrderTraversal(tree->right);
        printf("\t%c",tree->data);

    }
}




void main()
{
    struct node * root ;
    root=NULL; 
    root=MakeNode('A');
    root->left=MakeNode('B');
    root->right=MakeNode('C');
    root->left->left=MakeNode('D');
    root->left->right=MakeNode('E');

    PreOrderTraversal(root);
    printf("\n\n");
    InOrderTraversal(root);
    printf("\n\n");
    PostOrderTraversal(root);
    printf("\n\n");
    printf("Tree Printed sucessfully");
    printf("\n\n");


}
