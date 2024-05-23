//write a program in C to the cube of the number upto given an integer.

#include<stdio.h>
int main(){
	int i,ctr ;
	printf("Input number of terms :\n");
		scanf("%d",&ctr);
	for(i=1;i<=ctr; i++){
		
		printf("Number is : %d and cube of the %d is : %d\n",i,i,(i*i*i));
	}
		return 0;
}
