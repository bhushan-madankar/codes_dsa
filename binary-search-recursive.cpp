// Recursive binary search
#include <iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x) {
    if (l > r) return -1;
    int m = l + (r - l) / 2;
    if (arr[m] == x) return m;
    if (arr[m] > x) return binarySearch(arr, l, m - 1, x);
    return binarySearch(arr, m + 1, r, x);
}
int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = 5, x = 7;
    cout << binarySearch(arr, 0, n - 1, x);
    return 0;
}
