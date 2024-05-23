//write a program in C to display  the sum of  first 10 natural number

#include<stdio.h>
int main(){
	int i,sum=0 ;
	printf("The first 10 natural number are :\n");
	for(i=1;i<=10; i++){
		sum=sum+i;
		printf("%d\t",i);
	}
	printf("\n\nThe sum is:%d\n",sum);
	return 0;
}
