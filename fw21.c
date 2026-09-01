#include<stdio.h>

void main()
{
    int i,n;
    printf("Enter a number");
    scanf("%d", &n);
    for(n;n>0;n=n/10)
    {
        printf("%d", n%10);
    }

}
