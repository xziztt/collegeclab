#include<stdio.h>
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
        scanf("%d",&data);
        head->data=data;
        head->next=NULL;
        head->prev=NULL;
        temp=head;
        for(i=1;i<n;i++){
            newNode=(struct node*)malloc(sizeof(struct node));
            if(newNode==NULL){
                printf("\n couldnt allocate memory");
            }
            else{

            
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
        newNode->data=data;
        newNode->next=head;
        newNode->prev=NULL'
    }
}