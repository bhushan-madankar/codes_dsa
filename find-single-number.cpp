// Find single number (appears once, others twice)
#include <iostream>
#include <vector>
using namespace std;
int singleNumber(vector<int>& nums) {
    int res = 0;
    for (int n : nums) res ^= n;
    return res;
}
int main() {
    vector<int> v = {4,1,2,1,2};
    cout << singleNumber(v);
    return 0;
}
