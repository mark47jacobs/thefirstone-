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
{   int data;
    temp = (Node *)malloc(sizeof(Node));
    printf("\n\t Enter the data: ");
    scanf("%d",&data);
    temp->data = data;
    temp->rch = NULL;
    temp->lch = NULL;
    
    if(root ==NULL)
    {
        root = temp; 
    }
    else{
        ptr = root;
        parent = root;
        while(ptr!=NULL)
        {   parent = ptr;
            if(ptr->data==data)
            {
                printf("\n Node already exists\n");
                return;
            }
            else if(ptr->data > data)
            {
                ptr = ptr->lch;
            }
            else if(ptr->data < data)
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
	int ch;
	
	while (1)
	{
		printf("\n Menu \n 1. Insert  \n 2. Display  ");
		scanf("%d",&ch);
		switch(ch)
		{ 
			case 1: insert();
			    	break;
			case 2: print2D();
				    break;
			
		}
	}
}
