/*WAP to implement an area calculator - 
first, a rectangle (sides l,b); 
second, a square (side a); 
third, a circle (radius r, pi= 3.14); 
fourth, a scalene triangle (sides a,b,c); 
fifth, an equilateral triangle (side s, root of 3 = 1.732); 
finally, a right-angled triangle (sides p,b,h)
*/

#include<stdio.h>

int main(){
	
	float b,h,p,side,area,radius,len,bre,pi=3.14;
	int choice;
	
	while(1){
		printf("Area Calculator : ");
	printf("\n1.Rectangle\n2.Square\n3.Circle\n4.Scalene Traingle\n5.Equilateral Traingle\n6.Right-Angled Traingle\n");
	printf("Enter your choice : ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1: printf("Enter Length and Breadth of the Rectangle : ");
				scanf("%f %f",&len,&bre);
				area = len*bre;
				printf("Area of the reactangle : %f\n",area);
			break;
		case 2: printf("Enter the length of sides of the square : ");
				scanf("%f",&side);
				area = side*side;
				printf("Area of the square : %f\n",area);
			break;
		case 3: printf("Enter the radius of the circle : ");
				scanf("%f",&radius);
				area =(float)pi*(radius*radius);
				printf("Area of the circle : %f\n",area);
			break;
		case 4: printf("Enter the base and height of the Scalene Traingle : ");
				scanf("%f %f",&b,&h);
				area = (b*h)/(float)2;
				printf("Area of the Scalene Traingle : %f\n",area);
			break;
		case 5: printf("Enter the side of the Equilaterial Traingle : ");
				scanf("%f",&side);
				area = (1.732*side*side)/(float)4;
				printf("Area of the Equilaterial Traingle : %f\n",area);
			break;
		case 6: printf("Enter the base and perpendicular of the Right Angled Traingle : ");
				scanf("%f %f",&b,&p);
				area = (b*p)/(float)2;
				printf("Area of the Right Angled Traingle : %f\n",area);
			break;
		default:
			printf("\nInvalid Choice\n");
	}
	}
		
	return 0;
}
