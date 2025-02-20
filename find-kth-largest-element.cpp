// Find kth largest element in array
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int n : nums) {
        pq.push(n);
        if (pq.size() > k) pq.pop();
    }
    return pq.top();
}
int main() {
    vector<int> v = {3,2,1,5,6,4};
    cout << findKthLargest(v, 2);
    return 0;
}
