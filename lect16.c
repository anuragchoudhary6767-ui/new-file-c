#include <stdio.h>

void rearrange(int arr[], int n) {
    int temp[n];
    int j = 0;

    // First store negative numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            temp[j++] = arr[i];
        }
    }

    // Then store positive numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            temp[j++] = arr[i];
        }
    }

    // Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, -2, 3, -4, -5, 6, -7};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    printf("Rearranged array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}