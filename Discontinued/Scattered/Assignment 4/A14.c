/*

E
DE
CDE
BCDE
ABCDE

*/


#include<stdio.h>

int main(){
	
	int i,j;
	
	for(i=69;i>=65;i--){
		for(j=i;j<=69;j++){
			printf("%c",j);
		}
		printf("\n");
	}
	
	return 0;
}
