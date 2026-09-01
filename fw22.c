#include<stdio.h>

void main()
{
    int n,count;
    count=0;
    printf("Enter a number ");
    scanf("%d", &n);
    for(n;n>0;n=n/10)
    {
        count=count+1;

    }
   printf("Number of digits is %d", count);
}
