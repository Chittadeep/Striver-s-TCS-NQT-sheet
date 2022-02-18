#include <stdio.h>

void main()
{
    printf("enter a number: ");
    int n;
    scanf("%d", &n);

    int temp = n;
    int sum = 0;
    while (temp > 0)
    {
        int fact = 1;
        for (int i = 2; i <= temp % 10; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }

    
    if (sum == n)
    {
        printf("It is a stong number");
        return;
    }
    printf("It is not a strong number");    
}