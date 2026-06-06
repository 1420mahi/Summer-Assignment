#include <stdio.h>
int main() {
    long long num, i;
    printf("Enter a number: ");
    scanf("%lld", &num);
    long long largest = -1;
    while (num % 2 == 0) {
        largest = 2;
        num /= 2;
    }
    for (i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largest = i;
            num /= i;
        }
    }
    if (num > 2) {
        largest = num;
    }

    printf("The largest prime factor is: %lld\n", largest);

    return 0;
}