#include <stdio.h>

void main()
{
    int i = 0;
    char a[15];

    printf("Enter name: ");
    fgets(a, sizeof(a), stdin);

    while (a[i] != '\0')
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] = a[i] - 32;
        else if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] = a[i] + 32;

        i++;   // moved outside, runs for every character
    }

    printf("The Toggle case for string is: %s", a);
}

