#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next,*prev;
}*head=NULL,*temp=NULL;
void makeNewNode(int n){
struct node*newNode=NULL;
int data;
scanf("%d",&data);
newNode=(struct node*)malloc(sizeof(struct node));
newNode->data=data;
newNode->next=NULL;
newNode->prev=NULL;
head=newNode;
temp=head;
int i;
for(i=0;i<n-1;i++){
    scanf("%d",&data);
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    newNode->prev=temp;
    temp->next=newNode;
    temp=newNode;

}
}
void deletenode(int todelete){
    temp=head;
    while(temp->data!= todelete){
        temp=temp->next;

    }
    struct node*temp2;
    temp2=temp->prev;
    temp2->next=temp->next;
    free(temp);
    
}
void insertAtBeginning(){
    int data;
    scanf("%d",&data);
    struct node *newNode=NULL;
    printf("\n going to make newnode");
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->prev=NULL;
    newNode->next=head;
    head=newNode;

}
void insertatend(){
    int data;
    scanf("%d",&data);
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    struct node*newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    temp->next=newNode;
    newNode->prev=temp;
}
void printx(){
    temp=head;
    while(temp!=NULL){
        printf(" %d ",temp->data);
        temp=temp->next;
    }
}
void insertafternode(int after){
    int data;
    scanf("%d",&data);
    temp=head;
    while(temp->data!=after){
        temp=temp->next;
    }
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->prev=temp;
    newNode->next=temp->next;
    temp->next=newNode;
   
}
void main(){
    makeNewNode(5);
    printx();
    int todelete;
    insertAtBeginning();
    printf("\n enter data to delete");
    scanf("%d",&todelete);
    deletenode(todelete);
    printx();
    insertatend();
    printx();
    int after;
    printf("\n insert after ??");
    scanf("%d",&after);
    insertafternode(after);
    printx();
}
