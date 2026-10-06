#include<stdio.h>
void main()
{
    int i=0, count=0;
    char a[15];
    printf("Enter name \n");
    fgets(a, sizeof(a), stdin);
    while(a[i]!='\0')
    {
        if(a[i]>=90)
            a[i]=a[i]-32;
        i++;
    }
printf("The Lower case string is: %s", a);
}

