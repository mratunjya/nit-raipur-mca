/*11.Write program to search a student in the class*/

#include<stdio.h>
#include<stdlib.h>

int searching(char **name,int n,char *search){
	
	
	int i,j;
	for(i=0;i<n;i++){
		if(strcmp(name[i],search)==0){
			return i+1;
		}
	}
	return 0;
}


int main(){
	
	char *name[100],choice,search[100];
	int n=0;
	
	do{
		fflush(stdin);
		name[n] = (char*) malloc(30*sizeof(char));
		printf("\nEnter %d name : ",n+1);
		gets(name[n]);
		printf("\nDo you want to contine : ");
		scanf("%c",&choice);
		n++;	
	}while(choice == 'Y' || choice == 'y');
	
	fflush(stdin);
	printf("Enter the name you want to search : ");
	gets(search);
	
	int location = searching(name,n,search);
	
	if(location != 0){
		printf("\nThe name found in %d location.",location);
	}else{
		printf("\nName not Found!");
	}	

	return 0;
}
