#include<stdio.h>

void CheckLeap(int a)
{
if (a%4==0)
    printf("It is a Leap Year");
else
printf("Ït is not a Leap Year");
}

void main()
{
    int a;
    printf("Enter any year ");
    scanf("%d", &a);
    CheckLeap(a);

}
