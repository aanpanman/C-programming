#include <stdio.h>

void main() {
    int n, arr[50];
    printf("Enter no.of elements: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int comp = 0, pass = 0, temp;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                comp++;
                flag++;
            }
        }
        pass++;
        if (flag == 0)
        {
            break;
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nComparisons: %d", comp);
    printf("\nPasses: %d", pass);
}