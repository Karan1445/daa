#include <stdio.h>
int queue[5];
int r=-1;
int s=-1;
void enQ(int x);
void dnQ();
void Disp();

void main(){
	enQ(10);
	enQ(20);
	enQ(30);
	enQ(40);
	enQ(50);
	enQ(60);

	Disp();
}

void enQ(int x){
	if(r>4){
		printf("overflow");
	}
	else{
		queue[++r]=x;
	}
	if(s=-1){
		s=0;
	}
}
void dnQ(){
	if(r==-1){
		printf("UnderFloew");
	}
	else{
		int e=queue[s++];
		printf("DEleter elemtent is:: %d \n",e);
	}
	if(s==r){
		s=-1;
		r=-1;
	}	
}

void Disp(){
	int i=0;
	for(i=s;i<=r;i++){
		printf("Value: %d \n",queue[i]);
	}
}
