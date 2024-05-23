//write a program in C to display the n terms of even natural number and their sum.


#include<stdio.h>
int main(){
int i,n,sum=0;
printf("Input the number of terms :");
scanf("%d",&n);
printf("\n The even numbers are:");
for(i=1;i<=n;i++){
	sum+=2*i;
	printf("The sum of even natural number upto %dterms:%d\n",n,sum);
}
		return 0;
}
