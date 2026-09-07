
#include<stdio.h>

void main()
{
  int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits: ");
    while (num != 0) {
        digit = num % 10;
        num = num / 10;
        if (num != 0)
            printf("%d,", digit);
        else
            printf("%d", digit);
    }
  
}
    
