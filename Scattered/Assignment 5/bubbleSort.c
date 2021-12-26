/*Program to implement bubble sort*/

#include<stdio.h>

void insertElement(int arr[],int n){
	int i = 0;
	printf("Enter the elements in the array : ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}

void displayElement(int arr[],int n){
	int i = 0;
	printf("\nElements are : \n");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}

void bubbleSort(int arr[],int n){
	
	int i,j,temp;
	
	for(i=0;i<n-1;i++){
		for(j=0;j<(n-i-1);j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
		
}


int main(){
	
	int arr[10],element;
	int n = sizeof(arr)/sizeof(arr[0]);
	insertElement(arr,n);
	displayElement(arr,n);
	bubbleSort(arr,n);
	displayElement(arr,n);
	
}
