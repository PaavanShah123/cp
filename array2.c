#include<stdio.h>
void main()
{
int a[10], i;
for(i=0;i<10; i++){
    printf("Enter value: ");
    scanf("%d", &a[i]);
    }
printf("4th value is %d , 7th value is %d , 9th value is %d", a[3], a[6], a[8]);


}
