// Find pivot index in array
#include <iostream>
#include <vector>
using namespace std;
int pivotIndex(vector<int>& nums) {
    int total = 0, left = 0;
    for (int n : nums) total += n;
    for (int i = 0; i < nums.size(); ++i) {
        if (left == total - left - nums[i]) return i;
        left += nums[i];
    }
    return -1;
}
int main() {
    vector<int> v = {1, 7, 3, 6, 5, 6};
    cout << pivotIndex(v);
    return 0;
}
