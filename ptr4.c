#include <stdio.h>

void main()
{
    char a[3][50];     // memory to store 3 names
    char *p[3];        // array of pointers
    int i;

    for (i = 0; i < 3; i++)
        p[i] = a[i];   // each pointer points to one name

    for (i = 0; i < 3; i++)
    {
        printf("Enter book name %d: ", i + 1);
        scanf(" %[^\n]", p[i]);
    }

    printf("\nBook names:\n");
    for (i = 0; i < 3; i++)
        printf("%d. %s\n", i + 1, p[i]);
}
