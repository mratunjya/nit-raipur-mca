/*

  		*
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *


*/

#include<stdio.h>

int main(){
	
	int i,j,k=0;
	
	for(i=1;i<=5;i++,k=0){
		
		for(j=1;j<=(5-i);j++){
			printf("\t");
		}
		
		while(k < (2*i)-1){
			printf("*\t");
			k++;
		}
		
		printf("\n");
	}
	
	return 0;
}
