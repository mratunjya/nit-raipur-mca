/* Write a program in C to read n number of values in an array and display it in reverse order. */

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

void displayElementInReverse(int arr[],int n){
	int i = 0;
	printf("\nElements in reverse order are : \n");
	for(i=n-1;i>=0;i--){
		printf("%d\n",arr[i]);
	}
}


int main(){
	
	int n;
	printf("Enter the number of elements you want to insert in the array : ");
	scanf("%d",&n);
	if(n > 0){
		int arr[n];
		insertElement(arr,n);
		displayElement(arr,n);
		displayElementInReverse(arr,n);
	}else{
		printf("\nArray size cannot be zero.\n");
	}
			
	return 0;
}
