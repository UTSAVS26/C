#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  int j;
  for (j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }

  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; ++i) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  /*int n;
  printf("Size of the array: ");
  scanf("%d", &n);
  int* data;
  data = (int*)malloc(n*sizeof(int));
  if (data == NULL) {
    printf("Unable to allocate memory\n");
    return -1;
  }
  printf("Enter the elements (space/newline separated): ");
  for (int i = 0; i < n; i++)
    scanf("%d", data + i);
    
  printf("Given array: ");
  for (int i = 0; i < n; i++)
    printf("%d ", *(data + i));
  printf("\n");
  */
  
  quickSort(arr, 0, n - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(arr, n);
}
