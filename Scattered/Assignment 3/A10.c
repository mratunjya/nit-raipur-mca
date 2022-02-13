/* 1 + 3^2/3^3 + 5^2/5^3 + 7^2/7^3 + ... till N terms */

#include<stdio.h>

void series(int n){
	
	int i;
	float sum=0;
	
	for(i=1;i<=n;i=i+2){
		if(i==n-1)
			printf("%d^%d/%d^%d",i,2,i,3);
		else if(i==1)
			printf("%d + ",1);
		else
			printf("%d^%d/%d^%d + ",i,2,i,3);
			
		sum+=(float)(i*i)/(float)(i*i*i);
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
