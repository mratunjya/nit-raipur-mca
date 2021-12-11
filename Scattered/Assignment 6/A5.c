/*5.Concatenate two strings*/

#include<stdio.h>

int main(){
	
	char string1[50];
	char string2[50];
	char string[50];
	
	printf("Enter the String 1 : ");
	gets(string1);
	printf("Enter the String 2 : ");
	gets(string2);
		
	int i=0,j=0;	
	
	while(string1[i] != '\0'){
		string[i] = string1[i];
		i++;
	}
	
	while(string2[j] != '\0'){
		string[i] = string2[j];
		i++;
		j++;
	}
	
	string[i] = '\0';
	
	printf("Concatination : %s",string);
	
		
	return 0;
}
