/*

    	1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5


*/

#include<stdio.h>

int main(){
	
	int i,j,k=0,count=1;
	
	for(i=1;i<=5;i++,k=0,count=1){
		
		for(j=1;j<=(5-i);j++){
			printf("\t");
		}
		
		while(k < (2*i)-1){	
			if(k > i-1){
				printf("%d\t",(i+k)-(2*count++));
			}else{
				printf("%d\t",(i+k));
			}
			k++;
		}
		printf("\n");
	}
	
	return 0;
}
