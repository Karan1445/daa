#include <stdio.h>
#include <stdlib.h>

int n=50000;
int arr[50000];

void main(){
	
	FILE* fe;
	fe=fopen("avg1.txt","r");
	int i=0;
	
	for(i=0;i<n;i++){
		fscanf(fe,"%d",&arr[i]);
	}
	int search;

	printf("Enter numero to search:::");
	scanf("%d",&search);
	
	for(i=0;i<n;i++){
		if(arr[i]==search){
			printf("%d is the index",i);
			
		}
	}
	int a=Lin(search,0);
	printf("%d",a);
}



int Lin(int sear,int i){
	
	if(i>n){
	
		return -1;
	}
	if(sear==arr[i]){
		
		return 1;
	}
//	i=i+1;
	 Lin(sear,i++);
	
}

