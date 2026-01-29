#include <stdio.h>

/**
 * Swap the values of two integers
 */
void swap(int* a, int* b){
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

/**
 * Sort an array of integers using the bubble sort algorithm
 * @param vet Array of integers to be sorted
 * @param size Size of the array
 */
void bubble_sort(int vet[], int size){
  for (int i = 0; i < size -1; i++) // Check size of array
  {
    for(int n = 0; n < size - 1 -i; n++) // Iterate through the array
    {
      if(vet[n] > vet[n + 1]){
        swap(&vet[n], &vet[n + 1]); // Swap if the current element is greater than the next
      }
    }
  }
}

int main(void){
  int vet[] = {64, 34, 25, 12, 22, 11, 90};
  int size = sizeof(vet) / sizeof(vet[0]); // Calculate size of the array
  printf("Original array: ");
  printf("[ ");
  for(int i = 0; i < size; i++)
  {
    printf("%d ", vet[i]); // Print original array
  }
  printf("]\n");

  bubble_sort(vet, size); // Call bubble_sort with the array and its size

  printf("Sorted array: ");
  printf("[ ");
  for(int i = 0; i < size; i++)
  {
    printf("%d ", vet[i]); // Print sorted array
  }
  printf("]\n");

  return 0;
}