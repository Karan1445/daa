#include <stdlib.h>
#include <stdio.h>

void main(){
	int i=0;
	FILE *fe;
	fe=fopen("nyyork.txt","w");
	for(i=0;i<50;i++){
		fprintf(fe,"%d \n",i);
	}
}
