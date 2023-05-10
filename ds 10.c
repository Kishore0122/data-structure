#include <stdio.h>

int binary_search(int arr[], int n, int x) {
  int low = 0;
  int high = n - 1;

  while (low <= high) {
    int mid = (low + high) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1; // indicates that x was not found in the array
}

int main() {
  int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 4;
  int result = binary_search(arr, n, x);

  if (result == -1) {
    printf("%d not found in the array\n", x);
  } else {
    printf("%d found at index %d\n", x, result);
  }

  return 0;
}
