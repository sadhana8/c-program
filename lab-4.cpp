//write a program in C to read 10 numbers form keyword and find their sum and average

#include<stdio.h>
int main(){
	int i,n,sum=0 ;
	float avg;
	printf("Input  the 10 numbers:\n");
	for(i=1;i<=10; i++){
		
		printf("Number-%d:",i);
		scanf("%d",&n);
		sum=sum+n;
	}
	avg=sum/10.0;
	printf("\n\nThe sum of 10 no. is:%d\nThe average is : %f\n",sum,avg);
	return 0;
}
