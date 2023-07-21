#include<stdio.h>

int main(){
	int a,b;
	
	printf("Enter 1st Number: ");
	scanf("%d",&a);
	printf("Enter 2nd Number: ");
	scanf("%d",&b);
	
	if (a==b){
		printf("Both Numbers are Equal...");
	}
	else if (a!=b){
		if (a>b){
			printf("1st Number %d is greater than the 2nd Number %d.....",a,b);
		}
		else{
			printf("2nd Number %d is greater than the 1st Number %d.....",b,a);
		}
	}
	else{
		printf("Null...");
	}

	return 0;
}
