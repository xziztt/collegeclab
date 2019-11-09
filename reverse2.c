#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*temp;
void reverse(struct node**head_ref){
    printf("\n reverse function called");
    struct node *next=NULL,*prev=NULL,*curr=*head_ref;
    printf("%d",curr->data);
    int i=0;
    while(curr!=NULL){
        printf("lulz");
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    *head_ref=prev;
    printf("%d",prev->data);
    printf("\n reverse function ended");

}
void printx(struct node** head_ref){
    printf("\n printing");
    struct node *temp;
    temp=*head_ref;
    while(temp!=NULL){
        printf(" %d ",temp->data);
        temp=temp->next;
    }
}
void make(struct node **head_ref,int data){
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=(*head_ref);
    *head_ref=newnode;
}

void main(){
    int n;
    struct node *head = NULL;
    scanf("%d",&n);
    int i,data;
    for(i=0;i<n;i++){
        scanf("%d",&data);
        make(&head,data);
    }
    printx(&head);
    reverse(&head);
    printx(&head);
    
}