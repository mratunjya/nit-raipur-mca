/*Find the number of vowels, consonants, digits and white spaces*/

#include<stdio.h>
#include<string.h>

int counting(char string[]){
	
	int len = strlen(string);
	int i,vowels=0,consonants=0,digits=0,whitespaces=0;
	
	for(i=0;i<len;i++){
		if((string[i]>=65 && string[i]<=90) || (string[i]>=97 && string[i]<=122))
			switch(string[i]){
				case 'A': vowels++;
					break;
				case 'E':vowels++;
					break;
				case 'I':vowels++;
					break;
				case 'O':vowels++;
					break;
				case 'U':vowels++;
					break;
				case 'a':vowels++;
					break;
				case 'e':vowels++;
					break;
				case 'i':vowels++;
					break;
				case 'o':vowels++;
					break;
				case 'u':vowels++;
					break;
				default:
					consonants++;		
			}
		if(string[i]>=48 && string[i]<=57)
			digits++;
		if(string[i] == ' ')
			whitespaces++;
		
	}
	
	printf("\nVowels : %d",vowels);
	printf("\nConsonants : %d",consonants);
	printf("\nDigits : %d",digits);
	printf("\nWhite Spaces : %d",whitespaces);

}

int main(){
	
	char string[50];
	printf("Enter the string : ");
	gets(string);
	
	counting(string);
	
	return 0;
}
