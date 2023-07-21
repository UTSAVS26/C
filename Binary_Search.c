#include <stdio.h>
//#include <stdlib.h>

int binarySearch(int array[], int x, int low, int high) {
    while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  /*Dynamic Memory Allocation
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
  int result = binarySearch(arr, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}
