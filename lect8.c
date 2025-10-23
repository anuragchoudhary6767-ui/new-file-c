#include <stdio.h>

int main() {
    int arr[] = {12, 45, 2, 19, 8, 33};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Minimum value in the array is: %d\n", min);
    return 0;
}