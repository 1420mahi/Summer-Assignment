#include <stdio.h>

int main() {
    int size, i, j, diagonalSum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    printf("Enter the matrix elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < size; i++) {
        diagonalSum += matrix[i][i];
    }

    printf("\nThe sum of the main diagonal is: %d\n", diagonalSum);

    return 0;
}