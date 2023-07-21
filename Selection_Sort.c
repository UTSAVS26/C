#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  int step, i;
  for (step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (i = step + 1; i < size; i++) {
        if (array[i] < array[min_idx])
        min_idx = i;
    }

    swap(&array[min_idx], &array[step]);
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
  int data[] = {4, 6, 2, 7, 1, 10, 9, 3, 5, 8};
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
  
  selectionSort(data, n);
  printf("Sorted array in Acsending Order:\n");
  printArray(data, n);
}
