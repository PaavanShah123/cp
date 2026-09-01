#include<stdio.h>

void main()
{
    int i,sum;
    sum=0;
    for(i=1; i<=100;i=i+1)
    {
        if (i%3==0)
            sum=sum+i;

    }
    printf("Sum of all the nos div by 3 in 1 to 100 is %d", sum);

}
