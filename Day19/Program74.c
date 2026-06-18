#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols], b[rows][cols], diff[rows][cols];

    printf("\nEnter elements of Matrix A:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    printf("\nEnter elements of Matrix B:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &b[i][j]);

    
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\nResultant Matrix (A - B):\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}