#include <stdio.h>

int main() {
    int lower, upper, i, temp, remainder, digits, result, power;


    printf("Enter lower limit of the range: ");
    scanf("%d", &lower);
    printf("Enter upper limit of the range: ");
    scanf("%d", &upper);

    printf("\nArmstrong numbers between %d and %d are:\n", lower, upper);

    for (i = lower; i <= upper; i++) {
        
        digits = 0;
        temp = i;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }
        result = 0;
        temp = i;
        while (temp != 0) {
            remainder = temp % 10;

            power = 1;
            for (int j = 0; j < digits; j++) {
                power *= remainder;
            }

            result += power;
            temp /= 10;
        }

    
        if (result == i && i > 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
