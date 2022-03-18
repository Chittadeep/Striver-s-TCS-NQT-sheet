#include <stdio.h>

void main()
{
    printf("enter a number: ");
    int n;
    scanf("%d", &n);
    int sum = 0;
    while (n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    printf("sum of the digits of the number = %d", sum);
}
    