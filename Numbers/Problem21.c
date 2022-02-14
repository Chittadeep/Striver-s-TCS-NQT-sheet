#include <stdio.h>

void main()
{
    printf("enter a number: ");
    int n;
    scanf("%d", &n);
    printf("Factors of the number are: \n");
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            int j = 2;
            for (; j <= i / 2; j++)
            {
                if(i%j==0) break;
            }

            if (j>i/2)
            {
                printf("%d ", i);
            }
            
        }
    }
}