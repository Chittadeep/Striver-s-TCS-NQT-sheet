#include<stdio.h>


int checkPallindrome(int n)
{
    int temp = n;
    int rn = 0;
    while (temp!=0)
    {
        rn = (rn*10)+(temp%10);
        temp = temp/10;
    }
    if (rn==n) return 1;
    return 0;
}

void main()
{
    int start, end;
    printf("Enter the range: ");
    scanf("%d %d", &start, &end);

    for (; start <= end; start++)
    {
        if(checkPallindrome(start)==1) printf("%d ", start);
    }
    
}