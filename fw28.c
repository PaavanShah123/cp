#include<stdio.h>
void main()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum = sum + i;
    }

    if (sum == n)
        printf("%d is a PERFECT number\n", n);
    else
        printf("%d is NOT a perfect number\n", n);

}
    
