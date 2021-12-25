/* Q. 1 Write the program to compute the Income tax Income Tax Slabs and Rates for Financial Year: 2019-20
	
	Income Tax Slab
	Individuals below the age of 60 years
	Up to 2,50,000		Nil
	2,50,001 to 5,00,000	5%
	5,00,001 to 10,00,000	12,500 + 20% of total income exceeding 5,00,000
	Above 10,00,000		1,12,500 + 30% of total income exceeding 10,00,000

 */
 
 #include<stdio.h>
 int main(){
 	
 	float income,tax;
 	printf("Enter your Annual Income : ");
 	scanf("%f",&income);
 	
 	if(income <=250000){
 		tax = 0;
	}else if(income > 250000 && income <=500000){
		tax = income * (float)5/(float)100;
	}else if(income > 500000 && income <= 1000000){
		income = income - 500000;
		tax = 12500 + income * (float)20/(float)100;
	}else{
		income = income - 1000000;
		tax = 112500 + income * (float)30/(float)100;
	}
 	
 	printf("\nTax : %f\n",tax);
 	
 	return 0;
 }
