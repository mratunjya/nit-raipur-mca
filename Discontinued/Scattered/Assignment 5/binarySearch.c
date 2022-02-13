/* Program to perform binary search */

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

void binarySearch(int arr[],int n,int element){
	
	int i,flag = 0;
	int low = 0,high = n-1,mid;
	
	while(low <= high){
		
		mid = (int) low + (high-low)/2;
		
		if(arr[mid] == element){
			flag = 1;
			printf("Element found in the %d position.\n",mid+1);
			break;
		}else if(arr[mid] < element){
			low = mid + 1;
		}else {
			high = mid - 1;
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
		binarySearch(arr,n,element);
	}
	
}
