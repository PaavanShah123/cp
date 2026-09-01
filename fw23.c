#include<stdio.h>

void main()
{
    int n,sum;
    sum=0;
    printf("Enter a number ");
    scanf("%d", &n);
    for(n;n>0;n=n/10)
    {
        sum=sum+(n%10);

    }
   printf("Sum of digits is %d", sum);
}
