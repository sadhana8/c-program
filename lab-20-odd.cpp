//write a program in C to display the pattern like pyramid using asterisk and each row contain an odd number of astericks.
/*
        *
      * * *
     * * * * *
*/

#include<stdio.h>
    int main(){
	int i,j,spc,n,k; 
	printf("Input number of Rows for the pattern:");
		scanf("%d",&n);
		spc=n+3-2;

 	for(i=0;i<=n; i++){
		for(j=1;j<=n-i;j++)
			for(k=spc;k>=1;k--){
				printf(" ");	
	}
	
	for(j=1;j<=2*i-1;j++)
		printf("  * ");
				printf("\n");
				spc--;
}
		return 0;
}

