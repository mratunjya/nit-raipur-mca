/* 1^2+2^2+3^2+4^2+..N^2 */

#include<stdio.h>

void series(int n){
	
	int i,sum=0;
	
	for(i=1;i<=n;i++){
		if(i==n)
			printf("%d^%d",i,2);
		else
			printf("%d^%d + ",i,2);
		sum+=(i*i);
	}
	
	printf("\nSum : %d\n",sum);
	
}

int main(){
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	series(n);
	
	return 0;
}
