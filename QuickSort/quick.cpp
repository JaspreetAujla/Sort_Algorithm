#include <iostream>
using namespace std;

void swap(int *u, int *v) 
{
  int t = *u;
  *u = *v;
  *v = t;
}

void print(int arr[], int size) 
{
  int i;
  for (i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int partition(int arr[], int low, int high) 
{
  int pivot = arr[high];
  
  int i = (low - 1);

  for (int j = low; j < high; j++) 
  {
    if (arr[j] <= pivot) 
    {
       i++;
      swap(&arr[i], &arr[j]);
    }
  }
  
  swap(&arr[i + 1], &arr[high]);
  
  return (i + 1);
}

void quick(int arr[], int low, int high) 
{
  if (low < high)
  
  {
    int pi = partition(arr, low, high);

    quick(arr, low, pi - 1);

    quick(arr, pi + 1, high);
  }
}

int main()
{
  int data[] = {3, 6, 5, 10, 1, 9, 4};
  int n = sizeof(data) / sizeof(data[0]);
  
    quick(data, 0, n - 1);
  
  cout << "Sorted array in ascending order: \n";

  print(data, n);
}













