#include<stdio.h>
#include<stdlib.h>

/*Matrix Addition, Substraction and Multiplication*/
int add_sub_mul(user_choice){
    int m,n,p,r;
    int i, j, k;
    int choice;
    int sub_choice;
    int Element=0;
    printf("Enter number of rows of Matrix1: ");
    scanf("%d",&m);
    printf("Enter number of columns of Matrix1: ");
    scanf("%d",&n);
    
    printf("Enter number of rows of Matrix2: ");
    scanf("%d",&p);
    printf("Enter number of columns of Matrix2: ");
    scanf("%d",&r);
    
    int Matrix1[m][n];
    int Matrix2[p][r];
    
    printf("\n\n");
    
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("Enter element of Row %d and Column %d of Matrix1: ",i+1,j+1);
            scanf("%d",&Matrix1[i][j]);
        }
    }
    printf("\n");
    for (i=0; i<p; i++) {
        for (j=0; j<r; j++) {
            printf("Enter element of Row %d and Column %d of Matrix2: ",i+1,j+1);
            scanf("%d",&Matrix2[i][j]);
        }
    }
    
    printf("\n\n");
    
    if (user_choice==1){
    	if (m==p && n==r){
	        int Result[m][n];
	        for (i=0; i<m; i++) {
	            for (j=0; j<n; j++) {
	                Result[i][j]=Matrix1[i][j]+Matrix2[i][j];
	            }
	        }
	        printf("The resultant matrix obtained: \n");
	        for (i=0; i<m; i++) {
	            for (j=0; j<n; j++) {
	                printf("%d ",Result[i][j]);
	            }
	            printf("\n");
	        }
	    }
	    else{
	        printf("Matrix Addition is not possible");
	    }
	}
	else if (user_choice==2){
		
		printf("Enter your choice 1. (Matrix 1 - Matrix 2) 2. (Matrix 2 - Matrix 1): ");
    	scanf("%d",&sub_choice);
		
		if (sub_choice==1){
			if (m==p && n==r){
		        int Result[m][n];
		        for (i=0; i<m; i++) {
		            for (j=0; j<n; j++) {
		                Result[i][j]=Matrix1[i][j]-Matrix2[i][j];
		            }
		        }
		        printf("The resultant matrix obtained: \n");
		        for (i=0; i<m; i++) {
		            for (j=0; j<n; j++) {
		                printf("%d ",Result[i][j]);
		            }
		            printf("\n");
		        }
		    }
		    else{
		        printf("Matrix Substraction is not possible");
		    }
		}
		else if (sub_choice==2){
			if (m==p && n==r){
		        int Result[m][n];
		        for (i=0; i<m; i++) {
		            for (j=0; j<n; j++) {
		                Result[i][j]=Matrix2[i][j]-Matrix1[i][j];
		            }
		        }
		        printf("The resultant matrix obtained: \n");
		        for (i=0; i<m; i++) {
		            for (j=0; j<n; j++) {
		                printf("%d ",Result[i][j]);
		            }
		            printf("\n");
		        }
		    }
		    else{
		        printf("Matrix Substraction is not possible");
		    }
		}
		else{
			printf("Error!! You have entered wrong number.....");
		}
	}
	else if(user_choice==5){
		if (n==p) {
	        int Result[m][p];
	        for (i=0; i<m; i++) {
	            for (j=0; j<r; j++) {
	                for (k=0; k<n; k++) {
	                    Element+=(Matrix1[i][k]*Matrix2[k][j]);
	                }
	                Result[i][j]=Element;
	            }
	        }
	        for (i=0; i<m; i++) {
	            for (j=0; j<r; j++) {
	                printf("%d ",Result[i][j]);
	            }
	            printf("\n");
	        }
	    } 
		else {
	        printf("Matrix Multiplication is not possible");
	    }
	}
	else{
		printf("");
	} 
}

// Matrix Transpose
int transpose(){
    int m,n;
    int i,j;
    
	printf("Enter number of rows of matrix: ");
    scanf("%d",&m);
    
	printf("Enter number of columns of matrix: ");
    scanf("%d",&n);
    
	int Matrix[m][n];
    int Transpose_Matrix[n][m];
    
	for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("Enter element of %d row and %d column: ",i+1,j+1);
            scanf("%d",&Matrix[i][j]);
        }
    }
    
	printf("You entered the matrix: \n");
    
	for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%d ",Matrix[i][j]);
        }
        printf("\n");
    }
    
	for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            Transpose_Matrix[j][i]=Matrix[i][j];
        }
    }
    
	printf("The transpose of the entered matrix is: \n");
    
	for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf("%d ",Transpose_Matrix[i][j]);
        }
        printf("\n");
    }
}

// Uppper and lower triangle of matrices
int triangle(){
    int numberOfRows;
    int numberOfColumns;
    int i, j, k;
    printf("Enter number of rows of thr matrix: "); 
	scanf("%d",&numberOfRows);
	
    printf("Enter number of columns of thr matrix: "); 
	scanf("%d",&numberOfColumns);
	
    int Matrix[numberOfRows][numberOfColumns];
    
    for (i=0; i<numberOfRows; i++) {
        for (j=0; j<numberOfColumns; j++) {
            printf("Enter element of Row %d and Column %d: ",i+1,j+1); scanf("%d",&Matrix[i][j]);
        }
    }
    
    printf("You entered the matrix:- \n");
    
	for (i=0; i<numberOfRows; i++) {
        for (j=0; j<numberOfColumns; j++) {
            printf("%d ",Matrix[i][j]);
        }
        printf("\n");
    }
    
    if (numberOfRows==numberOfColumns) {
        printf("The upper triangle of the matrix is:- \n");
        for (i=0; i<numberOfRows; i++) {
            for (j=0; j<i; j++) {
                printf(" ");
            }
            for (k=i; k<numberOfColumns; k++) {
                printf("%d",Matrix[i][k]);
            }
            printf("\n");
        }
        printf("The lower triangle of the matrix is:- \n");
        for (i=0; i<numberOfRows; i++) {
            for (j=0; j<=i; j++) {
                printf("%d",Matrix[i][j]);
            }
            printf("\n");
        }
    } 
	else {
        printf("The matrix is not a square matrix\n");
    }
}

int main(){
	
	int choice;
	printf("Menu Driven Program For MATRIX MANIPULATION.....\n\n");
	printf("1. Addition of Matrices\n");
	printf("2. Substraction of Matrices\n");
	printf("3. Lower and Upper Triangle of Matrice\n");
	printf("4. Transpose of Matrice\n");
	printf("5. Product of Matrices\n");
	
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	switch (choice){
		case 1:
			add_sub_mul(choice);
			break;
		case 2:
			add_sub_mul(choice);
			break;
		case 3:
			triangle();
			break;
		case 4:
			transpose();
			break;
		case 5:
			add_sub_mul(choice);
			break;
		default:
			printf("Error! Wrong Number Inputted.....\nTry Again.....\nTerminating the Program.....");
			break;
	}
	
	return 0;
}
