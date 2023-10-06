#include <stdio.h>
int i, j, k;
void reverse(int arr[], int si, int ei)
{

	for (i = si, j = ei; i < j; i++, j--)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
void main()
{
	int arr[7] = {1, 2, 3, 4, 5, 6, 7};
	int k = 3;
	k = k % 7;
	reverse(arr, 0, 6);
	reverse(arr, 0, k - 1);
	reverse(arr, k, 6);
	for (i = 0; i < 7; i++)
	{
		printf("%d ", arr[i]);
	}
}
