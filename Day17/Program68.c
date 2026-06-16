#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 9, 3, 5};
    int arr2[] = {5, 8, 2, 7, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Common elements: ");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break; // Move to the next element in arr1
            }
        }
    }

    return 0;
}