/*

1 
1 2 
3 5 8 
13 21 34 55 
89 144 233 377 610 


*/

#include<stdio.h>

int main(){
	
	int i,j,start=1,end=0,sum;
	
	for(i=0;i<5;i++){
		for(j=0;j<=i;j++){
			sum = start + end;
			printf("%d\t",sum);
			start = end;
			end = sum;
		}
		printf("\n");
	}
	
	
	return 0;
}
