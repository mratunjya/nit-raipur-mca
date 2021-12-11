/*

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *



*/

#include<stdio.h>

int main(){
	
	int i,j,k=0;
	
	for(i=1;i<=5;i++,k=0){
		
		for(j=1;j<i;j++){
			printf("\t");
		}
		
		while(k < 2*(5-j)+1){
			printf("*\t");
			k++;
		}
		
		printf("\n");
	}
	
	return 0;
}
