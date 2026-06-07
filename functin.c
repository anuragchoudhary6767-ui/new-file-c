#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1; 
}

int main() {
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d  prime num.\n", num);
    else
        printf("%d not  prime num.\n", num);

    return 0;
}