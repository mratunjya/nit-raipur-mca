/*
	1    
   2 2   
  3 3 3  
 4 4 4 4 
5 5 5 5 5_

*/

#include<stdio.h>

int main (){
	
	int i,j,k=0;
	
	for(i=0;i<5;i++,k=0){
		
		for(j=0;j<5-i-1;j++){
			printf("\t");
		}
		
		while(k < (2*(i+1))-1){
			if(k%2 == 0){
				printf("%d\t",i+1);
			}else{
				printf("\t");
			}
			k++;
		}
		
		printf("\n");
		
	}
	
	return 0;
}
