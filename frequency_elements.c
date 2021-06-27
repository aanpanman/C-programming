#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of array elements\n");
    scanf("%d", &n);
    int arr[n],freq[n];
    printf("Enter the array elements\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //Array freq will store Frequency of element
    for (i = 0; i < n; i++)
    {
        int count = 1;
        for (j = i+1 ; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                //To avoid counting same element again
                freq[j] = -1;//is not checking the 1st element??
            }
        }
        if (freq[i] != -1)
        {
            freq[i] = count;
        }
    }
    //Display the Frequency of each element present in array
    //printf("The element %d is repeated %d times\n", arr[0], freq[0]);
    for (i = 0; i < n; i++)
    {
        if (freq[i] != -1)
        {
            printf("The element %d is repeated %d times\n", arr[i], freq[i]);
        }
    }
    return 0;
}
