#include<stdio.h>
void main()
{
    int i=0, count=0;
    char a[15];
    printf("Enter name \n");
    fgets(a, sizeof(a), stdin);
    while(a[i]!='\0')
    {
        if(a[i]>=97 && a[i]<=123){
            a[i]=a[i]-32;
        i++;
        }
        else if(a[i]>=65 && a[i]<=90){
                a[i]=a[i]+32;
        i++;
        }
    }

        printf("The Toggle case for string is: %s", a);
}

