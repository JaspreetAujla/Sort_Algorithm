#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void selection(int arr[], int v)
{
	int i, j, min_idx;


	for (i = 0; i < v-1; i++)
	{
	
		min_idx = i;
		for (j =i+1; j<v; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		swap(&arr[min_idx], &arr[i]);
	}
}

void print(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {
  int data[] = {49, 34, 11, 56, 20};
  int size = sizeof(data) / sizeof(data[0]);
  selection(data, size);
  cout << "Sorted array in Ascending Order:\n";
  print(data, size);
}