#include <stdio.h>
#include <stdlib.h>

int linearSearch(int array[], int n, int x) {
  int i;
  for (i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main(void) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr)/sizeof(arr[0]);
	
  /*
  int n;
  printf("Size of the array: ");
  scanf("%d", &n);
  int* arr;
  arr = (int*)malloc(n*sizeof(int));
  if (arr == NULL) {
    printf("Unable to allocate memory\n");
    return -1;
  }
  printf("Enter the elements (space/newline separated): ");
  for (int i = 0; i < n; i++)
    scanf("%d", arr + i);
    
  printf("Given array: ");
  for (int i = 0; i < n; i++)
    printf("%d ", *(arr + i));
  printf("\n");
  */

  int x, i;
  printf("Given Array: ");
  for (i = 0; i < n ; i++){
  	printf("%d ", arr[i]);
  }

  printf("\nEnter Number for finding: ");
  scanf("%d",&x);
  int result = linearSearch(arr, n, x);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}

