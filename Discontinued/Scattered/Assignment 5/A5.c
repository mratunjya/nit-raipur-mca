/*Write a program in C to merge two arrays*/

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
		printf("%d\t",arr[i]);
	}
}

void mergeArray(int merge[],int arr1[],int arr2[],int n1,int n2){
	
	int i,j;
	
	for(i=0;i<n1;i++){
		merge[i] = arr1[i];
	}
	
	for(j=0;j<n2;j++){
		merge[i++] = arr2[j];
	}
	
}


int main(){
	
	int n1,n2;
	printf("Enter the number of elements you want to insert in the array 1: ");
	scanf("%d",&n1);
	printf("Enter the number of elements you want to insert in the array 2: ");
	scanf("%d",&n2);
	if(n1 > 0 && n2 > 0){
		int arr1[n1],arr2[n2],merge[n1+n2];
		insertElement(arr1,n1);
		insertElement(arr2,n2);
		displayElement(arr1,n1);
		displayElement(arr2,n2);
		mergeArray(merge,arr1,arr2,n1,n2);
		displayElement(merge,n1+n2);
	}else{
		printf("\nArray size cannot be zero.\n");
	}
			
	return 0;
}
