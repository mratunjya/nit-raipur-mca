/*

		 *
       * *
     * * *
   * * * *
 * * * * *
   * * * *
     * * *
       * *
         *


*/

#include<stdio.h>

int main (){
	
	int i,j,k=0;
	
	for(i=0;i<9;i++,k=0){
		
		if(i < 4)
			for(j=0;j<=(4-i)-1;j++){
				printf("\t");
			}
		else
			for(j=0;j<i-4;j++){
				printf("\t");
			}
		
		while(k <= (4-j)){
			printf("*\t");
			k++;
		}
		printf("\n");
	}
	
	return 0;
}
