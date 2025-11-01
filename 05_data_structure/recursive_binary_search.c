#include <stdio.h>

int recursive_binary_search(int list[], int left, int right, int target);

int main() {
  int list[5] = {1, 3, 5, 7, 9};
  int target = 5; // index 2
  
  int left = 0;
  int right = sizeof(list) / sizeof(list[0]) - 1;
  
  int result = recursive_binary_search(list, left, right, target);

  if(result != -1) {
    printf("Element found at index: %d\n", result);
  } else {
    printf("Element not found in the array.\n");
  }

  return 0;
}

/**
 * * Performs a recursive binary search on a sorted array.
 * * @param list The sorted array to search.
 * * @param left The left index of the current search range.
 * * @param right The right index of the current search range.
 * * @param target The value to search for.
 * * @return The index of the target if found; otherwise, -1.
 */
int recursive_binary_search(int list[], int left, int right, int target) {
  if(left > right) // Target not found
  {
    return -1;
  }  

  int mid = left + (right - left) / 2; // Calculate the middle index

  if(list[mid] == target) // target found
  {
    return mid;
  }
  else if(list[mid] < target) // Search in the right half
  {
    return recursive_binary_search(list, mid + 1, right, target);
  }
  else // Search in the left half
  {
    return recursive_binary_search(list, left, mid - 1, target);
  }
}
