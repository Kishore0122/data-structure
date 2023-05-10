#include <stdio.h>

int search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;  // Return the index where the element was found
        }
    }
    return -1;  // Return -1 if the element was not found
}

int main() {
    int arr[] = {3, 6, 8, 12, 15, 17, 20, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 17;
    int index = search(arr, n, x);
    if (index == -1) {
        printf("%d not found in the array.", x);
    } else {
        printf("%d found at index %d in the array.", x, index);
    }
    return 0;
}