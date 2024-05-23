//write a program in C to find the sum of the series |1-X^2/2!+X^4/4!-..........|.

#include<stdio.h>
int main(){
int i,n;
float x,sum,t,d;
printf("Input the Value of X :");
scanf("%f",&x);
printf("\n Input the number of terms:");
scanf("%d",&n);
sum=1;t=1;
for(i=1;i<n;i++){
	d=(2*i)*(2*i-1);
	t=-t*x*x/d;
	sum=sum+t;
	
}
printf("\n the sum = %f\n Number of terms = %d\n value of x = %f\n",n,sum,x);
		return 0;
}
