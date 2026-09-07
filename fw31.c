#include <stdio.h>

void main() {
    int n, i, count, sum = 0;

    for (n = 1; n <= 50; n++) {
        count = 0;
        for (i = 1; i <= n; i++) {
            if (n % i == 0)
                count++;
        }
        if (count == 2) {
            sum = sum + n;
        }
    }

    printf("Summation of prime numbers between 1 and 50: %d\n", sum);
}
