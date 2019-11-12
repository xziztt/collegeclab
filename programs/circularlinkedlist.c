#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*front=NULL,*rear=NULL;
void insert(){
    int data;
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&data);
    newNode->data=data;
    if(rear==NULL){
        rear=newNode;
        front=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
        rear->next=front;
    }
}
void delete(){
    struct node*temp=front;
    if(front==NULL){
        printf("\n underflow, cannot delete");
    }
    else if(front==rear){
        printf("\n deleting last element");
        front=NULL;rear=NULL;
        free(temp);
    }
    else{
        front=front->next;
        free(temp);
        rear->next=front;
    }
}
void printx(){
    struct node* temp=front;
    if(front==rear){
        printf(" %d ",front->data);
    }
    do{
        printf(" %d ",temp->data);
        temp=temp->next;
    }while(temp!=front);
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