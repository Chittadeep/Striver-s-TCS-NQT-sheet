#include<stdio.h>

void main()
{
    printf("Enter a number: ");
    int n ;
    scanf("%d", &n);

    int ans = 0;
    int temp =1;


    while (n!=0)
    {
        int last = n%10;
        if (last==0) last =1;
        ans=temp*last+ans;
        temp = temp*10;
        n=n/10;
    }

    printf("%d",ans);
}