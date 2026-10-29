#include <stdio.h>

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swap:  a = %d, b = %d\n", a, b);
}

void main() {
    int x, y;

    printf("Enter first number (x): ");
    scanf("%d", &x);
    printf("Enter second number (y): ");
    scanf("%d", &y);

    printf("Before swap:  x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After swap:   x = %d, y = %d\n", x, y);
}
