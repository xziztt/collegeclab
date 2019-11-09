#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head,*temp;
void makeNewNode(int n){
    int i;
    int data;
    struct node*newNode;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        printf("\n Could not allocate memory");
    }
    else{
        printf("\n enter data for head");
        scanf("%d",&data);
        head->data=data;
        head->next=NULL;
        head->prev=NULL;
        temp=head;
        for(i=1;i<n;i++){
            printf("\n insdie for loop");
            newNode=(struct node*)malloc(sizeof(struct node));
            if(newNode==NULL){
                printf("\n couldnt allocate memory");
            }
            else{
            temp->next=newNode;   
            scanf("%d",&data);
            newNode->data=data;
            newNode->next=NULL;
            newNode->prev=temp;
            temp=newNode;
            }

        }

    }



}
void insertAtBeginning(){
    int data;
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    if(newNode==NULL){
        printf("\n could not allocate memory");
        
    }
    else{
        printf("\n Enter data you need to enter at the beginning ");
        scanf("%d",&data);
        newNode->data=data;
        newNode->next=head;
        newNode->prev=NULL;
        head=newNode;
    }
}
void printLinkedList(){
    struct node*temp;
    temp=head;
    //head=head->next;
    //printf("head data is%d",temp->data);
    //printf("\n inside printLinkedList");
    while(temp->next!=NULL){
        //printf("\n inside while loop");
        printf(" %d ",temp->data);
        temp=temp->next;


    }
    printf(" %d ",temp->data);
}
void insertAtPos(int pos){
    struct node*temp;
    temp=head;
    while(temp->next!=NULL){
        if(temp->data==pos){
         newNode=(struct node)   
        }

    }
}

void main(){
    makeNewNode(5);
    printLinkedList();
    insertAtBeginning();
    printLinkedList();
}