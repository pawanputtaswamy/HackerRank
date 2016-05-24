using namespace std;

#include <iostream>

void swap(int *element, int *min)
{
	int temp = *element;
	*element = *min;
	*min = temp;
}

void SelectionSort(int a[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		int min = i;
		for (int j = i+1; j < len; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}

		swap(&a[min],&a[i]);
	}
}

/*
int main()
{
	int arr[] = { 64, 25, 12, 22, 11 };
	int size = sizeof(arr) / sizeof(arr[0]);
	SelectionSort(arr, size);
	return 0;
}
*/