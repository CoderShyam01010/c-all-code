#include <stdio.h>

void merge(int arr[], int lb, int q, int ub)
{
    int i, j, k;
    int brr[50];
    i = lb;
    j = q + 1;
    k = lb;
    while (i <= q && j <= ub)
    {
        if (arr[i] <= arr[j])
        {
            brr[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            brr[k] = arr[j];
            j++;
            k++;
        }
    }
    if (i > q)
    {
        while (j <= ub)
        {
            brr[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= q)
        {
            brr[k] = arr[i];
            i++;
            k++;
        }
    }
    // Copy all elements from b to a
    for (k = lb; k <= ub; k++)
    {
        arr[k] = brr[k];
    }
}

void mergesort(int arr[], int lb, int ub)
{
    int q;
    if (lb < ub)
    {
        q = (lb + ub) / 2;         // Calculate the middle index
        mergesort(arr, lb, q);     // Sort the left half
        mergesort(arr, q + 1, ub); // Sort the right half
        merge(arr, lb, q, ub);     // Merge the sorted halves
    }
}

int main()
{
    int arr[7] = {2, 9, 6, 1, 3, 5, 7};
    int lb, ub;
    lb = 0;
    ub = 6;
    mergesort(arr, lb, ub);

    // Print the sorted array
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
