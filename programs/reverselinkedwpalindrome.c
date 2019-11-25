#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*temp,*head,*head2=NULL,*temp2;
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
void makenewnode2(int n){			//making a new linked list
	int data;	
	struct node* temp,*newnode,*temp2;
	
	head2 = (struct node *)malloc(sizeof(struct node));
	if(head2==NULL){
		printf("\n memory could not be allocated");
	}
	else{
		
	int i;
	printf("\n enter the data of node1 ");	//inserting at the first position
	scanf("%d",&data);
	head2->data=data;
	head2->next=NULL;
	temp=head2;
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
void printx2(){
    temp2=head2;
    while(temp2!=NULL){
        printf(" %d ",temp2->data);
        temp2=temp2->next;
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
void splitMake(int data){
    struct node*newNode;
    if(head2==NULL){
        head2=(struct node*)malloc(sizeof(struct node));
        head2->data=data;
        head->next=NULL;
        temp2=head2;
    }
    else{
        newNode=(struct node*)malloc(sizeof(struct node));
        newNode->data=data;
        temp2->next=newNode;
        temp2=newNode;
        newNode->next=NULL;
    }
}
void split(){
    temp=head;
    while(temp!=NULL){
        printf("\n data = %d",temp->data);
        if(temp->data%2==0){
            splitMake(temp->data);
            printf("true");

        }
        temp=temp->next;
        printf("\n next");
    }
    

}
void main(){
    makenewnode(5);
    printx();
    split();
    //printx();
    //checkpalindrome();
    //reverse();
    printx2();

}