#include<stdio.h>

void main()
{
    int i,n,pos,neg,z;
    pos=0;
    neg=0;
    z=0;
    for(i=1; i<=10; i=i+1)
    {
        printf("Enter a number ");
        scanf("%d", &n);
        if(n>0)
            pos=pos+1;
        if (n<0)
            neg=neg+1;
        if(n==0)
            z=z+1;
    }
    printf("Positive numbers are %d ", pos);
    printf("Negative numbers are %d ", neg);
    printf("Zeroes are %d ", z);
}
