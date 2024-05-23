//write a program in C to make such a pattern like pyramid with a number which increased by 1.
/*
    1
   1 2
  1 2 3
 1 2 3 4 
1 2 3 4 5    
*/

#include<stdio.h>
int main(){
	int i,j,rows,spc,k; 
	printf("Input number of Rows:");
		scanf("%d",&rows);
		spc=rows+4-1;

	for(i=1;i<=rows; i++){
		for(k=spc;k>=1;k--){
					printf(" " );
		}
	
		
	for(j=1;j<=i;j++)
		printf(" %d ",i);
				printf("\n");
				spc--;
}
		return 0;
}
