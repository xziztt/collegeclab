#include<stdio.h>
#include<stdlib.h>
int queue[10];int top1=-1,top2=9;
void push1(){
    int data;
    scanf("%d",&data);
    if(top1==-1){
        top1=0;
    }
    else if(top1+1==top2){
        printf("\n overflow");
        return;
    }
    else 
        top1++;
    queue[top1]=data;

}
void push2(){
    int data;
    scanf("%d",&data);
    if(top2==10){
        top2--;
    }
    else if(top1+1==top2){
        printf("\n overflow");
        return;
        }
    else
        top2--;
    queue[top2]=data;
}
void pop1(){
    if(top1==-1){
        printf("\n underflow");

    }
    else 
        top1--;
}
void pop2(){
    if(top2==10){
        printf("\n underflow");


    }
    else
    {
            top2++;
    }
    
}

void printx(){
    int i;int temp1,temp2;
    temp1=top1;
    temp2=top2;
    printf("\n");
    for(i=top1;i>=0;i--){
        printf(" %d ",queue[i]);
    }
    for(i=top2;i<9;i++){
        printf(" %d ",queue[i]);
    }
}
void main(){
    int i;
    for(i=0;i<3;i++){
        push1();
    }
    for(i=0;i<3;i++){
        push2();
    }

    printx();
    pop1();pop2();
    printx();
    
}