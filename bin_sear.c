#include <stdio.h>
#include <stdlib.h>

int n=50000;
int arr[50000];
int mid;

void main(){
	
	FILE* fe;
	fe=fopen("normal.txt","r");
	int i=0;
	
	for(i=0;i<n;i++){
		fscanf(fe,"%d",&arr[i]);
	}
	int search;

	printf("Enter numero to search:::");
	scanf("%d",&search);
	
	int x=Bin(0,n-1,search);
	printf("%d",x);
	
}
int Bin(int left,int right,int sear){
	if(right<left){
		return -1;
	}
	
	else{
		
		
		mid=(left+right)/2;
		
		if(arr[mid]==sear){
			
			return 1;
		}
		
		if(arr[mid]<sear){

			return Bin(mid+1,right,sear);
		}
		else{
			
			return Bin(left,mid-1,sear);
			
		}
		
	}
}



