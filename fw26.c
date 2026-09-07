#include<stdio.h>
void main()
{
int n, i, sum = 0, r;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = n; i != 0; i = i / 10) {
        r = i % 10;
        sum = sum + (r * r * r);
    }

    if (sum == n)
        printf("%d is an ARMSTRONG number\n", n);
    else
        printf("%d is NOT an armstrong number\n", n);
}
