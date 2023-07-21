#include<stdio.h>

int main(){
	int a,b;
	int sum;
	
	printf("Enter 1st Number: ");
	scanf("%d",&a);
	printf("Enter 2nd Number: ");
	scanf("%d",&b);
	
	sum=a+b;
	
	printf("Sum of %d and %d is: %d",a,b,sum);

	return 0;
}
