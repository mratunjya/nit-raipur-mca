/*
    	   1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1 

*/

#include<stdio.h>

int main(){
	
	int i,j,rows=5,spaces,coef = 1;
	
	for(i=0;i<rows;i++,k=0){
		
		for(spaces = 0;spaces <= rows-i;spaces++){
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
