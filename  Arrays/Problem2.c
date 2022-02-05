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

    int largest = arr[0];
    for(int i = 0;i<n; i++)
    {
        if(largest<arr[i]) largest=arr[i];
    }
    printf("largest = %d", largest);
}