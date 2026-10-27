#include<stdio.h>

void power(int a, int b)
{
    int i, p = 1;
    for (i = 1; i <= b; i++)
    {
        p = p * a;
    }
    printf("%d", p);
}

void main()
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    power(a, b);

}
