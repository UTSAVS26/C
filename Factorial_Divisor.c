#include<stdio.h>

int main()
{
    int x, n, i, j, choice;
    float div;
    unsigned long long fact = 1;
    
    printf("Enter your choice \n\t\t1. Divisor of a Number or \n\t\t2. Factorial of a number \n\t\t\t\t\t: ");
    scanf("%d",&choice);
    
    if(choice==1){
    	printf("\n\nEnter Number to find its Divisor: ");  
    	scanf("%d",&x);

    	printf("All the divisor of %d are: ", x);
		for(i = 1; i <= x; i++) {
			if((x%i) == 0){
				printf("%d", i);
				printf(" ");
			}
		}
	}
	
	else if (choice==2){
    	printf("\n\nEnter Number to find Factorial: ");  
    	scanf("%d",&n);
    	
    	if (n < 0){
        	printf("Error! Factorial of a negative number doesn't exist.");
    	}
    	else {
        	for (i = 1; i <= n; ++i) {
            	fact *= i;
        	}
    	}
        printf("Factorial of %d = %llu", n, fact);
	}
	
	else{
		printf("Enter Wrong Number.....\nTerminating the Program........");
	}
	
	return 0;
}
