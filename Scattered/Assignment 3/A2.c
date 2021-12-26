/*Write program to check given number is armstrong number or not?
Armstrong number is a number that is equal to the sum of cubes of its digits.
153 = 1^3+ 5^3+ 3^3
*/

#include<stdio.h>

int main(){
	
	int num,rem,sum=0,i;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	int temp = num;
	
	while(temp!=0){
		rem = temp % 10;
		sum += (rem*rem*rem);
		temp = temp/10;
	}
	
	if(num==sum)
		printf("Armstrong Number!");
	else
		printf("Not Armstrong Number!");
		
	return 0;
}
