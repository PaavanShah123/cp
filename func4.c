#include <stdio.h>

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swap:  a = %d, b = %d\n", a, b);
}

void main() {
    int x = 10, y = 20;

    printf("Before swap:  x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After swap:   x = %d, y = %d\n", x, y);
}
