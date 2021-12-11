/* 1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/N */

#include<stdio.h>

void series(int n){
	
	int i;
	float sum=0;
	
	for(i=1;i<=n;i++){
		if(i==n)
			printf("%d/%d",1,i);
		else if(i==1)
			printf("%d + ",1);
		else
			printf("%d/%d + ",1,i);
		sum+=(float)1/(float)i;
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
