#include<stdio.h>

void main()
{
    int min,max,i,n;
    min=0;
    max=0;

    for(i=1; i<=10; i=i+1)
    {
        printf("Enter a number");
        scanf("%d", &n);
        if(i==1)
        {
            min=n;
            max=n;
            continue;
        }
        if(n<min)
            min=n;
        if (n>max)
            max=n;
    }
    printf("Min is %d ", min);
    printf("Max is %d ", max);
}
