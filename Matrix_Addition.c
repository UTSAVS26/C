#include<stdio.h>

int main(){
	int p, q, r, s, i, j;
	
	printf("For 1st Matrix: ");
	scanf("%d %d", &p, &q);
	printf("For 2nd Matrix: ");
	scanf("%d %d", &r, &s);
	
	int matrix1[p][q];
	int matrix2[r][s];
	
	for(i=1; i<=p; i++){
		for (j=1; j<=q; j++){
			printf("Enter %d row and %d column element for 1st Matrix: ", i, j);
			scanf("%d", &matrix1[i][j]);
		}
	}
	for(i=1; i<=r; i++){
		for (j=1; j<=s; j++){
			printf("Enter %d row and %d column element for 2nd Matrix: ", i, j);
			scanf("%d", &matrix2[i][j]);
		}
	}
		
	if (p==r && q==s){
		int result[p][q];
        for (i=1; i<=p; i++) {
            for (j=1; j<=q; j++) {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        printf("The resultant matrix obtained: \n");
        for (i=1; i<=p; i++) {
            for (j=1; j<=q; j++) {
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }
    }
    
    else{
        printf("Matrix Addition is not possible");
    }
	
	return 0;
}
