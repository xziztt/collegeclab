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


/*//void deleteNode(struct Node **head_ref, int key) 
//{ 
    // Store head node 
  //  struct Node* temp = *head_ref, *prev; 
  
    // If head node itself holds the key to be deleted 
    //if (temp != NULL && temp->data == key) 
    //{ 
      //  *head_ref = temp->next;   // Changed head 
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
*/
void deletenode(){
	int data;
	scanf("%d",&data);
	struct node*temp=head;
	struct node*temp2=head->next;
	if(temp->data==data){
		head=temp2;
		free(temp);
	}
	else{
		while(temp2->data!=data&&temp2!=NULL){
			temp=temp2;
			temp2=temp2->next;
		}
		temp->next=temp2->next;
		free(temp2);
}

	}
		
				
			
void sort(){
	struct node*temp,*temp2,*min;
	temp=head;
	while(temp!=NULL){
		min=temp;
		temp2=temp->next;
		while(temp2!=NULL){
			if(min->data>temp2->data){
				min = temp2;
			}
				temp2=temp2->next;
		
		}
		int x= min->data;
		min->data=temp->data;
		temp->data=x;
		temp=temp->next;
		
	}
}
			
	
		void printx(){
    	struct node *temp=head;
    while(temp!=NULL){
        printf(" %d ",temp->data);
        temp=temp->next;
    }
}
			
	


void main(){
int choice;
int n;
int totn;
printf("\n enter the number of elements ");
scanf("%d",&n);
makenewnode(n);
printx();
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
		case 5: sort();
			break;
		default:printf("\n choose a valid choice pls");
		break;

	
}
}while(choice!=4);
printx();
}