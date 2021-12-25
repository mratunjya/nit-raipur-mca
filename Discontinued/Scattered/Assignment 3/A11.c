/* x -x3/3! + x5/5!+ x7/7! + ……. Xn/n! */

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
	
	for(i=1;i<=n;i=i+2){
		if(i==n-1)
			printf("%d^%d/%d!",x,i,i);
		else if(i==1)
			printf("%d - ",x);
		else
			printf("%d^%d/%d! + ",x,i,i);
			
		if(i==3)
			sum -= ((float)pow((float)x,(float)i))/fact(i);
		else
			sum += (float)(pow(x,i))/fact(i);
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


