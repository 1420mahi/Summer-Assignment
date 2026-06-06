#include <stdio.h>

int main() {
    long long n;
    int decimal = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    while (n > 0) {
        rem = n % 10;
        decimal = decimal + rem * base;
        n = n / 10;
        base = base * 2;
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}