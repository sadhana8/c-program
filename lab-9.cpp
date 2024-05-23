//write a program in C to display the mulitiplication table of a given integer.
/*
     *
     **
    ***
    ****
*/

#include<stdio.h>
int main(){
	int i,j,rows; ;
	printf("Input number of Rows:");
		scanf("%d",&rows);
		printf("\n");
	for(i=1;i<=rows; i++){
		for(j=1;j<=i;j++)
			printf("*");
		
		printf(" \n");
	}
		return 0;
}
