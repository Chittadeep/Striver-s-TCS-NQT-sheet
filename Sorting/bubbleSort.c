#include <stdio.h>

void main()
{
    //taking input of the array
    int n;
    printf("Enter the number of elements ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //bubble sort in ascending order starts
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    //display after arranging
    printf("array in ascending order: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
   
}
