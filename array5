#include <stdio.h>

void main() {
    int a[10][10], b[10][10], c[10][10];
    int row, col, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter elements of array a:\n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of array b:\n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &b[i][j]);

    // Add a and b, store in c
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("Result (c = a + b):\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
}
