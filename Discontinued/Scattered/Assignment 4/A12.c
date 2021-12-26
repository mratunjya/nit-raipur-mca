/*

Enter number of rows: 5
 
          0          
        1 0 1        
      2 1 0 1 2      
    3 2 1 0 1 2 3    
  4 3 2 1 0 1 2 3 4  
5 4 3 2 1 0 1 2 3 4 5_


*/

#include<stdio.h>

int main(){
	
	int i,j,k=0,n;
	
	printf("Enter number of rows : ");
	scanf("%d",&n);
	
	for(i=1;i<=n+1;i++,k=0){
		
		for(j=1;j<=((n+1)-i);j++){
			printf("\t");
		}
		
		while(k < (2*i)-1){	
			if(k >= i-1){
				printf("%d\t",(k-i)+1);
			}else{
				printf("%d\t",(i-k)-1);
			}
			k++;
		}
		printf("\n");
	}
	
	return 0;
}
