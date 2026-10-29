#include <stdio.h>

void findMaxMin(int arr[], int n, int *max, int *min) {
    int i;
    *max = arr[0];
    *min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}

void main() {
    int arr[100];
    int n, i;
    int max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findMaxMin(arr, n, &max, &min);

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
}
