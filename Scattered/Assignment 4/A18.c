/*
11111
10001
10001
10001
11111

*/


#include<stdio.h>

int main(){
	
	int i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i>0 && i<5-1 && j>0 && j<5-1){
				printf("0");
			}else{
				printf("1");
			}
		}
		printf("\n");
	}
	
	return 0;
}
