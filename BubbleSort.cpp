using namespace std;
#include <iostream>

void swapBub(int* big, int* small)
{
	int temp = *big;
	*big = *small;
	*small = temp;
}
void BubbleSort(int *arr, int n)
{
	for (int i = 0; i < n ; i++)
	{
		for (int j = i; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swapBub(&arr[j], &arr[j + 1]);
			}
		}
	}
}

/*
int main()
{
	int arr[] = {5,1,4,2,8};
	int size = sizeof(arr) / sizeof(arr[0]);

	BubbleSort(arr, size);
	
	int xx;
	cin >> xx;
	return 0;
}
*/