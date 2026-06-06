#include <stdio.h>

double power(double x, int n) {
    double res = 1.0;
    long long absN = n < 0 ? -(long long)n : n;
    
    for (int i = 0; i < absN; i++) {
        res *= x;
    }
    
    return (n < 0) ? 1.0 / res : res;
}

int main() {
    double x = 2.0;
    int n = 3;
    printf("%.2f raised to %d is %.2f", x, n, power(x, n));
    return 0;
}