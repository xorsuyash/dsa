#include<stdio.h>
#include<stdlib.h>
typedef struct treenode{
  int value;
  struct treenode * left;
  struct treenode * right;
}treenode;

treenode * createnode(int value)
{
    treenode * result=malloc(sizeof(treenode));
    if(result != NULL)
    {
        result->left=NULL;
        result->right=NULL;
        result->value=value;
    }
    return result;
}

void printtree(treenode *root)
{
    if(root == NULL)
    {
        printf("---<empty>---\n");
        
    }
    printf("value =%d\n",root->value);
    printf("left\n");
    printf(root->left);
    printf("right\n");
    printf(root->right);
    printf("done\n");

}

int main()
{
   treenode *n1=createnode(10);
   treenode * n2=createnode(30);
   treenode * n3=createnode(45);
   treenode * n4=createnode(56);
   treenode * n5= createnode(60);

   n1->left=n2;
   n1->right=n3;
   n3->left=n4;
   n3->right=n5;
   

   printtree(n1);
   free(n1);
   free(n2);
   free(n3);
   free(n4);
   free(n5);


      
}