/* C program to print series 0, 1, 3, 6, 10, 15… N */

#include<stdio.h>

void series(int n){
	
	int i=0,sum=0;
	
	while(sum != n){
		sum += i;
		if(sum == n){
			printf("%d",sum);
		}else{
			printf("%d, ",sum);
		}
		i++;
	}
	
	
}

int main(){
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	series(n);
	
	return 0;
}
