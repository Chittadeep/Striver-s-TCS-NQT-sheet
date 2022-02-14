#include<stdio.h>
#include <math.h>

void main()
{
    int dec;
    printf("Enter decimal number: ");
    scanf("%d", &dec);
    int binRev =0;
    while (dec!=0)
    {
        binRev = binRev*10+(dec%2);
        dec=dec/2;
    }
    
}