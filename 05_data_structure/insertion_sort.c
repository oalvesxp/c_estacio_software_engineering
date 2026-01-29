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
 * Sort an array of integers using the insertion sort algorithm
 * @param vet Array of integers to be sorted
 * @param size Size of the array
 */
void
insertion_sort(int vet[], int size){
  for(int i = 0; i < size; i++)
  {
    // store the current value to be compared
    int key = vet[i];
    int n = i - 1;

    // while the previous elements are greater than the key, shift them to the right
    while(n >= 0 && vet[n] > key)
    {
      vet[n + 1] = vet[n]; // Shift element to the right
      n--;
    }

    vet[n + 1] = key; // Place the key in its correct position
  } 
}

int
main(void) {
  int vet[] = {64, 34, 25, 12, 22, 11, 90};
  int size = sizeof(vet) / sizeof(vet[0]); // Calculate size of the array

  printf("Original array: ");
  printf("[ ");
  for(int i = 0; i < size; i++)
  {
    printf("%d ", vet[i]); // Print original array
  }
  printf("]\n");

  insertion_sort(vet, size); // Call insertion_sort with the array and its size
  printf("Sorted array: ");
  printf("[ ");
  for(int i = 0; i < size; i++)
  {
    printf("%d ", vet[i]); // Print sorted array
  }
  printf("]\n");

  return 0;
}