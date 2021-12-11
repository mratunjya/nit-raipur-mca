/* WAP to print series of n prime numbers 
*/

#include<stdio.h>

int main(){
	
	int n,i,j,flag;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(j=2;j<=n;j++){
		flag = 0;
		for(i=2;i<j;i++){
			if(j%i == 0){
				flag = 1;
				break;
			}
		}
		
		if(flag == 0){
			printf("%d\n",j);	
		}	
		
		}
		
	return 0;
}
