/* 10.Write program to sort the list of students in the class */

#include<stdio.h>
#include<stdlib.h>

void sorting(char **name,int n){
	int i,j;
	char *temp;
	for(i=0;i<n;i++){
		for(j=0;j<(n-i-1);j++){
			if(strcmp(name[j],name[j+1]) > 0){
				temp = name[j];
				name[j] = name[j+1];
				name[j+1] = temp; 
			}
		}
	}
	printf("Sorting over");
}


int main(){
	
	char *name[100],choice;
	int n=0,i;
	
	do{
		
		fflush(stdin);
		name[n] = (char*) malloc(30*sizeof(char));
		printf("\nEnter %d name : ",n+1);
		gets(name[n]);
		printf("\nDo you want to contine : ");
		scanf("%c",&choice);
		n++;	
	}while(choice == 'Y' || choice == 'y');
	
	sorting(name,n);	

	for(i=0;i<n;i++){
		printf("\n %d. %s",i+1,name[i]);
	}

	return 0;
}
