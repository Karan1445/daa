#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *fe;

    fe=fopen("newnew.txt","w");
    int i=0;
    for(i=0;i<1000000;i++){
        fprintf(fe,"%d \n",i);
    }
}