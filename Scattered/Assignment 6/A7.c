/*7.Remove all characters in a string except alphabets*/

#include<stdio.h>
#include<string.h>

int main(){
	
	char string[50];
	printf("Enter the string : ");
	gets(string);
	
	char final[strlen(string)];
	
	int i=0,j=0;
	
	while(string[i] != '\0'){
		if(((int)string[i] >= 65 && (int)string[i] <= 90) || ((int)string[i] >= 97 && (int)string[i] <= 122) ){
			final[j] = string[i];
			j++;
		}
		i++;
	}
	
	final[j] = '\0';
	
	printf("After Removal : %s \n",final);
	
	return 0;
}
