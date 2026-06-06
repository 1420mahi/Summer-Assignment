#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        n &= (n - 1);
        count++;
    }
    return count;
}

int main() {
    int n = 15;
    printf("Set bits in %d: %d", n, countSetBits(n));
    return 0;
}