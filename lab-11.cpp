//write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row.
/*the pattern like
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
*/

#include<stdio.h>
int main(){
	int i,j,rows; 
	printf("Input number of Rows:");
		scanf("%d",&rows);
		printf("\n");
	for(i=1;i<=rows; i++){
		for(j=1;j<=i;j++)
			printf("%d\t",i);
		
		printf(" \n");
	}
		return 0;
}
