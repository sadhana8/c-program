//write a program in C to display the pattern like pyramid using asterisk and each row contain an even number of astericks.
/*
    * *
  * * * *
* * * * * *

*/

#include<stdio.h>
int main(){
	int i,j,n; 
	printf("Input number of Rows for the pattern:");
		scanf("%d",&n);
//		spc=n+4-1;

	for(i=0;i<=n; i++){
//		for(k=spc;k>=1;k--){
//				
//		}
//	
		for(j=1;j<=n-i;j++)
		printf(" ");	
	for(j=1;j<=2*i;j++)
		printf("  * ");
				printf("\n");
//				spc--;
}
		return 0;
}
