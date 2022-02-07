#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int flag = 0;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag==0)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
    
    
}