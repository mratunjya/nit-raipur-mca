/*
Enter the no. of lines: 8
       1
      1 1
     1 2 1
    1 3 3 1
   1 4 6 4 1
  1 5 10 10 5 1
 1 6 15 20 15 6 1

*/

#include<stdio.h>

int main(){
	
	int i,j,lines,spaces,coef=1;
	
	printf("Enter the no. of lines:");
	scanf("%d",&lines);
	
	for(i=0;i<lines-1;i++){
		
		for(spaces=0;spaces<=lines-i;spaces++){
			printf("\t");
		}
		
		for(j=0;j<=i;j++){
			if(i==0 || j==0){
				coef = 1;
			}else{
				coef = coef * (i-j+1)/j;
			}
			printf("%d\t\t",coef);
		}
		
		printf("\n");
	}
	
	return 0;
}
