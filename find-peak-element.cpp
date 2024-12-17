// Find a peak element in an array
#include <iostream>
using namespace std;
int findPeak(int arr[], int n) {
    int l = 0, r = n - 1;
    while (l < r) {
        int m = (l + r) / 2;
        if (arr[m] < arr[m + 1]) l = m + 1;
        else r = m;
    }
    return l;
}
int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = 6;
    cout << findPeak(arr, n);
    return 0;
}
