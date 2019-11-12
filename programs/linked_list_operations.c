#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
}*head;




void makenewnode(int n){			//making a new linked list
	int data;	
	struct node* temp,*newnode,*temp2;
	
	head = (struct node *)malloc(sizeof(struct node));
	if(head==NULL){
		printf("\n memory could not be allocated");
	}
	else{
		
	int i;
	printf("\n enter the data of node1 ");	//inserting at the first position
	scanf("%d",&data);
	head->data=data;
	head->next=NULL;
	temp=head;
	for(i=2;i<=n;i++){
		printf("%d running \n",i);
		newnode = (struct node *)malloc(sizeof(struct node));	
		if(newnode==NULL){
			printf("\n memory could not be allocated");
		}	
		else{
			printf("\n enter the data");
			scanf("%d",&data);
			newnode->data=data;
			newnode->next=NULL;
			temp->next=newnode;
			//printf("add  %d \n",temp->next);
			temp=newnode;
			
			
		}
	
	}
	}

			
					
		
		
}
void insertatbeginning(){
	struct node* newnode;

	int idata;
	printf("\n entering the data");
	scanf("%d",&idata);
	newnode = (struct node *)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("\n memory allocation error");
	}
	else{
	newnode->data=idata;
	newnode->next=head;
	head=newnode;
	}
}
void insertatpos(){
	int n;
	printf("\n enter the position to insert in ? ");
	scanf("%d",&n);
	struct node* newnode,*temp;;
	int i;int data;
	newnode = (struct node *)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("\n memory allocation error");
	}
	else{	
		temp = (struct node *)malloc(sizeof(struct node));  	//???????????????????????????????
		temp=head;
	     	for(i=0;i<n-1;i++){
			temp=temp->next;
			if(temp==NULL)
				break;
		}
		if(temp!=NULL){
	
			printf("\n data to enter at given position ?");
			scanf("%d",&data);
			newnode->data=data;
			newnode->next=NULL;
			newnode->next=temp->next;
			temp->next=newnode;
	   	}
		
	
	 }
}

void insertatend(){
	struct node *temp,*newnode;
	int data,i;
	newnode = (struct node *)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("\n memory allocation failed");
	}
	else{
		printf("\n enter the data");
		scanf("%d",&data);
		newnode->data=data;
		newnode->next=NULL;
		temp = (struct node *)malloc(sizeof(struct node));
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
void deletenode(){
	int item;
	scanf("%d",&item);
	struct node *temp,*temp2;
	temp = (struct node *)malloc(sizeof(struct node));
	temp=head;
	struct node* nope;
	while(temp->next!=NULL){
		printf("\n inside loop 1");
		if(temp->data == item){
			nope=temp->next;
			temp2 = (struct node *)malloc(sizeof(struct node));
			temp2=head;
			while(temp2->next!=NULL){
					printf("\n inside loop2");
					if(temp2->next==temp){
						temp2->next=temp->next;
					}
					else
						temp2=temp2->next;
				
			}
	
			free(temp);
		}
		else(temp=temp->next);
	}




void deleteNode(struct Node **head_ref, int key) 
{ 
    // Store head node 
    struct Node* temp = *head_ref, *prev; 
  
    // If head node itself holds the key to be deleted 
    if (temp != NULL && temp->data == key) 
    { 
        *head_ref = temp->next;   // Changed head 
        free(temp);               // free old head 
        return; 
    } 
  
    // Search for the key to be deleted, keep track of the 
    // previous node as we need to change 'prev->next' 
    while (temp != NULL && temp->data != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 
  
    // If key was not present in linked list 
    if (temp == NULL) return; 
  
    // Unlink the node from linked list 
    prev->next = temp->next; 
  
    free(temp);  // Free memory 
} 
		
				
			
	
			
}
void printnodes(){
	struct node* tempx;
	tempx=head;
	while(tempx->next!=NULL){
		printf("  %d  ",tempx->data);
		tempx=tempx->next;
	}
	printf(" %d ",tempx->data);
}

			
	
		
			
	


void main(){
int choice;
int n;
int totn;
printf("\n enter the number of elements ");
scanf("%d",&n);
makenewnode(n);
printnodes();
printf("1.at end? \n 2.at beginning? \n 3.at a pos ? \n 4.exit ?");

do{
	scanf("%d",&choice);
	switch(choice)
	{
//printnodes();
		case 1:insertatend();
		break;
//printnodes();
		case 2: insertatbeginning();
		break;
		case 3: insertatpos();
		break;
		case 4:	printf("\n exiting");
			break;
		case 5: deletenode();
			break;
		default:printf("\n choose a valid choice pls");
		break;

	
}
}while(choice!=4);
printnodes();
}