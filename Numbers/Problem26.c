#include <stdio.h>
#include <math.h>

void main()
{
    printf("enter a number: ");
    int n;
    scanf("%d", &n);

    int temp = n;
    int sum = 0;

    while (temp!=0)
    {
        sum+=temp%10;
        temp = temp/10;
    }

    if(n%sum==0) printf("It is harshad number");
    else printf("It is not a harshad number");
}
    