#include <stdio.h>

void main()
{
    int a[10];
    int i, j, count, found;

    printf("Enter 10 elements: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < 10; i++)
    {
        found = 0;

        // check if a[i] already appeared before position i
        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 1)
            continue;   // already counted, skip it

        count = 0;
        for (j = 0; j < 10; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        printf("%d appears %d time(s)\n", a[i], count);
    }
}
