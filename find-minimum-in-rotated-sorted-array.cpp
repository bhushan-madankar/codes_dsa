// Find minimum in rotated sorted array
#include <iostream>
#include <vector>
using namespace std;
int findMin(vector<int>& nums) {
    int l = 0, r = nums.size() - 1;
    while (l < r) {
        int m = (l + r) / 2;
        if (nums[m] > nums[r]) l = m + 1;
        else r = m;
    }
    return nums[l];
}
int main() {
    vector<int> v = {4,5,6,7,0,1,2};
    cout << findMin(v);
    return 0;
}
