#include <stdio.h>

int binary_search(int list[], int size, int target);

int main() {
  int list[5] = {1, 3, 5, 7, 9};
  int target = 7; // index 3
  int result = binary_search(list, 5, target);

  if(result == -1)
    printf("Target %d not found in the list.\n", target);
  else
    printf("Target %d found at index: %d\n", target, result);

  return 0;
}

/**
 * Performs binary search on a sorted array.
 * @param list The sorted array to search.
 * @param size The number of elements in the array.
 * @param target The value to search for.
 * @return The index of the target if found; otherwise, -1.
 */
int binary_search(int list[], int size, int target) {
  int left = 0;         // Starting index
  int right = size - 1; // Ending index

  while(left <= right) // Continue searching while the range is valid
  {
    int mid = left + (right - left) / 2; // Calculate the middle index

    if(list[mid] == target) // Target found
    {
      return mid;
    }
    else if(list[mid] < target) // Target is in the right half
    {
      left = mid + 1;
    }
    else // Target is in the left half
    {
      right = mid - 1;
    }
  }

  return -1; // Target not found
}
