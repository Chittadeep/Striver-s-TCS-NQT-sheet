#include<stdio.h>
#include<math.h>

void main()
{
    int base, index;
    printf("Enter base and index ");
    scanf("%d %d", &base, &index);
    printf("Result is: %.2f", pow(base, index));
}