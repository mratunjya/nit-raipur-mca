/* Program to delete element from an array */

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


void deleteElement(int arr[],int n,int pos){
	if(pos > n || pos < 0){
		printf("\n Invalid Position \n");
	}else{
		int i;
		if(pos == n-1)
			arr[n-1] = NULL;
		else{
			for(i=pos;i<n;i++){
				arr[i] = arr[i+1];
			}
		}	
	}
	
}

int main(){

	int arr[10],choice,pos;
	int n = sizeof(arr)/sizeof(arr[0]);
	insertElement(arr,n);
	displayElement(arr,n);
	
	while(1){
		if(n == 0){
			printf(" \n No element left in the array to delete. \n");
		}
	printf("Delete Element from the Array \n");
	printf("1.First \n");
	printf("2.End \n");
	printf("3.LOC \n");
	scanf("%d",&choice);
		switch(choice){
			case 1: 
					deleteElement(arr,n,0);
					--n;
					displayElement(arr,n);
					break;
			case 2: 
					deleteElement(arr,n,n-1);
					--n;
					displayElement(arr,n);
					break;
			case 3: 
					printf("Enter the Position : ");
					scanf("%d",&pos);
					deleteElement(arr,n,pos);
					--n;
					displayElement(arr,n);
					break;
			default:
					printf("\n Invalid Choice \n");
			
		}
	}
	
}
