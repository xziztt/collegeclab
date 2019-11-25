#include<stdio.h>
#include<stdlib.h>
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
            temp->next=head;
			
			
		}
	
	}
	}