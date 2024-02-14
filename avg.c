#include <stdlib.h>
#include <stdio.h>

void main(){
	FILE* fe;
	
	fe=fopen("avg.txt","w");
	int i;
	for(i=0;i<100;i++){
		fprintf(fe,"%d \n",(rand()%100));
	}
	
}

