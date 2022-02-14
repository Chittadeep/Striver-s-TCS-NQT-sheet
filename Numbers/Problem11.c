#include <stdio.h>
#include <math.h>
void main()
{
    int n, a, b;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("enter the first term: ");
    scanf("%d", &a);
    printf("enter the second term: ");
    scanf("%d", &b);
    
    double ratio = (double)a/b;

    double sum =(double) (a*(pow(ratio,n)-1))/(ratio-1);

    printf("Sum = %f", sum);
}