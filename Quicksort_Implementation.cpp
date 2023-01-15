#include <iostream>
#include <vector>

using namespace std;



void quicksort(int arr[], int left, int right);
void quicksort2(vector<string> &arr, int left, int right);



int main() {
  int arr[] = {3, 7, 4, 9, 5, 2, 6, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  
  vector<string> arr2 = {"apple","banana","cherry","date","elderberry"};
  int n2 = arr2.size();
  
  quicksort(arr, 0, n - 1);
  
  cout << "Sorted array: \n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n\n";
  
  quicksort2(arr2, 0, n2 - 1);
  
  cout << "Sorted array: \n";
  for (string &s: arr2) {
    cout << s << " ";
  }
  
  
  return 0;
}

void quicksort(int arr[], int left, int right) {
  int i = left, j = right;
  int tmp;
  int pivot = arr[(left + right) / 2];
  
  /* partition */
  while (i <= j) {
    while (arr[i] < pivot)
      i++;
    while (arr[j] > pivot)
      j--;
    if (i <= j) {
      tmp = arr[i];
      arr[i] = arr[j];
      arr[j] = tmp;
      i++;
      j--;
    }
  };
  
  /* recursion */
  if (left < j)
    quicksort(arr, left, j);
  if (i < right)
    quicksort(arr, i, right);
}


void quicksort2(vector<string> &arr, int left, int right) {
  int i = left, j = right;
  string tmp;
  string pivot = arr[(left + right) / 2];
  
  /* partition */
  while (i <= j) {
    while (arr[i] < pivot)
      i++;
    while (arr[j] > pivot)
      j--;
    if (i <= j) {
      tmp = arr[i];
      arr[i] = arr[j];
      arr[j] = tmp;
      i++;
      j--;
    }
  };
    
    /* recursion */
    if (left < j)
    quicksort2(arr, left, j);
    if (i < right)
    quicksort2(arr, i, right);
}
