#include <stdio.h>
#include <math.h>

void main()
{
    printf("enter 2 numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);

    int gcd = 1;

    for (int i = a>b?a:b; i > 1; i--)
    {
        if(a%i==0 && b%i==0)    gcd = i;
    }
    
    printf("GCD is %d: ", gcd);
}