#include <bits/stdc++.h>
using namespace std;

void Sort(int array[], int n)
{
	int i, key, j;
	for (i=1; i<n; i++)
	{
		key = array[i];
		j = i-1;

		while (j>=0 && array[j] > key)
		{
			array[j+1] = array[j];
			j = j-1;
		}
		array[j+1] = key;
	}
}

void print(int array[], int n)
{
	int i;
	for (i=0; i<n; i++)
		cout << array[i] << " ";
	cout << endl;
}

int main()
{
	int array[] = {13, 52, 45, 16, 9};
	int N = sizeof(array) / sizeof(array[0]);

	Sort(array, N);
	print(array, N);

	return 0;
}
