/* Write program to check given number is prime or not? */

#include<stdio.h>

int main(){
	
	int num,i,flag=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	for(i=2;i<num;i++){
		if(num%i == 0){
			flag = 1;
			break;
		}
	}
	
	if(flag == 0)
		printf("Prime Number!");
	else
		printf("Not Prime Number!");
		
	return 0;
}
