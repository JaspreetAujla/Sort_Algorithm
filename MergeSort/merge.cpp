#include <iostream>
using namespace std;

void merge(int arr[], int a, int b, int c) 
{
  int n1 = b-a+1;
  int n2 = c-b;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[a + i];
  for (int j = 0; j< n2; j++)
    M[j] = arr[b + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = a;

  while (i < n1 && j < n2) 
  {
    if (L[i] <= M[j])
     {
      arr[k] = L[i];
      i++;
    } else 
    {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1) 
  {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) 
  {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int c) 
{
  if (l < c) 
  {
    int m = l + (c - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, c);
    merge(arr, l, m, c);
  }
}

void print(int arr[], int size)
 {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main() {
  int arr[] = {60, 56, 28, 77, 98, 10};
  int size = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, size - 1);

  cout << "Sorted array: \n";
  print(arr, size);
  return 0;
}