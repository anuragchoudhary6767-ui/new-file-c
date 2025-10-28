#include <stdio.h>
#include <stdlib.h>

// Comparison function for descending order
int compare_desc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int arr[] = {12, 3, 5, 7, 19, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Change this to your desired K

    // Sort the array in descending order
    qsort(arr, n, sizeof(int), compare_desc);

    if (k <= n) {
        printf("The %dth maximum element is: %d\n", k, arr[k - 1]);
    } else {
        printf("K is larger than the array size.\n");
    }

    return 0;
}