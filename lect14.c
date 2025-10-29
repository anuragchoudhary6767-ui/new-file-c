#include <stdio.h>
#include <stdlib.h>

// Comparison function for ascending order
int compare_asc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int arr[] = {12, 3, 5, 7, 19, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Change this to your desired K

    // Sort the array in ascending order
    qsort(arr, n, sizeof(int), compare_asc);

    if (k <= n) {
        printf("The %dth minimum element is: %d\n", k, arr[k - 1]);
    } else {
        printf("K is larger than the array size.\n");
    }

    return 0;
}