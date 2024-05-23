//write a program in C to display the pattern like right angle triangle with a number.
/*the pattern like
    1
    1 2
    1 2 3
    1 2 3 4
*/

#include<stdio.h>
int main(){
	int i,j,rows; ;
	printf("Input number of Rows:");
		scanf("%d",&rows);
		printf("\n");
	for(i=1;i<=rows; i++){
		for(j=1;j<=i;j++)
			printf("%d\t",j);
		
		printf(" \n");
	}
		return 0;
}
