/* Find the maximum & Minimum  element in the array */

#include<stdio.h>

int main(){
	
	int arr[10],min,max,i;
	
	printf("Enter the element in the array : ");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	min = arr[0];
	max = arr[0];
	
	
	for(i=0;i<10;i++){
			if(arr[i] >= max)
				max = arr[i];
			else
				min = arr[i];	
	}
	
	printf("\nMin: %d \nMax: %d\n",min,max);
	
	return  0;
}
