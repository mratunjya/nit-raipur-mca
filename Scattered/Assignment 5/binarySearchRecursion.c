/* Program to perform binary search using recursion function*/

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

int binarySearch(int arr[],int low,int high,int element){
	
	if(low>high) 
		return -1;
		
	int mid = (int) low + (high-low)/2;
		
	if(arr[mid] == element){
		return mid;
	}else if(arr[mid] < element){
		binarySearch(arr,mid+1,high,element);
	}else {
		binarySearch(arr,low,mid-1,element);
	}
		
}


int main(){
	
	int arr[10],element;
	int n = sizeof(arr)/sizeof(arr[0]);
	insertElement(arr,n);
	displayElement(arr,n);
	int ans;
	
	while(1){
		printf("Enter the element to search : ");
		scanf("%d",&element);
		ans = binarySearch(arr,0,n-1,element);
		if (ans >= 0){
			printf("\nThe element is found on the %d Location.\n",ans+1);
		}else{
			printf("\nElement not found!\n");
		}
	}
	
}
