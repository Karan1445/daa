#include <stdio.h>
int stack[10];
int top=-1;
void Push(int input);
int Pop();
void Disp();
void Cng(int new_val,int index);
void Peep1();

void main(){
	int While_input=1;
	int ch,inp;
	int index;
	int n_val;
	while(While_input==1){
		printf("Enter Method::\n1.push \n 2.pop \n 3.disp\n 4.change\n 5.Peep::");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter Value");
				scanf("%d",&inp);
				Push(inp);
				break;
			case 2:
				printf("%d Value is poped",Pop());
				break;
			case 3:
				Disp();
				break;
			case 4:
				
				printf("Enter index:");
				scanf("%d",&index);
				printf("Enter value to change:");
				scanf("%d",&n_val);
				Cng(n_val,index);
				break;
			case 5:
				Peep1();
				break;
		}
		printf("1 to continue");
		scanf("%d",&While_input);
	}
}
void Push(int input){
	if(top==9){
		printf("OverFlow");
	}
	else{
		stack[++top]=input;
	}
}
int Pop(){
	if(top==-1){
		printf("UnderFlow");
	}
	else{
		int x=stack[top--];
	}
}
void Disp(){
	int i=0;
	for(i=top;i>=0;i--){
		printf("%d  \n",stack[i]);
	}
}
void Cng(int new_val,int index){
	if(index>10){
		printf("Not valid index");
	}
	else{
		stack[index]=new_val;
	}
}
void Peep1(){
	if(top==-1){
		printf("Under value");
	}
	else{
		printf("peep: %d",stack[top]);
	}
}
