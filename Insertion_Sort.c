#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size) {
  int step;
  for (step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

int main() {
  int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(data)/sizeof(data[0]);
  
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

  insertionSort(data, n);
  printf("Sorted array in ascending order:\n");
  printArray(data, n);
}
