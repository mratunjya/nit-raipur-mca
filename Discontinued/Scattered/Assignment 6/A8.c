/*8.Sort elements in the lexicographical order (dictionary order)*/

#include<stdio.h>
#include<string.h>

int main(){
	
	char string[50],temp;
	printf("Enter the string : ");
	gets(string);
	int len = strlen(string),i,j;
	
	for(i=0;i<len-1;i++){
		for(j=0;j<(len-i-1);j++){
			if(string[j] > string[j+1]){
				temp = string[j];
				string[j] = string[j+1];
				string[j+1] = temp;
			}
		}	
	}
	
	printf("String : %s\n",string);
	
	return 0;
}
