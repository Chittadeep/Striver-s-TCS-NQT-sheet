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

    for (int i = n-1; i > 0; i--)
    {
        int maxIndex = i;
        for(int j = 0; j<i; j++)
        {
            if (arr[j]>arr[maxIndex])
            {
                int temp = arr[maxIndex];
                arr[maxIndex]=arr[j];
                arr[j]=temp;
            }
            
        } 
    }
    

    printf("in order");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
    