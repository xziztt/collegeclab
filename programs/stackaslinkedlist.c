#include<stdio.h>
struct node{
	int data;
	struct node* next;
}*top =NULL;
void push(){
	int data;
	scanf("%d",&data);
	struct node* newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	if(top==NULL){
			newnode->next=NULL;
	}
	else{
		newnode->next=top;
		
	}
		newnode->data=data;
		top=newnode;
}
void pop(){
	if(top==NULL){
		printf("\n nothing to pop");
		return;
	}
	else{
		struct node*temp=top;
		printf("\n deleting %d",temp->data);
		top=top->next;
		free(temp);
	}
}
void printx(){
	struct node* temp=top;
	while(temp->next!=NULL){
		printf(" %d ",temp->data);
		temp=temp->next;
	}
	printf(" %d ",temp->data);
	printf("\n");
}
void main(){
	int n;int i;int opt;
		do{
		printf(" 1.push \n 2.pop \n 3.print \n 4.exit");
		scanf("%d",&opt);
		switch(opt){
			case 1:push();
				break;
			case 2:pop();
				break;
			case 3:printx();
				break;
			case 4:break;
			default: printf("\n enter a valid choice");
				break;
	
	}
	
}while(opt!=4);	
	
}