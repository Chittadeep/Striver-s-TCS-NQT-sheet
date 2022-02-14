#include<stdio.h>

void main()
{
    printf("enter a number: ");
    int n;
    scanf("%d", &n);
    printf("Factors of the number are: \n");
    for (int i = 1; i <= n/2; i++)
    {
        if (n%i==0)
        {     
            printf("%d ", i);
        }
       
    }
    
}