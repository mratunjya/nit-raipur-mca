/* 9.Write code to search a character in string */

#include<stdio.h>
#include<string.h>

int main(){
	
	char string[50],search;
	
	printf("Enter the string : ");
	gets(string);

	printf("Enter the element you want to search : ");
	scanf("%c",&search);
	
	int i,len = strlen(string);

	
	for(i=0;i<len;i++){
		if(string[i] == search){
			printf("Character found and the position : %d.\n",i+1);
			break;
		}
	}
	
	return 0;
}

