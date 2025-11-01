#include <stdio.h>
#include <stdbool.h>

// Function to print union
void printUnion(int a[], int b[], int n, int m) {
    int unionArr[n + m];
    int k = 0;

    // Copy all elements of a[]
    for (int i = 0; i < n; i++) {
        unionArr[k++] = a[i];
    }

    // Add elements of b[] if not already present
    for (int i = 0; i < m; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (b[i] == a[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            unionArr[k++] = b[i];
        }
    }

    printf("Union: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
}

// Function to print intersection
void printIntersection(int a[], int b[], int n, int m) {
    printf("Intersection: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int a[] = {1, 2, 4, 5, 6};
    int b[] = {2, 3, 5, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    printUnion(a, b, n, m);
    printIntersection(a, b, n, m);

    return 0;
}