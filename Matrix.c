#include<stdio.h>

int main(){
	int rows, cols, i, j;
	
	scanf("%d %d", &rows, &cols);
	
	int a[rows][cols];
	
	for(i=1; i<=rows; i++){
		for (j=1; j<=cols; j++){
			printf("Enter %d row and %d column element: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	for (i=1; i<=rows; i++) {
        for (j=1; j<=cols; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
	
	return 0;
}
