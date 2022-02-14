#include <stdio.h>
#include <math.h>

int main()
{
    int bin;
    printf("Enter binary number: ");
    scanf("%d", &bin);
    
    int octRev = 0;
    
    while(bin!=0)
    {   int i = 0;
        int sum = 0;
        int part = bin%1000;
        printf("part %d\n", part);
        while(part!=0)
        {
            int dig = (part%10)*pow(2, i);
            //printf("digit %d\n", dig);
            sum = sum+dig;
            ++i;
            part = part/10;
        }
        //printf("sum %d\n", sum);
        octRev=octRev*10+sum;
        bin = bin/1000;
    }
    
    int oct = 0;
    while(octRev!=0){
        oct = oct*10+octRev%10;
        octRev=octRev/10;
    }
    
    
    printf("Octal number is: %d", oct);
}