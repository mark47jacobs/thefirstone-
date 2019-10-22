#include<stdio.h>
#include<stdlib.h>

struct staff
{
	int id;
	struct staff *next;
}*top=NULL,*base = NULL,*temp,*ptr;



void push()
{
	
	temp = (struct staff *)malloc(sizeof(struct staff));
	printf("\n\t Enter the id of staff member\n");
	scanf("%d",&temp->id);
	temp->next = NULL;
	
	if (top == NULL)
	{
		top = temp;
		base = temp;	
	}
	else
	{
		top->next =  temp;
		top = temp;	
	}

}

void pop()
{	if (top==NULL)
	{
		printf("Stack Underflow");
	}
	else if(top == base)
	{
		ptr = top;
		top = NULL;
		base = NULL;	
	}
	else
	{
		ptr=base;
		while (ptr!=top)
		{	
			temp=ptr;
			ptr= ptr->next;
			
		}
		temp->next = NULL;
		top = temp;
		free(ptr);
	}
}
void display()
{
	if (top==NULL)
	{
		printf("List is empty");
	}
	else
	{
		ptr=base;
		while (ptr!=NULL)
		{	
			printf(" %d --> ",ptr->id);
			ptr=ptr->next;		

		}
	}
}
void main()
{
	int ch;
	
	while (1)
	{
		printf("\n Enter choice \n 1. Push an element   \n 2.Pop an element \n 3.Diplay Stack \n 4. Exit  : \n");
		scanf("%d",&ch);
		switch(ch)
		{ 
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: exit(0);
				break;
			
		}
	}
}
