#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
	int data;
	struct node* next;
}node;
node *head=NULL,*temp,*ptr;
int n;
node *temp=NULL;
node *ptr=NULL;

void create_list()
{

		temp=(node*)malloc(sizeof(node));
		printf("\n Enter the data ");
		scanf("%d", &(temp->data));
		temp->next=NULL;

		if (head==NULL)
		{		
			head=temp;
		}
		else
		{
			ptr=head;
			while(ptr->next!=NULL)
			{	
				ptr=ptr->next;		

			}
			ptr->next=temp;
	
		}
	
}


void insert_beg()
{
	temp=(node*)malloc(sizeof(node));
	printf("\n Enter the data ");
	scanf("%d",&(temp->data));
	temp->next=NULL;
	if (head==NULL)
	{
		head=temp;
	}
	else
	{
		temp->next=head;
		head=temp;
	}

	
}

void location_based()
{	int count=0,pos,i;
	
	ptr=head;
	while (ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	printf("enter the position");
	scanf("%d",&pos);
	if (pos==1)
	{
	insert_beg();
	}
	else
	if (pos>1 && pos<=count)
	{	
	temp=(node*)malloc(sizeof(node));
	printf("\n Enter the data ");
	scanf("%d",&(temp->data));
	temp->next=NULL;	
		ptr=head;
		for(i=1;i<pos-1;i++)
		{
			ptr=ptr->next;
		}
	temp->next=ptr->next;
	ptr->next=temp;
	}
	else 
	if (pos==count+1)
	create_list();
	else
	printf("position wrong");
}
		

void del_end()
{	if (head==NULL)
	{
		printf("the list is empty");
	}
	else
	{
		ptr=head;
		while (ptr->next!=NULL)
		{	
			temp=ptr;
			ptr= ptr->next;
			
		}
		temp->next=NULL;
		free(ptr);
	}
}

void del_beg()
{	if (head==NULL)
	{
		printf("the list is empty");
	}
	else
	{
		temp=head;
		head=head->next;
		free(temp);
		
	}
}

void loc_based_del()
{	int count=0,pos,i;
	
	ptr=head;
	while (ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	printf("enter the position");
	scanf("%d",&pos);
	if (pos==1)
	{
	del_beg();
	}
	else
	if (pos>1 && pos<=count)
	{		
		ptr=head;
		for(i=1;i<pos;i++)
		{	temp=ptr;
			ptr=ptr->next;
		}
	temp->next=ptr->next;
	}
	else 
	printf("position wrong");
}

void display()
{
	if (head==NULL)
	{
		printf("List is empty");
	}
	else
	{
		ptr=head;
		while (ptr!=NULL)
		{	
			printf("\t %d --> ",ptr->data);
			ptr=ptr->next;		

		}
	}
}

void main()
{
	int ch;
	
	while (1)
	{
		printf("\n Menu \n 1. Insert_end  \n 2. Insert_beg  \n 3. Display  \n 4.Location based \n \n 5. Delete_end  6. Delete_beg 7. Loc_based_del");
		scanf("%d",&ch);
		switch(ch)
		{ 
			case 1: create_list();
				break;
			case 2: insert_beg();
				break;
			case 3: display();
				break;
			case 4: location_based();
				break;
			case 5: del_end();
				break;
			case 6: del_beg();
				break;
			case 7: loc_based_del();
				break;
		}
	}
}



