/*Implementing stack using array*/
#include<stdio.h>
#include<stdlib.h>
int stack[20];int top=-1;
void push(int n){
	int data;
	scanf("%d",&data);
	if(top==-1){
		top=0;
		stack[top]=data;
	}
	else if(top==n){
		printf("\n stack full cannot insert");
		return;
	}
	else{
		top=top+1;
		stack[top]=data;
	}
}
void pop(int n){
	if(top==0){
		printf("\n deleting last element");
		top==-1;
	}
	else if(top==-1){
		printf("\n nothing to delete");
	}
	else{
		top=top-1;
	}
}
void printx(){
	int i;
	for(i=0;i<=top;i++){
		printf(" %d ",stack[i]);	
}
printf("\n");
}
	
void main(){
	int n;int i;int opt;
	scanf("%d",&n);
		do{
		printf(" 1.push \n 2.pop \n 3.print \n 4.exit");
		scanf("%d",&opt);
		switch(opt){
			case 1:push(n);
				break;
			case 2:pop(n);
				break;
			case 3:printx(n);
				break;
			case 4:break;
			default: printf("\n enter a valid choice");
				break;
	
	}
	
}while(opt!=4);	
	
}