#include <stdio.h>

void main()
{
    int n, r;
    printf("Enter n and r: ");

    scanf("%d %d", &n, &r);

    int num=1;

    for(int i = 2; i<=n; i++)
    {
        num=num*i;
    }

    int den = 1;

    for(int i =2; i<=n-r; i++)
    {
        den=den*i;
    }

    int p = num/den;

    printf("permutation is %d", p);
}