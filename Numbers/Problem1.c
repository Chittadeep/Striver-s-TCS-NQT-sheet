#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    int rn=0;
    while (temp!=0)
    {
        rn = (rn*10)+(temp%10);
        temp=temp/10;
    }
    
    if(rn==n)   printf("Pallindrome");
    else printf("Not pallindrome");
}
    