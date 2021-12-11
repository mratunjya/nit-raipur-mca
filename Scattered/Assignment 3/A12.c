/* 1 - x2/2!+ x4/4! – x6/6! +……………. */

#include<stdio.h>

float fact(int num){
	
	int i;
	float sum=1.0;
	
	for(i=1;i<=num;i++){
		sum *= i;
	}
	
	return sum;
}

void series(int n,int x){
	
	int i;
	float sum=0;
	
	for(i=0;i<=n;i=i+2){
		if(i==0)
			printf("%d - ",1);
		else if(i == n){
			printf("%d^%d/%d!",x,i,i);
		}
		else if((i/2) % 2 == 0)
			printf("%d^%d/%d! - ",x,i,i);
		else
			printf("%d^%d/%d! + ",x,i,i);
		
		if((i/2) % 2 == 0)
			sum += (float)pow(x,i)/fact(i);	
		else
			sum -= (float)(pow(x,i))/fact(i);	
	}
	
	printf("\nSum : %f\n",sum);
	
}

int main(){
	int n,x;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	printf("Enter the value of x : ");
	scanf("%d",&x);
	
	series(n,x);
	
	return 0;
}
