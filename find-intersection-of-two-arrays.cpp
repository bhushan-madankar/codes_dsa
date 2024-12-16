// Intersection of two arrays
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s(nums1.begin(), nums1.end()), res;
    for (int n : nums2) if (s.count(n)) res.insert(n);
    return vector<int>(res.begin(), res.end());
}
int main() {
    vector<int> a = {1,2,2,1}, b = {2,2};
    auto v = intersection(a, b);
    for (int x : v) cout << x << ' ';
    return 0;
}
