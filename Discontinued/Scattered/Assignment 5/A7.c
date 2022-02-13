/* Write a program in C to sort elements of the array in descending order */

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

void sortDescending(int arr[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
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
		sortDescending(arr,n);
		displayElement(arr,n);
	}else{
		printf("\nArray size cannot be zero.\n");
	}
			
	return 0;
}
