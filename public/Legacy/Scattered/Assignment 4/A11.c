/*

Enter number of rows: 5

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15_


*/

#include<stdio.h>

int main(){
	
	int i,j,count=1,n;
	
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
				printf("%d\t",count++);
		}
		printf("\n");	
	}
	return 0;
}
