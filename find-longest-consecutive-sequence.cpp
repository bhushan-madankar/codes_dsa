// Longest consecutive sequence
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int longestConsecutive(vector<int>& nums) {
    unordered_set<int> s(nums.begin(), nums.end());
    int maxlen = 0;
    for (int n : nums) {
        if (!s.count(n-1)) {
            int len = 1, x = n+1;
            while (s.count(x)) { ++len; ++x; }
            maxlen = max(maxlen, len);
        }
    }
// activity chunk 46
    return maxlen;
}
int main() {
    vector<int> v = {100,4,200,1,3,2};
    cout << longestConsecutive(v);
    return 0;
}
