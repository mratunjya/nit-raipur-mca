/* Program to perform linear search */

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

void linearSearch(int arr[],int n,int element){
	
	int i,flag = 0;
	for(i=0;i<n;i++){
		if(arr[i] == element){
			printf("Element found on the location %d. \n",i+1);
			flag = 1;
		}
	}
	
	if(flag == 0){
		printf("Element not found in the array.\n");
	}	
	
}


int main(){
	
	int arr[10],element;
	int n = sizeof(arr)/sizeof(arr[0]);
	insertElement(arr,n);
	displayElement(arr,n);
	
	while(1){
		printf("Enter the element to search : ");
		scanf("%d",&element);
		linearSearch(arr,n,element);
	}
	
}
