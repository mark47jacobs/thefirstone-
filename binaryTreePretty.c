#include<stdio.h>
#include<stdlib.h>
#define COUNT 10 

typedef struct node
{
    int data;
    struct node *rch;
    struct node *lch;
}Node;
Node *root = NULL,*temp = NULL, *ptr,*parent;

int is_lch(Node *tree)
{
    int ch;
    printf("\n Do you want a left child for %d, Press 1 for yes:",tree->data);
    scanf("%d",&ch);
    return(ch);
}
int is_rch(Node *tree)
{
    int ch;
    printf("\n Do you want a right child for %d, Press 1 for yes:",tree->data);
    scanf("%d",&ch);
    return(ch);
}

void create(Node *tree)
{   
    if(is_rch(tree)==1)
    {
       temp = (Node *)malloc(sizeof(Node));
       printf("\n Enter the data");
       scanf("%d",&temp->data);
       tree->rch = temp;
       create(temp);
    }
    else{
        tree->rch=NULL;
    }
    if(is_lch(tree)==1)
    {
       temp = (Node *)malloc(sizeof(Node));
       printf("\n Enter the data");
       scanf("%d",&temp->data);
       tree->lch = temp;
       create(temp);
    }
    else{
        tree->lch=NULL;
    }
}
void delete()
{
    
}

void print2DUtil(Node *root, int space) 
{ 
     
    if (root == NULL) 
        return; 
  
    
    space += COUNT; 
  
    print2DUtil(root->rch, space); 
  
    printf("\n"); 
    for (int i = COUNT; i < space; i++) 
        printf(" "); 
    printf("%d\n", root->data); 
  
    print2DUtil(root->lch, space); 
} 
  

void print2D() 
{ 
   print2DUtil(root, 0); 
} 

void main()
{
	root = (Node *)malloc(sizeof(Node));
    printf("\n Enter the data");
    scanf("%d",&root->data);
    root->lch = NULL;
    root->rch = NULL;
    
    create(root);
    
    print2D();
       
}
