#include<stdio.h>

int sum(int first, int second);
void main(){
	int num1=0, num2=0;
	printf("Please enter two number : ");
	scanf("%d %d",&num1,&num2);
	sum(num1,num2);
}

int sum(int first, int second){
	int sum;
	sum= first + second;
	printf("%d",sum);
}

