#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void main(){
	clock_t start,end;
	double CPU_TIME_USED=0.0;
	int n=50000;
	int arr[n];
	FILE* fe;
	fe=fopen("avg1.txt","r");
	int i=0;
	for(i=0;i<n;i++){
		fscanf(fe,"%d",&arr[i]);
	}
	
	int j=0;
	int temp;
	int min_index;
	start=clock();
	
	for(i=0;i<n;i++){
		min_index=i;
		for(j=i+1;j<n;j++){
		if(arr[j]<arr[min_index]){
			min_index=j;
			}
		}
		if(min_index!=i){
			temp=arr[min_index];
			arr[min_index]=arr[i];
			arr[i]=temp;
		}
	}
	
	end=clock();
	
	for(i=0;i<n;i++){
		printf("%d \n",arr[i]);
	}
	CPU_TIME_USED=(double)((end-start)/CLOCKS_PER_SEC);
	printf("%lf \n",CPU_TIME_USED);
}
