#include <stdio.h>

/**
 * Swap the values of two integers
 * @param a Pointer to the first integer
 * @param b Pointer to the second integer
 */
void
swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * Sort an array of integers using the selection sort algorithm
 * @param vet Array of integers to be sorted
 * @param size Size of the array
 */
void
selection_sort(int vet[], int size) {
  for(int i = 0; i < size -1; i++)
  {
    int min = i; // Assume the minimum is the first element of the unsorted part

    for(int n = i + 1; n < size; n++) // Iterate through the unsorted part
    {
      if(vet[n] < vet[min]) {
        min = n; // Update min if a smaller element is found
      }
    }

    // after finding the minimum element in the unsorted part, swap it with the first element of the unsorted part
    if(min != i) swap(&vet[i], &vet[min]); // Swap only if min is different from i
  }
}

int 
main(void){
  int vet[] = {64, 34, 25, 12, 22, 11, 90};
  int size = sizeof(vet) / sizeof(vet[0]); // Calculate size of the array

  printf("Original array: ");
  printf("[ ");
  for(int i = 0; i < size; i++)
  {
    printf("%d ", vet[i]); // Print original array
  }
  printf("]\n");

  selection_sort(vet, size); // Call selection_sort with the array and its size
  printf("Sorted array: ");
  printf("[ ");
  for(int i = 0; i < size; i++)
  {
    printf("%d ", vet[i]); // Print sorted array
  }
  printf("]\n");

  return 0;
}