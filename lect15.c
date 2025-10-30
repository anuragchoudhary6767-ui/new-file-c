#include <stdio.h>

void sort012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    int temp;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                // Swap arr[low] and arr[mid]
                temp = arr[low];
                arr[low] = arr[mid];
                arr[mid] = temp;
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                // Swap arr[mid] and arr[high]
                temp = arr[mid];
                arr[mid] = arr[high];
                arr[high] = temp;
                high--;
                break;
        }
    }
}

int main() {
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, n);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}