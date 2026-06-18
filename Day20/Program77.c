#include <stdio.h>

int main() {
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Error! Column of first matrix not equal to row of second.\n");
        return 0;
    }

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            scanf("%d", &a[i][j]);

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            mult[i][j] = 0;
            for (int k = 0; k < c1; ++k)
                mult[i][j] += a[i][k] * b[k][j];
        }
    }

    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            printf("%d%c", mult[i][j], j == c2 - 1 ? '\n' : ' ');

    return 0;
}