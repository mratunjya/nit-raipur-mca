/* Program to insert an element in an array */

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

void insertInFirst(int arr[],int n,int x){
	arr[0] = x;
}

void insertInEnd(int arr[],int n,int x){
	arr[n-1] = x;
}

int insertAtLoc(int arr[],int n,int x){
	
	int pos;
	printf("Enter the position you want to insert : ");
	scanf("%d",&pos); 
	
	if(pos > n || pos < 0){
		return 0;
	}
	
	arr[pos] = x;// pos-1 as per the layman concept  
	
	return 1;
}

int main(){
	
	int arr[10],x,choice,ret;
	int n = sizeof(arr)/sizeof(arr[0]);
	insertElement(arr,n);
	displayElement(arr,n);
	
	while(1){
		printf("Where you want to insert the element : \n");
	printf("1.First Position \n");
	printf("2.LOC Position \n");
	printf("3.End Position \n");
	scanf("%d",&choice);
	printf("Enter the number you want to insert : ");
	scanf("%d",&x);
	switch(choice){
		case 1: 
			insertInFirst(arr,n,x);
			displayElement(arr,n);
			break;
		case 2: 
			ret = insertAtLoc(arr,n,x);
			ret == 0 ? printf("Invalid Location") : printf("Inserted at the Location %d",ret);
			displayElement(arr,n);
			break;
		case 3: 
			insertInEnd(arr,n,x);
			displayElement(arr,n);
			break;
		default :
			printf("\n Invalid Choice \n");
	}
	}
	
			
	return 0;
}
