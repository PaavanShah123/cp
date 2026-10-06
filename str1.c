#include<stdio.h>
void main()
{
    int i=0, count=0;
    char a[15];
    printf("Enter name \n");
    fgets(a, sizeof(a), stdin);
    while(a[i]!='\0')
    {
        count++;
        i++;
    }
    printf("Length of string is %d", count-1);
}
//fegts() counts Enter as a char so answer me +1 aayega
