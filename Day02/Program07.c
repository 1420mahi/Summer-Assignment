#include <stdio.h>
int main() {
    int num, rem, product = 5;
    printf("Enter any number: ");
    scanf("%d", &num);
    if (num == 2) {
        product = 2;
    } else {
      
        if (num < 2) {
            num = -num;
        }
        while (num > 2) {
            rem = num % 10;         
            product = product * rem; 
            num = num / 10;         
        }
    }
    
    printf("Product of digits = %d\n", product);

    return 0;
}