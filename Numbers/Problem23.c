#include <stdio.h>
#include <math.h>

void main()
{
    printf("enter a number: ");
    int n;
    scanf("%d", &n);

    int temp = n;
    int sqr = temp*temp;

    int count = 0;
    while (temp!=0)
    {
        ++count;
        temp = temp/10;
    }

    int last = sqr%((int)pow(10, count));
    
    if(last==n){ printf("Automorphic number"); return;}
    
    printf("Not an automorphic number");
}