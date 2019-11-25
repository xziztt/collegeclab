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
void findPredecessor(int find){
    struct node *temp=head;
    if(temp->data==find){
        printf("\n no predecessor");
    }
    else{
    while(temp->next->data!=find){
        temp=temp->next;
    }
    printf("\n the predecessor is %d",temp->data);
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
    int n;
    scanf("%d",&n);
    int i;int find;
    makenewnode(n);
     printx();
 
   printf("\n enter the element to find the predecessor of");
   scanf("%d",&find);
  
   findPredecessor(find);

}
