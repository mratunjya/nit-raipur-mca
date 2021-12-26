/* 1+2+3+4+..N */

#include<stdio.h>

void series(int n){
	
	int i,sum=0;
	
	for(i=1;i<=n;i++){
		if(i==n)
			printf("%d",i);
		else
			printf("%d+",i);
		sum+=i;
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
