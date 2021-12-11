/*

A
B B
C C C
D D D D
E E E E E


*/

#include<stdio.h>

int main(){
	
	int i,j,ch=65;
	
	for(i=1;i<=5;i++){
		for(j=1;j<i+1;j++){
			printf("%c\t",ch);
		}
		ch++;
		printf("\n");
	}
	
	return 0;
}
