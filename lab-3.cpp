//write a program in C to display n term of  natural number and their sum.

#include<stdio.h>
int main(){
	int i,n,sum=0 ;
	printf("Input the value of terms:-");
	scanf("%d",&n);
	printf("\n The first %d natural numbers are :\n",n);
	for(i=1;i<=n; i++){
	
		printf("%d\t",i);
		sum+=i;
	}
	printf("\n\nThe sum of natural numbers upto %d terms %d\n",n,sum);
	return 0;
}
