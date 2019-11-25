#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1;
int a[20];

void insertfrombeginning(int n){
    int data;
    scanf("%d",&data);
    if(rear==-1){
        front=0;
        rear=0;
    }
    else if(rear==n&&front==0 || front==rear+1){
        printf("\n overflow");
        return;
    }
    else if(front==n-1){
        front=0;
    }
    else{
        front=front+1;
    }
        a[front]=data;
}
void insertfromend(int n){
    int data;
    scanf("%d",&data);
    if(rear==-1){
        rear=0;
        front=0;
    }
    else if(front ==0 && rear==n-1 || front==rear+1){
        printf("\n overflow, cannot insert");
    }
    else if(rear==n-1){
        rear=0;
    }
    else{
        rear=rear+1;
    }
    a[rear]=data;
}
void deletefrombeginning(int n){
    if(front==-1){
        printf("\n underflow, nothing to delete");
            return;
    }
    else if(front==rear){
        front=-1;
        rear=-1;
    }
    else if(front==n-1){
        front=0;
    }
    else 
        front+=1;

}
void deletefromend(int n){
    if(rear==-1){
        printf("\n underflow, nothing to delete");
        return;
    }
    else if(rear==0){
        rear=n-1;
    }
    else if(rear==front){
        rear=-1;
        front=-1;
    }
    else{
        rear=rear-1;
    }
}
void printx(int n){
    int i;
    if(front == -1){
        printf("\n nothing to print");
    }
    else if(front<rear){
        for(i=front;i<=rear;i++){
            printf(" %d ",a[i]);
        }
        printf("\n");
    }
    else{
        for(i=front;i<n;i++){
            printf(" %d ",a[i]);
        }
        for(i=0;i<=rear;i++){
            printf(" %d ",a[i]);
        }

        printf("\n");

    }
}
void main(){
    int n;
    scanf("%d",&n);int opt2,opt3;
    int opt;
    printf("\n enter your choice");
    do{
        printf("\n 1.Input Restricted \n 2.Output Restricted");
        scanf("%d",&opt);
        switch(opt){
            case 1:
                    
                    do{
                        printf("\n 1.insert \n 2.Delete from END \n 3.Delete from FRONT \n 4.Exit");
                        scanf("%d",&opt2);
                        switch(opt2){
                            case 1:  insertfromend(n);
                                    printx(n);
                                    break;
                            case 2: deletefromend(n);
                                    printx(n);
                                    break;
                            case 3: deletefrombeginning(n);
                                    printx(n);
                                    break;
                            case 4: printf("\n exiting");
                                    break;
                        }
                    }while(opt2!=4);
                    break;
            case 2: 
                    
                    do{
                        printf("\n 1.Insert from Beginning \n 2.Insert from END \n 3.Delete \n 4.Exit");
                        scanf("%d",&opt3);
                        switch(opt3){
                            case 1: insertfrombeginning(n);
                                    printx(n);
                                    break;
                            case 2: insertfromend(n);
                                    printx(n);
                                    break;
                            case 3: deletefrombeginning(n);
                                    printx(n);
                                    break;
                            case 4: printf("\n Exiting ");
                                    printx(n);
                                    break;
                        }
                    }while(opt3!=4);
                    break;
                    


         }
                    }while(opt!=4);
    printx(n);
}

    