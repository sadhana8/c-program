//write a program in C to display the sum of the series [9+99+999+9999....].

#include<stdio.h>
int main(){
long int n,i,t=9;
int sum=0;
printf("Input the number or terms:");
scanf("%ld",&n);
for(i=1;i<=n;i++){
	sum +=t;
	printf("%ld",t);
	t=t*10+9;
}
printf("\n The sum of the series = %d\n",sum);
}
