#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void bubbleSort(int arr[], int n) {
  int i, j;
  for (i = 0; i < n - 1; i++)

    for (j = 0; j < n - i - 1; j++)
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
}

int main() {
  srand(time(NULL));

  int n = 10000;
  int* arr = new int[n];

  for (int i = 0; i < n; i++) {
    arr[i] = rand() % n;
  }

  bubbleSort(arr, n);

  return 0;
}
