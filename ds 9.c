#include <stdio.h>

int linear_search(int arr[], int n, int x) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      return i;
    }
  }
  return -1; // indicates that x was not found in the array
}

int main() {
  int arr[] = { 2, 5, 1, 9, 7 };
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 9;
  int result = linear_search(arr, n, x);

  if (result == -1) {
    printf("%d not found in the array\n", x);
  } else {
    printf("%d found at index %d\n", x, result);
  }

  return 0;
}
