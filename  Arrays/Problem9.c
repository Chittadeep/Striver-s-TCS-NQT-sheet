#include <stdio.h>

void main()
{
    int n; 
    printf("Enter the number of elements ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    double sum =0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }


    double avg = (double) sum/n;
    printf("avg = %.2f", avg);
}
    