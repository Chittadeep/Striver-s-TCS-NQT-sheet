#include <stdio.h>
#include <math.h>

void main()
{
    printf("enter a number: ");
    int n;
    scanf("%d", &n);

    int sum = 0;

    for (int i = 2; i <= n / 2; i++)
    {
        if(n%i==0) sum+=i;
    }

    if(sum>n) printf("Abundant Number");
    else printf("Not an abundant number");
}
