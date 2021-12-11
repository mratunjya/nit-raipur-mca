/* C program to print series 0,3,8,15,24,35,48,63,80,99 */

#include<stdio.h>

void series(int n){
	
	int i=3,sum=0;
	
 while(sum<=n)
    {
        printf("%d, ",sum);
        sum = sum + i;
        i= i+ 2;
    }
	
	
}

int main(){
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	series(n);
	
	return 0;
}
