/*WAP, and include math.h, to take two numbers and perform addition, subtraction, multiplication, division, exponentiation (power) and modulus (remainder). Do not use division by zero*/

#include<stdio.h>
#include<math.h>

int main(){
	
	int choice,a,b;
	float c;
	
	printf("Enter Your Choice \n1.Addition \n2.Substraction\n3.Multiplication \n4.Division\n5.Exponentiation\n6.Modulus\n");
	scanf("%d",&choice);
	switch(choice){
		
		case 1: printf("Enter two number for addition : ");
				scanf("%d %d",&a,&b);
				c=a+b;
				printf("\n%d + %d = %d\n",a,b,c);
				break;
		case 2: printf("Enter two number for substraction : ");
				scanf("%d %d",&a,&b);
				c=a-b;
				printf("\n%d - %d = %.0f\n",a,b,c);
				break;
		case 3: printf("Enter two number for multiplication : ");
				scanf("%d %d",&a,&b);
				c=a*b;
				printf("\n%d * %d = %.0f\n",a,b,c);
				break;
		case 4: printf("Enter two number for division : ");
				scanf("%d %d",&a,&b);
				if(b!=0){
					c=(float)a/b;
					printf("\n%d %c %d = %f\n",a,'/',b,c);
				}else{
					printf("\nThe denominator cannot be 0 or The number cant be divisible by 0.\n");
				}
				break;
		case 5: printf("Enter two number for multiplication First Number = (Base) Second Number = (Exponent): ");
				scanf("%d %d",&a,&b);
				c=pow(a,b);
				printf("\nPower of Exponent : %d and Base : %d = %.0f\n",a,b,c);
				break;
		case 6: printf("Enter two number : ");
				scanf("%d %d",&a,&b);
				c=a%b;
				printf("\n%d %c %d = %.0f\n",a,'%',b,c);
				break;
		default: printf("\nINVALID CHOICE\n");
		
	}
	
	return 0;
}
