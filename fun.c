// #include <stdio.h>
// int sum()
// {
//     int a, b ;
//     int c =a+b;
//     printf("the sum is %d",c);
//     return 0;
// }
// int main(){
//      sum();
//      return 0;
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // divisible by i, not prime
    }
    return 1; // prime
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}