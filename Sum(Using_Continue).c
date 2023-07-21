#include<stdio.h>

int main()
{
    int n, sum;
    int i=1, num;
    
    printf("How many Numbers you want to Add: ");
    scanf("%d",&n);
    
    while (i<=n){
    	printf("Number %d: ",i);
    	scanf("%d",&num);
    	
		if (num>0){
			sum += num;
		}
		else{
			printf("Number is negative!..So it can't be added\n");
			continue;
		}
		i++;
	}  
	printf("Sum of all Numbers is: %d",sum);
    
    return 0;
}
