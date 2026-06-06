#include <stdio.h>
int main() {
    int n1, n2, a, b, temp, gcd, lcm;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    a = n1;
    b = n2;
    while (n2 != 0) {
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    gcd = n1; 
    lcm = (a * b) / gcd;
    printf("The LCM of %d and %d is = %d\n", a, b, lcm);
 return 0;
}