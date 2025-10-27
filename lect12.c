#include <stdio.h>
#include <stdlib.h>

// Comparison function for ascending order
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int arr[] = {12, 3, 5, 7, 19, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Change this to your desired K

    // Sort the array in ascending order
    qsort(arr, n, sizeof(int), compare);

    // Kth minimum is at index k-1
    // Kth maximum is at index n-k
    if (k <= n) {
        printf("Kth minimum element: %d\n", arr[k - 1]);
        printf("Kth maximum element: %d\n", arr[n - k]);
    } else {
        printf("K is larger than the array size.\n");
    }

    return 0;
}