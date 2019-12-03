//This program can insert data into  binary search tree ,and then print it in inorder,preorder,postorder,and in 2 DIMENSIONS

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


void insert()
{
    int data;
    temp = (Node *)malloc(sizeof(Node));
    printf("\n Enter the data");
    scanf("%d",&data);
    temp->data = data;
    temp->rch = NULL;
    temp->lch = NULL;

    if(root == NULL)
    {
        root = temp;
    }
    else
    {
      ptr = root;
      parent = root;
      while(ptr!=NULL)
      { parent = ptr;
        if(ptr->data == data)
        {
          printf("\nNode already exists ;)");
          return;
        }
        else if(ptr->data >data)
        {
          ptr = ptr->lch;
        }
        else if(ptr->data <data)
        {
          ptr = ptr->rch;
        }

      }
      if(parent->data > data)
      {
        parent->lch = temp;
      }
      else if(parent->data < data)
      {
        parent->rch = temp;
      }
    }

}
void delete()
{

}
void preorder(Node *tree)
{
    if(tree!=NULL)
    {
        printf("%d ",tree->data);
        preorder(tree->lch);
        preorder(tree->rch);
    }
}
void postorder(Node *tree)
{
    if(tree!=NULL)
    {
        postorder(tree->lch);
        postorder(tree->rch);
        printf("%d ",tree->data);
    }
}
void inorder(Node *tree)
{
    if(tree!=NULL)
    {
        inorder(tree->lch);
        printf("%d ",tree->data);
        inorder(tree->rch);
    }
}


void print2Dimensional(Node *root, int space)
{

    if (root == NULL)
        return;


    space += COUNT;

    print2Dimensional(root->rch, space);

    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%d\n", root->data);

    print2Dimensional(root->lch, space);
}


void print2D()
{
   print2Dimensional(root, 0);
}

void main()
{   int ch;

    while(1)
    {
        printf("\nEnter Your Choice\n0. Insert a node \n1. Inorder Traversal\n2. Preorder Traveral\n3. Postorder Traversal\n4. print in 2 dinmension:\n\t");
        scanf("%d",&ch);
        switch (ch) {
        case 0: insert();
                break;
        case 1: inorder(root);
                break;
        case 2: preorder(root);
                break;
        case 3: postorder(root);
                break;
        case 4: print2D();
                break;
        }
    }

}
