#include<stdio.h>

void main()
{
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    printf("greater number is: ");
    if(a>b) printf("%d",a);
    else printf("%d", b);
}