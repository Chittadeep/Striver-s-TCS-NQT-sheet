#include <stdio.h>
#include <math.h>

void main()
{
    int bin;
    printf("Enter binary number: ");
    scanf("%d", &bin);
    int dec = 0, i = 0;
    while(bin!=0)
    {
        dec = dec+(bin%10)*pow(2, i);
        ++i;
        bin=bin/10;
    }
    printf("Decimal value is: %d", dec);
}
