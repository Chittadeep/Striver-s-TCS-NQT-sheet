#include <stdio.h>
#include <math.h>

void main()
{
    printf("enter 2 numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);

    int lcm = a>b?a:b;

    while (lcm%a>0 || lcm%b>0)
    {
        ++lcm;
    }
    printf("lcm = %d", lcm);
}