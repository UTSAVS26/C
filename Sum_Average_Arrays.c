#include<stdio.h>
#include<stdlib.h>

int main(){
	int* myarray;
	int n, i, sum=0, num;
	float avg;
	
	printf("How many numbers you want to Add in Array: ");
	scanf("%d",&n);
	
	myarray = malloc(n * sizeof(int));
	
	for (i=1; i<=n; i++){
		printf("Number %d: ", i);
		scanf("%d", &num);
		
		myarray[i-1]=num;
		sum+=num;
	}
	printf("\n[");
	for (i=1; i<=n; i++){
		printf("%d,",*(myarray+i-1));
	}
	printf("]\n");
	
	avg=(float)sum/n;
	printf("Sum of all Numbers is : %d",sum);
	printf("\nAverage of all Numbers is : %f",avg);
	
	free(myarray);
	
	return 0;
}
