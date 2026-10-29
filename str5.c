#include<stdio.h>
#include<string.h>

void main() {
    char src[] = "Hello";
    char dest[20];

    strcpy(dest, src);

    printf("Copied string: %s\n", dest);
}
