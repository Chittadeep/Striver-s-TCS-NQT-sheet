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

    int smaller = 5555;
    int small = 5555;
    int larger = -5555;
    int large = -5555;

    for (int i = 0; i < n; i++)
    {
        if (smaller > arr[i])
        {
            small = smaller;
            smaller = arr[i];
        }
        else if (small>arr[i] && arr[i]!=smaller)
        {
            small=arr[i];
        }
        
        if (larger < arr[i])
        {
            large = larger;
            larger = arr[i];
        }
        else if (large<arr[i] && arr[i]!=larger)
        {
            large=arr[i];
        }
        
    }

    printf("second smallest = %d\n", small);
    printf("second largest = %d", large);
}