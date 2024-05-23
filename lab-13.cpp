//write a program in C to make such a pattern like pyramid with a number which increased by 1.
/*
    1
   2 3
  4 5 6
 7 8 9 10
*/

#include<stdio.h>
int main(){
	int i,j,rows,spc,k,t=1; 
	printf("Input number of Rows:");
		scanf("%d",&rows);
		spc=rows+4-1;

	for(i=1;i<=rows; i++){
		for(k=spc;k>=1;k--){
		
			printf(" ");
	}
	
	for(j=1;j<=i;j++)
		printf(" %d ",t++);
				printf("\n");
				spc--;
}
		return 0;
}
