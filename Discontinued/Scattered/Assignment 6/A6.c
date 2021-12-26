/*6.C Program to Copy a String*/

#include<stdio.h>

int main(){
	
	char string[50];
	char copy[50];
	
	printf("Enter the string : ");
	gets(string);
	
	int i=0;
	while(string[i] != '\0'){
		copy[i] = string[i];
		i++;
	}
	
	copy[i] = '\0';
	
	printf("Copied String : %s\n",copy);
	
	return 0;
}
