#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int* a, int* b)
{

	int temp = *a;
	*a = *b;
	*b = temp;
}

void heapify(int arr[], int N, int i)
{
	int largest = i;


	int left = 2 * i + 1;


	int right = 2 * i + 2;


	if (left < N && arr[left] > arr[largest])

		largest = left;

	if (right < N && arr[right] > arr[largest])

		largest = right;


	if (largest != i) {

		swap(&arr[i], &arr[largest]);


		heapify(arr, N, largest);
	}
}


void heapSort(int arr[], int N)
{


	for (int i = N / 2 - 1; i >= 0; i--)

		heapify(arr, N, i);

	for (int i = N - 1; i >= 0; i--) {

		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
	}
}

void printArray(int arr[], int N)
{
	for (int i = 0; i < N; i++)
		printf("%d \n", arr[i]);
	printf("\n");
}

int main()
{	FILE* fe;
	int n=500000;
	int arr[n];
	int i=0;
	
	fe=fopen("normal.txt","r");
	for(i=0;i<n;i++){
		fscanf(fe,"%d",&arr[i]);
	}
	
	
	int N = sizeof(arr) / sizeof(arr[0]);
	// Function call
	double c=0.0;
	clock_t s,e;
	s=clock();
	heapSort(arr, N);
	e=clock();
	
	c=(double)((e-s)/CLOCKS_PER_SEC);
	printf("Sorted array is\n");
	printArray(arr, N);
	printf("%lf sort time",c);
}



