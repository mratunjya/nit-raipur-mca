/*4.Find the length of a string*/

#include<stdio.h>

int main(){
	
	char string[50];
	
	printf("Enter the String : ");
	gets(string);
	
	int i=0,count=0;
	while(string[i] != '\0'){
		count++;
		i++;
	}
	
	printf("Length : %d \n",count);
	
	return 0;
}

