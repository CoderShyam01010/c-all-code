#include <stdio.h>
#include <stdlib.h>

// Function to partition the array
int partition(int arr[], int lb, int ub) {
    int x, i, j, temp;
    x = arr[lb];
    i = lb;
    for (j = lb + 1; j <= ub; j++) { // Fix the loop condition
        if (arr[j] <= x) {
            i = i + 1;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[lb];
    arr[lb] = arr[i];
    arr[i] = temp;
    return i;
}

// Function to perform quicksort
void quicksort(int arr[], int lb, int ub) {
    int q;
    if (lb < ub) {
        q = partition(arr, lb, ub);
        quicksort(arr, lb, q - 1);
        quicksort(arr, q + 1, ub);
    }
}

int main() {
    int arr[7] = {2, 9, 6, 1, 3, 5, 7};
    int lb, ub;
    lb = 0;
    ub = 6;
    quicksort(arr, lb, ub);

    // Print the sorted array
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
