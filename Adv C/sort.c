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
    int flag = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            printf("Violation at %d position\n", i+1);
            flag++;
        }
    }
    if (flag == 0)
    {
        printf("Array is sorted\n");
    }
}