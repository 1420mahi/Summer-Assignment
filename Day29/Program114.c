#include <stdio.h>

int main() {
    int arr[50], n, i, choice, sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    do {
        printf("\n--- Array Operations ---\n1. Display\n2. Sum\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                for(i = 0; i < n; i++) printf("%d ", arr[i]);
                printf("\n");
                break;
            case 2:
                sum = 0;
                for(i = 0; i < n; i++) sum += arr[i];
                printf("Total Sum: %d\n", sum);
                break;
        }
    } while(choice != 3);

    return 0;
}