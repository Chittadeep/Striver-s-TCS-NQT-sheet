#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = n*(n+1)/2;

    printf("sum of natural numbers: %d", sum);
}
