/* 12.Write program to print intial with name E.g.  Anil Kumar Tiwari Answer: A.K. Tiwari */

#include<stdio.h>
#include<string.h>

int main(){
	
	char name[100];
	
	printf("Enter name : ");
	gets(name);
	
	int len = strlen(name),spaces=0,count=1,word,i;
	
	for(i=0;i<len;i++){
		if(name[i] == ' '){
			spaces++;
		}
	}
	
	word = spaces+1;
	
	
	for(i=0;i<len;i++){
		if(count == word){
			printf("%c",name[i]);
		}else if(name[i] == ' ' ){
				printf("%c.",name[i+1]);
				count++;	
		}else if(i == 0 ){
					printf("%c.",name[i]);
		}
	}
	
	
	return 0;
}
