/* 1/1! + 2/2! + 3/3! + 4/4! + ... N/N! */

#include<stdio.h>

float fact(int num){
	
	int i;
	float sum=1.0;
	
	for(i=1;i<=num;i++){
		sum *= i;
	}
	
	return sum;
}

void series(int n){
	
	int i;
	float sum=0;
	
	for(i=1;i<=n;i++){
		if(i==n)
			printf("%d/%d!",i,i);
		else
			printf("%d/%d! + ",i,i);
		sum+=(float)i/fact(i);
	}
	
	printf("\nSum : %f\n",sum);
	
}

int main(){
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	series(n);
	
	return 0;
}
