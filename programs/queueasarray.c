#include<stdio.h>
#include<stdlib.h>
int queue[20];
int rear=-1,front=-1;
void insert(int n){
	int data;
	scanf("%d",&data);
	if(rear==-1){
		rear=0;
		front=0;
		queue[rear]=data;
	}
	else if(rear == n){
		printf("\n queue full cannot insert");
	}
	else{	
		rear=rear+1;
		queue[rear]=data;
	}
}
void delete(int n){
	if(front==-1){
		printf("\n queue empty cannot delete");
	}
	else if(front==n){
		front=-1;
		rear=-1;
	}
	else{
		front=front+1;
		printf("\n deleted");
	}
}
void printx(int n){
	int i;
	for(i=front;i<=rear;i++){
		printf(" %d ",queue[i]);
	}
	printf("\n");
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