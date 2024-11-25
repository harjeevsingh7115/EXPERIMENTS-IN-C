#include <stdio.h>

// Recursive binary search function
int binarySearch(int arr[], int low, int high, int key) {
    if (low > high)
        return -1; // Key not found

    int mid = low + (high - low) / 2;

    if (arr[mid] == key)
        return mid; // Key found
    else if (arr[mid] < key)
        return binarySearch(arr, mid + 1, high, key); // Search right half
    else
        return binarySearch(arr, low, mid - 1, key); // Search left half
}

int main() {
    int n, key;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1)
        printf("Element found at index %d.\n", result);
    else
        printf("Element not found.\n");

    return 0;
}
