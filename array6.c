#include <stdio.h>

void main() {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of array a: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of array b: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Multiplication not possible (columns of a must equal rows of b)");
        return;
    }

    printf("Enter elements of array a:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of array b:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    // Multiply a and b, store in c
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
            for (k = 0; k < c1; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
    }

    printf("Result (c = a x b):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
}
