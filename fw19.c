#include<stdio.h>

void main()
{
    int i,div;
    div=0;
    for(i=1; i<=100; i=i+1)
    {
        if (i%5==0)
            div=div+1;
    }
printf("There are %d numbers div by 5 in 1 to 100", div);

}
