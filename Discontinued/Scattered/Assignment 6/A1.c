/*Find the frequency of a character in a string*/

#include<stdio.h>
#include<string.h>

void frequency(char string[]){
	
	int len = strlen(string),i,j;
	char temp;


	
	for(i=0;i<len-1;i++){
		for(j=i+1;j<len;j++){
			if(string[i] > string[j]){
				temp = string[i];
				string[i] = string[j];
				string[j] = temp;
			}
		}
	}
	
	int count=0;
	
	printf("String Sorted = %s \n",string);
	
	for(i=0;i<len;i++){
		count = 0;
		for(j=0;j<len;j++){
			if(string[i] == string[j]){
				count++;
			}
		}
		if(string[i] == string[i+1])
			continue;
		printf("%c contains %d times.\n",string[i],count);
	}
		

}

int main(){
	
	char string[50];
	
	printf("Enter the string : ");
	gets(string);
	
	frequency(string);
	
	return 0;
}
