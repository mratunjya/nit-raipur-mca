/*Write program to check number is perfect or not.
Perfect number, a positive integer that is equal to the sum of its proper divisors. 
E.g. 6 = 1+2+3
*/

#include<stdio.h>

int main(){
	
	int num,i,sum=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	for(i=1;i<=(num/2);i++){
		if((num%i)==0){
			sum += i;
		}
	}
	
	if(num == sum)
		printf("Perfect Number!");
	else
		printf("Not an Perfect Number!");
	
	return 0;
}
