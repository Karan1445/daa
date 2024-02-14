#include <stdio.h>
#include <stdlib.h>
void main(){
	FILE* fe;
	int n=500000;
	fe=fopen("normal.txt","w");	
	int i=0;
	for(i=0;i<n;i++){
		fprintf(fe,"%d \n",i);
	}
}
