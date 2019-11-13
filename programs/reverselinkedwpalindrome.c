#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*temp,*head;
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
void reverse(){
    struct node*curr=head;
    struct node*next=NULL,*prev=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    
}
void printx(){
    temp=head;
    while(temp!=NULL){
        printf(" %d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void checkpalindrome(){
    struct node*temp=head;
    int a[10];int i=0;int b[10];int j=0;
    while(temp!=NULL){
        a[i]=temp->data;
        i++;
        temp=temp->next;

    }
    reverse(a);
    temp=head;
    while(temp!=NULL){
        b[j]=temp->data;
        j++;
        temp=temp->next;
    }
    int flag=0;
    for(i=0;i<5;i++){
        if(a[i]!=b[i]){
            flag=1;
        }
    }
    if(flag==0){
        printf("\n it is a palindrome");

    }
    else{
        printf("\n it is not a palindrome");
    }
}
void main(){
    makenewnode(5);
    printx();
    reverse();
    printx();
    checkpalindrome();
}