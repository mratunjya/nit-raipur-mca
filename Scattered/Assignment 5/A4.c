/*Write a program in C to count a total number of duplicate elements in an array*/

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

int searchDuplicate(int arr[],int n){
	int i,j,duplicate=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				duplicate++;
			}
		}
	}
	return duplicate;
}


int main(){
	
	int n;
	printf("Enter the number of elements you want to insert in the array : ");
	scanf("%d",&n);
	if(n > 0){
		int arr[n],dup;
		insertElement(arr,n);
		displayElement(arr,n);
		dup = searchDuplicate(arr,n);
		dup == 0 ? printf("\nNo Duplicate Element Found!!\n") : printf("The total number of duplicate element : %d\n",dup);;
	}else{
		printf("\nArray size cannot be zero.\n");
	}
			
	return 0;
}
