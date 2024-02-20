// Online C compiler to run C program online
#include <stdio.h>
void divide(int arr[],int s,int e);
void con(int arr[],int s,int e,int mid);


int main() {
    int arr[]={5,4,3,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    divide(arr,0,n-1);
    int i=0;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}


void divide(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+(e-s)/2);
    divide(arr,s,mid);
    divide(arr,mid+1,e);
    con(arr,s,e,mid);
}

void con(int arr[],int s,int e,int mid){
    int merged[(e-s+1)];
    int in1=s;
    int in2=mid+1;
    int ix=0;
    
    while(in1<=mid && in2<=e){
        if(arr[in1]<=arr[in2]){
            merged[ix]=arr[in1++];
            in1++;
    
        }
        else{
             merged[ix]=arr[in2];
             in2++;
        }
        ix++;
    }
    while(in1<=mid){
         merged[ix++]=arr[in1++];
    }
    while(in2<=e){
         merged[ix++]=arr[in2++];
    }
    
    int k,j;
    for(k=0,j=s;k<(e-s+1);k++,j++){
        arr[j]=merged[k];
    }
}
