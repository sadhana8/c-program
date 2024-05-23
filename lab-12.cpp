//write a program in C to make such a pattern like right angle triangle with a number which increased by 1.
/*
    1
    2 3
    4 5 6
    7 8 9 10
*/

#include<stdio.h>
int main(){
	int i,j,rows,k=1; 
	printf("Input number of Rows:");
		scanf("%d",&rows);
		printf("\n");
	for(i=1;i<=rows; i++){
		for(j=1;j<=i;j++)
			printf("%d\t",k++);
		
		printf(" \n");
	}
		return 0;
}
