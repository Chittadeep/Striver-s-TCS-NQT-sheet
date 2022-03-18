#include<stdio.h>

void main()
{
    int l, r;
    printf("Enter 2 numbers ");
    scanf("%d %d", &l, &r);
    int sum=0;
    for (; l <= r; l++)
    {
        sum+=l;
    }
    printf("Sum of the numbers in the range = %d ", sum);
}