#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void heapify(vector<int> &arr, int root, int n) {
  int left = 2 * root;
  int right = 2 * root + 1;
  int largest = root;

  if (left <= n && arr[left] > arr[largest]) {
    largest = left;
  }
  if (right <= n && arr[right] > arr[largest]) {
    largest = right;
  }

  if (largest != root) {
    swap(arr[root], arr[largest]);
    heapify(arr, largest, n);
  }
}

void build_max_heap(vector<int> &arr, int n) {
  for (int i = n / 2; i >= 1; i--) {
    heapify(arr, i, n);
  }
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> arr(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
  }

  int count = 0;
  build_max_heap(arr, n);
  while (count < k) {
    count++;
    swap(arr[1], arr[n - count + 1]);
    heapify(arr, 1, n - count);
  }

  cout << arr[1] << " " << arr[2] << endl;
  for (int i = 1; i <= n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
