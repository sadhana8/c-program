//write a program in C to calculate the factorial of a given number.


#include<stdio.h>
int main(){
int i, f=1 , num;
printf("Input the number :");
scanf("%d",&num);
for(i=1;i<=num;i++){
	f=f*i;
	printf("The factorial of %d is:%d\n",num,f);
}
		return 0;
}
