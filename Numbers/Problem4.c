#include<stdio.h>

int checkifprime(int n)
{
    for(int i =2; i<=n/2; i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

void main()
{
    int start, end;
    printf("Enter the range: ");
    scanf("%d %d", &start, &end);

    for (; start < end; start++)
    {
        if(checkifprime(start)==1) printf("%d ", start);
    }
    
}
