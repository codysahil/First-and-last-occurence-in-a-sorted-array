#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int low, int high, int data) {
	low = 0;
	high = n - 1;
	int res = -1;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (data == arr[mid]) {
			res = mid;
			high = mid - 1;
		}
		else if (data < arr[mid]) {
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	return res;
}
int lastOccurence(int arr[], int n, int low, int high, int data) {
	low = 0;
	high = n - 1;
	int res = -1;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (data == arr[mid]) {
			res = mid;
			low = mid + 1;
		}
		else if (data < arr[mid]) {
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	return res;
}
int main()
{
	int arr[] = { 2,4,6,8,9,9,9,9,9,10};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"First occurence at index  " << firstOccurence(arr, n, 0, n - 1, 9)<<endl;
	cout << "Last occurence at index  " << lastOccurence(arr, n, 0, n - 1, 9) << endl;
}
