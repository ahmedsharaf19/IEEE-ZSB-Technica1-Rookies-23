#include <bits/stdc++.h>
using namespace std;
void heap(int arr[], int n, int i);
void build(int arr[], int n);

int main()
{
    int size;
    cin >> size;
	int arr[size];
	for (int i = 0 ; i < size ; i++)
            cin >> arr[i] ;
	int n = size;
	build(arr, n);

	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";

	return 0;
}

void heap(int arr[], int n, int i)
{
	int large = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l < n && arr[l] > arr[large]) large = l;
	if (r < n && arr[r] > arr[large]) large = r;
	if (large != i) {
		swap(arr[i], arr[large]);
		heap(arr, n, large);
	}
}

void build(int arr[], int n)
{
	int s = (n / 2) - 1;
	for (int i = s; i >= 0; i--) {
		heap(arr, n, i);
	}
}

