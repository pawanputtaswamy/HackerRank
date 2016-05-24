#include <stdio.h>
/* For a given array arr[], returns the maximum j – i such that
arr[j] > arr[i] */
int maxIndexDiff(int *a, int a_size)
{
	int maxDiff = -1;
	int i, j;

	for (i = 0; i < a_size; ++i)
	{
		for (j = a_size - 1; j > i; --j)
		{
			if (a[j] > a[i] && maxDiff < (a[j] - a[i]))
				maxDiff = a[j] - a[i];
		}
	}

	return maxDiff;
}
/*
int main()
{
	int arr[] = { 9, 2, 3, 4, 5, 6, 7, 8, 18, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int maxDiff = maxIndexDiff(arr, n);
	printf("\n %d", maxDiff);
	getchar();
	return 0;
	}*/
