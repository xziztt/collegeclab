#include<stdio.h>
struct node{
	int data;
	struct node*next;
}*rear=NULL,*front;

void insert(){
	int data;
	scanf("%d",&data);
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	if(rear==NULL){
		rear=newnode;
		front=newnode;
	}
	else{
		rear->next=newnode;
		rear=newnode;
	}
	rear->data=data;
	rear->next=NULL;
}
void delete(){
	struct node* temp;
	temp=front;
	if(front ==NULL){
		printf("\n underflow condition");
	}
	else{
		front = front->next;
	}
	free(temp);
}
void printx(){
	struct node*temp=front;
	while(temp->next!=NULL){
		printf(" %d ",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}
void main(){
	int i,opt;int n;
	
	do{
		printf("\n 1.insert \n 2.delete \n 3.print \n 4.exit");
		scanf("%d",&opt);
		switch(opt){
			case 1:insert();
				break;
			case 2:delete();
				break;
			case 3:printx();
				break;
			case 4:break;
			default: printf("\n enter a valid choice");
				break;
	
	}
	
}while(opt!=4);	
}