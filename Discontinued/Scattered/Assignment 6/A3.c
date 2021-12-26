/*3.Reverse a string using recursion, check the given string is parindrom or not*/

#include<stdio.h>
#include<string.h>

int reverse(char string1[],char string2[],int len,int start,int end){
	
	if(start == len)
		return 0;
		
	string2[end] = string1[start];
	
	reverse(string1,string2,len,++start,--end);
}

int main(){
	
	char string1[50];
	printf("Enter the string : ");
	gets(string1);
	
	int len = strlen(string1);
	char string2[len];
	
		
	printf("String  : %s\n",string1);
	
	reverse(string1,string2,len,0,len-1);
	
	printf("\nReverse String  : %s\n",string2);
	
	if(strcmp(string1,string2)==0){
		printf("Palindrome!!\n");
	}else{
		printf("Not Palindrome!!\n");
	}
	
	return 0;
}
