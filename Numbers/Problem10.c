#include <stdio.h>

void main()
{
    int n, a, b;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("enter the first term: ");
    scanf("%d", &a);
    printf("enter the second term: ");
    scanf("%d", &b);

    double sum = (n/2)*((2*a)+((n-1)*(b-a)));

    printf("Sum = %.2f", sum);
}