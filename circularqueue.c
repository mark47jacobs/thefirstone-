#include<stdio.h>
#include<string.h>
#include<ctype.h>
int front = -1,rear = -1,size ;

void insert(int *cq,int x)
{
	if(rear == size-1 && front == 0 || rear == front -1)
	{
		printf("\nqueue is full :))\n");	
	}
	else
	{	
		if(front ==-1 && rear==-1)
		{	front = 0; rear = 0;	}
		else
		{	rear = (rear+1)%size;	
			*(cq + rear) = x;		
		}
	
	}
}

void delete(int *cq)
{
	if (front==-1 && rear == -1)
	{
		printf("Queue is empty\n");	
	}
	else
	{
		printf("element deleted is %d ",*(cq+front));
		if(front == rear )
		{	front = -1; rear= -1;	}
		else
		{	front = (front+1)%size;	}
			
	}
}

void display(int *cq)
{	int i;
	if(front == -1 && rear == -1)
	{	printf("Queue is empty\n");	}
	else
	{	for(i = front; i!= rear; i = (i+1)%size)
		{	printf("%d",*(cq+i));	
		}
		printf("%d",*(cq+i));
	}
}

void main()
{
	int size,item;
	printf("enter maxsize of the circular queue\n");
	scanf("%d",&size);
	
	int cq[size], ch;
	while(1)
	{
		printf("\n Enter choice : \n 1-> to insert \n 2-> to delete \n 3-> to display \n ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: printf("enter the element to be inserted\n");
				scanf("%d",&item);
				insert(cq,item);
				break;
			case 2: delete(cq);
				break;
			case 3: display(cq);
				break;
			
			default: printf("invalid choice !!!");
		
		}	
	}
}
