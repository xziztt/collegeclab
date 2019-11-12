#include<stdio.h>
int cq[20],front=-1,rear=-1;
void insert(int n){
    int data;
    scanf("%d",&data);
    if((front == 0 &&rear==n-1) || rear+1==front){
        printf("\n queue full");
        return;
    }
    else if(rear==-1){
        rear=0;front=0;
    }
    else if(rear==n-1&&front!=0){
        rear=0;
    }
    else{
        rear=rear+1;
    }
    cq[rear]=data;

}
void delete(int n){
    if(front==-1){
        printf("underflow condition");
    }
    else if(front == rear){
        front = -1; rear = -1;
    }
    else if(front==(n-1)){
        front=0;
    }
    else{
        front=front+1;
    }
    
}
void printx(int n){
    int i;
    if(rear>=front){
        for(i=front;i<=rear;i++){
            printf(" %d ",cq[i]);
        }
    }
    else{
        for(i=front;i<=n;i++){
            printf(" %d ",cq[i]);
        }
        for(i=0;i<=rear;i++){
            printf(" %d ",cq[i]);
        }
    }
}
void main(){
    int i,opt;int n;
    scanf("%d",&n);
   
    do{
        printf(" 1.insert \n 2.delete \n 3.print \n 4.exit");
        scanf("%d",&opt);
        switch(opt){
            case 1:insert(n);
                break;
            case 2:delete(n);
                break;
            case 3:printx(n);
                break;
            case 4:break;
            default: printf("\n enter a valid choice");
                break;
   
    }
   
}while(opt!=4);
}