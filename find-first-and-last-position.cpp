// Find first and last position of element in sorted array
#include <iostream>
#include <vector>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1, left = -1, right = -1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (nums[m] < target) l = m + 1;
        else r = m - 1;
    }
    if (l < nums.size() && nums[l] == target) left = l;
    l = 0, r = nums.size() - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (nums[m] <= target) l = m + 1;
        else r = m - 1;
    }
    if (r >= 0 && nums[r] == target) right = r;
    return {left, right};
}
int main() {
    vector<int> v = {5,7,7,8,8,10};
    auto res = searchRange(v, 8);
    cout << res[0] << ' ' << res[1];
    return 0;
}
