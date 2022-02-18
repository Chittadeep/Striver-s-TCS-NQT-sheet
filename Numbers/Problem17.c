#include<stdio.h>

void main()
{
    int n;
    printf("enter the limit: ");
    scanf("%d", &n);

    int a =0, b=1, s;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a);
        s=a+b;
        a=b;
        b=s;
        
    }
    
}