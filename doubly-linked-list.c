#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *prev, *next; 
}*head=NULL,*temp=NULL,*ptr=NULL,*prev = NULL;

void insertBeg()
{
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\n\tEnter the data");
	scanf("%d",&temp->data);
	temp->next = NULL;
	temp->prev = NULL;
	
	if(head == NULL){
	    
	    head = temp;
	}
	else{
	    temp->prev = NULL;
	    temp->next = head;
	    head->prev = temp;
	    head = temp;
	}
}
void insertEnd()
{
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\n\tEnter the data");
	scanf("%d",&temp->data);
	temp->next = NULL;
	temp->prev = NULL;
	
	if(head == NULL){
	    
	    head = temp;
	}
	else{
	    ptr = head;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
	    
	    temp->prev = ptr;
	    temp->next = NULL;
	    ptr->next = temp;
	    
	}
}

void deleteEnd(){
    if(head == NULL){
        printf("\n The list is empty:)\n ");
    }
    else if(head->next ==NULL){
        ptr = head;
        head = NULL;
        free(ptr);
    }
    else{
        ptr = head;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->prev->next = NULL;
        free(ptr);
    }
    
}
void deleteBeg(){
    if(head == NULL){
        printf("\n The list is empty:)\n ");
    }
    else if(head->next ==NULL){
        ptr = head;
        head = NULL;
        free(ptr);
    }
    else{
        ptr = head;
        head = head->next;
        head->prev = NULL;
        free(ptr);
    }
    
}

void display(){
    if(head == NULL){
        printf("\n The list is empty:)\n ");
    }
    else{
        ptr = head;
        printf("NULL <--");
        while(ptr!=NULL){
            printf("--> %d <--",ptr->data);
            ptr = ptr->next;
        }
        printf("-->NULL \n");
    }
}
int main()
 {
    int ch;
    while(1){
        printf("\n Enter choice\n 1-insert beginning\n 2-delete End \n 3-display \n 4-insert end \n 5-delete beginning\n 6 any key to exit:   ");
        scanf("%d",&ch);
        switch(ch){
            case 1: insertBeg();
                    break;
            case 2: deleteEnd();
                    break;
            case 3: display();
                    break;
            case 4: insertEnd();
                    break;
            case 5: deleteBeg();
                    break;
            
        }
    }
 }
