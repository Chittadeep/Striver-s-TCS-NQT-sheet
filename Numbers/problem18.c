#include<stdio.h>

void main()
{
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    int fact = 1;
    for (int i = 0; i < n; i++)
    {
        fact=fact*(n-i);
    }
    printf("Factorial = %d", fact);
}