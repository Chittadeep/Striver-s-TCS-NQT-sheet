#include<stdio.h>
#include<math.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int t = n;
    int c = 0;

    while (t!=0)
    {
        ++c;
        t=t/10;
    }
    
    //printf("%d\n", t);
    
    t=n;
    int t2=0;
    
    while (t!=0)
    {
        int d=t%10;
        t2 = (int) t2+pow(d, c);
        t=t/10;
    }

    printf("%d\n", t2);

    if(t2==n) printf("Yes, it is an armstrong number");
    else printf("No, it is not an armstrong number");   
}