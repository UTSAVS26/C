#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int array[], int size) {
  int step, i;
  for (step = 0; step < size - 1; ++step) {
    for (i = 0; i < size - step - 1; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
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

  bubbleSort(data, n);
  
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, n);
}
