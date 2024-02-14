#include <stdlib.h>
#include <stdio.h>

void main(){
	FILE* fe;
	
	fe=fopen("avg1.txt","w");
	int i;
	for(i=50000;i>0;i--){
		fprintf(fe,"%d \n",rand()%50000);
	}
	
}

