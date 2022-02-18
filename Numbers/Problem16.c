#include<stdio.h>

void main()
{
    int n;
    printf("Enter an number: ");
    scanf("%d", &n);

    int max=n%10;
    int min=n%10;

    while (n!=0)
    {
        if(n%10>max) max=n%10;
        if(n%10<min) min=n%10;
        n=n/10;
    }

    printf("maximum digit = %d\n", max);
    printf("minimum digit = %d",min);
    
}