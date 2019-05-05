using namespace std;

#include <iostream>

int BinarySearch(int arr[], int l, int r, int key)
{
	if (l <= r) // if iterative approach while (l <= r)
	{
		int mid = (l + (r - 1)) / 2;

		if (arr[mid] > key) return BinarySearch(arr, l, mid-1, key); // if key is at the left from mid then look into 0 to mid-1.
		else if (arr[mid] < key) return BinarySearch(arr, mid+1, r, key); // if key is at the right from mid then look into mid+1 to n.
		else return mid; // if key == mid return mid index
	}
	return -1;
}

/*
This is a test comment

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = BinarySearch(arr, 0, n - 1, x);
	(result == -1) ? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	int xx;
	cin >> xx;
	return 0;
}
*/
