#include <stdio.h>

int main() {
    int a[] = {1, 2, 3}, b[] = {4, 5, 6};
    int n1 = 3, n2 = 3, n3 = n1 + n2;
    int res[n3];

    for(int i = 0; i < n1; i++) res[i] = a[i];
    for(int i = 0; i < n2; i++) res[i + n1] = b[i];

    printf("Merged array: ");
    for(int i = 0; i < n3; i++) printf("%d ", res[i]);
    return 0;
}