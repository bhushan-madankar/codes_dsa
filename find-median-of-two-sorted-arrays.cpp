// Find median of two sorted arrays
#include <iostream>
#include <vector>
using namespace std;
double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
    if (A.size() > B.size()) return findMedianSortedArrays(B, A);
    int m = A.size(), n = B.size(), imin = 0, imax = m, half = (m + n + 1) / 2;
    while (imin <= imax) {
        int i = (imin + imax) / 2;
        int j = half - i;
        if (i < m && B[j-1] > A[i]) imin = i + 1;
        else if (i > 0 && A[i-1] > B[j]) imax = i - 1;
        else {
            int maxLeft = 0;
            if (i == 0) maxLeft = B[j-1];
            else if (j == 0) maxLeft = A[i-1];
            else maxLeft = max(A[i-1], B[j-1]);
            if ((m + n) % 2 == 1) return maxLeft;
            int minRight = 0;
            if (i == m) minRight = B[j];
            else if (j == n) minRight = A[i];
            else minRight = min(A[i], B[j]);
            return (maxLeft + minRight) / 2.0;
        }
    }
    return 0.0;
}
int main() {
    vector<int> A = {1, 3}, B = {2};
    cout << findMedianSortedArrays(A, B);
    return 0;
}
