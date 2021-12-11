/* Write a program in C to count the frequency of each element of an array */

#include<stdio.h>

void insertElement(int arr[],int freq[],int n){
	int i = 0;
	printf("Enter the elements in the array : ");
	for(i=0;i<n;i++){
		freq[i]=1;
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

void frequenceOfElement(int freq[],int arr[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				freq[i]=freq[i]+1;
				arr[j]=-1;
			}
		}
	}
	
	for(i=0;i<n;i++){
		if(arr[i] == -1)
			continue; 
		printf("The frequency of %d id %d.\n",arr[i],freq[i]);
	}
	
}


int main(){
	
	int n;
	printf("Enter the number of elements you want to insert in the array : ");
	scanf("%d",&n);
	if(n > 0){
		int arr[n],freq[n];
		insertElement(arr,freq,n);
		displayElement(arr,n);
		frequenceOfElement(freq,arr,n);
		
	}else{
		printf("\nArray size cannot be zero.\n");
	}
			
	return 0;
}
