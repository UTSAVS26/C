#include<stdio.h>

int main(){
	int n;
	
	printf("Enter Number: ");
	scanf("%d",&n);
	
	if (n%2==0){
		printf("Number %d is Even....",n);
	}
	else if (n%2!=0){
		printf("Number %d is Odd....",n);
	}
	else{
		printf("Incorrect.....");
	}

	return 0;
}
