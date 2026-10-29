#include <stdio.h>

void main()
{
    int a[3][3];
    int *p;
    int i, max, min;

    printf("Enter 9 elements: ");
    for (i = 0; i < 9; i++)
        scanf("%d", (*a + i));

    p = *a;          // p points to the first element
    max = *p;
    min = *p;

    for (i = 1; i < 9; i++)
    {
        if (*(p + i) > max)
            max = *(p + i);
        if (*(p + i) < min)
            min = *(p + i);
    }

    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);
}

