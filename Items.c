#include<stdio.h>

int main(){
	int items, price, sum;
	
	printf("Enter Number of Items: ");
	scanf("%d",&items);
	printf("Enter Price: ");
	scanf("%d",&price);
	
	if (items>=100){
		price*=0.9;
		sum = price*items;
		printf("You have to Pay: %d", sum);
	}
	else{
		sum = price*items;
		printf("You have to Pay: %d", sum);
	}
	
	return 0;
}
